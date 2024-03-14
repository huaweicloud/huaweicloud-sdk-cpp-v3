#ifndef HUAWEICLOUD_SDK_DRS_V3_DrsMeta_H_
#define HUAWEICLOUD_SDK_DRS_V3_DrsMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/drs/v3/DrsExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_DRS_V3_EXPORT  DrsMeta {
public:
    static HttpRequestDef genRequestDefForBatchChangeData();
    static HttpRequestDef genRequestDefForBatchCheckJobs();
    static HttpRequestDef genRequestDefForBatchCheckResults();
    static HttpRequestDef genRequestDefForBatchCreateJobs();
    static HttpRequestDef genRequestDefForBatchDeleteJobs();
    static HttpRequestDef genRequestDefForBatchListJobDetails();
    static HttpRequestDef genRequestDefForBatchListJobStatus();
    static HttpRequestDef genRequestDefForBatchListProgresses();
    static HttpRequestDef genRequestDefForBatchListRposAndRtos();
    static HttpRequestDef genRequestDefForBatchListStructDetail();
    static HttpRequestDef genRequestDefForBatchListStructProcess();
    static HttpRequestDef genRequestDefForBatchResetPassword();
    static HttpRequestDef genRequestDefForBatchRestoreTask();
    static HttpRequestDef genRequestDefForBatchSetDefiner();
    static HttpRequestDef genRequestDefForBatchSetObjects();
    static HttpRequestDef genRequestDefForBatchSetPolicy();
    static HttpRequestDef genRequestDefForBatchSetSmn();
    static HttpRequestDef genRequestDefForBatchSetSpeed();
    static HttpRequestDef genRequestDefForBatchShowParams();
    static HttpRequestDef genRequestDefForBatchStartJobs();
    static HttpRequestDef genRequestDefForBatchStopJobs();
    static HttpRequestDef genRequestDefForBatchSwitchover();
    static HttpRequestDef genRequestDefForBatchUpdateJob();
    static HttpRequestDef genRequestDefForBatchUpdateUser();
    static HttpRequestDef genRequestDefForBatchValidateClustersConnections();
    static HttpRequestDef genRequestDefForBatchValidateConnections();
    static HttpRequestDef genRequestDefForCreateCompareTask();
    static HttpRequestDef genRequestDefForListAvailableNodeTypes();
    static HttpRequestDef genRequestDefForListAvailableZone();
    static HttpRequestDef genRequestDefForListCompareResult();
    static HttpRequestDef genRequestDefForListUsers();
    static HttpRequestDef genRequestDefForShowJobList();
    static HttpRequestDef genRequestDefForShowMonitoringData();
    static HttpRequestDef genRequestDefForShowQuotas();
    static HttpRequestDef genRequestDefForUpdateParams();
    static HttpRequestDef genRequestDefForUpdateTuningParams();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_DrsMeta_H_
