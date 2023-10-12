#ifndef HUAWEICLOUD_SDK_CDN_V1_CdnMeta_H_
#define HUAWEICLOUD_SDK_CDN_V1_CdnMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/cdn/v1/CdnExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_CDN_V1_EXPORT  CdnMeta {
public:
    static HttpRequestDef genRequestDefForBatchDeleteTags();
    static HttpRequestDef genRequestDefForCreateDomain();
    static HttpRequestDef genRequestDefForCreatePreheatingTasks();
    static HttpRequestDef genRequestDefForCreateRefreshTasks();
    static HttpRequestDef genRequestDefForCreateTags();
    static HttpRequestDef genRequestDefForDeleteDomain();
    static HttpRequestDef genRequestDefForDisableDomain();
    static HttpRequestDef genRequestDefForEnableDomain();
    static HttpRequestDef genRequestDefForListDomains();
    static HttpRequestDef genRequestDefForShowBlackWhiteList();
    static HttpRequestDef genRequestDefForShowCacheRules();
    static HttpRequestDef genRequestDefForShowCertificatesHttpsInfo();
    static HttpRequestDef genRequestDefForShowDomainDetail();
    static HttpRequestDef genRequestDefForShowDomainFullConfig();
    static HttpRequestDef genRequestDefForShowDomainItemDetails();
    static HttpRequestDef genRequestDefForShowDomainItemLocationDetails();
    static HttpRequestDef genRequestDefForShowDomainLocationStats();
    static HttpRequestDef genRequestDefForShowDomainStats();
    static HttpRequestDef genRequestDefForShowHistoryTaskDetails();
    static HttpRequestDef genRequestDefForShowHistoryTasks();
    static HttpRequestDef genRequestDefForShowHttpInfo();
    static HttpRequestDef genRequestDefForShowIpInfo();
    static HttpRequestDef genRequestDefForShowLogs();
    static HttpRequestDef genRequestDefForShowOriginHost();
    static HttpRequestDef genRequestDefForShowQuota();
    static HttpRequestDef genRequestDefForShowRefer();
    static HttpRequestDef genRequestDefForShowResponseHeader();
    static HttpRequestDef genRequestDefForShowTags();
    static HttpRequestDef genRequestDefForShowTopUrl();
    static HttpRequestDef genRequestDefForShowUrlTaskInfo();
    static HttpRequestDef genRequestDefForUpdateBlackWhiteList();
    static HttpRequestDef genRequestDefForUpdateCacheRules();
    static HttpRequestDef genRequestDefForUpdateDomainFullConfig();
    static HttpRequestDef genRequestDefForUpdateDomainMultiCertificates();
    static HttpRequestDef genRequestDefForUpdateDomainOrigin();
    static HttpRequestDef genRequestDefForUpdateFollow302Switch();
    static HttpRequestDef genRequestDefForUpdateHttpsInfo();
    static HttpRequestDef genRequestDefForUpdateOriginHost();
    static HttpRequestDef genRequestDefForUpdatePrivateBucketAccess();
    static HttpRequestDef genRequestDefForUpdateRangeSwitch();
    static HttpRequestDef genRequestDefForUpdateRefer();
    static HttpRequestDef genRequestDefForUpdateResponseHeader();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_CdnMeta_H_
