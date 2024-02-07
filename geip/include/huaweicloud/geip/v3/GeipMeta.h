#ifndef HUAWEICLOUD_SDK_GEIP_V3_GeipMeta_H_
#define HUAWEICLOUD_SDK_GEIP_V3_GeipMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/geip/v3/GeipExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_GEIP_V3_EXPORT  GeipMeta {
public:
    static HttpRequestDef genRequestDefForAddInternetBandwidthTags();
    static HttpRequestDef genRequestDefForBatchCreateInternetBandwidth();
    static HttpRequestDef genRequestDefForBatchCreateInternetBandwidthTags();
    static HttpRequestDef genRequestDefForBatchDeleteInternetBandwidthTags();
    static HttpRequestDef genRequestDefForCountInternetBandwidth();
    static HttpRequestDef genRequestDefForCreateInternetBandwidth();
    static HttpRequestDef genRequestDefForCreateUserDisclaimer();
    static HttpRequestDef genRequestDefForDeleteInternetBandwidth();
    static HttpRequestDef genRequestDefForDeleteInternetBandwidthTag();
    static HttpRequestDef genRequestDefForDeleteUserDisclaimer();
    static HttpRequestDef genRequestDefForListAccessSites();
    static HttpRequestDef genRequestDefForListGeipResourceQuotas();
    static HttpRequestDef genRequestDefForListInternetBandwidthCountFilterTags();
    static HttpRequestDef genRequestDefForListInternetBandwidthDomainTags();
    static HttpRequestDef genRequestDefForListInternetBandwidthFilterTags();
    static HttpRequestDef genRequestDefForListInternetBandwidthLimits();
    static HttpRequestDef genRequestDefForListInternetBandwidths();
    static HttpRequestDef genRequestDefForListSupportMasks();
    static HttpRequestDef genRequestDefForShowInternetBandwidth();
    static HttpRequestDef genRequestDefForShowInternetBandwidthTags();
    static HttpRequestDef genRequestDefForShowUserDisclaimer();
    static HttpRequestDef genRequestDefForUpdateInternetBandwidth();
    static HttpRequestDef genRequestDefForAddGeipSegmentTags();
    static HttpRequestDef genRequestDefForAddGlobalEipTags();
    static HttpRequestDef genRequestDefForAssociateGeipSegmentInstance();
    static HttpRequestDef genRequestDefForAssociateInstance();
    static HttpRequestDef genRequestDefForAttachInternetBandwidth();
    static HttpRequestDef genRequestDefForBatchAttachGeipSegmentInternetBandwidth();
    static HttpRequestDef genRequestDefForBatchAttachInternetBandwidth();
    static HttpRequestDef genRequestDefForBatchCreateGeipSegmentTags();
    static HttpRequestDef genRequestDefForBatchCreateGlobalEip();
    static HttpRequestDef genRequestDefForBatchCreateGlobalEipTags();
    static HttpRequestDef genRequestDefForBatchDeleteGeipSegmentTags();
    static HttpRequestDef genRequestDefForBatchDeleteGlobalEipTags();
    static HttpRequestDef genRequestDefForBatchDetachGeipSegmentInternetBandwidth();
    static HttpRequestDef genRequestDefForBatchDetachInternetBandwidth();
    static HttpRequestDef genRequestDefForCountGlobalEipSegment();
    static HttpRequestDef genRequestDefForCountGlobalEips();
    static HttpRequestDef genRequestDefForCreateGlobalEip();
    static HttpRequestDef genRequestDefForCreateGlobalEipSegment();
    static HttpRequestDef genRequestDefForDeleteGeipSegmentTag();
    static HttpRequestDef genRequestDefForDeleteGlobalEip();
    static HttpRequestDef genRequestDefForDeleteGlobalEipSegment();
    static HttpRequestDef genRequestDefForDeleteGlobalEipTag();
    static HttpRequestDef genRequestDefForDetachInternetBandwidth();
    static HttpRequestDef genRequestDefForDisassociateGeipSegmentInstance();
    static HttpRequestDef genRequestDefForDisassociateInstance();
    static HttpRequestDef genRequestDefForListGeipPools();
    static HttpRequestDef genRequestDefForListGeipSegmentCountFilterTags();
    static HttpRequestDef genRequestDefForListGeipSegmentDomainTags();
    static HttpRequestDef genRequestDefForListGeipSegmentFilterTags();
    static HttpRequestDef genRequestDefForListGlobalEipCountFilterTags();
    static HttpRequestDef genRequestDefForListGlobalEipDomainTags();
    static HttpRequestDef genRequestDefForListGlobalEipFilterTags();
    static HttpRequestDef genRequestDefForListGlobalEipSegments();
    static HttpRequestDef genRequestDefForListGlobalEips();
    static HttpRequestDef genRequestDefForShowGeipSegmentTags();
    static HttpRequestDef genRequestDefForShowGlobalEip();
    static HttpRequestDef genRequestDefForShowGlobalEipSegment();
    static HttpRequestDef genRequestDefForShowGlobalEipTags();
    static HttpRequestDef genRequestDefForUpdateGlobalEip();
    static HttpRequestDef genRequestDefForUpdateGlobalEipSegment();
    static HttpRequestDef genRequestDefForListJobs();
    static HttpRequestDef genRequestDefForShowJobs();
    static HttpRequestDef genRequestDefForListSupportRegions();
    static HttpRequestDef genRequestDefForListTenantGeipSupportInstances();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_GeipMeta_H_
