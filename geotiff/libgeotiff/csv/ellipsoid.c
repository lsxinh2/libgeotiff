#include "defs.h"
datafile_rows_t Ellipsoid_row_1[] = {"ELLIPSOID_CODE","ELLIPSOID_NAME","SEMI_MAJOR_AXIS","UOM_CODE","INV_FLATTENING","SEMI_MINOR_AXIS","ELLIPSOID_SHAPE","REMARKS","INFORMATION_SOURCE","DATA_SOURCE","REVISION_DATE","CHANGE_ID","DEPRECATED",NULL};
datafile_rows_t Ellipsoid_row_2[] = {"7001","Airy 1830","6377563.396","9001","299.3249646","","1","Original definition is a=20923713 and b=20853810 feet of 1796.   For the 1936 retriangulation OSGB defines the relationship of feet of 1796 to the International metre through log(1.48401603) exactly [=0.3048007491...]. 1/f is given to 7 decimal places.","Ordnance Survey of Great Britain.","EPSG","1995-06-02 00:00:00","98.321  98.34","0",NULL};
datafile_rows_t Ellipsoid_row_3[] = {"7002","Airy Modified 1849","6377340.189","9001","299.3249646","","1","OSGB Airy 1830 figure (ellipsoid code 7001) rescaled by 0.999965 to best fit the scale of the 19th century primary triangulation of Ireland.","""The Irish Grid - A Description of the Co-ordinate Reference System"" published by Ordnance Survey of Ireland, Dublin and Ordnance Survey of Northern Ireland, Belfast.","EPSG","2003-06-27 00:00:00","98.321 2002.622","0",NULL};
datafile_rows_t Ellipsoid_row_4[] = {"7003","Australian National Spheroid","6378160.0","9001","298.25","","1","Based on the GRS 1967 figure but with 1/f taken to 2 decimal places exactly.  The dimensions are also used as the GRS 1967 (SAD69) ellipsoid (see code 7050).","""Australian Map Grid Technical Manual""; National Mapping Council of Australia Special Publication #7; 1972","EPSG","2002-09-19 00:00:00","2002.50","0",NULL};
datafile_rows_t Ellipsoid_row_5[] = {"7004","Bessel 1841","6377397.155","9001","299.1528128","","1","Original Bessel definition is a=3272077.14 and b=3261139.33 toise. This used a weighted mean of values from several authors but did not account for differences in the length of the various toise: the ""Bessel toise"" is therefore of uncertain length.","US Army Map Service Technical Manual; 1943.","EPSG","1999-04-22 00:00:00","98.321  98.34","0",NULL};
datafile_rows_t Ellipsoid_row_6[] = {"7005","Bessel Modified","6377492.018","9001","299.1528128","","1","Used in Norway and also in Sweden with a 1mm increase in semi-major axis.","","EPSG","1999-04-22 00:00:00","98.321","0",NULL};
datafile_rows_t Ellipsoid_row_7[] = {"7006","Bessel Namibia","6377483.865","9001","299.1528128","","1","a = 6377397.155 German legal metres. This is the same value as the Bessel 1841 figure (code 7004) but in different units.  Used in Namibia.","Chief Directorate: Surveys and Mapping, Mowbray, South Africa.","EPSG","1999-04-22 00:00:00","97.16","1",NULL};
datafile_rows_t Ellipsoid_row_8[] = {"7007","Clarke 1858","20926348.0","9005","","20855233.0","1","Clarke's 1858/II solution. Derived parameters: a = 6378293.645m using his 1865 ratio of 0.304797265 feet per metre; 1/f = 294.26068�  In Australia and Amoco Trinidad 1/f taken to two decimal places (294.26 exactly); elsewhere a and b used to derive 1/f.","""Ellipsoidisch Parameter der Erdfigur (1800-1950)"" by Georg Strasser.","EPSG","1995-06-02 00:00:00","99.70","0",NULL};
datafile_rows_t Ellipsoid_row_9[] = {"7008","Clarke 1866","6378206.4","9001","","6356583.8","1","Original definition a=20926062 and b=20855121 (British) feet. Uses Clarke's 1865 inch-metre ratio of 39.370432 to obtain metres. (Metric value then converted to US survey feet for use in the United States using 39.37 exactly giving a=20925832.16 ft US).","US Army Map Service Technical Manual No. 7; 1943.","EPSG","1995-06-02 00:00:00","98.34","0",NULL};
datafile_rows_t Ellipsoid_row_10[] = {"7009","Clarke 1866 Michigan","20926631.531","9003","","20855688.674","1","Used for Michigan NAD27 State Plane zones.  Radius = ellipsoid radius + 800 feet; this approximates the average elevation of the state.   Derived parameter: 1/f = 294.97870","USGS Professional Paper #1395.","EPSG","1995-06-02 00:00:00","98.22","0",NULL};
datafile_rows_t Ellipsoid_row_11[] = {"7010","Clarke 1880 (Benoit)","6378300.789","9001","","6356566.435","1","Adopts Clarke's values for a and b.  Uses Benoit's 1895 ratio of 0.9143992 metres per yard to convert to metres.","","EPSG","1995-06-02 00:00:00","","0",NULL};
datafile_rows_t Ellipsoid_row_12[] = {"7011","Clarke 1880 (IGN)","6378249.2","9001","","6356515.0","1","Adopts Clarke's values for a and b using his 1865 ratio of 39.370432 inches per metre to convert axes to metres.","","EPSG","1998-04-16 00:00:00","98.12","0",NULL};
datafile_rows_t Ellipsoid_row_13[] = {"7012","Clarke 1880 (RGS)","6378249.145","9001","293.465","","1","Adopts Clarke's values for a and 1/f.  Adopts his 1865 ratio of 39.370432 inches per metre to convert semi-major axis to metres. Also known as Clarke Modified 1880.","Empire Survey Review #32; 1939.","EPSG","1995-06-02 00:00:00","","0",NULL};
datafile_rows_t Ellipsoid_row_14[] = {"7013","Clarke 1880 (Arc)","6378249.145","9001","293.4663077","","1","Adopts Clarke's value for a with derived 1/f.  Uses his 1865 ratio of 39.370432 inch per metre to convert semi-major axis to metres.","Chief Directorate: Surveys and Mapping, Mowbray, South Africa.","EPSG","2001-06-05 00:00:00","2001.052","0",NULL};
datafile_rows_t Ellipsoid_row_15[] = {"7014","Clarke 1880 (SGA 1922)","6378249.2","9001","293.46598","","1","Used in Old French Triangulation (ATF).   Uses Clarke's 1865 inch-metre ratio of 39.370432 to convert axes to metres.","","EPSG","1995-06-02 00:00:00","","0",NULL};
datafile_rows_t Ellipsoid_row_16[] = {"7015","Everest 1830 (1937 Adjustment)","6377276.345","9001","300.8017","","1","Used for the 1937 readjustment of Indian triangulation.  Clarke's 1865 Indian-British foot ratio (0.99999566) and Benoit's 1898 British inch-metre ratio (39.370113) rounded as 0.30479841 exactly and applied to Everest's 1830 definition taken as a and 1/f","Survey of India professional paper #28; 1939","EPSG","1996-10-18 00:00:00","96.20","0",NULL};
datafile_rows_t Ellipsoid_row_17[] = {"7016","Everest 1830 (1967 Definition)","6377298.556","9001","300.8017","","1","Adopted 1967 for use in East Malaysia.  Applies Sears 1922 inch-metre ratio of 39.370147 to Everest 1830 original definition of a and 1/f but with a taken to be in British rather than Indian feet.","","EPSG","1995-06-02 00:00:00","","0",NULL};
datafile_rows_t Ellipsoid_row_18[] = {"7018","Everest 1830 Modified","6377304.063","9001","300.8017","","1","Adopted 1967 for use in West Malaysia.  Applies Benoit 1898 inch-metre ratio of 39.370113 to Everest 1830 original definition of a and 1/f but with a taken to be in British rather than Indian feet.","","EPSG","1995-06-02 00:00:00","","0",NULL};
datafile_rows_t Ellipsoid_row_19[] = {"7019","GRS 1980","6378137.0","9001","298.257222101","","1","Adopted by IUGG 1979 Canberra.  Inverse flattening is derived from geocentric gravitational constant GM = 3986005e8 m*m*m/s/s; dynamic form factor J2 = 108263e8 and Earth's angular velocity = 7292115e-11 rad/s.","""Geodetic Reference System 1980"" by H. Moritz; Bulletin Geodesique","EPSG","1998-11-11 00:00:00","98.11  98.32","0",NULL};
datafile_rows_t Ellipsoid_row_20[] = {"7020","Helmert 1906","6378200.0","9001","298.3","","1","Helmert 1906/III solution.","""Ellipsoidisch Parameter der Erdfigur (1800-1950)"" by Georg Strasser","EPSG","1995-06-02 00:00:00","","0",NULL};
datafile_rows_t Ellipsoid_row_21[] = {"7021","Indonesian National Spheroid","6378160.0","9001","298.247","","1","Based on the GRS 1967 figure but with 1/f taken to 3 decimal places exactly.","Rais paper.","EPSG","1995-06-02 00:00:00","","0",NULL};
datafile_rows_t Ellipsoid_row_22[] = {"7022","International 1924","6378388.0","9001","297.0","","1","Adopted by IUGG 1924 in Madrid. Based on Hayford 1909/1910 figures.","","EPSG","1995-06-02 00:00:00","","0",NULL};
datafile_rows_t Ellipsoid_row_23[] = {"7024","Krassowsky 1940","6378245.0","9001","298.3","","1","","","EPSG","1995-06-02 00:00:00","","0",NULL};
datafile_rows_t Ellipsoid_row_24[] = {"7025","NWL 9D","6378145.0","9001","298.25","","1","Used by Transit Precise Ephemeris between October 1971 and January 1987.","","EPSG","1995-06-02 00:00:00","","0",NULL};
datafile_rows_t Ellipsoid_row_25[] = {"7027","Plessis 1817","6376523.0","9001","308.64","","1","Rescaling of Delambre 1810 figure (a=6376985 m) to make meridional arc from equator to pole equal to 10000000 metres exactly. (Ref: Strasser).","IGN Paris ""Constants d'Ellipsoides"" February 1972.","EPSG","1995-06-02 00:00:00","","0",NULL};
datafile_rows_t Ellipsoid_row_26[] = {"7028","Struve 1860","6378298.3","9001","294.73","","1","Original definition of semi-major axis given as 3272539 toise.  In ""Ellipsoidisch Parameter der Erdfigur (1800-1950)"" , Strasser suggests a conversion factor of 1.94903631 which gives a=6378297.337 metres.","""Geodesia y Cartografia Matematica"" by Fernando Martin Asin; ISBN 84-398-0248-X.","EPSG","1998-11-11 00:00:00","98.07  98.34","0",NULL};
datafile_rows_t Ellipsoid_row_27[] = {"7029","War Office","6378300.0","9001","296.0","","1","In non-metric form, a=20926201 Gold Coast feet.","Tables for the use of the Gold Coast Survey Department, 1935.","EPSG","2000-10-12 00:00:00","","0",NULL};
datafile_rows_t Ellipsoid_row_28[] = {"7030","WGS 84","6378137.0","9001","298.257223563","","1","Inverse flattening derived from four defining parameters (semi-major axis; C20 = -484.16685*10e-6; earth's angular velocity w = 7292115e11 rad/sec; gravitational constant GM = 3986005e8 m*m*m/s/s).","DMA Technical Manual 8350.2-B","EPSG","1998-11-11 00:00:00","98.32","0",NULL};
datafile_rows_t Ellipsoid_row_29[] = {"7031","GEM 10C","6378137.0","9001","298.257223563","","1","Used for  GEM 10C Gravity Potential Model.","","EPSG","1995-06-02 00:00:00","98.32","0",NULL};
datafile_rows_t Ellipsoid_row_30[] = {"7032","OSU86F","6378136.2","9001","298.257223563","","1","Used for OSU86 gravity potential (geoidal) model.","","EPSG","1995-06-02 00:00:00","98.32","0",NULL};
datafile_rows_t Ellipsoid_row_31[] = {"7033","OSU91A","6378136.3","9001","298.257223563","","1","Used for OSU91 gravity potential (geoidal) model.","","EPSG","1995-06-02 00:00:00","98.32","0",NULL};
datafile_rows_t Ellipsoid_row_32[] = {"7034","Clarke 1880","20926202.0","9005","293.465","20854895.0","1","Clarke gave a and b and also 1/f=293.465 (to 3 decimal places).  1/f derived from a and b = 293.4663077�","""Ellipsoidisch Parameter der Erdfigur (1800-1950)"" by Georg Strasser.","EPSG","1995-06-02 00:00:00","","0",NULL};
datafile_rows_t Ellipsoid_row_33[] = {"7035","Sphere","6371000.0","9001","","6371000.0","0","Authalic sphere.  1/f is infinite. Superseded by GRS 1980 authalic sphere (code 7047).","","EPSG","1995-06-02 00:00:00","","1",NULL};
datafile_rows_t Ellipsoid_row_34[] = {"7036","GRS 1967","6378160.0","9001","298.247167427","","1","Adopted by IUGG 1967 Lucerne.  Inverse flattening given is derived from geocentric gravitational constant (GM)= 398603e9 m*m*m/s/s; dynamic form factor (J2) = 0.0010827 and Earth's angular velocity w = 7.2921151467e-5 rad/s. See also GRS 1967 (SAD69).","""Geodetic Reference System 1967""; International Association of Geodesy special publication number 3; August 1971.","EPSG","2002-09-19 00:00:00","96.09  97.252  98.32 2002.50","0",NULL};
datafile_rows_t Ellipsoid_row_35[] = {"7041","Average Terrestrial System 1977","6378135.0","9001","298.257","","1","","New Brunswick Geographic Information Corporation land and water information standards manual","EPSG","1997-07-22 00:00:00","98.321","0",NULL};
datafile_rows_t Ellipsoid_row_36[] = {"7042","Everest (1830 Definition)","20922931.8","9080","300.8017","20853374.58","1","Everest gave a and b to 2 decimal places and also 1/f=300.8017 (to 4 decimal places).","""Ellipsoidisch Parameter der Erdfigur (1800-1950)"" by Georg Strasser","EPSG","1999-10-20 00:00:00","97.23","0",NULL};
datafile_rows_t Ellipsoid_row_37[] = {"7043","WGS 72","6378135.0","9001","298.26","","1","","","EPSG","1999-04-22 00:00:00","99.03","0",NULL};
datafile_rows_t Ellipsoid_row_38[] = {"7044","Everest 1830 (1962 Definition)","6377301.243","9001","300.8017255","","1","Used by Pakistan since metrication.  Clarke's 1865 Indian foot-British foot ratio (0.99999566) and his 1865 British inch-metre ratio (39.369971) rounded with slight error as 1 Ind ft = 0.3047995m exactly and applied to Everest's 1830 definition of a & b.","","EPSG","1999-10-20 00:00:00","","0",NULL};
datafile_rows_t Ellipsoid_row_39[] = {"7045","Everest 1830 (1975 Definition)","6377299.151","9001","300.8017255","","1","Used by India since metrication.  Clarke's 1865 Indian foot-British foot ratio (0.99999566) and his 1865 British inch-metre ratio (39.369971) rounded as 1 Ind ft = 0.3047995m exactly applied to Everest's 1830 original definition taken as a and b.","","EPSG","1999-10-20 00:00:00","","0",NULL};
datafile_rows_t Ellipsoid_row_40[] = {"7046","Bessel Namibia (GLM)","6377397.155","9031","299.1528128","","1","The semi-major axis has the same value as the Bessel 1841 ellipsoid (code 7004) but is in different units - German Legal Metres rather than International metres - hence a different size.  a = 6377483.865 International metres. Used in Namibia.","Chief Directorate: Surveys and Mapping, Mowbray, South Africa.","ISO Project Team 19127","2001-01-21 00:00:00","","0",NULL};
datafile_rows_t Ellipsoid_row_41[] = {"7047","GRS 1980 Authalic Sphere","6370997.0","9001","","6370997.0","0","Authalic sphere derived from Clarke 1866 ellipsoid (code 7008).  Deprecated as name and parameter values do not match; replaced by 7048.","EPSG","EPSG","2001-06-05 00:00:00","","1",NULL};
datafile_rows_t Ellipsoid_row_42[] = {"7048","GRS 1980 Authalic Sphere","6371007.0","9001","","6371007.0","0","Authalic sphere derived from GRS 1980 ellipsoid (code 7019).  (An authalic sphere is one with a surface area equal to the surface area of the ellipsoid). 1/f is infinite.","EPSG","EPSG","2001-06-25 00:00:00","","0",NULL};
datafile_rows_t Ellipsoid_row_43[] = {"7049","Xian 1980","6378140.0","9001","298.257","","1","","BP","EPSG","2002-02-12 00:00:00","","0",NULL};
datafile_rows_t Ellipsoid_row_44[] = {"7050","GRS 1967 (SAD69)","6378160.0","9001","298.25","","1","Based on the GRS 1967 figure (code 7036) but with 1/f taken to 2 decimal places exactly. Used with SAD69 datum. The dimensions are also used as the Australian National Spheroid (code 7003).","""Geodetic Reference System 1967""; International Association of Geodesy special publication number 3; August 1971.","EPSG","2002-09-19 00:00:00","","0",NULL};
datafile_rows_t Ellipsoid_row_45[] = {"7051","Danish 1876","6377019.27","9001","300.0","","1","Semi-major axis originally given as 3271883.25 toise. Uses toise to French metre ratio of 1.94903631 to two decimal place precision. An alternative ratio with the German legal metre of 1.9490622 giving 6377104m has not been used in Danish work.","Kort og Matrikelstyrelsen (KMS), Copenhagen.","EPSG","2003-06-27 00:00:00","","0",NULL};

datafile_rows_t *Ellipsoid_rows[] = {Ellipsoid_row_1,Ellipsoid_row_2,Ellipsoid_row_3,Ellipsoid_row_4,Ellipsoid_row_5,Ellipsoid_row_6,Ellipsoid_row_7,Ellipsoid_row_8,Ellipsoid_row_9,Ellipsoid_row_10,Ellipsoid_row_11,Ellipsoid_row_12,Ellipsoid_row_13,Ellipsoid_row_14,Ellipsoid_row_15,Ellipsoid_row_16,Ellipsoid_row_17,Ellipsoid_row_18,Ellipsoid_row_19,Ellipsoid_row_20,Ellipsoid_row_21,Ellipsoid_row_22,Ellipsoid_row_23,Ellipsoid_row_24,Ellipsoid_row_25,Ellipsoid_row_26,Ellipsoid_row_27,Ellipsoid_row_28,Ellipsoid_row_29,Ellipsoid_row_30,Ellipsoid_row_31,Ellipsoid_row_32,Ellipsoid_row_33,Ellipsoid_row_34,Ellipsoid_row_35,Ellipsoid_row_36,Ellipsoid_row_37,Ellipsoid_row_38,Ellipsoid_row_39,Ellipsoid_row_40,Ellipsoid_row_41,Ellipsoid_row_42,Ellipsoid_row_43,Ellipsoid_row_44,Ellipsoid_row_45,NULL};
