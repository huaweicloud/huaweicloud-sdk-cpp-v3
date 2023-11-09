#ifndef HUAWEICLOUD_SDK_TICS_V1_TicsMeta_H_
#define HUAWEICLOUD_SDK_TICS_V1_TicsMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/tics/v1/TicsExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_TICS_V1_EXPORT  TicsMeta {
public:
    static HttpRequestDef genRequestDefForListAgents();
    static HttpRequestDef genRequestDefForListAuditInfo();
    static HttpRequestDef genRequestDefForListFlJob();
    static HttpRequestDef genRequestDefForListInstanceHistory();
    static HttpRequestDef genRequestDefForListLeagueDatasets();
    static HttpRequestDef genRequestDefForListLeagues();
    static HttpRequestDef genRequestDefForListNodes();
    static HttpRequestDef genRequestDefForListNotices();
    static HttpRequestDef genRequestDefForListPartners();
    static HttpRequestDef genRequestDefForListSqlJob();
    static HttpRequestDef genRequestDefForShowAgentDetail();
    static HttpRequestDef genRequestDefForShowDatasetStatistics();
    static HttpRequestDef genRequestDefForShowInstanceReport();
    static HttpRequestDef genRequestDefForShowJobInstanceDag();
    static HttpRequestDef genRequestDefForShowJobStatistics();
    static HttpRequestDef genRequestDefForShowLeague();
    static HttpRequestDef genRequestDefForShowOverview();
    static HttpRequestDef genRequestDefForShowPartnerStatistics();
    static HttpRequestDef genRequestDefForUpdateLeague();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_TicsMeta_H_
