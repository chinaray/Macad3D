﻿using System;

namespace Macad.Common
{
    public static class Maths
    {
        public static int Precision
        {
            get { return _Precision; }
            set
            {
                _Precision = value;
                _PrecisionFormatString = "F" + _Precision.ToString();
            }
        }

        public static string PrecisionFormatString
        {
            get { return _PrecisionFormatString; }
        }

        static int _Precision = 3;
        static string _PrecisionFormatString = "F3";

        //--------------------------------------------------------------------------------------------------

        public const double DoublePI = Math.PI * 2;
        public const double HalfPI = Math.PI / 2;
        public const double PI = Math.PI;
        public const double DegRadMultiplier = 180.0/Math.PI;

        //--------------------------------------------------------------------------------------------------

        public static double NormalizeAngleDegree(double value)
        {
            if (value >= 360.0)
            {
                return value%360.0;
            }
            if (value < 0.0)
            {
                value = (value % 360.0);
                if (value < 0.0)
                    value += 360.0;
                return value;
            }
            return value;
        }

        //--------------------------------------------------------------------------------------------------

        public static double RoundToNearest(double value, double divider)
        {
            return Math.Round(value / divider) * divider;
        }

        //--------------------------------------------------------------------------------------------------

    }
}