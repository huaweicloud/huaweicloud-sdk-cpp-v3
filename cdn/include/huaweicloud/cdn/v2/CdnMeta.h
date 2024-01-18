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
    static HttpRequestDef genRequestDefForCreatePreheatingTasks();
    static HttpRequestDef genRequestDefForCreateRefreshTasks();
    static HttpRequestDef genRequestDefForDownloadRegionCarrierExcel();
    static HttpRequestDef genRequestDefForDownloadStatisticsExcel();
    static HttpRequestDef genRequestDefForListCdnDomainTopRefers();
    static HttpRequestDef genRequestDefForListDomains();
    static HttpRequestDef genRequestDefForSetChargeModes();
    static HttpRequestDef genRequestDefForShowBandwidthCalc();
    static HttpRequestDef genRequestDefForShowChargeModes();
    static HttpRequestDef genRequestDefForShowDomainDetailByName();
    static HttpRequestDef genRequestDefForShowDomainFullConfig();
    static HttpRequestDef genRequestDefForShowDomainLocationStats();
    static HttpRequestDef genRequestDefForShowDomainStats();
    static HttpRequestDef genRequestDefForShowHistoryTaskDetails();
    static HttpRequestDef genRequestDefForShowHistoryTasks();
    static HttpRequestDef genRequestDefForShowTopDomainNames();
    static HttpRequestDef genRequestDefForShowTopUrl();
    static HttpRequestDef genRequestDefForShowUrlTaskInfo();
    static HttpRequestDef genRequestDefForUpdateDomainFullConfig();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_CdnMeta_H_
