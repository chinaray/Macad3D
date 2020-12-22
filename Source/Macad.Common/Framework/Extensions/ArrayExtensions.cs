﻿namespace Macad.Common
{
    public static class ArrayExtensions
    {
        public static void Fill<T>(this T[] array, T value)
        {
            for (int i = 0; i < array.Length; i++)
            {
                array[i] = value;
            }
        }

        //--------------------------------------------------------------------------------------------------

        public static void Fill<T>(this T[] array, int start, int length, T value)
        {
            for (int i = start; i < start+length; i++)
            {
                array[i] = value;
            }
        }

        //--------------------------------------------------------------------------------------------------

    }
}