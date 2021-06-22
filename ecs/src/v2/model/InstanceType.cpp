#include <huaweicloud/ecs/v2/model/InstanceType.h>
#include <huaweicloud/core/utils/Hasher.h>
#include <string>

using namespace HuaweiCloud::Sdk::Core::Utils;

namespace HuaweiCloud
{
  namespace Sdk
  {
    namespace Ecs
    {
      namespace V2
      {
        namespace Model
        {
          namespace InstanceTypeMapper
          {

            static const int s6_small_1_HASH = Hasher::hashstring("s6.small.1");
            static const int s6_medium_2_HASH = Hasher::hashstring("s6.medium.2");
            static const int s6_large_2_HASH = Hasher::hashstring("s6.large.2");
            static const int s6_xlarge_2_HASH = Hasher::hashstring("s6.xlarge.2");
            static const int s6_2xlarge_2_HASH = Hasher::hashstring("s6.2xlarge.2");
            static const int s6_medium_4_HASH = Hasher::hashstring("s6.medium.4");
            static const int s6_large_4_HASH = Hasher::hashstring("s6.large.4");
            static const int s6_xlarge_4_HASH = Hasher::hashstring("s6.xlarge.4");
            static const int s6_2xlarge_4_HASH = Hasher::hashstring("s6.2xlarge.4");
            static const int sn3_small_1_HASH = Hasher::hashstring("sn3.small.1");
            static const int sn3_medium_2_HASH = Hasher::hashstring("sn3.medium.2");
            static const int sn3_large_2_HASH = Hasher::hashstring("sn3.large.2");
            static const int sn3_xlarge_2_HASH = Hasher::hashstring("sn3.xlarge.2");
            static const int sn3_2xlarge_2_HASH = Hasher::hashstring("sn3.2xlarge.2");
            static const int sn3_4xlarge_2_HASH = Hasher::hashstring("sn3.4xlarge.2");
            static const int sn3_medium_4_HASH = Hasher::hashstring("sn3.medium.4");
            static const int sn3_large_4_HASH = Hasher::hashstring("sn3.large.4");
            static const int sn3_xlarge_4_HASH = Hasher::hashstring("sn3.xlarge.4");
            static const int sn3_2xlarge_4_HASH = Hasher::hashstring("sn3.2xlarge.4");
            static const int sn3_4xlarge_4_HASH = Hasher::hashstring("sn3.4xlarge.4");
            static const int s3_small_1_HASH = Hasher::hashstring("s3.small.1");
            static const int s3_medium_2_HASH = Hasher::hashstring("s3.medium.2");
            static const int s3_large_2_HASH = Hasher::hashstring("s3.large.2");
            static const int s3_xlarge_2_HASH = Hasher::hashstring("s3.xlarge.2");
            static const int s3_2xlarge_2_HASH = Hasher::hashstring("s3.2xlarge.2");
            static const int s3_4xlarge_2_HASH = Hasher::hashstring("s3.4xlarge.2");
            static const int s3_medium_4_HASH = Hasher::hashstring("s3.medium.4");
            static const int s3_large_4_HASH = Hasher::hashstring("s3.large.4");
            static const int s3_xlarge_4_HASH = Hasher::hashstring("s3.xlarge.4");
            static const int s3_2xlarge_4_HASH = Hasher::hashstring("s3.2xlarge.4");
            static const int s3_4xlarge_4_HASH = Hasher::hashstring("s3.4xlarge.4");
            static const int s2_small_1_HASH = Hasher::hashstring("s2.small.1");
            static const int s2_medium_2_HASH = Hasher::hashstring("s2.medium.2");
            static const int s2_large_2_HASH = Hasher::hashstring("s2.large.2");
            static const int s2_xlarge_2_HASH = Hasher::hashstring("s2.xlarge.2");
            static const int s2_2xlarge_2_HASH = Hasher::hashstring("s2.2xlarge.2");
            static const int s2_4xlarge_2_HASH = Hasher::hashstring("s2.4xlarge.2");
            static const int s2_8xlarge_2_HASH = Hasher::hashstring("s2.8xlarge.2");
            static const int s2_medium_4_HASH = Hasher::hashstring("s2.medium.4");
            static const int s2_large_4_HASH = Hasher::hashstring("s2.large.4");
            static const int s2_xlarge_4_HASH = Hasher::hashstring("s2.xlarge.4");
            static const int s2_2xlarge_4_HASH = Hasher::hashstring("s2.2xlarge.4");
            static const int s2_4xlarge_4_HASH = Hasher::hashstring("s2.4xlarge.4");
            static const int s2_8xlarge_4_HASH = Hasher::hashstring("s2.8xlarge.4");
            static const int s1_medium_HASH = Hasher::hashstring("s1.medium");
            static const int s1_large_HASH = Hasher::hashstring("s1.large");
            static const int s1_xlarge_HASH = Hasher::hashstring("s1.xlarge");
            static const int s1_2xlarge_HASH = Hasher::hashstring("s1.2xlarge");
            static const int s1_4xlarge_HASH = Hasher::hashstring("s1.4xlarge");
            static const int s1_8xlarge_HASH = Hasher::hashstring("s1.8xlarge");
            static const int c2_medium_HASH = Hasher::hashstring("c2.medium");
            static const int c2_large_HASH = Hasher::hashstring("c2.large");
            static const int c2_xlarge_HASH = Hasher::hashstring("c2.xlarge");
            static const int c2_2xlarge_HASH = Hasher::hashstring("c2.2xlarge");
            static const int c2_4xlarge_HASH = Hasher::hashstring("c2.4xlarge");
            static const int c2_8xlarge_HASH = Hasher::hashstring("c2.8xlarge");
            static const int c1_medium_HASH = Hasher::hashstring("c1.medium");
            static const int c1_large_HASH = Hasher::hashstring("c1.large");
            static const int c1_xlarge_HASH = Hasher::hashstring("c1.xlarge");
            static const int c1_2xlarge_HASH = Hasher::hashstring("c1.2xlarge");
            static const int c1_4xlarge_HASH = Hasher::hashstring("c1.4xlarge");
            static const int c1_8xlarge_HASH = Hasher::hashstring("c1.8xlarge");
            static const int c7_large_2_HASH = Hasher::hashstring("c7.large.2");
            static const int c7_xlarge_2_HASH = Hasher::hashstring("c7.xlarge.2");
            static const int c7_2xlarge_2_HASH = Hasher::hashstring("c7.2xlarge.2");
            static const int c7_3xlarge_2_HASH = Hasher::hashstring("c7.3xlarge.2");
            static const int c7_4xlarge_2_HASH = Hasher::hashstring("c7.4xlarge.2");
            static const int c7_6xlarge_2_HASH = Hasher::hashstring("c7.6xlarge.2");
            static const int c7_8xlarge_2_HASH = Hasher::hashstring("c7.8xlarge.2");
            static const int c7_12xlarge_2_HASH = Hasher::hashstring("c7.12xlarge.2");
            static const int c7_16xlarge_2_HASH = Hasher::hashstring("c7.16xlarge.2");
            static const int c7_24xlarge_2_HASH = Hasher::hashstring("c7.24xlarge.2");
            static const int c7_32xlarge_2_HASH = Hasher::hashstring("c7.32xlarge.2");
            static const int c7_large_4_HASH = Hasher::hashstring("c7.large.4");
            static const int c7_xlarge_4_HASH = Hasher::hashstring("c7.xlarge.4");
            static const int c7_2xlarge_4_HASH = Hasher::hashstring("c7.2xlarge.4");
            static const int c7_3xlarge_4_HASH = Hasher::hashstring("c7.3xlarge.4");
            static const int c7_4xlarge_4_HASH = Hasher::hashstring("c7.4xlarge.4");
            static const int c7_6xlarge_4_HASH = Hasher::hashstring("c7.6xlarge.4");
            static const int c7_8xlarge_4_HASH = Hasher::hashstring("c7.8xlarge.4");
            static const int c7_12xlarge_4_HASH = Hasher::hashstring("c7.12xlarge.4");
            static const int c7_16xlarge_4_HASH = Hasher::hashstring("c7.16xlarge.4");
            static const int c7_24xlarge_4_HASH = Hasher::hashstring("c7.24xlarge.4");
            static const int c7_32xlarge_4_HASH = Hasher::hashstring("c7.32xlarge.4");
            static const int c6s_large_2_HASH = Hasher::hashstring("c6s.large.2");
            static const int c6s_xlarge_2_HASH = Hasher::hashstring("c6s.xlarge.2");
            static const int c6s_2xlarge_2_HASH = Hasher::hashstring("c6s.2xlarge.2");
            static const int c6s_3xlarge_2_HASH = Hasher::hashstring("c6s.3xlarge.2");
            static const int c6s_4xlarge_2_HASH = Hasher::hashstring("c6s.4xlarge.2");
            static const int c6s_6xlarge_2_HASH = Hasher::hashstring("c6s.6xlarge.2");
            static const int c6s_8xlarge_2_HASH = Hasher::hashstring("c6s.8xlarge.2");
            static const int c6s_12xlarge_2_HASH = Hasher::hashstring("c6s.12xlarge.2");
            static const int c6s_16xlarge_2_HASH = Hasher::hashstring("c6s.16xlarge.2");
            static const int c6_large_2_HASH = Hasher::hashstring("c6.large.2");
            static const int c6_xlarge_2_HASH = Hasher::hashstring("c6.xlarge.2");
            static const int c6_2xlarge_2_HASH = Hasher::hashstring("c6.2xlarge.2");
            static const int c6_3xlarge_2_HASH = Hasher::hashstring("c6.3xlarge.2");
            static const int c6_4xlarge_2_HASH = Hasher::hashstring("c6.4xlarge.2");
            static const int c6_6xlarge_2_HASH = Hasher::hashstring("c6.6xlarge.2");
            static const int c6_8xlarge_2_HASH = Hasher::hashstring("c6.8xlarge.2");
            static const int c6_12xlarge_2_HASH = Hasher::hashstring("c6.12xlarge.2");
            static const int c6_16xlarge_2_HASH = Hasher::hashstring("c6.16xlarge.2");
            static const int c6_22xlarge_2_HASH = Hasher::hashstring("c6.22xlarge.2");
            static const int c6_22xlarge_2_physical_HASH = Hasher::hashstring("c6.22xlarge.2.physical");
            static const int c6_large_4_HASH = Hasher::hashstring("c6.large.4");
            static const int c6_xlarge_4_HASH = Hasher::hashstring("c6.xlarge.4");
            static const int c6_2xlarge_4_HASH = Hasher::hashstring("c6.2xlarge.4");
            static const int c6_3xlarge_4_HASH = Hasher::hashstring("c6.3xlarge.4");
            static const int c6_4xlarge_4_HASH = Hasher::hashstring("c6.4xlarge.4");
            static const int c6_6xlarge_4_HASH = Hasher::hashstring("c6.6xlarge.4");
            static const int c6_8xlarge_4_HASH = Hasher::hashstring("c6.8xlarge.4");
            static const int c6_12xlarge_4_HASH = Hasher::hashstring("c6.12xlarge.4");
            static const int c6_16xlarge_4_HASH = Hasher::hashstring("c6.16xlarge.4");
            static const int c6_22xlarge_4_HASH = Hasher::hashstring("c6.22xlarge.4");
            static const int c6_22xlarge_4_physical_HASH = Hasher::hashstring("c6.22xlarge.4.physical");
            static const int c3ne_large_2_HASH = Hasher::hashstring("c3ne.large.2");
            static const int c3ne_xlarge_2_HASH = Hasher::hashstring("c3ne.xlarge.2");
            static const int c3ne_2xlarge_2_HASH = Hasher::hashstring("c3ne.2xlarge.2");
            static const int c3ne_4xlarge_2_HASH = Hasher::hashstring("c3ne.4xlarge.2");
            static const int c3ne_8xlarge_2_HASH = Hasher::hashstring("c3ne.8xlarge.2");
            static const int c3ne_15xlarge_2_HASH = Hasher::hashstring("c3ne.15xlarge.2");
            static const int c3ne_large_4_HASH = Hasher::hashstring("c3ne.large.4");
            static const int c3ne_xlarge_4_HASH = Hasher::hashstring("c3ne.xlarge.4");
            static const int c3ne_2xlarge_4_HASH = Hasher::hashstring("c3ne.2xlarge.4");
            static const int c3ne_4xlarge_4_HASH = Hasher::hashstring("c3ne.4xlarge.4");
            static const int c3ne_8xlarge_4_HASH = Hasher::hashstring("c3ne.8xlarge.4");
            static const int c3ne_15xlarge_4_HASH = Hasher::hashstring("c3ne.15xlarge.4");
            static const int c3_large_2_HASH = Hasher::hashstring("c3.large.2");
            static const int c3_xlarge_2_HASH = Hasher::hashstring("c3.xlarge.2");
            static const int c3_2xlarge_2_HASH = Hasher::hashstring("c3.2xlarge.2");
            static const int c3_3xlarge_2_HASH = Hasher::hashstring("c3.3xlarge.2");
            static const int c3_4xlarge_2_HASH = Hasher::hashstring("c3.4xlarge.2");
            static const int c3_6xlarge_2_HASH = Hasher::hashstring("c3.6xlarge.2");
            static const int c3_8xlarge_2_HASH = Hasher::hashstring("c3.8xlarge.2");
            static const int c3_15xlarge_2_HASH = Hasher::hashstring("c3.15xlarge.2");
            static const int c3_large_4_HASH = Hasher::hashstring("c3.large.4");
            static const int c3_xlarge_4_HASH = Hasher::hashstring("c3.xlarge.4");
            static const int c3_2xlarge_4_HASH = Hasher::hashstring("c3.2xlarge.4");
            static const int c3_3xlarge_4_HASH = Hasher::hashstring("c3.3xlarge.4");
            static const int c3_4xlarge_4_HASH = Hasher::hashstring("c3.4xlarge.4");
            static const int c3_6xlarge_4_HASH = Hasher::hashstring("c3.6xlarge.4");
            static const int c3_8xlarge_4_HASH = Hasher::hashstring("c3.8xlarge.4");
            static const int c3_15xlarge_4_HASH = Hasher::hashstring("c3.15xlarge.4");
            static const int t6_small_1_HASH = Hasher::hashstring("t6.small.1");
            static const int t6_large_1_HASH = Hasher::hashstring("t6.large.1");
            static const int t6_xlarge_1_HASH = Hasher::hashstring("t6.xlarge.1");
            static const int t6_2xlarge_1_HASH = Hasher::hashstring("t6.2xlarge.1");
            static const int t6_4xlarge_1_HASH = Hasher::hashstring("t6.4xlarge.1");
            static const int t6_medium_2_HASH = Hasher::hashstring("t6.medium.2");
            static const int t6_large_2_HASH = Hasher::hashstring("t6.large.2");
            static const int t6_xlarge_2_HASH = Hasher::hashstring("t6.xlarge.2");
            static const int t6_2xlarge_2_HASH = Hasher::hashstring("t6.2xlarge.2");
            static const int t6_4xlarge_2_HASH = Hasher::hashstring("t6.4xlarge.2");
            static const int t6_large_4_HASH = Hasher::hashstring("t6.large.4");
            static const int t6_xlarge_4_HASH = Hasher::hashstring("t6.xlarge.4");
            static const int t6_2xlarge_4_HASH = Hasher::hashstring("t6.2xlarge.4");
            static const int m6_large_8_HASH = Hasher::hashstring("m6.large.8");
            static const int m6_xlarge_8_HASH = Hasher::hashstring("m6.xlarge.8");
            static const int m6_2xlarge_8_HASH = Hasher::hashstring("m6.2xlarge.8");
            static const int m6_3xlarge_8_HASH = Hasher::hashstring("m6.3xlarge.8");
            static const int m6_4xlarge_8_HASH = Hasher::hashstring("m6.4xlarge.8");
            static const int m6_6xlarge_8_HASH = Hasher::hashstring("m6.6xlarge.8");
            static const int m6_8xlarge_8_HASH = Hasher::hashstring("m6.8xlarge.8");
            static const int m6_16xlarge_8_HASH = Hasher::hashstring("m6.16xlarge.8");
            static const int m6_22xlarge_8_physical_HASH = Hasher::hashstring("m6.22xlarge.8.physical");
            static const int m3ne_large_8_HASH = Hasher::hashstring("m3ne.large.8");
            static const int m3ne_xlarge_8_HASH = Hasher::hashstring("m3ne.xlarge.8");
            static const int m3ne_2xlarge_8_HASH = Hasher::hashstring("m3ne.2xlarge.8");
            static const int m3ne_3xlarge_8_HASH = Hasher::hashstring("m3ne.3xlarge.8");
            static const int m3ne_4xlarge_8_HASH = Hasher::hashstring("m3ne.4xlarge.8");
            static const int m3ne_6xlarge_8_HASH = Hasher::hashstring("m3ne.6xlarge.8");
            static const int m3ne_8xlarge_8_HASH = Hasher::hashstring("m3ne.8xlarge.8");
            static const int m3ne_15xlarge_8_HASH = Hasher::hashstring("m3ne.15xlarge.8");
            static const int m3_large_8_HASH = Hasher::hashstring("m3.large.8");
            static const int m3_xlarge_8_HASH = Hasher::hashstring("m3.xlarge.8");
            static const int m3_2xlarge_8_HASH = Hasher::hashstring("m3.2xlarge.8");
            static const int m3_3xlarge_8_HASH = Hasher::hashstring("m3.3xlarge.8");
            static const int m3_4xlarge_8_HASH = Hasher::hashstring("m3.4xlarge.8");
            static const int m3_6xlarge_8_HASH = Hasher::hashstring("m3.6xlarge.8");
            static const int m3_8xlarge_8_HASH = Hasher::hashstring("m3.8xlarge.8");
            static const int m3_15xlarge_8_HASH = Hasher::hashstring("m3.15xlarge.8");
            static const int m2_large_8_HASH = Hasher::hashstring("m2.large.8");
            static const int m2_xlarge_8_HASH = Hasher::hashstring("m2.xlarge.8");
            static const int m2_2xlarge_8_HASH = Hasher::hashstring("m2.2xlarge.8");
            static const int m2_4xlarge_8_HASH = Hasher::hashstring("m2.4xlarge.8");
            static const int m2_8xlarge_8_HASH = Hasher::hashstring("m2.8xlarge.8");
            static const int m1_medium_HASH = Hasher::hashstring("m1.medium");
            static const int m1_large_HASH = Hasher::hashstring("m1.large");
            static const int m1_xlarge_HASH = Hasher::hashstring("m1.xlarge");
            static const int m1_2xlarge_HASH = Hasher::hashstring("m1.2xlarge");
            static const int m1_4xlarge_HASH = Hasher::hashstring("m1.4xlarge");
            static const int e3_7xlarge_12_HASH = Hasher::hashstring("e3.7xlarge.12");
            static const int e3_14xlarge_12_HASH = Hasher::hashstring("e3.14xlarge.12");
            static const int e3_26xlarge_14_HASH = Hasher::hashstring("e3.26xlarge.14");
            static const int e3_52xlarge_14_HASH = Hasher::hashstring("e3.52xlarge.14");
            static const int e3_52xlarge_20_HASH = Hasher::hashstring("e3.52xlarge.20");
            static const int et2_2xlarge_16_HASH = Hasher::hashstring("et2.2xlarge.16");
            static const int et2_4xlarge_14_HASH = Hasher::hashstring("et2.4xlarge.14");
            static const int et2_8xlarge_14_HASH = Hasher::hashstring("et2.8xlarge.14");
            static const int e2_3xlarge_HASH = Hasher::hashstring("e2.3xlarge");
            static const int e2_4xlarge_HASH = Hasher::hashstring("e2.4xlarge");
            static const int e2_9xlarge_HASH = Hasher::hashstring("e2.9xlarge");
            static const int e1_4xlarge_HASH = Hasher::hashstring("e1.4xlarge");
            static const int e1_8xlarge_HASH = Hasher::hashstring("e1.8xlarge");
            static const int d6_xlarge_4_HASH = Hasher::hashstring("d6.xlarge.4");
            static const int d6_2xlarge_4_HASH = Hasher::hashstring("d6.2xlarge.4");
            static const int d6_4xlarge_4_HASH = Hasher::hashstring("d6.4xlarge.4");
            static const int d6_6xlarge_4_HASH = Hasher::hashstring("d6.6xlarge.4");
            static const int d6_8xlarge_4_HASH = Hasher::hashstring("d6.8xlarge.4");
            static const int d6_12xlarge_4_HASH = Hasher::hashstring("d6.12xlarge.4");
            static const int d6_16xlarge_4_HASH = Hasher::hashstring("d6.16xlarge.4");
            static const int d6_18xlarge_4_HASH = Hasher::hashstring("d6.18xlarge.4");
            static const int d3_xlarge_8_HASH = Hasher::hashstring("d3.xlarge.8");
            static const int d3_2xlarge_8_HASH = Hasher::hashstring("d3.2xlarge.8");
            static const int d3_4xlarge_8_HASH = Hasher::hashstring("d3.4xlarge.8");
            static const int d3_6xlarge_8_HASH = Hasher::hashstring("d3.6xlarge.8");
            static const int d3_8xlarge_8_HASH = Hasher::hashstring("d3.8xlarge.8");
            static const int d3_12xlarge_8_HASH = Hasher::hashstring("d3.12xlarge.8");
            static const int d3_14xlarge_10_HASH = Hasher::hashstring("d3.14xlarge.10");
            static const int d2_xlarge_8_HASH = Hasher::hashstring("d2.xlarge.8");
            static const int d2_2xlarge_8_HASH = Hasher::hashstring("d2.2xlarge.8");
            static const int d2_4xlarge_8_HASH = Hasher::hashstring("d2.4xlarge.8");
            static const int d2_6xlarge_8_HASH = Hasher::hashstring("d2.6xlarge.8");
            static const int d2_8xlarge_8_HASH = Hasher::hashstring("d2.8xlarge.8");
            static const int d2_12xlarge_8_HASH = Hasher::hashstring("d2.12xlarge.8");
            static const int d1_xlarge_HASH = Hasher::hashstring("d1.xlarge");
            static const int d1_2xlarge_HASH = Hasher::hashstring("d1.2xlarge");
            static const int d1_4xlarge_HASH = Hasher::hashstring("d1.4xlarge");
            static const int d1_9xlarge_HASH = Hasher::hashstring("d1.9xlarge");
            static const int ir3_large_4_HASH = Hasher::hashstring("ir3.large.4");
            static const int ir3_xlarge_4_HASH = Hasher::hashstring("ir3.xlarge.4");
            static const int ir3_2xlarge_4_HASH = Hasher::hashstring("ir3.2xlarge.4");
            static const int ir3_4xlarge_4_HASH = Hasher::hashstring("ir3.4xlarge.4");
            static const int ir3_8xlarge_4_HASH = Hasher::hashstring("ir3.8xlarge.4");
            static const int i3_2xlarge_8_HASH = Hasher::hashstring("i3.2xlarge.8");
            static const int i3_4xlarge_8_HASH = Hasher::hashstring("i3.4xlarge.8");
            static const int i3_8xlarge_8_HASH = Hasher::hashstring("i3.8xlarge.8");
            static const int i3_12xlarge_8_HASH = Hasher::hashstring("i3.12xlarge.8");
            static const int i3_15xlarge_8_HASH = Hasher::hashstring("i3.15xlarge.8");
            static const int i3_16xlarge_8_HASH = Hasher::hashstring("i3.16xlarge.8");
            static const int h3_large_2_HASH = Hasher::hashstring("h3.large.2");
            static const int h3_xlarge_2_HASH = Hasher::hashstring("h3.xlarge.2");
            static const int h3_2xlarge_2_HASH = Hasher::hashstring("h3.2xlarge.2");
            static const int h3_3xlarge_2_HASH = Hasher::hashstring("h3.3xlarge.2");
            static const int h3_4xlarge_2_HASH = Hasher::hashstring("h3.4xlarge.2");
            static const int h3_6xlarge_2_HASH = Hasher::hashstring("h3.6xlarge.2");
            static const int h3_8xlarge_2_HASH = Hasher::hashstring("h3.8xlarge.2");
            static const int h3_large_4_HASH = Hasher::hashstring("h3.large.4");
            static const int h3_xlarge_4_HASH = Hasher::hashstring("h3.xlarge.4");
            static const int h3_2xlarge_4_HASH = Hasher::hashstring("h3.2xlarge.4");
            static const int h3_3xlarge_4_HASH = Hasher::hashstring("h3.3xlarge.4");
            static const int h3_4xlarge_4_HASH = Hasher::hashstring("h3.4xlarge.4");
            static const int h3_6xlarge_4_HASH = Hasher::hashstring("h3.6xlarge.4");
            static const int h3_8xlarge_4_HASH = Hasher::hashstring("h3.8xlarge.4");
            static const int hc2_large_2_HASH = Hasher::hashstring("hc2.large.2");
            static const int hc2_xlarge_2_HASH = Hasher::hashstring("hc2.xlarge.2");
            static const int hc2_2xlarge_2_HASH = Hasher::hashstring("hc2.2xlarge.2");
            static const int hc2_4xlarge_2_HASH = Hasher::hashstring("hc2.4xlarge.2");
            static const int hc2_8xlarge_2_HASH = Hasher::hashstring("hc2.8xlarge.2");
            static const int hc2_large_4_HASH = Hasher::hashstring("hc2.large.4");
            static const int hc2_xlarge_4_HASH = Hasher::hashstring("hc2.xlarge.4");
            static const int hc2_2xlarge_4_HASH = Hasher::hashstring("hc2.2xlarge.4");
            static const int hc2_4xlarge_4_HASH = Hasher::hashstring("hc2.4xlarge.4");
            static const int hc2_8xlarge_4_HASH = Hasher::hashstring("hc2.8xlarge.4");
            static const int h1_xlarge_4_HASH = Hasher::hashstring("h1.xlarge.4");
            static const int h1_2xlarge_4_HASH = Hasher::hashstring("h1.2xlarge.4");
            static const int h1_4xlarge_4_HASH = Hasher::hashstring("h1.4xlarge.4");
            static const int h1_8xlarge_4_HASH = Hasher::hashstring("h1.8xlarge.4");
            static const int h2_3xlarge_10_HASH = Hasher::hashstring("h2.3xlarge.10");
            static const int h2_3xlarge_20_HASH = Hasher::hashstring("h2.3xlarge.20");
            static const int g6v_2xlarge_2_HASH = Hasher::hashstring("g6v.2xlarge.2");
            static const int g6v_2xlarge_4_HASH = Hasher::hashstring("g6v.2xlarge.4");
            static const int g6v_4xlarge_4_HASH = Hasher::hashstring("g6v.4xlarge.4");
            static const int g6_6xlarge_4_HASH = Hasher::hashstring("g6.6xlarge.4");
            static const int g5_8xlarge_4_HASH = Hasher::hashstring("g5.8xlarge.4");
            static const int g3_4xlarge_4_HASH = Hasher::hashstring("g3.4xlarge.4");
            static const int g3_8xlarge_4_HASH = Hasher::hashstring("g3.8xlarge.4");
            static const int g1_xlarge_HASH = Hasher::hashstring("g1.xlarge");
            static const int g1_xlarge_4_HASH = Hasher::hashstring("g1.xlarge.4");
            static const int g1_2xlarge_HASH = Hasher::hashstring("g1.2xlarge");
            static const int g1_2xlarge_8_HASH = Hasher::hashstring("g1.2xlarge.8");
            static const int g1_4xlarge_HASH = Hasher::hashstring("g1.4xlarge");
            static const int p2vs_2xlarge_8_HASH = Hasher::hashstring("p2vs.2xlarge.8");
            static const int p2vs_4xlarge_8_HASH = Hasher::hashstring("p2vs.4xlarge.8");
            static const int p2vs_8xlarge_8_HASH = Hasher::hashstring("p2vs.8xlarge.8");
            static const int p2vs_16xlarge_8_HASH = Hasher::hashstring("p2vs.16xlarge.8");
            static const int p2s_2xlarge_8_HASH = Hasher::hashstring("p2s.2xlarge.8");
            static const int p2s_4xlarge_8_HASH = Hasher::hashstring("p2s.4xlarge.8");
            static const int p2s_8xlarge_8_HASH = Hasher::hashstring("p2s.8xlarge.8");
            static const int p2s_16xlarge_8_HASH = Hasher::hashstring("p2s.16xlarge.8");
            static const int p2v_2xlarge_8_HASH = Hasher::hashstring("p2v.2xlarge.8");
            static const int p2v_4xlarge_8_HASH = Hasher::hashstring("p2v.4xlarge.8");
            static const int p2v_8xlarge_8_HASH = Hasher::hashstring("p2v.8xlarge.8");
            static const int p2v_16xlarge_8_HASH = Hasher::hashstring("p2v.16xlarge.8");
            static const int p1_2xlarge_8_HASH = Hasher::hashstring("p1.2xlarge.8");
            static const int p1_4xlarge_8_HASH = Hasher::hashstring("p1.4xlarge.8");
            static const int p1_8xlarge_8_HASH = Hasher::hashstring("p1.8xlarge.8");
            static const int pi2_2xlarge_4_HASH = Hasher::hashstring("pi2.2xlarge.4");
            static const int pi2_4xlarge_4_HASH = Hasher::hashstring("pi2.4xlarge.4");
            static const int pi2_8xlarge_4_HASH = Hasher::hashstring("pi2.8xlarge.4");
            static const int pi1_2xlarge_4_HASH = Hasher::hashstring("pi1.2xlarge.4");
            static const int pi1_4xlarge_4_HASH = Hasher::hashstring("pi1.4xlarge.4");
            static const int pi1_8xlarge_4_HASH = Hasher::hashstring("pi1.8xlarge.4");
            static const int fp1_2xlarge_11_HASH = Hasher::hashstring("fp1.2xlarge.11");
            static const int fp1_8xlarge_11_HASH = Hasher::hashstring("fp1.8xlarge.11");
            static const int fp1_16xlarge_11_HASH = Hasher::hashstring("fp1.16xlarge.11");
            static const int fp1_8xlarge_8_HASH = Hasher::hashstring("fp1.8xlarge.8");
            static const int fp1_16xlarge_8_HASH = Hasher::hashstring("fp1.16xlarge.8");
            static const int fp1c_2xlarge_11_HASH = Hasher::hashstring("fp1c.2xlarge.11");
            static const int fp1c_8xlarge_11_HASH = Hasher::hashstring("fp1c.8xlarge.11");
            static const int fp1c_16xlarge_11_HASH = Hasher::hashstring("fp1c.16xlarge.11");
            static const int fp1c_8xlarge_8_HASH = Hasher::hashstring("fp1c.8xlarge.8");
            static const int fp1c_16xlarge_8_HASH = Hasher::hashstring("fp1c.16xlarge.8");
            static const int ai1s_large_4_HASH = Hasher::hashstring("ai1s.large.4");
            static const int ai1s_xlarge_4_HASH = Hasher::hashstring("ai1s.xlarge.4");
            static const int ai1s_2xlarge_4_HASH = Hasher::hashstring("ai1s.2xlarge.4");
            static const int ai1s_4xlarge_4_HASH = Hasher::hashstring("ai1s.4xlarge.4");
            static const int ai1s_8xlarge_4_HASH = Hasher::hashstring("ai1s.8xlarge.4");
            static const int ai1_large_4_HASH = Hasher::hashstring("ai1.large.4");
            static const int ai1_xlarge_4_HASH = Hasher::hashstring("ai1.xlarge.4");
            static const int ai1_2xlarge_4_HASH = Hasher::hashstring("ai1.2xlarge.4");
            static const int ai1_4xlarge_4_HASH = Hasher::hashstring("ai1.4xlarge.4");
            static const int ai1_8xlarge_4_HASH = Hasher::hashstring("ai1.8xlarge.4");
            static const int kc1_small_1_HASH = Hasher::hashstring("kc1.small.1");
            static const int kc1_large_2_HASH = Hasher::hashstring("kc1.large.2");
            static const int kc1_xlarge_2_HASH = Hasher::hashstring("kc1.xlarge.2");
            static const int kc1_2xlarge_2_HASH = Hasher::hashstring("kc1.2xlarge.2");
            static const int kc1_3xlarge_2_HASH = Hasher::hashstring("kc1.3xlarge.2");
            static const int kc1_4xlarge_2_HASH = Hasher::hashstring("kc1.4xlarge.2");
            static const int kc1_6xlarge_2_HASH = Hasher::hashstring("kc1.6xlarge.2");
            static const int kc1_8xlarge_2_HASH = Hasher::hashstring("kc1.8xlarge.2");
            static const int kc1_12xlarge_2_HASH = Hasher::hashstring("kc1.12xlarge.2");
            static const int kc1_15xlarge_2_HASH = Hasher::hashstring("kc1.15xlarge.2");
            static const int kc1_large_4_HASH = Hasher::hashstring("kc1.large.4");
            static const int kc1_xlarge_4_HASH = Hasher::hashstring("kc1.xlarge.4");
            static const int kc1_2xlarge_4_HASH = Hasher::hashstring("kc1.2xlarge.4");
            static const int kc1_3xlarge_4_HASH = Hasher::hashstring("kc1.3xlarge.4");
            static const int kc1_4xlarge_4_HASH = Hasher::hashstring("kc1.4xlarge.4");
            static const int kc1_6xlarge_4_HASH = Hasher::hashstring("kc1.6xlarge.4");
            static const int kc1_8xlarge_4_HASH = Hasher::hashstring("kc1.8xlarge.4");
            static const int kc1_12xlarge_4_HASH = Hasher::hashstring("kc1.12xlarge.4");
            static const int km1_large_8_HASH = Hasher::hashstring("km1.large.8");
            static const int km1_xlarge_8_HASH = Hasher::hashstring("km1.xlarge.8");
            static const int km1_2xlarge_8_HASH = Hasher::hashstring("km1.2xlarge.8");
            static const int km1_3xlarge_8_HASH = Hasher::hashstring("km1.3xlarge.8");
            static const int km1_4xlarge_8_HASH = Hasher::hashstring("km1.4xlarge.8");
            static const int km1_6xlarge_8_HASH = Hasher::hashstring("km1.6xlarge.8");
            static const int km1_8xlarge_8_HASH = Hasher::hashstring("km1.8xlarge.8");
            static const int km1_12xlarge_8_HASH = Hasher::hashstring("km1.12xlarge.8");
            static const int km1_15xlarge_8_HASH = Hasher::hashstring("km1.15xlarge.8");
            static const int ki1_2xlarge_4_HASH = Hasher::hashstring("ki1.2xlarge.4");
            static const int ki1_4xlarge_4_HASH = Hasher::hashstring("ki1.4xlarge.4");
            static const int ki1_6xlarge_4_HASH = Hasher::hashstring("ki1.6xlarge.4");
            static const int ki1_8xlarge_4_HASH = Hasher::hashstring("ki1.8xlarge.4");
            static const int ki1_12xlarge_4_HASH = Hasher::hashstring("ki1.12xlarge.4");
            static const int ki1_16xlarge_4_HASH = Hasher::hashstring("ki1.16xlarge.4");
            static const int kai1s_xlarge_1_HASH = Hasher::hashstring("kai1s.xlarge.1");
            static const int kai1s_2xlarge_1_HASH = Hasher::hashstring("kai1s.2xlarge.1");
            static const int kai1s_4xlarge_1_HASH = Hasher::hashstring("kai1s.4xlarge.1");
            static const int kai1s_3xlarge_2_HASH = Hasher::hashstring("kai1s.3xlarge.2");
            static const int kai1s_4xlarge_2_HASH = Hasher::hashstring("kai1s.4xlarge.2");
            static const int kai1s_6xlarge_2_HASH = Hasher::hashstring("kai1s.6xlarge.2");
            static const int kai1s_9xlarge_2_HASH = Hasher::hashstring("kai1s.9xlarge.2");
            static const int kai1s_12xlarge_2_HASH = Hasher::hashstring("kai1s.12xlarge.2");

            static bool GetEnumForNameHelper0(int hashCode, InstanceType& enumValue) // name compatible with aws
            {
              if (hashCode == s6_small_1_HASH)
              {
                enumValue = InstanceType::s6_small_1;
                return true;
              }
              else if (hashCode == s6_medium_2_HASH)
              {
                enumValue = InstanceType::s6_medium_2;
                return true;
              }
              else if (hashCode == s6_large_2_HASH)
              {
                enumValue = InstanceType::s6_large_2;
                return true;
              }
              else if (hashCode == s6_xlarge_2_HASH)
              {
                enumValue = InstanceType::s6_xlarge_2;
                return true;
              }
              else if (hashCode == s6_2xlarge_2_HASH)
              {
                enumValue = InstanceType::s6_2xlarge_2;
                return true;
              }
              else if (hashCode == s6_medium_4_HASH)
              {
                enumValue = InstanceType::s6_medium_4;
                return true;
              }
              else if (hashCode == s6_large_4_HASH)
              {
                enumValue = InstanceType::s6_large_4;
                return true;
              }
              else if (hashCode == s6_xlarge_4_HASH)
              {
                enumValue = InstanceType::s6_xlarge_4;
                return true;
              }
              else if (hashCode == s6_2xlarge_4_HASH)
              {
                enumValue = InstanceType::s6_2xlarge_4;
                return true;
              }
              else if (hashCode == sn3_small_1_HASH)
              {
                enumValue = InstanceType::sn3_small_1;
                return true;
              }
              else if (hashCode == sn3_medium_2_HASH)
              {
                enumValue = InstanceType::sn3_medium_2;
                return true;
              }
              else if (hashCode == sn3_large_2_HASH)
              {
                enumValue = InstanceType::sn3_large_2;
                return true;
              }
              else if (hashCode == sn3_xlarge_2_HASH)
              {
                enumValue = InstanceType::sn3_xlarge_2;
                return true;
              }
              else if (hashCode == sn3_2xlarge_2_HASH)
              {
                enumValue = InstanceType::sn3_2xlarge_2;
                return true;
              }
              else if (hashCode == sn3_4xlarge_2_HASH)
              {
                enumValue = InstanceType::sn3_4xlarge_2;
                return true;
              }
              else if (hashCode == sn3_medium_4_HASH)
              {
                enumValue = InstanceType::sn3_medium_4;
                return true;
              }
              else if (hashCode == sn3_large_4_HASH)
              {
                enumValue = InstanceType::sn3_large_4;
                return true;
              }
              else if (hashCode == sn3_xlarge_4_HASH)
              {
                enumValue = InstanceType::sn3_xlarge_4;
                return true;
              }
              else if (hashCode == sn3_2xlarge_4_HASH)
              {
                enumValue = InstanceType::sn3_2xlarge_4;
                return true;
              }
              else if (hashCode == sn3_4xlarge_4_HASH)
              {
                enumValue = InstanceType::sn3_4xlarge_4;
                return true;
              }
              else if (hashCode == s3_small_1_HASH)
              {
                enumValue = InstanceType::s3_small_1;
                return true;
              }
              else if (hashCode == s3_medium_2_HASH)
              {
                enumValue = InstanceType::s3_medium_2;
                return true;
              }
              else if (hashCode == s3_large_2_HASH)
              {
                enumValue = InstanceType::s3_large_2;
                return true;
              }
              else if (hashCode == s3_xlarge_2_HASH)
              {
                enumValue = InstanceType::s3_xlarge_2;
                return true;
              }
              else if (hashCode == s3_2xlarge_2_HASH)
              {
                enumValue = InstanceType::s3_2xlarge_2;
                return true;
              }
              else if (hashCode == s3_4xlarge_2_HASH)
              {
                enumValue = InstanceType::s3_4xlarge_2;
                return true;
              }
              else if (hashCode == s3_medium_4_HASH)
              {
                enumValue = InstanceType::s3_medium_4;
                return true;
              }
              else if (hashCode == s3_large_4_HASH)
              {
                enumValue = InstanceType::s3_large_4;
                return true;
              }
              else if (hashCode == s3_xlarge_4_HASH)
              {
                enumValue = InstanceType::s3_xlarge_4;
                return true;
              }
              else if (hashCode == s3_2xlarge_4_HASH)
              {
                enumValue = InstanceType::s3_2xlarge_4;
                return true;
              }
              else if (hashCode == s3_4xlarge_4_HASH)
              {
                enumValue = InstanceType::s3_4xlarge_4;
                return true;
              }
              else if (hashCode == s2_small_1_HASH)
              {
                enumValue = InstanceType::s2_small_1;
                return true;
              }
              else if (hashCode == s2_medium_2_HASH)
              {
                enumValue = InstanceType::s2_medium_2;
                return true;
              }
              else if (hashCode == s2_large_2_HASH)
              {
                enumValue = InstanceType::s2_large_2;
                return true;
              }
              else if (hashCode == s2_xlarge_2_HASH)
              {
                enumValue = InstanceType::s2_xlarge_2;
                return true;
              }
              else if (hashCode == s2_2xlarge_2_HASH)
              {
                enumValue = InstanceType::s2_2xlarge_2;
                return true;
              }
              else if (hashCode == s2_4xlarge_2_HASH)
              {
                enumValue = InstanceType::s2_4xlarge_2;
                return true;
              }
              else if (hashCode == s2_8xlarge_2_HASH)
              {
                enumValue = InstanceType::s2_8xlarge_2;
                return true;
              }
              else if (hashCode == s2_medium_4_HASH)
              {
                enumValue = InstanceType::s2_medium_4;
                return true;
              }
              else if (hashCode == s2_large_4_HASH)
              {
                enumValue = InstanceType::s2_large_4;
                return true;
              }
              else if (hashCode == s2_xlarge_4_HASH)
              {
                enumValue = InstanceType::s2_xlarge_4;
                return true;
              }
              else if (hashCode == s2_2xlarge_4_HASH)
              {
                enumValue = InstanceType::s2_2xlarge_4;
                return true;
              }
              else if (hashCode == s2_4xlarge_4_HASH)
              {
                enumValue = InstanceType::s2_4xlarge_4;
                return true;
              }
              else if (hashCode == s2_8xlarge_4_HASH)
              {
                enumValue = InstanceType::s2_8xlarge_4;
                return true;
              }
              else if (hashCode == s1_medium_HASH)
              {
                enumValue = InstanceType::s1_medium;
                return true;
              }
              else if (hashCode == s1_large_HASH)
              {
                enumValue = InstanceType::s1_large;
                return true;
              }
              else if (hashCode == s1_xlarge_HASH)
              {
                enumValue = InstanceType::s1_xlarge;
                return true;
              }
              else if (hashCode == s1_2xlarge_HASH)
              {
                enumValue = InstanceType::s1_2xlarge;
                return true;
              }
              else if (hashCode == s1_4xlarge_HASH)
              {
                enumValue = InstanceType::s1_4xlarge;
                return true;
              }
              else if (hashCode == s1_8xlarge_HASH)
              {
                enumValue = InstanceType::s1_8xlarge;
                return true;
              }
              else if (hashCode == c2_medium_HASH)
              {
                enumValue = InstanceType::c2_medium;
                return true;
              }
              else if (hashCode == c2_large_HASH)
              {
                enumValue = InstanceType::c2_large;
                return true;
              }
              else if (hashCode == c2_xlarge_HASH)
              {
                enumValue = InstanceType::c2_xlarge;
                return true;
              }
              else if (hashCode == c2_2xlarge_HASH)
              {
                enumValue = InstanceType::c2_2xlarge;
                return true;
              }
              else if (hashCode == c2_4xlarge_HASH)
              {
                enumValue = InstanceType::c2_4xlarge;
                return true;
              }
              else if (hashCode == c2_8xlarge_HASH)
              {
                enumValue = InstanceType::c2_8xlarge;
                return true;
              }
              else if (hashCode == c1_medium_HASH)
              {
                enumValue = InstanceType::c1_medium;
                return true;
              }
              else if (hashCode == c1_large_HASH)
              {
                enumValue = InstanceType::c1_large;
                return true;
              }
              else if (hashCode == c1_xlarge_HASH)
              {
                enumValue = InstanceType::c1_xlarge;
                return true;
              }
              else if (hashCode == c1_2xlarge_HASH)
              {
                enumValue = InstanceType::c1_2xlarge;
                return true;
              }
              else if (hashCode == c1_4xlarge_HASH)
              {
                enumValue = InstanceType::c1_4xlarge;
                return true;
              }
              else if (hashCode == c1_8xlarge_HASH)
              {
                enumValue = InstanceType::c1_8xlarge;
                return true;
              }
              else if (hashCode == c7_large_2_HASH)
              {
                enumValue = InstanceType::c7_large_2;
                return true;
              }
              else if (hashCode == c7_xlarge_2_HASH)
              {
                enumValue = InstanceType::c7_xlarge_2;
                return true;
              }
              else if (hashCode == c7_2xlarge_2_HASH)
              {
                enumValue = InstanceType::c7_2xlarge_2;
                return true;
              }
              else if (hashCode == c7_3xlarge_2_HASH)
              {
                enumValue = InstanceType::c7_3xlarge_2;
                return true;
              }
              else if (hashCode == c7_4xlarge_2_HASH)
              {
                enumValue = InstanceType::c7_4xlarge_2;
                return true;
              }
              else if (hashCode == c7_6xlarge_2_HASH)
              {
                enumValue = InstanceType::c7_6xlarge_2;
                return true;
              }
              else if (hashCode == c7_8xlarge_2_HASH)
              {
                enumValue = InstanceType::c7_8xlarge_2;
                return true;
              }
              else if (hashCode == c7_12xlarge_2_HASH)
              {
                enumValue = InstanceType::c7_12xlarge_2;
                return true;
              }
              else if (hashCode == c7_16xlarge_2_HASH)
              {
                enumValue = InstanceType::c7_16xlarge_2;
                return true;
              }
              else if (hashCode == c7_24xlarge_2_HASH)
              {
                enumValue = InstanceType::c7_24xlarge_2;
                return true;
              }
              else if (hashCode == c7_32xlarge_2_HASH)
              {
                enumValue = InstanceType::c7_32xlarge_2;
                return true;
              }
              else if (hashCode == c7_large_4_HASH)
              {
                enumValue = InstanceType::c7_large_4;
                return true;
              }
              else if (hashCode == c7_xlarge_4_HASH)
              {
                enumValue = InstanceType::c7_xlarge_4;
                return true;
              }
              else if (hashCode == c7_2xlarge_4_HASH)
              {
                enumValue = InstanceType::c7_2xlarge_4;
                return true;
              }
              else if (hashCode == c7_3xlarge_4_HASH)
              {
                enumValue = InstanceType::c7_3xlarge_4;
                return true;
              }
              else if (hashCode == c7_4xlarge_4_HASH)
              {
                enumValue = InstanceType::c7_4xlarge_4;
                return true;
              }
              else if (hashCode == c7_6xlarge_4_HASH)
              {
                enumValue = InstanceType::c7_6xlarge_4;
                return true;
              }
              else if (hashCode == c7_8xlarge_4_HASH)
              {
                enumValue = InstanceType::c7_8xlarge_4;
                return true;
              }
              else if (hashCode == c7_12xlarge_4_HASH)
              {
                enumValue = InstanceType::c7_12xlarge_4;
                return true;
              }
              else if (hashCode == c7_16xlarge_4_HASH)
              {
                enumValue = InstanceType::c7_16xlarge_4;
                return true;
              }
              else if (hashCode == c7_24xlarge_4_HASH)
              {
                enumValue = InstanceType::c7_24xlarge_4;
                return true;
              }
              else if (hashCode == c7_32xlarge_4_HASH)
              {
                enumValue = InstanceType::c7_32xlarge_4;
                return true;
              }
              else if (hashCode == c6s_large_2_HASH)
              {
                enumValue = InstanceType::c6s_large_2;
                return true;
              }
              else if (hashCode == c6s_xlarge_2_HASH)
              {
                enumValue = InstanceType::c6s_xlarge_2;
                return true;
              }
              else if (hashCode == c6s_2xlarge_2_HASH)
              {
                enumValue = InstanceType::c6s_2xlarge_2;
                return true;
              }
              else if (hashCode == c6s_3xlarge_2_HASH)
              {
                enumValue = InstanceType::c6s_3xlarge_2;
                return true;
              }
              else if (hashCode == c6s_4xlarge_2_HASH)
              {
                enumValue = InstanceType::c6s_4xlarge_2;
                return true;
              }
              else if (hashCode == c6s_6xlarge_2_HASH)
              {
                enumValue = InstanceType::c6s_6xlarge_2;
                return true;
              }
              else if (hashCode == c6s_8xlarge_2_HASH)
              {
                enumValue = InstanceType::c6s_8xlarge_2;
                return true;
              }
              else if (hashCode == c6s_12xlarge_2_HASH)
              {
                enumValue = InstanceType::c6s_12xlarge_2;
                return true;
              }
              else if (hashCode == c6s_16xlarge_2_HASH)
              {
                enumValue = InstanceType::c6s_16xlarge_2;
                return true;
              }
              else if (hashCode == c6_large_2_HASH)
              {
                enumValue = InstanceType::c6_large_2;
                return true;
              }
              else if (hashCode == c6_xlarge_2_HASH)
              {
                enumValue = InstanceType::c6_xlarge_2;
                return true;
              }
              else if (hashCode == c6_2xlarge_2_HASH)
              {
                enumValue = InstanceType::c6_2xlarge_2;
                return true;
              }
              else if (hashCode == c6_3xlarge_2_HASH)
              {
                enumValue = InstanceType::c6_3xlarge_2;
                return true;
              }
              else if (hashCode == c6_4xlarge_2_HASH)
              {
                enumValue = InstanceType::c6_4xlarge_2;
                return true;
              }
              else if (hashCode == c6_6xlarge_2_HASH)
              {
                enumValue = InstanceType::c6_6xlarge_2;
                return true;
              }
              else if (hashCode == c6_8xlarge_2_HASH)
              {
                enumValue = InstanceType::c6_8xlarge_2;
                return true;
              }
              else if (hashCode == c6_12xlarge_2_HASH)
              {
                enumValue = InstanceType::c6_12xlarge_2;
                return true;
              }
              else if (hashCode == c6_16xlarge_2_HASH)
              {
                enumValue = InstanceType::c6_16xlarge_2;
                return true;
              }
              else if (hashCode == c6_22xlarge_2_HASH)
              {
                enumValue = InstanceType::c6_22xlarge_2;
                return true;
              }
              else if (hashCode == c6_22xlarge_2_physical_HASH)
              {
                enumValue = InstanceType::c6_22xlarge_2_physical;
                return true;
              }
              else if (hashCode == c6_large_4_HASH)
              {
                enumValue = InstanceType::c6_large_4;
                return true;
              }
              else if (hashCode == c6_xlarge_4_HASH)
              {
                enumValue = InstanceType::c6_xlarge_4;
                return true;
              }
              else if (hashCode == c6_2xlarge_4_HASH)
              {
                enumValue = InstanceType::c6_2xlarge_4;
                return true;
              }
              else if (hashCode == c6_3xlarge_4_HASH)
              {
                enumValue = InstanceType::c6_3xlarge_4;
                return true;
              }
              else if (hashCode == c6_4xlarge_4_HASH)
              {
                enumValue = InstanceType::c6_4xlarge_4;
                return true;
              }
              else if (hashCode == c6_6xlarge_4_HASH)
              {
                enumValue = InstanceType::c6_6xlarge_4;
                return true;
              }
              else if (hashCode == c6_8xlarge_4_HASH)
              {
                enumValue = InstanceType::c6_8xlarge_4;
                return true;
              }
              else if (hashCode == c6_12xlarge_4_HASH)
              {
                enumValue = InstanceType::c6_12xlarge_4;
                return true;
              }
              else if (hashCode == c6_16xlarge_4_HASH)
              {
                enumValue = InstanceType::c6_16xlarge_4;
                return true;
              }
              else if (hashCode == c6_22xlarge_4_HASH)
              {
                enumValue = InstanceType::c6_22xlarge_4;
                return true;
              }
              else if (hashCode == c6_22xlarge_4_physical_HASH)
              {
                enumValue = InstanceType::c6_22xlarge_4_physical;
                return true;
              }
              else if (hashCode == c3ne_large_2_HASH)
              {
                enumValue = InstanceType::c3ne_large_2;
                return true;
              }
              else if (hashCode == c3ne_xlarge_2_HASH)
              {
                enumValue = InstanceType::c3ne_xlarge_2;
                return true;
              }
              else if (hashCode == c3ne_2xlarge_2_HASH)
              {
                enumValue = InstanceType::c3ne_2xlarge_2;
                return true;
              }
              else if (hashCode == c3ne_4xlarge_2_HASH)
              {
                enumValue = InstanceType::c3ne_4xlarge_2;
                return true;
              }
              else if (hashCode == c3ne_8xlarge_2_HASH)
              {
                enumValue = InstanceType::c3ne_8xlarge_2;
                return true;
              }
              else if (hashCode == c3ne_15xlarge_2_HASH)
              {
                enumValue = InstanceType::c3ne_15xlarge_2;
                return true;
              }
              else if (hashCode == c3ne_large_4_HASH)
              {
                enumValue = InstanceType::c3ne_large_4;
                return true;
              }
              else if (hashCode == c3ne_xlarge_4_HASH)
              {
                enumValue = InstanceType::c3ne_xlarge_4;
                return true;
              }
              else if (hashCode == c3ne_2xlarge_4_HASH)
              {
                enumValue = InstanceType::c3ne_2xlarge_4;
                return true;
              }
              else if (hashCode == c3ne_4xlarge_4_HASH)
              {
                enumValue = InstanceType::c3ne_4xlarge_4;
                return true;
              }
              else if (hashCode == c3ne_8xlarge_4_HASH)
              {
                enumValue = InstanceType::c3ne_8xlarge_4;
                return true;
              }
              else if (hashCode == c3ne_15xlarge_4_HASH)
              {
                enumValue = InstanceType::c3ne_15xlarge_4;
                return true;
              }
              else if (hashCode == c3_large_2_HASH)
              {
                enumValue = InstanceType::c3_large_2;
                return true;
              }
              else if (hashCode == c3_xlarge_2_HASH)
              {
                enumValue = InstanceType::c3_xlarge_2;
                return true;
              }
              else if (hashCode == c3_2xlarge_2_HASH)
              {
                enumValue = InstanceType::c3_2xlarge_2;
                return true;
              }
              else if (hashCode == c3_3xlarge_2_HASH)
              {
                enumValue = InstanceType::c3_3xlarge_2;
                return true;
              }
              else if (hashCode == c3_4xlarge_2_HASH)
              {
                enumValue = InstanceType::c3_4xlarge_2;
                return true;
              }
              else if (hashCode == c3_6xlarge_2_HASH)
              {
                enumValue = InstanceType::c3_6xlarge_2;
                return true;
              }
              else if (hashCode == c3_8xlarge_2_HASH)
              {
                enumValue = InstanceType::c3_8xlarge_2;
                return true;
              }
              else if (hashCode == c3_15xlarge_2_HASH)
              {
                enumValue = InstanceType::c3_15xlarge_2;
                return true;
              }
              else if (hashCode == c3_large_4_HASH)
              {
                enumValue = InstanceType::c3_large_4;
                return true;
              }
              else if (hashCode == c3_xlarge_4_HASH)
              {
                enumValue = InstanceType::c3_xlarge_4;
                return true;
              }
              else if (hashCode == c3_2xlarge_4_HASH)
              {
                enumValue = InstanceType::c3_2xlarge_4;
                return true;
              }
              else if (hashCode == c3_3xlarge_4_HASH)
              {
                enumValue = InstanceType::c3_3xlarge_4;
                return true;
              }
              else if (hashCode == c3_4xlarge_4_HASH)
              {
                enumValue = InstanceType::c3_4xlarge_4;
                return true;
              }
              else if (hashCode == c3_6xlarge_4_HASH)
              {
                enumValue = InstanceType::c3_6xlarge_4;
                return true;
              }
              else if (hashCode == c3_8xlarge_4_HASH)
              {
                enumValue = InstanceType::c3_8xlarge_4;
                return true;
              }
              else if (hashCode == c3_15xlarge_4_HASH)
              {
                enumValue = InstanceType::c3_15xlarge_4;
                return true;
              }
              else if (hashCode == t6_small_1_HASH)
              {
                enumValue = InstanceType::t6_small_1;
                return true;
              }
              else if (hashCode == t6_large_1_HASH)
              {
                enumValue = InstanceType::t6_large_1;
                return true;
              }
              else if (hashCode == t6_xlarge_1_HASH)
              {
                enumValue = InstanceType::t6_xlarge_1;
                return true;
              }
              else if (hashCode == t6_2xlarge_1_HASH)
              {
                enumValue = InstanceType::t6_2xlarge_1;
                return true;
              }
              else if (hashCode == t6_4xlarge_1_HASH)
              {
                enumValue = InstanceType::t6_4xlarge_1;
                return true;
              }
              else if (hashCode == t6_medium_2_HASH)
              {
                enumValue = InstanceType::t6_medium_2;
                return true;
              }
              else if (hashCode == t6_large_2_HASH)
              {
                enumValue = InstanceType::t6_large_2;
                return true;
              }
              else if (hashCode == t6_xlarge_2_HASH)
              {
                enumValue = InstanceType::t6_xlarge_2;
                return true;
              }
              else if (hashCode == t6_2xlarge_2_HASH)
              {
                enumValue = InstanceType::t6_2xlarge_2;
                return true;
              }
              else if (hashCode == t6_4xlarge_2_HASH)
              {
                enumValue = InstanceType::t6_4xlarge_2;
                return true;
              }
              else if (hashCode == t6_large_4_HASH)
              {
                enumValue = InstanceType::t6_large_4;
                return true;
              }
              else if (hashCode == t6_xlarge_4_HASH)
              {
                enumValue = InstanceType::t6_xlarge_4;
                return true;
              }
              else if (hashCode == t6_2xlarge_4_HASH)
              {
                enumValue = InstanceType::t6_2xlarge_4;
                return true;
              }
              else if (hashCode == m6_large_8_HASH)
              {
                enumValue = InstanceType::m6_large_8;
                return true;
              }
              else if (hashCode == m6_xlarge_8_HASH)
              {
                enumValue = InstanceType::m6_xlarge_8;
                return true;
              }
              else if (hashCode == m6_2xlarge_8_HASH)
              {
                enumValue = InstanceType::m6_2xlarge_8;
                return true;
              }
              else if (hashCode == m6_3xlarge_8_HASH)
              {
                enumValue = InstanceType::m6_3xlarge_8;
                return true;
              }
              else if (hashCode == m6_4xlarge_8_HASH)
              {
                enumValue = InstanceType::m6_4xlarge_8;
                return true;
              }
              else if (hashCode == m6_6xlarge_8_HASH)
              {
                enumValue = InstanceType::m6_6xlarge_8;
                return true;
              }
              else if (hashCode == m6_8xlarge_8_HASH)
              {
                enumValue = InstanceType::m6_8xlarge_8;
                return true;
              }
              else if (hashCode == m6_16xlarge_8_HASH)
              {
                enumValue = InstanceType::m6_16xlarge_8;
                return true;
              }
              else if (hashCode == m6_22xlarge_8_physical_HASH)
              {
                enumValue = InstanceType::m6_22xlarge_8_physical;
                return true;
              }
              else if (hashCode == m3ne_large_8_HASH)
              {
                enumValue = InstanceType::m3ne_large_8;
                return true;
              }
              else if (hashCode == m3ne_xlarge_8_HASH)
              {
                enumValue = InstanceType::m3ne_xlarge_8;
                return true;
              }
              else if (hashCode == m3ne_2xlarge_8_HASH)
              {
                enumValue = InstanceType::m3ne_2xlarge_8;
                return true;
              }
              else if (hashCode == m3ne_3xlarge_8_HASH)
              {
                enumValue = InstanceType::m3ne_3xlarge_8;
                return true;
              }
              else if (hashCode == m3ne_4xlarge_8_HASH)
              {
                enumValue = InstanceType::m3ne_4xlarge_8;
                return true;
              }
              else if (hashCode == m3ne_6xlarge_8_HASH)
              {
                enumValue = InstanceType::m3ne_6xlarge_8;
                return true;
              }
              else if (hashCode == m3ne_8xlarge_8_HASH)
              {
                enumValue = InstanceType::m3ne_8xlarge_8;
                return true;
              }
              else if (hashCode == m3ne_15xlarge_8_HASH)
              {
                enumValue = InstanceType::m3ne_15xlarge_8;
                return true;
              }
              else if (hashCode == m3_large_8_HASH)
              {
                enumValue = InstanceType::m3_large_8;
                return true;
              }
              else if (hashCode == m3_xlarge_8_HASH)
              {
                enumValue = InstanceType::m3_xlarge_8;
                return true;
              }
              else if (hashCode == m3_2xlarge_8_HASH)
              {
                enumValue = InstanceType::m3_2xlarge_8;
                return true;
              }
              else if (hashCode == m3_3xlarge_8_HASH)
              {
                enumValue = InstanceType::m3_3xlarge_8;
                return true;
              }
              else if (hashCode == m3_4xlarge_8_HASH)
              {
                enumValue = InstanceType::m3_4xlarge_8;
                return true;
              }
              else if (hashCode == m3_6xlarge_8_HASH)
              {
                enumValue = InstanceType::m3_6xlarge_8;
                return true;
              }
              else if (hashCode == m3_8xlarge_8_HASH)
              {
                enumValue = InstanceType::m3_8xlarge_8;
                return true;
              }
              else if (hashCode == m3_15xlarge_8_HASH)
              {
                enumValue = InstanceType::m3_15xlarge_8;
                return true;
              }
              else if (hashCode == m2_large_8_HASH)
              {
                enumValue = InstanceType::m2_large_8;
                return true;
              }
              else if (hashCode == m2_xlarge_8_HASH)
              {
                enumValue = InstanceType::m2_xlarge_8;
                return true;
              }
              else if (hashCode == m2_2xlarge_8_HASH)
              {
                enumValue = InstanceType::m2_2xlarge_8;
                return true;
              }
              else if (hashCode == m2_4xlarge_8_HASH)
              {
                enumValue = InstanceType::m2_4xlarge_8;
                return true;
              }
              else if (hashCode == m2_8xlarge_8_HASH)
              {
                enumValue = InstanceType::m2_8xlarge_8;
                return true;
              }
              else if (hashCode == m1_medium_HASH)
              {
                enumValue = InstanceType::m1_medium;
                return true;
              }
              else if (hashCode == m1_large_HASH)
              {
                enumValue = InstanceType::m1_large;
                return true;
              }
              else if (hashCode == m1_xlarge_HASH)
              {
                enumValue = InstanceType::m1_xlarge;
                return true;
              }
              else if (hashCode == m1_2xlarge_HASH)
              {
                enumValue = InstanceType::m1_2xlarge;
                return true;
              }
              else if (hashCode == m1_4xlarge_HASH)
              {
                enumValue = InstanceType::m1_4xlarge;
                return true;
              }
              else if (hashCode == e3_7xlarge_12_HASH)
              {
                enumValue = InstanceType::e3_7xlarge_12;
                return true;
              }
              else if (hashCode == e3_14xlarge_12_HASH)
              {
                enumValue = InstanceType::e3_14xlarge_12;
                return true;
              }
              else if (hashCode == e3_26xlarge_14_HASH)
              {
                enumValue = InstanceType::e3_26xlarge_14;
                return true;
              }
              else if (hashCode == e3_52xlarge_14_HASH)
              {
                enumValue = InstanceType::e3_52xlarge_14;
                return true;
              }
              else if (hashCode == e3_52xlarge_20_HASH)
              {
                enumValue = InstanceType::e3_52xlarge_20;
                return true;
              }
              else if (hashCode == et2_2xlarge_16_HASH)
              {
                enumValue = InstanceType::et2_2xlarge_16;
                return true;
              }
              else if (hashCode == et2_4xlarge_14_HASH)
              {
                enumValue = InstanceType::et2_4xlarge_14;
                return true;
              }
              else if (hashCode == et2_8xlarge_14_HASH)
              {
                enumValue = InstanceType::et2_8xlarge_14;
                return true;
              }
              else if (hashCode == e2_3xlarge_HASH)
              {
                enumValue = InstanceType::e2_3xlarge;
                return true;
              }
              else if (hashCode == e2_4xlarge_HASH)
              {
                enumValue = InstanceType::e2_4xlarge;
                return true;
              }
              else if (hashCode == e2_9xlarge_HASH)
              {
                enumValue = InstanceType::e2_9xlarge;
                return true;
              }
              else if (hashCode == e1_4xlarge_HASH)
              {
                enumValue = InstanceType::e1_4xlarge;
                return true;
              }
              else if (hashCode == e1_8xlarge_HASH)
              {
                enumValue = InstanceType::e1_8xlarge;
                return true;
              }
              else if (hashCode == d6_xlarge_4_HASH)
              {
                enumValue = InstanceType::d6_xlarge_4;
                return true;
              }
              else if (hashCode == d6_2xlarge_4_HASH)
              {
                enumValue = InstanceType::d6_2xlarge_4;
                return true;
              }
              else if (hashCode == d6_4xlarge_4_HASH)
              {
                enumValue = InstanceType::d6_4xlarge_4;
                return true;
              }
              else if (hashCode == d6_6xlarge_4_HASH)
              {
                enumValue = InstanceType::d6_6xlarge_4;
                return true;
              }
              else if (hashCode == d6_8xlarge_4_HASH)
              {
                enumValue = InstanceType::d6_8xlarge_4;
                return true;
              }
              else if (hashCode == d6_12xlarge_4_HASH)
              {
                enumValue = InstanceType::d6_12xlarge_4;
                return true;
              }
              else if (hashCode == d6_16xlarge_4_HASH)
              {
                enumValue = InstanceType::d6_16xlarge_4;
                return true;
              }
              else if (hashCode == d6_18xlarge_4_HASH)
              {
                enumValue = InstanceType::d6_18xlarge_4;
                return true;
              }
              else if (hashCode == d3_xlarge_8_HASH)
              {
                enumValue = InstanceType::d3_xlarge_8;
                return true;
              }
              else if (hashCode == d3_2xlarge_8_HASH)
              {
                enumValue = InstanceType::d3_2xlarge_8;
                return true;
              }
              else if (hashCode == d3_4xlarge_8_HASH)
              {
                enumValue = InstanceType::d3_4xlarge_8;
                return true;
              }
              else if (hashCode == d3_6xlarge_8_HASH)
              {
                enumValue = InstanceType::d3_6xlarge_8;
                return true;
              }
              else if (hashCode == d3_8xlarge_8_HASH)
              {
                enumValue = InstanceType::d3_8xlarge_8;
                return true;
              }
              else if (hashCode == d3_12xlarge_8_HASH)
              {
                enumValue = InstanceType::d3_12xlarge_8;
                return true;
              }
              else if (hashCode == d3_14xlarge_10_HASH)
              {
                enumValue = InstanceType::d3_14xlarge_10;
                return true;
              }
              else if (hashCode == d2_xlarge_8_HASH)
              {
                enumValue = InstanceType::d2_xlarge_8;
                return true;
              }
              else if (hashCode == d2_2xlarge_8_HASH)
              {
                enumValue = InstanceType::d2_2xlarge_8;
                return true;
              }
              else if (hashCode == d2_4xlarge_8_HASH)
              {
                enumValue = InstanceType::d2_4xlarge_8;
                return true;
              }
              else if (hashCode == d2_6xlarge_8_HASH)
              {
                enumValue = InstanceType::d2_6xlarge_8;
                return true;
              }
              else if (hashCode == d2_8xlarge_8_HASH)
              {
                enumValue = InstanceType::d2_8xlarge_8;
                return true;
              }
              else if (hashCode == d2_12xlarge_8_HASH)
              {
                enumValue = InstanceType::d2_12xlarge_8;
                return true;
              }
              else if (hashCode == d1_xlarge_HASH)
              {
                enumValue = InstanceType::d1_xlarge;
                return true;
              }
              else if (hashCode == d1_2xlarge_HASH)
              {
                enumValue = InstanceType::d1_2xlarge;
                return true;
              }
              else if (hashCode == d1_4xlarge_HASH)
              {
                enumValue = InstanceType::d1_4xlarge;
                return true;
              }
              else if (hashCode == d1_9xlarge_HASH)
              {
                enumValue = InstanceType::d1_9xlarge;
                return true;
              }
              else if (hashCode == ir3_large_4_HASH)
              {
                enumValue = InstanceType::ir3_large_4;
                return true;
              }
              else if (hashCode == ir3_xlarge_4_HASH)
              {
                enumValue = InstanceType::ir3_xlarge_4;
                return true;
              }
              else if (hashCode == ir3_2xlarge_4_HASH)
              {
                enumValue = InstanceType::ir3_2xlarge_4;
                return true;
              }
              else if (hashCode == ir3_4xlarge_4_HASH)
              {
                enumValue = InstanceType::ir3_4xlarge_4;
                return true;
              }
              else if (hashCode == ir3_8xlarge_4_HASH)
              {
                enumValue = InstanceType::ir3_8xlarge_4;
                return true;
              }
              else if (hashCode == i3_2xlarge_8_HASH)
              {
                enumValue = InstanceType::i3_2xlarge_8;
                return true;
              }
              else if (hashCode == i3_4xlarge_8_HASH)
              {
                enumValue = InstanceType::i3_4xlarge_8;
                return true;
              }
              else if (hashCode == i3_8xlarge_8_HASH)
              {
                enumValue = InstanceType::i3_8xlarge_8;
                return true;
              }
              else if (hashCode == i3_12xlarge_8_HASH)
              {
                enumValue = InstanceType::i3_12xlarge_8;
                return true;
              }
              else if (hashCode == i3_15xlarge_8_HASH)
              {
                enumValue = InstanceType::i3_15xlarge_8;
                return true;
              }
              else if (hashCode == i3_16xlarge_8_HASH)
              {
                enumValue = InstanceType::i3_16xlarge_8;
                return true;
              }
              else if (hashCode == h3_large_2_HASH)
              {
                enumValue = InstanceType::h3_large_2;
                return true;
              }
              else if (hashCode == h3_xlarge_2_HASH)
              {
                enumValue = InstanceType::h3_xlarge_2;
                return true;
              }
              else if (hashCode == h3_2xlarge_2_HASH)
              {
                enumValue = InstanceType::h3_2xlarge_2;
                return true;
              }
              else if (hashCode == h3_3xlarge_2_HASH)
              {
                enumValue = InstanceType::h3_3xlarge_2;
                return true;
              }
              else if (hashCode == h3_4xlarge_2_HASH)
              {
                enumValue = InstanceType::h3_4xlarge_2;
                return true;
              }
              else if (hashCode == h3_6xlarge_2_HASH)
              {
                enumValue = InstanceType::h3_6xlarge_2;
                return true;
              }
              else if (hashCode == h3_8xlarge_2_HASH)
              {
                enumValue = InstanceType::h3_8xlarge_2;
                return true;
              }
              else if (hashCode == h3_large_4_HASH)
              {
                enumValue = InstanceType::h3_large_4;
                return true;
              }
              else if (hashCode == h3_xlarge_4_HASH)
              {
                enumValue = InstanceType::h3_xlarge_4;
                return true;
              }
              else if (hashCode == h3_2xlarge_4_HASH)
              {
                enumValue = InstanceType::h3_2xlarge_4;
                return true;
              }
              else if (hashCode == h3_3xlarge_4_HASH)
              {
                enumValue = InstanceType::h3_3xlarge_4;
                return true;
              }
              else if (hashCode == h3_4xlarge_4_HASH)
              {
                enumValue = InstanceType::h3_4xlarge_4;
                return true;
              }
              else if (hashCode == h3_6xlarge_4_HASH)
              {
                enumValue = InstanceType::h3_6xlarge_4;
                return true;
              }
              else if (hashCode == h3_8xlarge_4_HASH)
              {
                enumValue = InstanceType::h3_8xlarge_4;
                return true;
              }
              else if (hashCode == hc2_large_2_HASH)
              {
                enumValue = InstanceType::hc2_large_2;
                return true;
              }
              else if (hashCode == hc2_xlarge_2_HASH)
              {
                enumValue = InstanceType::hc2_xlarge_2;
                return true;
              }
              else if (hashCode == hc2_2xlarge_2_HASH)
              {
                enumValue = InstanceType::hc2_2xlarge_2;
                return true;
              }
              else if (hashCode == hc2_4xlarge_2_HASH)
              {
                enumValue = InstanceType::hc2_4xlarge_2;
                return true;
              }
              else if (hashCode == hc2_8xlarge_2_HASH)
              {
                enumValue = InstanceType::hc2_8xlarge_2;
                return true;
              }
              else if (hashCode == hc2_large_4_HASH)
              {
                enumValue = InstanceType::hc2_large_4;
                return true;
              }
              else if (hashCode == hc2_xlarge_4_HASH)
              {
                enumValue = InstanceType::hc2_xlarge_4;
                return true;
              }
              else if (hashCode == hc2_2xlarge_4_HASH)
              {
                enumValue = InstanceType::hc2_2xlarge_4;
                return true;
              }
              else if (hashCode == hc2_4xlarge_4_HASH)
              {
                enumValue = InstanceType::hc2_4xlarge_4;
                return true;
              }
              else if (hashCode == hc2_8xlarge_4_HASH)
              {
                enumValue = InstanceType::hc2_8xlarge_4;
                return true;
              }
              else if (hashCode == h1_xlarge_4_HASH)
              {
                enumValue = InstanceType::h1_xlarge_4;
                return true;
              }
              else if (hashCode == h1_2xlarge_4_HASH)
              {
                enumValue = InstanceType::h1_2xlarge_4;
                return true;
              }
              else if (hashCode == h1_4xlarge_4_HASH)
              {
                enumValue = InstanceType::h1_4xlarge_4;
                return true;
              }
              else if (hashCode == h1_8xlarge_4_HASH)
              {
                enumValue = InstanceType::h1_8xlarge_4;
                return true;
              }
              else if (hashCode == h2_3xlarge_10_HASH)
              {
                enumValue = InstanceType::h2_3xlarge_10;
                return true;
              }
              else if (hashCode == h2_3xlarge_20_HASH)
              {
                enumValue = InstanceType::h2_3xlarge_20;
                return true;
              }
              else if (hashCode == g6v_2xlarge_2_HASH)
              {
                enumValue = InstanceType::g6v_2xlarge_2;
                return true;
              }
              else if (hashCode == g6v_2xlarge_4_HASH)
              {
                enumValue = InstanceType::g6v_2xlarge_4;
                return true;
              }
              else if (hashCode == g6v_4xlarge_4_HASH)
              {
                enumValue = InstanceType::g6v_4xlarge_4;
                return true;
              }
              else if (hashCode == g6_6xlarge_4_HASH)
              {
                enumValue = InstanceType::g6_6xlarge_4;
                return true;
              }
              else if (hashCode == g5_8xlarge_4_HASH)
              {
                enumValue = InstanceType::g5_8xlarge_4;
                return true;
              }
              else if (hashCode == g3_4xlarge_4_HASH)
              {
                enumValue = InstanceType::g3_4xlarge_4;
                return true;
              }
              else if (hashCode == g3_8xlarge_4_HASH)
              {
                enumValue = InstanceType::g3_8xlarge_4;
                return true;
              }
              else if (hashCode == g1_xlarge_HASH)
              {
                enumValue = InstanceType::g1_xlarge;
                return true;
              }
              else if (hashCode == g1_xlarge_4_HASH)
              {
                enumValue = InstanceType::g1_xlarge_4;
                return true;
              }
              else if (hashCode == g1_2xlarge_HASH)
              {
                enumValue = InstanceType::g1_2xlarge;
                return true;
              }
              else if (hashCode == g1_2xlarge_8_HASH)
              {
                enumValue = InstanceType::g1_2xlarge_8;
                return true;
              }
              else if (hashCode == g1_4xlarge_HASH)
              {
                enumValue = InstanceType::g1_4xlarge;
                return true;
              }
              else if (hashCode == p2vs_2xlarge_8_HASH)
              {
                enumValue = InstanceType::p2vs_2xlarge_8;
                return true;
              }
              else if (hashCode == p2vs_4xlarge_8_HASH)
              {
                enumValue = InstanceType::p2vs_4xlarge_8;
                return true;
              }
              else if (hashCode == p2vs_8xlarge_8_HASH)
              {
                enumValue = InstanceType::p2vs_8xlarge_8;
                return true;
              }
              else if (hashCode == p2vs_16xlarge_8_HASH)
              {
                enumValue = InstanceType::p2vs_16xlarge_8;
                return true;
              }
              else if (hashCode == p2s_2xlarge_8_HASH)
              {
                enumValue = InstanceType::p2s_2xlarge_8;
                return true;
              }
              else if (hashCode == p2s_4xlarge_8_HASH)
              {
                enumValue = InstanceType::p2s_4xlarge_8;
                return true;
              }
              else if (hashCode == p2s_8xlarge_8_HASH)
              {
                enumValue = InstanceType::p2s_8xlarge_8;
                return true;
              }
              else if (hashCode == p2s_16xlarge_8_HASH)
              {
                enumValue = InstanceType::p2s_16xlarge_8;
                return true;
              }
              else if (hashCode == p2v_2xlarge_8_HASH)
              {
                enumValue = InstanceType::p2v_2xlarge_8;
                return true;
              }
              else if (hashCode == p2v_4xlarge_8_HASH)
              {
                enumValue = InstanceType::p2v_4xlarge_8;
                return true;
              }
              else if (hashCode == p2v_8xlarge_8_HASH)
              {
                enumValue = InstanceType::p2v_8xlarge_8;
                return true;
              }
              else if (hashCode == p2v_16xlarge_8_HASH)
              {
                enumValue = InstanceType::p2v_16xlarge_8;
                return true;
              }
              else if (hashCode == p1_2xlarge_8_HASH)
              {
                enumValue = InstanceType::p1_2xlarge_8;
                return true;
              }
              else if (hashCode == p1_4xlarge_8_HASH)
              {
                enumValue = InstanceType::p1_4xlarge_8;
                return true;
              }
              else if (hashCode == p1_8xlarge_8_HASH)
              {
                enumValue = InstanceType::p1_8xlarge_8;
                return true;
              }
              else if (hashCode == pi2_2xlarge_4_HASH)
              {
                enumValue = InstanceType::pi2_2xlarge_4;
                return true;
              }
              else if (hashCode == pi2_4xlarge_4_HASH)
              {
                enumValue = InstanceType::pi2_4xlarge_4;
                return true;
              }
              else if (hashCode == pi2_8xlarge_4_HASH)
              {
                enumValue = InstanceType::pi2_8xlarge_4;
                return true;
              }
              else if (hashCode == pi1_2xlarge_4_HASH)
              {
                enumValue = InstanceType::pi1_2xlarge_4;
                return true;
              }
              else if (hashCode == pi1_4xlarge_4_HASH)
              {
                enumValue = InstanceType::pi1_4xlarge_4;
                return true;
              }
              else if (hashCode == pi1_8xlarge_4_HASH)
              {
                enumValue = InstanceType::pi1_8xlarge_4;
                return true;
              }
              else if (hashCode == fp1_2xlarge_11_HASH)
              {
                enumValue = InstanceType::fp1_2xlarge_11;
                return true;
              }
              else if (hashCode == fp1_8xlarge_11_HASH)
              {
                enumValue = InstanceType::fp1_8xlarge_11;
                return true;
              }
              else if (hashCode == fp1_16xlarge_11_HASH)
              {
                enumValue = InstanceType::fp1_16xlarge_11;
                return true;
              }
              else if (hashCode == fp1_8xlarge_8_HASH)
              {
                enumValue = InstanceType::fp1_8xlarge_8;
                return true;
              }
              else if (hashCode == fp1_16xlarge_8_HASH)
              {
                enumValue = InstanceType::fp1_16xlarge_8;
                return true;
              }
              else if (hashCode == fp1c_2xlarge_11_HASH)
              {
                enumValue = InstanceType::fp1c_2xlarge_11;
                return true;
              }
              else if (hashCode == fp1c_8xlarge_11_HASH)
              {
                enumValue = InstanceType::fp1c_8xlarge_11;
                return true;
              }
              else if (hashCode == fp1c_16xlarge_11_HASH)
              {
                enumValue = InstanceType::fp1c_16xlarge_11;
                return true;
              }
              else if (hashCode == fp1c_8xlarge_8_HASH)
              {
                enumValue = InstanceType::fp1c_8xlarge_8;
                return true;
              }
              else if (hashCode == fp1c_16xlarge_8_HASH)
              {
                enumValue = InstanceType::fp1c_16xlarge_8;
                return true;
              }
              else if (hashCode == ai1s_large_4_HASH)
              {
                enumValue = InstanceType::ai1s_large_4;
                return true;
              }
              else if (hashCode == ai1s_xlarge_4_HASH)
              {
                enumValue = InstanceType::ai1s_xlarge_4;
                return true;
              }
              else if (hashCode == ai1s_2xlarge_4_HASH)
              {
                enumValue = InstanceType::ai1s_2xlarge_4;
                return true;
              }
              else if (hashCode == ai1s_4xlarge_4_HASH)
              {
                enumValue = InstanceType::ai1s_4xlarge_4;
                return true;
              }
              else if (hashCode == ai1s_8xlarge_4_HASH)
              {
                enumValue = InstanceType::ai1s_8xlarge_4;
                return true;
              }
              else if (hashCode == ai1_large_4_HASH)
              {
                enumValue = InstanceType::ai1_large_4;
                return true;
              }
              else if (hashCode == ai1_xlarge_4_HASH)
              {
                enumValue = InstanceType::ai1_xlarge_4;
                return true;
              }
              else if (hashCode == ai1_2xlarge_4_HASH)
              {
                enumValue = InstanceType::ai1_2xlarge_4;
                return true;
              }
              else if (hashCode == ai1_4xlarge_4_HASH)
              {
                enumValue = InstanceType::ai1_4xlarge_4;
                return true;
              }
              else if (hashCode == ai1_8xlarge_4_HASH)
              {
                enumValue = InstanceType::ai1_8xlarge_4;
                return true;
              }
              else if (hashCode == kc1_small_1_HASH)
              {
                enumValue = InstanceType::kc1_small_1;
                return true;
              }
              else if (hashCode == kc1_large_2_HASH)
              {
                enumValue = InstanceType::kc1_large_2;
                return true;
              }
              else if (hashCode == kc1_xlarge_2_HASH)
              {
                enumValue = InstanceType::kc1_xlarge_2;
                return true;
              }
              else if (hashCode == kc1_2xlarge_2_HASH)
              {
                enumValue = InstanceType::kc1_2xlarge_2;
                return true;
              }
              else if (hashCode == kc1_3xlarge_2_HASH)
              {
                enumValue = InstanceType::kc1_3xlarge_2;
                return true;
              }
              else if (hashCode == kc1_4xlarge_2_HASH)
              {
                enumValue = InstanceType::kc1_4xlarge_2;
                return true;
              }
              else if (hashCode == kc1_6xlarge_2_HASH)
              {
                enumValue = InstanceType::kc1_6xlarge_2;
                return true;
              }
              else if (hashCode == kc1_8xlarge_2_HASH)
              {
                enumValue = InstanceType::kc1_8xlarge_2;
                return true;
              }
              else if (hashCode == kc1_12xlarge_2_HASH)
              {
                enumValue = InstanceType::kc1_12xlarge_2;
                return true;
              }
              else if (hashCode == kc1_15xlarge_2_HASH)
              {
                enumValue = InstanceType::kc1_15xlarge_2;
                return true;
              }
              else if (hashCode == kc1_large_4_HASH)
              {
                enumValue = InstanceType::kc1_large_4;
                return true;
              }
              else if (hashCode == kc1_xlarge_4_HASH)
              {
                enumValue = InstanceType::kc1_xlarge_4;
                return true;
              }
              else if (hashCode == kc1_2xlarge_4_HASH)
              {
                enumValue = InstanceType::kc1_2xlarge_4;
                return true;
              }
              else if (hashCode == kc1_3xlarge_4_HASH)
              {
                enumValue = InstanceType::kc1_3xlarge_4;
                return true;
              }
              else if (hashCode == kc1_4xlarge_4_HASH)
              {
                enumValue = InstanceType::kc1_4xlarge_4;
                return true;
              }
              else if (hashCode == kc1_6xlarge_4_HASH)
              {
                enumValue = InstanceType::kc1_6xlarge_4;
                return true;
              }
              else if (hashCode == kc1_8xlarge_4_HASH)
              {
                enumValue = InstanceType::kc1_8xlarge_4;
                return true;
              }
              else if (hashCode == kc1_12xlarge_4_HASH)
              {
                enumValue = InstanceType::kc1_12xlarge_4;
                return true;
              }
              else if (hashCode == km1_large_8_HASH)
              {
                enumValue = InstanceType::km1_large_8;
                return true;
              }
              else if (hashCode == km1_xlarge_8_HASH)
              {
                enumValue = InstanceType::km1_xlarge_8;
                return true;
              }
              else if (hashCode == km1_2xlarge_8_HASH)
              {
                enumValue = InstanceType::km1_2xlarge_8;
                return true;
              }
              else if (hashCode == km1_3xlarge_8_HASH)
              {
                enumValue = InstanceType::km1_3xlarge_8;
                return true;
              }
              else if (hashCode == km1_4xlarge_8_HASH)
              {
                enumValue = InstanceType::km1_4xlarge_8;
                return true;
              }
              else if (hashCode == km1_6xlarge_8_HASH)
              {
                enumValue = InstanceType::km1_6xlarge_8;
                return true;
              }
              else if (hashCode == km1_8xlarge_8_HASH)
              {
                enumValue = InstanceType::km1_8xlarge_8;
                return true;
              }
              else if (hashCode == km1_12xlarge_8_HASH)
              {
                enumValue = InstanceType::km1_12xlarge_8;
                return true;
              }
              else if (hashCode == km1_15xlarge_8_HASH)
              {
                enumValue = InstanceType::km1_15xlarge_8;
                return true;
              }
              else if (hashCode == ki1_2xlarge_4_HASH)
              {
                enumValue = InstanceType::ki1_2xlarge_4;
                return true;
              }
              else if (hashCode == ki1_4xlarge_4_HASH)
              {
                enumValue = InstanceType::ki1_4xlarge_4;
                return true;
              }
              else if (hashCode == ki1_6xlarge_4_HASH)
              {
                enumValue = InstanceType::ki1_6xlarge_4;
                return true;
              }
              else if (hashCode == ki1_8xlarge_4_HASH)
              {
                enumValue = InstanceType::ki1_8xlarge_4;
                return true;
              }
              else if (hashCode == ki1_12xlarge_4_HASH)
              {
                enumValue = InstanceType::ki1_12xlarge_4;
                return true;
              }
              else if (hashCode == ki1_16xlarge_4_HASH)
              {
                enumValue = InstanceType::ki1_16xlarge_4;
                return true;
              }
              else if (hashCode == kai1s_xlarge_1_HASH)
              {
                enumValue = InstanceType::kai1s_xlarge_1;
                return true;
              }
              else if (hashCode == kai1s_2xlarge_1_HASH)
              {
                enumValue = InstanceType::kai1s_2xlarge_1;
                return true;
              }
              else if (hashCode == kai1s_4xlarge_1_HASH)
              {
                enumValue = InstanceType::kai1s_4xlarge_1;
                return true;
              }
              else if (hashCode == kai1s_3xlarge_2_HASH)
              {
                enumValue = InstanceType::kai1s_3xlarge_2;
                return true;
              }
              else if (hashCode == kai1s_4xlarge_2_HASH)
              {
                enumValue = InstanceType::kai1s_4xlarge_2;
                return true;
              }
              else if (hashCode == kai1s_6xlarge_2_HASH)
              {
                enumValue = InstanceType::kai1s_6xlarge_2;
                return true;
              }
              else if (hashCode == kai1s_9xlarge_2_HASH)
              {
                enumValue = InstanceType::kai1s_9xlarge_2;
                return true;
              }
              else if (hashCode == kai1s_12xlarge_2_HASH)
              {
                enumValue = InstanceType::kai1s_12xlarge_2;
                return true;
              }
            }

            static bool GetNameForEnumHelper0(InstanceType enumValue, std::string& value)
            {
              switch(enumValue)
              {
              case InstanceType::s6_small_1:
                value = "s6.small.1";
                return true;
              case InstanceType::s6_medium_2:
                value = "s6.medium.2";
                return true;
              case InstanceType::s6_large_2:
                value = "s6.large.2";
                return true;
              case InstanceType::s6_xlarge_2:
                value = "s6.xlarge.2";
                return true;
              case InstanceType::s6_2xlarge_2:
                value = "s6.2xlarge.2";
                return true;
              case InstanceType::s6_medium_4:
                value = "s6.medium.4";
                return true;
              case InstanceType::s6_large_4:
                value = "s6.large.4";
                return true;
              case InstanceType::s6_xlarge_4:
                value = "s6.xlarge.4";
                return true;
              case InstanceType::s6_2xlarge_4:
                value = "s6.2xlarge.4";
                return true;
              case InstanceType::sn3_small_1:
                value = "sn3.small.1";
                return true;
              case InstanceType::sn3_medium_2:
                value = "sn3.medium.2";
                return true;
              case InstanceType::sn3_large_2:
                value = "sn3.large.2";
                return true;
              case InstanceType::sn3_xlarge_2:
                value = "sn3.xlarge.2";
                return true;
              case InstanceType::sn3_2xlarge_2:
                value = "sn3.2xlarge.2";
                return true;
              case InstanceType::sn3_4xlarge_2:
                value = "sn3.4xlarge.2";
                return true;
              case InstanceType::sn3_medium_4:
                value = "sn3.medium.4";
                return true;
              case InstanceType::sn3_large_4:
                value = "sn3.large.4";
                return true;
              case InstanceType::sn3_xlarge_4:
                value = "sn3.xlarge.4";
                return true;
              case InstanceType::sn3_2xlarge_4:
                value = "sn3.2xlarge.4";
                return true;
              case InstanceType::sn3_4xlarge_4:
                value = "sn3.4xlarge.4";
                return true;
              case InstanceType::s3_small_1:
                value = "s3.small.1";
                return true;
              case InstanceType::s3_medium_2:
                value = "s3.medium.2";
                return true;
              case InstanceType::s3_large_2:
                value = "s3.large.2";
                return true;
              case InstanceType::s3_xlarge_2:
                value = "s3.xlarge.2";
                return true;
              case InstanceType::s3_2xlarge_2:
                value = "s3.2xlarge.2";
                return true;
              case InstanceType::s3_4xlarge_2:
                value = "s3.4xlarge.2";
                return true;
              case InstanceType::s3_medium_4:
                value = "s3.medium.4";
                return true;
              case InstanceType::s3_large_4:
                value = "s3.large.4";
                return true;
              case InstanceType::s3_xlarge_4:
                value = "s3.xlarge.4";
                return true;
              case InstanceType::s3_2xlarge_4:
                value = "s3.2xlarge.4";
                return true;
              case InstanceType::s3_4xlarge_4:
                value = "s3.4xlarge.4";
                return true;
              case InstanceType::s2_small_1:
                value = "s2.small.1";
                return true;
              case InstanceType::s2_medium_2:
                value = "s2.medium.2";
                return true;
              case InstanceType::s2_large_2:
                value = "s2.large.2";
                return true;
              case InstanceType::s2_xlarge_2:
                value = "s2.xlarge.2";
                return true;
              case InstanceType::s2_2xlarge_2:
                value = "s2.2xlarge.2";
                return true;
              case InstanceType::s2_4xlarge_2:
                value = "s2.4xlarge.2";
                return true;
              case InstanceType::s2_8xlarge_2:
                value = "s2.8xlarge.2";
                return true;
              case InstanceType::s2_medium_4:
                value = "s2.medium.4";
                return true;
              case InstanceType::s2_large_4:
                value = "s2.large.4";
                return true;
              case InstanceType::s2_xlarge_4:
                value = "s2.xlarge.4";
                return true;
              case InstanceType::s2_2xlarge_4:
                value = "s2.2xlarge.4";
                return true;
              case InstanceType::s2_4xlarge_4:
                value = "s2.4xlarge.4";
                return true;
              case InstanceType::s2_8xlarge_4:
                value = "s2.8xlarge.4";
                return true;
              case InstanceType::s1_medium:
                value = "s1.medium";
                return true;
              case InstanceType::s1_large:
                value = "s1.large";
                return true;
              case InstanceType::s1_xlarge:
                value = "s1.xlarge";
                return true;
              case InstanceType::s1_2xlarge:
                value = "s1.2xlarge";
                return true;
              case InstanceType::s1_4xlarge:
                value = "s1.4xlarge";
                return true;
              case InstanceType::s1_8xlarge:
                value = "s1.8xlarge";
                return true;
              case InstanceType::c2_medium:
                value = "c2.medium";
                return true;
              case InstanceType::c2_large:
                value = "c2.large";
                return true;
              case InstanceType::c2_xlarge:
                value = "c2.xlarge";
                return true;
              case InstanceType::c2_2xlarge:
                value = "c2.2xlarge";
                return true;
              case InstanceType::c2_4xlarge:
                value = "c2.4xlarge";
                return true;
              case InstanceType::c2_8xlarge:
                value = "c2.8xlarge";
                return true;
              case InstanceType::c1_medium:
                value = "c1.medium";
                return true;
              case InstanceType::c1_large:
                value = "c1.large";
                return true;
              case InstanceType::c1_xlarge:
                value = "c1.xlarge";
                return true;
              case InstanceType::c1_2xlarge:
                value = "c1.2xlarge";
                return true;
              case InstanceType::c1_4xlarge:
                value = "c1.4xlarge";
                return true;
              case InstanceType::c1_8xlarge:
                value = "c1.8xlarge";
                return true;
              case InstanceType::c7_large_2:
                value = "c7.large.2";
                return true;
              case InstanceType::c7_xlarge_2:
                value = "c7.xlarge.2";
                return true;
              case InstanceType::c7_2xlarge_2:
                value = "c7.2xlarge.2";
                return true;
              case InstanceType::c7_3xlarge_2:
                value = "c7.3xlarge.2";
                return true;
              case InstanceType::c7_4xlarge_2:
                value = "c7.4xlarge.2";
                return true;
              case InstanceType::c7_6xlarge_2:
                value = "c7.6xlarge.2";
                return true;
              case InstanceType::c7_8xlarge_2:
                value = "c7.8xlarge.2";
                return true;
              case InstanceType::c7_12xlarge_2:
                value = "c7.12xlarge.2";
                return true;
              case InstanceType::c7_16xlarge_2:
                value = "c7.16xlarge.2";
                return true;
              case InstanceType::c7_24xlarge_2:
                value = "c7.24xlarge.2";
                return true;
              case InstanceType::c7_32xlarge_2:
                value = "c7.32xlarge.2";
                return true;
              case InstanceType::c7_large_4:
                value = "c7.large.4";
                return true;
              case InstanceType::c7_xlarge_4:
                value = "c7.xlarge.4";
                return true;
              case InstanceType::c7_2xlarge_4:
                value = "c7.2xlarge.4";
                return true;
              case InstanceType::c7_3xlarge_4:
                value = "c7.3xlarge.4";
                return true;
              case InstanceType::c7_4xlarge_4:
                value = "c7.4xlarge.4";
                return true;
              case InstanceType::c7_6xlarge_4:
                value = "c7.6xlarge.4";
                return true;
              case InstanceType::c7_8xlarge_4:
                value = "c7.8xlarge.4";
                return true;
              case InstanceType::c7_12xlarge_4:
                value = "c7.12xlarge.4";
                return true;
              case InstanceType::c7_16xlarge_4:
                value = "c7.16xlarge.4";
                return true;
              case InstanceType::c7_24xlarge_4:
                value = "c7.24xlarge.4";
                return true;
              case InstanceType::c7_32xlarge_4:
                value = "c7.32xlarge.4";
                return true;
              case InstanceType::c6s_large_2:
                value = "c6s.large.2";
                return true;
              case InstanceType::c6s_xlarge_2:
                value = "c6s.xlarge.2";
                return true;
              case InstanceType::c6s_2xlarge_2:
                value = "c6s.2xlarge.2";
                return true;
              case InstanceType::c6s_3xlarge_2:
                value = "c6s.3xlarge.2";
                return true;
              case InstanceType::c6s_4xlarge_2:
                value = "c6s.4xlarge.2";
                return true;
              case InstanceType::c6s_6xlarge_2:
                value = "c6s.6xlarge.2";
                return true;
              case InstanceType::c6s_8xlarge_2:
                value = "c6s.8xlarge.2";
                return true;
              case InstanceType::c6s_12xlarge_2:
                value = "c6s.12xlarge.2";
                return true;
              case InstanceType::c6s_16xlarge_2:
                value = "c6s.16xlarge.2";
                return true;
              case InstanceType::c6_large_2:
                value = "c6.large.2";
                return true;
              case InstanceType::c6_xlarge_2:
                value = "c6.xlarge.2";
                return true;
              case InstanceType::c6_2xlarge_2:
                value = "c6.2xlarge.2";
                return true;
              case InstanceType::c6_3xlarge_2:
                value = "c6.3xlarge.2";
                return true;
              case InstanceType::c6_4xlarge_2:
                value = "c6.4xlarge.2";
                return true;
              case InstanceType::c6_6xlarge_2:
                value = "c6.6xlarge.2";
                return true;
              case InstanceType::c6_8xlarge_2:
                value = "c6.8xlarge.2";
                return true;
              case InstanceType::c6_12xlarge_2:
                value = "c6.12xlarge.2";
                return true;
              case InstanceType::c6_16xlarge_2:
                value = "c6.16xlarge.2";
                return true;
              case InstanceType::c6_22xlarge_2:
                value = "c6.22xlarge.2";
                return true;
              case InstanceType::c6_22xlarge_2_physical:
                value = "c6.22xlarge.2.physical";
                return true;
              case InstanceType::c6_large_4:
                value = "c6.large.4";
                return true;
              case InstanceType::c6_xlarge_4:
                value = "c6.xlarge.4";
                return true;
              case InstanceType::c6_2xlarge_4:
                value = "c6.2xlarge.4";
                return true;
              case InstanceType::c6_3xlarge_4:
                value = "c6.3xlarge.4";
                return true;
              case InstanceType::c6_4xlarge_4:
                value = "c6.4xlarge.4";
                return true;
              case InstanceType::c6_6xlarge_4:
                value = "c6.6xlarge.4";
                return true;
              case InstanceType::c6_8xlarge_4:
                value = "c6.8xlarge.4";
                return true;
              case InstanceType::c6_12xlarge_4:
                value = "c6.12xlarge.4";
                return true;
              case InstanceType::c6_16xlarge_4:
                value = "c6.16xlarge.4";
                return true;
              case InstanceType::c6_22xlarge_4:
                value = "c6.22xlarge.4";
                return true;
              case InstanceType::c6_22xlarge_4_physical:
                value = "c6.22xlarge.4.physical";
                return true;
              case InstanceType::c3ne_large_2:
                value = "c3ne.large.2";
                return true;
              case InstanceType::c3ne_xlarge_2:
                value = "c3ne.xlarge.2";
                return true;
              case InstanceType::c3ne_2xlarge_2:
                value = "c3ne.2xlarge.2";
                return true;
              case InstanceType::c3ne_4xlarge_2:
                value = "c3ne.4xlarge.2";
                return true;
              case InstanceType::c3ne_8xlarge_2:
                value = "c3ne.8xlarge.2";
                return true;
              case InstanceType::c3ne_15xlarge_2:
                value = "c3ne.15xlarge.2";
                return true;
              case InstanceType::c3ne_large_4:
                value = "c3ne.large.4";
                return true;
              case InstanceType::c3ne_xlarge_4:
                value = "c3ne.xlarge.4";
                return true;
              case InstanceType::c3ne_2xlarge_4:
                value = "c3ne.2xlarge.4";
                return true;
              case InstanceType::c3ne_4xlarge_4:
                value = "c3ne.4xlarge.4";
                return true;
              case InstanceType::c3ne_8xlarge_4:
                value = "c3ne.8xlarge.4";
                return true;
              case InstanceType::c3ne_15xlarge_4:
                value = "c3ne.15xlarge.4";
                return true;
              case InstanceType::c3_large_2:
                value = "c3.large.2";
                return true;
              case InstanceType::c3_xlarge_2:
                value = "c3.xlarge.2";
                return true;
              case InstanceType::c3_2xlarge_2:
                value = "c3.2xlarge.2";
                return true;
              case InstanceType::c3_3xlarge_2:
                value = "c3.3xlarge.2";
                return true;
              case InstanceType::c3_4xlarge_2:
                value = "c3.4xlarge.2";
                return true;
              case InstanceType::c3_6xlarge_2:
                value = "c3.6xlarge.2";
                return true;
              case InstanceType::c3_8xlarge_2:
                value = "c3.8xlarge.2";
                return true;
              case InstanceType::c3_15xlarge_2:
                value = "c3.15xlarge.2";
                return true;
              case InstanceType::c3_large_4:
                value = "c3.large.4";
                return true;
              case InstanceType::c3_xlarge_4:
                value = "c3.xlarge.4";
                return true;
              case InstanceType::c3_2xlarge_4:
                value = "c3.2xlarge.4";
                return true;
              case InstanceType::c3_3xlarge_4:
                value = "c3.3xlarge.4";
                return true;
              case InstanceType::c3_4xlarge_4:
                value = "c3.4xlarge.4";
                return true;
              case InstanceType::c3_6xlarge_4:
                value = "c3.6xlarge.4";
                return true;
              case InstanceType::c3_8xlarge_4:
                value = "c3.8xlarge.4";
                return true;
              case InstanceType::c3_15xlarge_4:
                value = "c3.15xlarge.4";
                return true;
              case InstanceType::t6_small_1:
                value = "t6.small.1";
                return true;
              case InstanceType::t6_large_1:
                value = "t6.large.1";
                return true;
              case InstanceType::t6_xlarge_1:
                value = "t6.xlarge.1";
                return true;
              case InstanceType::t6_2xlarge_1:
                value = "t6.2xlarge.1";
                return true;
              case InstanceType::t6_4xlarge_1:
                value = "t6.4xlarge.1";
                return true;
              case InstanceType::t6_medium_2:
                value = "t6.medium.2";
                return true;
              case InstanceType::t6_large_2:
                value = "t6.large.2";
                return true;
              case InstanceType::t6_xlarge_2:
                value = "t6.xlarge.2";
                return true;
              case InstanceType::t6_2xlarge_2:
                value = "t6.2xlarge.2";
                return true;
              case InstanceType::t6_4xlarge_2:
                value = "t6.4xlarge.2";
                return true;
              case InstanceType::t6_large_4:
                value = "t6.large.4";
                return true;
              case InstanceType::t6_xlarge_4:
                value = "t6.xlarge.4";
                return true;
              case InstanceType::t6_2xlarge_4:
                value = "t6.2xlarge.4";
                return true;
              case InstanceType::m6_large_8:
                value = "m6.large.8";
                return true;
              case InstanceType::m6_xlarge_8:
                value = "m6.xlarge.8";
                return true;
              case InstanceType::m6_2xlarge_8:
                value = "m6.2xlarge.8";
                return true;
              case InstanceType::m6_3xlarge_8:
                value = "m6.3xlarge.8";
                return true;
              case InstanceType::m6_4xlarge_8:
                value = "m6.4xlarge.8";
                return true;
              case InstanceType::m6_6xlarge_8:
                value = "m6.6xlarge.8";
                return true;
              case InstanceType::m6_8xlarge_8:
                value = "m6.8xlarge.8";
                return true;
              case InstanceType::m6_16xlarge_8:
                value = "m6.16xlarge.8";
                return true;
              case InstanceType::m6_22xlarge_8_physical:
                value = "m6.22xlarge.8.physical";
                return true;
              case InstanceType::m3ne_large_8:
                value = "m3ne.large.8";
                return true;
              case InstanceType::m3ne_xlarge_8:
                value = "m3ne.xlarge.8";
                return true;
              case InstanceType::m3ne_2xlarge_8:
                value = "m3ne.2xlarge.8";
                return true;
              case InstanceType::m3ne_3xlarge_8:
                value = "m3ne.3xlarge.8";
                return true;
              case InstanceType::m3ne_4xlarge_8:
                value = "m3ne.4xlarge.8";
                return true;
              case InstanceType::m3ne_6xlarge_8:
                value = "m3ne.6xlarge.8";
                return true;
              case InstanceType::m3ne_8xlarge_8:
                value = "m3ne.8xlarge.8";
                return true;
              case InstanceType::m3ne_15xlarge_8:
                value = "m3ne.15xlarge.8";
                return true;
              case InstanceType::m3_large_8:
                value = "m3.large.8";
                return true;
              case InstanceType::m3_xlarge_8:
                value = "m3.xlarge.8";
                return true;
              case InstanceType::m3_2xlarge_8:
                value = "m3.2xlarge.8";
                return true;
              case InstanceType::m3_3xlarge_8:
                value = "m3.3xlarge.8";
                return true;
              case InstanceType::m3_4xlarge_8:
                value = "m3.4xlarge.8";
                return true;
              case InstanceType::m3_6xlarge_8:
                value = "m3.6xlarge.8";
                return true;
              case InstanceType::m3_8xlarge_8:
                value = "m3.8xlarge.8";
                return true;
              case InstanceType::m3_15xlarge_8:
                value = "m3.15xlarge.8";
                return true;
              case InstanceType::m2_large_8:
                value = "m2.large.8";
                return true;
              case InstanceType::m2_xlarge_8:
                value = "m2.xlarge.8";
                return true;
              case InstanceType::m2_2xlarge_8:
                value = "m2.2xlarge.8";
                return true;
              case InstanceType::m2_4xlarge_8:
                value = "m2.4xlarge.8";
                return true;
              case InstanceType::m2_8xlarge_8:
                value = "m2.8xlarge.8";
                return true;
              case InstanceType::m1_medium:
                value = "m1.medium";
                return true;
              case InstanceType::m1_large:
                value = "m1.large";
                return true;
              case InstanceType::m1_xlarge:
                value = "m1.xlarge";
                return true;
              case InstanceType::m1_2xlarge:
                value = "m1.2xlarge";
                return true;
              case InstanceType::m1_4xlarge:
                value = "m1.4xlarge";
                return true;
              case InstanceType::e3_7xlarge_12:
                value = "e3.7xlarge.12";
                return true;
              case InstanceType::e3_14xlarge_12:
                value = "e3.14xlarge.12";
                return true;
              case InstanceType::e3_26xlarge_14:
                value = "e3.26xlarge.14";
                return true;
              case InstanceType::e3_52xlarge_14:
                value = "e3.52xlarge.14";
                return true;
              case InstanceType::e3_52xlarge_20:
                value = "e3.52xlarge.20";
                return true;
              case InstanceType::et2_2xlarge_16:
                value = "et2.2xlarge.16";
                return true;
              case InstanceType::et2_4xlarge_14:
                value = "et2.4xlarge.14";
                return true;
              case InstanceType::et2_8xlarge_14:
                value = "et2.8xlarge.14";
                return true;
              case InstanceType::e2_3xlarge:
                value = "e2.3xlarge";
                return true;
              case InstanceType::e2_4xlarge:
                value = "e2.4xlarge";
                return true;
              case InstanceType::e2_9xlarge:
                value = "e2.9xlarge";
                return true;
              case InstanceType::e1_4xlarge:
                value = "e1.4xlarge";
                return true;
              case InstanceType::e1_8xlarge:
                value = "e1.8xlarge";
                return true;
              case InstanceType::d6_xlarge_4:
                value = "d6.xlarge.4";
                return true;
              case InstanceType::d6_2xlarge_4:
                value = "d6.2xlarge.4";
                return true;
              case InstanceType::d6_4xlarge_4:
                value = "d6.4xlarge.4";
                return true;
              case InstanceType::d6_6xlarge_4:
                value = "d6.6xlarge.4";
                return true;
              case InstanceType::d6_8xlarge_4:
                value = "d6.8xlarge.4";
                return true;
              case InstanceType::d6_12xlarge_4:
                value = "d6.12xlarge.4";
                return true;
              case InstanceType::d6_16xlarge_4:
                value = "d6.16xlarge.4";
                return true;
              case InstanceType::d6_18xlarge_4:
                value = "d6.18xlarge.4";
                return true;
              case InstanceType::d3_xlarge_8:
                value = "d3.xlarge.8";
                return true;
              case InstanceType::d3_2xlarge_8:
                value = "d3.2xlarge.8";
                return true;
              case InstanceType::d3_4xlarge_8:
                value = "d3.4xlarge.8";
                return true;
              case InstanceType::d3_6xlarge_8:
                value = "d3.6xlarge.8";
                return true;
              case InstanceType::d3_8xlarge_8:
                value = "d3.8xlarge.8";
                return true;
              case InstanceType::d3_12xlarge_8:
                value = "d3.12xlarge.8";
                return true;
              case InstanceType::d3_14xlarge_10:
                value = "d3.14xlarge.10";
                return true;
              case InstanceType::d2_xlarge_8:
                value = "d2.xlarge.8";
                return true;
              case InstanceType::d2_2xlarge_8:
                value = "d2.2xlarge.8";
                return true;
              case InstanceType::d2_4xlarge_8:
                value = "d2.4xlarge.8";
                return true;
              case InstanceType::d2_6xlarge_8:
                value = "d2.6xlarge.8";
                return true;
              case InstanceType::d2_8xlarge_8:
                value = "d2.8xlarge.8";
                return true;
              case InstanceType::d2_12xlarge_8:
                value = "d2.12xlarge.8";
                return true;
              case InstanceType::d1_xlarge:
                value = "d1.xlarge";
                return true;
              case InstanceType::d1_2xlarge:
                value = "d1.2xlarge";
                return true;
              case InstanceType::d1_4xlarge:
                value = "d1.4xlarge";
                return true;
              case InstanceType::d1_9xlarge:
                value = "d1.9xlarge";
                return true;
              case InstanceType::ir3_large_4:
                value = "ir3.large.4";
                return true;
              case InstanceType::ir3_xlarge_4:
                value = "ir3.xlarge.4";
                return true;
              case InstanceType::ir3_2xlarge_4:
                value = "ir3.2xlarge.4";
                return true;
              case InstanceType::ir3_4xlarge_4:
                value = "ir3.4xlarge.4";
                return true;
              case InstanceType::ir3_8xlarge_4:
                value = "ir3.8xlarge.4";
                return true;
              case InstanceType::i3_2xlarge_8:
                value = "i3.2xlarge.8";
                return true;
              case InstanceType::i3_4xlarge_8:
                value = "i3.4xlarge.8";
                return true;
              case InstanceType::i3_8xlarge_8:
                value = "i3.8xlarge.8";
                return true;
              case InstanceType::i3_12xlarge_8:
                value = "i3.12xlarge.8";
                return true;
              case InstanceType::i3_15xlarge_8:
                value = "i3.15xlarge.8";
                return true;
              case InstanceType::i3_16xlarge_8:
                value = "i3.16xlarge.8";
                return true;
              case InstanceType::h3_large_2:
                value = "h3.large.2";
                return true;
              case InstanceType::h3_xlarge_2:
                value = "h3.xlarge.2";
                return true;
              case InstanceType::h3_2xlarge_2:
                value = "h3.2xlarge.2";
                return true;
              case InstanceType::h3_3xlarge_2:
                value = "h3.3xlarge.2";
                return true;
              case InstanceType::h3_4xlarge_2:
                value = "h3.4xlarge.2";
                return true;
              case InstanceType::h3_6xlarge_2:
                value = "h3.6xlarge.2";
                return true;
              case InstanceType::h3_8xlarge_2:
                value = "h3.8xlarge.2";
                return true;
              case InstanceType::h3_large_4:
                value = "h3.large.4";
                return true;
              case InstanceType::h3_xlarge_4:
                value = "h3.xlarge.4";
                return true;
              case InstanceType::h3_2xlarge_4:
                value = "h3.2xlarge.4";
                return true;
              case InstanceType::h3_3xlarge_4:
                value = "h3.3xlarge.4";
                return true;
              case InstanceType::h3_4xlarge_4:
                value = "h3.4xlarge.4";
                return true;
              case InstanceType::h3_6xlarge_4:
                value = "h3.6xlarge.4";
                return true;
              case InstanceType::h3_8xlarge_4:
                value = "h3.8xlarge.4";
                return true;
              case InstanceType::hc2_large_2:
                value = "hc2.large.2";
                return true;
              case InstanceType::hc2_xlarge_2:
                value = "hc2.xlarge.2";
                return true;
              case InstanceType::hc2_2xlarge_2:
                value = "hc2.2xlarge.2";
                return true;
              case InstanceType::hc2_4xlarge_2:
                value = "hc2.4xlarge.2";
                return true;
              case InstanceType::hc2_8xlarge_2:
                value = "hc2.8xlarge.2";
                return true;
              case InstanceType::hc2_large_4:
                value = "hc2.large.4";
                return true;
              case InstanceType::hc2_xlarge_4:
                value = "hc2.xlarge.4";
                return true;
              case InstanceType::hc2_2xlarge_4:
                value = "hc2.2xlarge.4";
                return true;
              case InstanceType::hc2_4xlarge_4:
                value = "hc2.4xlarge.4";
                return true;
              case InstanceType::hc2_8xlarge_4:
                value = "hc2.8xlarge.4";
                return true;
              case InstanceType::h1_xlarge_4:
                value = "h1.xlarge.4";
                return true;
              case InstanceType::h1_2xlarge_4:
                value = "h1.2xlarge.4";
                return true;
              case InstanceType::h1_4xlarge_4:
                value = "h1.4xlarge.4";
                return true;
              case InstanceType::h1_8xlarge_4:
                value = "h1.8xlarge.4";
                return true;
              case InstanceType::h2_3xlarge_10:
                value = "h2.3xlarge.10";
                return true;
              case InstanceType::h2_3xlarge_20:
                value = "h2.3xlarge.20";
                return true;
              case InstanceType::g6v_2xlarge_2:
                value = "g6v.2xlarge.2";
                return true;
              case InstanceType::g6v_2xlarge_4:
                value = "g6v.2xlarge.4";
                return true;
              case InstanceType::g6v_4xlarge_4:
                value = "g6v.4xlarge.4";
                return true;
              case InstanceType::g6_6xlarge_4:
                value = "g6.6xlarge.4";
                return true;
              case InstanceType::g5_8xlarge_4:
                value = "g5.8xlarge.4";
                return true;
              case InstanceType::g3_4xlarge_4:
                value = "g3.4xlarge.4";
                return true;
              case InstanceType::g3_8xlarge_4:
                value = "g3.8xlarge.4";
                return true;
              case InstanceType::g1_xlarge:
                value = "g1.xlarge";
                return true;
              case InstanceType::g1_xlarge_4:
                value = "g1.xlarge.4";
                return true;
              case InstanceType::g1_2xlarge:
                value = "g1.2xlarge";
                return true;
              case InstanceType::g1_2xlarge_8:
                value = "g1.2xlarge.8";
                return true;
              case InstanceType::g1_4xlarge:
                value = "g1.4xlarge";
                return true;
              case InstanceType::p2vs_2xlarge_8:
                value = "p2vs.2xlarge.8";
                return true;
              case InstanceType::p2vs_4xlarge_8:
                value = "p2vs.4xlarge.8";
                return true;
              case InstanceType::p2vs_8xlarge_8:
                value = "p2vs.8xlarge.8";
                return true;
              case InstanceType::p2vs_16xlarge_8:
                value = "p2vs.16xlarge.8";
                return true;
              case InstanceType::p2s_2xlarge_8:
                value = "p2s.2xlarge.8";
                return true;
              case InstanceType::p2s_4xlarge_8:
                value = "p2s.4xlarge.8";
                return true;
              case InstanceType::p2s_8xlarge_8:
                value = "p2s.8xlarge.8";
                return true;
              case InstanceType::p2s_16xlarge_8:
                value = "p2s.16xlarge.8";
                return true;
              case InstanceType::p2v_2xlarge_8:
                value = "p2v.2xlarge.8";
                return true;
              case InstanceType::p2v_4xlarge_8:
                value = "p2v.4xlarge.8";
                return true;
              case InstanceType::p2v_8xlarge_8:
                value = "p2v.8xlarge.8";
                return true;
              case InstanceType::p2v_16xlarge_8:
                value = "p2v.16xlarge.8";
                return true;
              case InstanceType::p1_2xlarge_8:
                value = "p1.2xlarge.8";
                return true;
              case InstanceType::p1_4xlarge_8:
                value = "p1.4xlarge.8";
                return true;
              case InstanceType::p1_8xlarge_8:
                value = "p1.8xlarge.8";
                return true;
              case InstanceType::pi2_2xlarge_4:
                value = "pi2.2xlarge.4";
                return true;
              case InstanceType::pi2_4xlarge_4:
                value = "pi2.4xlarge.4";
                return true;
              case InstanceType::pi2_8xlarge_4:
                value = "pi2.8xlarge.4";
                return true;
              case InstanceType::pi1_2xlarge_4:
                value = "pi1.2xlarge.4";
                return true;
              case InstanceType::pi1_4xlarge_4:
                value = "pi1.4xlarge.4";
                return true;
              case InstanceType::pi1_8xlarge_4:
                value = "pi1.8xlarge.4";
                return true;
              case InstanceType::fp1_2xlarge_11:
                value = "fp1.2xlarge.11";
                return true;
              case InstanceType::fp1_8xlarge_11:
                value = "fp1.8xlarge.11";
                return true;
              case InstanceType::fp1_16xlarge_11:
                value = "fp1.16xlarge.11";
                return true;
              case InstanceType::fp1_8xlarge_8:
                value = "fp1.8xlarge.8";
                return true;
              case InstanceType::fp1_16xlarge_8:
                value = "fp1.16xlarge.8";
                return true;
              case InstanceType::fp1c_2xlarge_11:
                value = "fp1c.2xlarge.11";
                return true;
              case InstanceType::fp1c_8xlarge_11:
                value = "fp1c.8xlarge.11";
                return true;
              case InstanceType::fp1c_16xlarge_11:
                value = "fp1c.16xlarge.11";
                return true;
              case InstanceType::fp1c_8xlarge_8:
                value = "fp1c.8xlarge.8";
                return true;
              case InstanceType::fp1c_16xlarge_8:
                value = "fp1c.16xlarge.8";
                return true;
              case InstanceType::ai1s_large_4:
                value = "ai1s.large.4";
                return true;
              case InstanceType::ai1s_xlarge_4:
                value = "ai1s.xlarge.4";
                return true;
              case InstanceType::ai1s_2xlarge_4:
                value = "ai1s.2xlarge.4";
                return true;
              case InstanceType::ai1s_4xlarge_4:
                value = "ai1s.4xlarge.4";
                return true;
              case InstanceType::ai1s_8xlarge_4:
                value = "ai1s.8xlarge.4";
                return true;
              case InstanceType::ai1_large_4:
                value = "ai1.large.4";
                return true;
              case InstanceType::ai1_xlarge_4:
                value = "ai1.xlarge.4";
                return true;
              case InstanceType::ai1_2xlarge_4:
                value = "ai1.2xlarge.4";
                return true;
              case InstanceType::ai1_4xlarge_4:
                value = "ai1.4xlarge.4";
                return true;
              case InstanceType::ai1_8xlarge_4:
                value = "ai1.8xlarge.4";
                return true;
              case InstanceType::kc1_small_1:
                value = "kc1.small.1";
                return true;
              case InstanceType::kc1_large_2:
                value = "kc1.large.2";
                return true;
              case InstanceType::kc1_xlarge_2:
                value = "kc1.xlarge.2";
                return true;
              case InstanceType::kc1_2xlarge_2:
                value = "kc1.2xlarge.2";
                return true;
              case InstanceType::kc1_3xlarge_2:
                value = "kc1.3xlarge.2";
                return true;
              case InstanceType::kc1_4xlarge_2:
                value = "kc1.4xlarge.2";
                return true;
              case InstanceType::kc1_6xlarge_2:
                value = "kc1.6xlarge.2";
                return true;
              case InstanceType::kc1_8xlarge_2:
                value = "kc1.8xlarge.2";
                return true;
              case InstanceType::kc1_12xlarge_2:
                value = "kc1.12xlarge.2";
                return true;
              case InstanceType::kc1_15xlarge_2:
                value = "kc1.15xlarge.2";
                return true;
              case InstanceType::kc1_large_4:
                value = "kc1.large.4";
                return true;
              case InstanceType::kc1_xlarge_4:
                value = "kc1.xlarge.4";
                return true;
              case InstanceType::kc1_2xlarge_4:
                value = "kc1.2xlarge.4";
                return true;
              case InstanceType::kc1_3xlarge_4:
                value = "kc1.3xlarge.4";
                return true;
              case InstanceType::kc1_4xlarge_4:
                value = "kc1.4xlarge.4";
                return true;
              case InstanceType::kc1_6xlarge_4:
                value = "kc1.6xlarge.4";
                return true;
              case InstanceType::kc1_8xlarge_4:
                value = "kc1.8xlarge.4";
                return true;
              case InstanceType::kc1_12xlarge_4:
                value = "kc1.12xlarge.4";
                return true;
              case InstanceType::km1_large_8:
                value = "km1.large.8";
                return true;
              case InstanceType::km1_xlarge_8:
                value = "km1.xlarge.8";
                return true;
              case InstanceType::km1_2xlarge_8:
                value = "km1.2xlarge.8";
                return true;
              case InstanceType::km1_3xlarge_8:
                value = "km1.3xlarge.8";
                return true;
              case InstanceType::km1_4xlarge_8:
                value = "km1.4xlarge.8";
                return true;
              case InstanceType::km1_6xlarge_8:
                value = "km1.6xlarge.8";
                return true;
              case InstanceType::km1_8xlarge_8:
                value = "km1.8xlarge.8";
                return true;
              case InstanceType::km1_12xlarge_8:
                value = "km1.12xlarge.8";
                return true;
              case InstanceType::km1_15xlarge_8:
                value = "km1.15xlarge.8";
                return true;
              case InstanceType::ki1_2xlarge_4:
                value = "ki1.2xlarge.4";
                return true;
              case InstanceType::ki1_4xlarge_4:
                value = "ki1.4xlarge.4";
                return true;
              case InstanceType::ki1_6xlarge_4:
                value = "ki1.6xlarge.4";
                return true;
              case InstanceType::ki1_8xlarge_4:
                value = "ki1.8xlarge.4";
                return true;
              case InstanceType::ki1_12xlarge_4:
                value = "ki1.12xlarge.4";
                return true;
              case InstanceType::ki1_16xlarge_4:
                value = "ki1.16xlarge.4";
                return true;
              case InstanceType::kai1s_xlarge_1:
                value = "kai1s.xlarge.1";
                return true;
              case InstanceType::kai1s_2xlarge_1:
                value = "kai1s.2xlarge.1";
                return true;
              case InstanceType::kai1s_4xlarge_1:
                value = "kai1s.4xlarge.1";
                return true;
              case InstanceType::kai1s_3xlarge_2:
                value = "kai1s.3xlarge.2";
                return true;
              case InstanceType::kai1s_4xlarge_2:
                value = "kai1s.4xlarge.2";
                return true;
              case InstanceType::kai1s_6xlarge_2:
                value = "kai1s.6xlarge.2";
                return true;
              case InstanceType::kai1s_9xlarge_2:
                value = "kai1s.9xlarge.2";
                return true;
              case InstanceType::kai1s_12xlarge_2:
                value = "kai1s.12xlarge.2";
                return true;
              default:
                return false;
              }
            }

            InstanceType GetInstanceTypeForName(const std::string& name)
            {
              int hashCode = Hasher::hashstring(name.c_str());
              InstanceType enumValue;
              if (GetEnumForNameHelper0(hashCode, enumValue))
              {
                return enumValue;
              }

              // EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();

              return InstanceType::NOT_SET;
            }

            std::string GetNameForInstanceType(InstanceType enumValue)
            {
              std::string value;
              if (GetNameForEnumHelper0(enumValue, value))
              {
                return value;
              }

              // EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();

              return {};
            }

          } // namespace InstanceTypeMapper
        } // namespace Model
      } // namespace V2
    } // namespace Ecs
  } // namespace Sdk
} // namespace HuaweiCloud
