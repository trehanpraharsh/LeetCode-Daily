#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int maxCount(vector<int>& banned, int n, int maxSum) {
    unordered_set<int> s;
    vector<int> arr;
    for(int i = 0; i < banned.size(); i++){
        s.insert(banned[i]);
    }
    for(int i = 1; i <= n; i++){
        if(s.find(i) != s.end()){
            continue;
        }
        arr.push_back(i);
    }
    int sum = 0;
    int count = 0;
    for(int i = 0; i < arr.size(); i++){
        sum += arr[i];
        if(sum <= maxSum){
            count++;
        }
    }
    return count;
}

int main(){
    vector<int> banned = {1249,641,3360,2977,1652,982,911,87,311,899,97,662,3112,2047,3025,3423,2086,2300,2799,3107,971,2695,2604,1838,783,2410,2525,2855,519,274,268,1703,111,2319,1761,2216,2923,342,418,3124,1885,999,1427,2426,3351,2789,3164,3370,3495,3078,1753,20,2121,423,771,2770,2812,17,327,1448,1563,2752,2614,417,1685,1096,2109,1784,2653,1544,3150,2933,816,1024,2613,417,13,931,3568,132,2481,3017,3443,152,2226,658,3220,2394,279,3062,2613,1006,36,1724,3233,2577,514,2311,3167,3369,789,1432,1062,2653,2194,2003,1647,3068,89,702,2930,3422,214,940,3377,3202,2200,883,3276,3544,2236,2896,2435,3236,2674,3484,3556,3122,1999,3307,3326,484,803,238,3247,1589,1159,3624,1875,1265,1535,591,1959,253,1707,3209,271,3190,529,2784,2814,1153,3123,240,18,2008,2689,124,2094,871,2925,1128,935,1445,1287,2404,2391,3371,1481,2407,1733,2744,3026,3017,3019,244,2489,2822,39,1207,630,2681,922,800,245,2552,1462,3411,1201,627,2135,1649,1463,3527,2694,738,2437,269,1479,3604,3097,1139,2686,648,240,2938,2665,2218,2017,3170,2765,581,1559,1153,1609,2520,2385,2778,535,185,2569,3307,1217,1436,774,1046,2692,3127,811,2716,1999,1445,640,2827,3106,2160,1805,1863,2402,262,670,2174,1793,2888,3189,3625,2892,2798,2706,3498,3082,1071,1946,554,2249,1208,1004,2977,907,2747,371,2060,3064,2610,1945,2798,3429,2452,902,1975,2647,2520,994,3379,1138,3576,2859,2024,927,3387,2696,890,2751,2645,3337,1740,125,2842,1725,1114,1740,2499,1867,769,3014,3376,323,1290,3417,2747,129,1015,143,1836,1718,1383,1533,885,3475,2907,3347,2546,1872,33,2426,1710,2012,2720,3071,3212,3096,30,2870,3422,905,2990,2995,1548,421,372,1717,604,839,2091,1290,536,1120,1400,2708,868,3376,1082,808,2776,438,2406,1130,1036,992,3217,284,925,604,1648,3621,3555,1497,1121,2931,435,2904,1359,3439,2202,1696,2811,3533,2105,1120,2022,2382,1946,2696,129,1311,1980,3532,771,2870,2359,2111,121,283,2983,1642,2410,1738,154,2302,1453,3475,2012,3539,3316,951,1905,3014,1790,477,3294,3457,3311,2867,622,574,3179,2212,2415,111,800,950,821,2678,1338,1703,1730,3603,2280,2494,3094,3549,1364,32,1017,2571,2893,1376,3483,2758,1800,503,2936,954,153,2593,2137,195,635,1904,3431,2008,1087,902,1893,1955,2779,713,2693,57,2424,2493,3346,2212,2685,2182,1556,679,1046,1950,473,2817,1538,2775,1513,1826,698,1923,1665,2579,207,512,1137,71,191,3185,2801,2860,548,295,2484,2581,2522,1232,1758,1231,1837,3362,1493,686,2818,370,2947,3060,288,3596,3623,1509,491,872,2961,2160,3632,754,3232,1752,194,1249,1020,3171,363,2382,3117,1641,294,3238,1846,3622,3237,3502,1880,2699,1432,2346,1173,1700,1566,2000,409,2503,2575,1928,866,1137,987,1156,1764,451,2566,635,1551,243,2913,1925,500,412,674,447,3264,1492,3362,2901,965,3370,2688,2553,2609,492,1801,3068,3108,3255,3480,3520,1808,780,1341,3520,1603,2415,2973,1449,2496,1345,3139,413,1326,1018,2533,3397,3036,2081,2395,3223,1946,1185,949,114,221,1809,3586,2607,2507,624,1393,871,3355,283,2540,505,2883,2325,2161,399,3598,783,1439,2593,620,2161,1326,4,3299,1273,3017,2799,1895,441,1924,543,3574,271,1244,3041,3506,2683,2550,2725,816,1846,2880,2537,314,704,1306,294,2436,499,1201,1142,3044,2737,2869,2889,3633,1365,1637,615,222,238,1688,3632,90,1659,3315,2696,2719,2385,2514,2962,252,2277,3332,787,553,1727,1061,1408,2451,564,257,2783,2682,1849,2896,259,1274,763,1098,1506,1356,2020,1673,2794,2782,333,2084,1362,657,233,1393,1660,1792,129,3271,2505,3104,3262,838,1752,3522,1604,2936,670,3570,2504,2609,3493,136,1997,473,1956,1757,1713,676,2618,3556,1645,1881,17,1345,934,856,1563,2833,1606,2993,3209,3526,1197,1835,144,2230,1582,2389,242,3629,3032,2935,1768,3443,3397,434,1250,1570,685,1312,1548,965,2978,345,2112,2222,3152,412,2091,2440,2648,3282,3224,2424,667,1498,2887,3,1278,1439,3096,1292,3069,3044,2140,111,3020,362,397,388,3574,1403,2327,3585,19,1776,2276,1474,3174,2501,595,2820,3626,351,3373,106,3141,1549,296,1762,3181,454,995,2253,597,641,1870,981,3145,2733,1243,45,2329,2696,3141,1137,565,202,104,2446,1876,3570,103,33,790,2060,1340,2998,1553,2767,2515,360,343,1889,20,3069,1571,1341,462,1484,3167,1648,491,338,1873,2635,3057,3412,1881,3496,2122,2033,1183,920,2185,2320,3508,2720,1676,861,738,439,1506,380,1671,2250,2322,1654,506,1599,1038,1229,2989,2787,3048,2006,2582,2366,3020,1338,2818,778,3547,2415,894,3419,2873,1851,2434,1530,2854,475,3131,2161,386,211,2520,1559,228,1444,1925,927,2871,3175,2947,1108,3463,1027,584,1362,1576,3121,480,1270,2389,193,3368,3490,589,1301,794,756,1346,2338,1246,3077,2557,3610,1190,2285,206,1493,285,114,442,2797,1678,1679,1069,1662,256,368,2599,3092,804,2642,871,2361,2590,2900,2748,1913,2566,2287,3431,871,1442,548,1256,2970,2724,3350,350,3097,3004,2258,940,1763,550,1171,1966,1694,374,1919,2482,532,1716,830,707,2399,279,1332,288,2357,2410,2567,2195,2433,3471,2361,2672,1684,2291,1896,697,2208,353,1423,3087,3192,3111,506,3601,3159,1993,2826,3575,2546,1953,808,425,518,292,1640,1215,1560,2064,2469,1350,2079,149,2239,2370,3540,665,244,456,3410,2623,1501,1931,2966,873,2214,1191,2555,3158,1394,672,1271,1822,2854,2687,2595,1310,635,2982,2094,705,1518,2883,3149,1336,7,437,1851,1404,1279,2781,3625,3120,2896,1805,1820,900,1884,105,3526,1683,1823,2344,1241,3247,2942,3187,1539,2656,1275,328,3374,2426,3336,2265,1220,1027,2814,354,918,3034,3455,3509,2110,650,3525,2872,708,1637,2427,3441,3202,2708,2949,331,1453,694,1693,2354,2982,3319,1915,2548,259,2434,1382,2519,3262,174,3318,373,1791,3312,2253,3348,2121,315,2703,1728,526,8,146,713,1604,3489,681,452,2096,2671,1991,75,3592,3196,3276,407,3448,99,454,1726,562,2924,1733,537,969,457,835,3177,737,1289,1664,1805,1752,968,555,3216,2428,1961,954,2738,3285,194,2714,1345,2244,208,2320,1221,1013,2895,1417,2849,2401,3017,2022,1275,3393,3029,2498,609,732,2679,3227,1023,825,299,871,732,954,3019,2678,2382,74,382,1396,2822,3496,1003,252,2613,586,3121,1385,991,1372,3456,3100,3347,3402,794,1590,805,2971,1701,3352,1170,3013,3588,3185,2674,1006,2662,2384,3482,2679,2539,2332,2310,2815,301,1050,1527,3069,1438,2815,33,3488,1173,2393,2738,1340,2457,2796,2947,3540,313,1249,2227,2276,3440,3085,885,3607,2451,2881,2807,3098,1753,138,358,931,3435,2485,3621,268,3414,835,128,1355,3593,429,1990,3362,1134,2748,2765,2542,3523,427,3396,12,3055,2960,954,2729,340,298,1629,1260,3627,2341,2600,2343,1432,1576,2609,3015,3147,3322,1101,3060,539,2273,1206,1314,2334,1809,3154,1471,1225,131,2373,1015,3309,3270,3080,1910,2073,2790,617,3083,2066,496,835,246,2728,2555,2142,3562,2081,761,3450,2777,731,2698,1289,2262,3055,1152,1289,1067,695,1942,3255,1212,974,1295,839,2274,722,1858,2546,3559,258,2867,1948,1900,1082,3527,3517,76,601,3340,925,533,2226,2281,1620,1854,711,2922,2429,239,295,510,2498,1706,669,1694,1506,3239,2688,67,2101,1239,108,2586,1456,1153,2642,2460,1579,88,700,1331,59,2020,1924,3462,1160,3593,1191,1438,1338,561,794,979,1065,1914,3225,3238,2298,3630,2126,164,3497,3377,3403,3317,2108,2208,3085,2618,1720,2189,2650,1324,163,1840,1748,3441,2987,2389,1532,2353,1561,1850,862,1404,2310,2560,660,564,1261,2706,2296,3035,219,3117,2882,3130,15,779,979,433,865,1303,1243,1252,1387,1908,1926,191,2034,1558,2031,2152,977,3399,2992,2626,1597,547,2508,3403,273,2771,638,316,3150,136,1380,1587,2684,1239,2665,2366,779,410,28,1493,2742,1268,3389,2228,364,3139,1878,1121,2030,2679,1794,2161,163,2917,2200,469,443,3200,20,2320,3074,614,907,1030,2350,2525,2833,1479,3324,1831,1444,1390,1603,102,1986,902,3330,548,2028,509,1560,1370,1136,2523,125,2032,1923,858,530,879,711,655,1314,714,2593,3348,2354,2395,3605,1564,1925,938,533,1072,702,2111,1931,3222,987,3473,3324,2997,469,786,821,715,3245,1961,2237,3393,465,2590,3428,2711,1364,2380,1428,1353,1107,3018,3420,1443,3404,174,3398,1562,1707,699,2134,2577,251,1782,2074,3075,1894,1472,1748,721,1864,3495,239,2706,3460,756,2819,3141,3379,3351,1572,3197,2170,174,2630,1504,1260,1322,20,2746,2709,1958,2944,1727,2189,593,1284,2561,3189,2447,310,607,2396,1184,641,394,851,599,3610,1114,2800,755,3256,1504,1884,265,915,514,545,1800,2959,694,2996,3083,645,2000,171,2944,1352,1523,1361,1930,997,1530,1288,2045,666,659,1515,2140,573,2998,3312,2851,1759,1593,732,753,2592,1361,609,2212,2723,2195,202,3340,3255,1446,1060,3506,2623,213,3120,2141,1891,1340,1324,1187,3025,3295,762,1888,2067,8,2251,2948,2161,1270,2847,2310,1052,2915,3248,1432,2699,2871,2214,2976,173,2981,158,1958,3187,1644,2910,1565,1304,2405,2803,3125,2040,1298,2137,3611,2520,8,163,2029,146,3007,2159,3211,836,193,2638,2924,362,3488,2225,2493,3558,3506,727,211,602,3206,32,3293,2236,1275,2404,818,2373,3392,3296,2776,3341,2038,3101,3091,2563,3108,1878,3284,717,2167,2649,1625,3296,441,3415,936,1807,3256,458,298,1124,2565,3609,2395,2680,1530,909,3094,1214,483,75,2221,3249,1394,2752,2402,1534,3151,241,475,2525,2576,819,446,217,3191,2785,671,1680};
    int n = 5080;
    int maxSum = 14;
    cout<<maxCount(banned, n, maxSum)<<endl;
    return 0;
}