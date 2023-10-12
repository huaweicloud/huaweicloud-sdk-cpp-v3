#ifndef HUAWEICLOUD_SDK_SDRS_V1_SdrsMeta_H_
#define HUAWEICLOUD_SDK_SDRS_V1_SdrsMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/sdrs/v1/SdrsExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_SDRS_V1_EXPORT  SdrsMeta {
public:
    static HttpRequestDef genRequestDefForAddProtectedInstanceNic();
    static HttpRequestDef genRequestDefForAddProtectedInstanceTags();
    static HttpRequestDef genRequestDefForAttachProtectedInstanceReplication();
    static HttpRequestDef genRequestDefForBatchAddTags();
    static HttpRequestDef genRequestDefForBatchCreateProtectedInstances();
    static HttpRequestDef genRequestDefForBatchDeleteProtectedInstances();
    static HttpRequestDef genRequestDefForBatchDeleteTags();
    static HttpRequestDef genRequestDefForCreateDisasterRecoveryDrill();
    static HttpRequestDef genRequestDefForCreateProtectedInstance();
    static HttpRequestDef genRequestDefForCreateProtectionGroup();
    static HttpRequestDef genRequestDefForCreateReplication();
    static HttpRequestDef genRequestDefForDeleteAllServerGroupFailureJobs();
    static HttpRequestDef genRequestDefForDeleteDisasterRecoveryDrill();
    static HttpRequestDef genRequestDefForDeleteFailureJob();
    static HttpRequestDef genRequestDefForDeleteProtectedInstance();
    static HttpRequestDef genRequestDefForDeleteProtectedInstanceNic();
    static HttpRequestDef genRequestDefForDeleteProtectedInstanceTag();
    static HttpRequestDef genRequestDefForDeleteProtectionGroup();
    static HttpRequestDef genRequestDefForDeleteReplication();
    static HttpRequestDef genRequestDefForDeleteServerGroupFailureJobs();
    static HttpRequestDef genRequestDefForDetachProtectedInstanceReplication();
    static HttpRequestDef genRequestDefForExpandReplication();
    static HttpRequestDef genRequestDefForListActiveActiveDomains();
    static HttpRequestDef genRequestDefForListDisasterRecoveryDrills();
    static HttpRequestDef genRequestDefForListFailureJobs();
    static HttpRequestDef genRequestDefForListProtectedInstanceTags();
    static HttpRequestDef genRequestDefForListProtectedInstances();
    static HttpRequestDef genRequestDefForListProtectedInstancesByTags();
    static HttpRequestDef genRequestDefForListProtectedInstancesProjectTags();
    static HttpRequestDef genRequestDefForListProtectionGroups();
    static HttpRequestDef genRequestDefForListReplications();
    static HttpRequestDef genRequestDefForListRpoStatistics();
    static HttpRequestDef genRequestDefForResizeProtectedInstance();
    static HttpRequestDef genRequestDefForShowDisasterRecoveryDrill();
    static HttpRequestDef genRequestDefForShowProtectedInstance();
    static HttpRequestDef genRequestDefForShowProtectionGroup();
    static HttpRequestDef genRequestDefForShowQuota();
    static HttpRequestDef genRequestDefForShowReplication();
    static HttpRequestDef genRequestDefForStartFailoverProtectionGroup();
    static HttpRequestDef genRequestDefForStartProtectionGroup();
    static HttpRequestDef genRequestDefForStartReverseProtectionGroup();
    static HttpRequestDef genRequestDefForStopProtectionGroup();
    static HttpRequestDef genRequestDefForUpdateDisasterRecoveryDrillName();
    static HttpRequestDef genRequestDefForUpdateProtectedInstanceName();
    static HttpRequestDef genRequestDefForUpdateProtectionGroupName();
    static HttpRequestDef genRequestDefForUpdateReplicationName();
    static HttpRequestDef genRequestDefForListApiVersions();
    static HttpRequestDef genRequestDefForShowSpecifiedApiVersion();
    static HttpRequestDef genRequestDefForShowJobStatus();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_SdrsMeta_H_
