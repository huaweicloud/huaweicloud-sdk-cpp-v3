#ifndef HUAWEICLOUD_SDK_CDN_V2_CdnMeta_H_
#define HUAWEICLOUD_SDK_CDN_V2_CdnMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/cdn/v2/CdnExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_CDN_V2_EXPORT  CdnMeta {
public:
    static HttpRequestDef genRequestDefForBatchCopyDomain();
    static HttpRequestDef genRequestDefForBatchDeleteTags();
    static HttpRequestDef genRequestDefForCreateDomain();
    static HttpRequestDef genRequestDefForCreatePreheatingTasks();
    static HttpRequestDef genRequestDefForCreateRefreshTasks();
    static HttpRequestDef genRequestDefForCreateTags();
    static HttpRequestDef genRequestDefForDeleteDomain();
    static HttpRequestDef genRequestDefForDisableDomain();
    static HttpRequestDef genRequestDefForDownloadRegionCarrierExcel();
    static HttpRequestDef genRequestDefForDownloadStatisticsExcel();
    static HttpRequestDef genRequestDefForEnableDomain();
    static HttpRequestDef genRequestDefForListCdnDomainTopRefers();
    static HttpRequestDef genRequestDefForListDomains();
    static HttpRequestDef genRequestDefForSetChargeModes();
    static HttpRequestDef genRequestDefForShowBandwidthCalc();
    static HttpRequestDef genRequestDefForShowCertificatesHttpsInfo();
    static HttpRequestDef genRequestDefForShowChargeModes();
    static HttpRequestDef genRequestDefForShowDomainDetailByName();
    static HttpRequestDef genRequestDefForShowDomainFullConfig();
    static HttpRequestDef genRequestDefForShowDomainLocationStats();
    static HttpRequestDef genRequestDefForShowDomainStats();
    static HttpRequestDef genRequestDefForShowHistoryTaskDetails();
    static HttpRequestDef genRequestDefForShowHistoryTasks();
    static HttpRequestDef genRequestDefForShowIpInfo();
    static HttpRequestDef genRequestDefForShowLogs();
    static HttpRequestDef genRequestDefForShowQuota();
    static HttpRequestDef genRequestDefForShowTags();
    static HttpRequestDef genRequestDefForShowTopDomainNames();
    static HttpRequestDef genRequestDefForShowTopUrl();
    static HttpRequestDef genRequestDefForShowUrlTaskInfo();
    static HttpRequestDef genRequestDefForShowVerifyDomainOwnerInfo();
    static HttpRequestDef genRequestDefForUpdateDomainFullConfig();
    static HttpRequestDef genRequestDefForUpdateDomainMultiCertificates();
    static HttpRequestDef genRequestDefForUpdatePrivateBucketAccess();
    static HttpRequestDef genRequestDefForVerifyDomainOwner();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_CdnMeta_H_
