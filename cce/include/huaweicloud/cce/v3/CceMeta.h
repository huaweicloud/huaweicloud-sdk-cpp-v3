#ifndef HUAWEICLOUD_SDK_CCE_V3_CceMeta_H_
#define HUAWEICLOUD_SDK_CCE_V3_CceMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/cce/v3/CceExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_CCE_V3_EXPORT  CceMeta {
public:
    static HttpRequestDef genRequestDefForAddNode();
    static HttpRequestDef genRequestDefForAddNodesToNodePool();
    static HttpRequestDef genRequestDefForAwakeCluster();
    static HttpRequestDef genRequestDefForBatchCreateClusterTags();
    static HttpRequestDef genRequestDefForBatchDeleteClusterTags();
    static HttpRequestDef genRequestDefForBatchSyncNodes();
    static HttpRequestDef genRequestDefForContinueUpgradeClusterTask();
    static HttpRequestDef genRequestDefForCreateAccessPolicy();
    static HttpRequestDef genRequestDefForCreateAddonInstance();
    static HttpRequestDef genRequestDefForCreateCloudPersistentVolumeClaims();
    static HttpRequestDef genRequestDefForCreateCluster();
    static HttpRequestDef genRequestDefForCreateClusterMasterSnapshot();
    static HttpRequestDef genRequestDefForCreateKubernetesClusterCert();
    static HttpRequestDef genRequestDefForCreateNode();
    static HttpRequestDef genRequestDefForCreateNodePool();
    static HttpRequestDef genRequestDefForCreatePartition();
    static HttpRequestDef genRequestDefForCreatePostCheck();
    static HttpRequestDef genRequestDefForCreatePreCheck();
    static HttpRequestDef genRequestDefForCreateRelease();
    static HttpRequestDef genRequestDefForCreateUpgradeWorkFlow();
    static HttpRequestDef genRequestDefForDeleteAccessPolicy();
    static HttpRequestDef genRequestDefForDeleteAddonInstance();
    static HttpRequestDef genRequestDefForDeleteChart();
    static HttpRequestDef genRequestDefForDeleteCloudPersistentVolumeClaims();
    static HttpRequestDef genRequestDefForDeleteCluster();
    static HttpRequestDef genRequestDefForDeleteNode();
    static HttpRequestDef genRequestDefForDeleteNodePool();
    static HttpRequestDef genRequestDefForDeleteRelease();
    static HttpRequestDef genRequestDefForDownloadChart();
    static HttpRequestDef genRequestDefForGetAccessPolicy();
    static HttpRequestDef genRequestDefForGetAvaliableZone();
    static HttpRequestDef genRequestDefForGetClusterFlavorSpecs();
    static HttpRequestDef genRequestDefForGetClusterQuota();
    static HttpRequestDef genRequestDefForGetCustomizeTags();
    static HttpRequestDef genRequestDefForGetLabels();
    static HttpRequestDef genRequestDefForGetResourceTags();
    static HttpRequestDef genRequestDefForHibernateCluster();
    static HttpRequestDef genRequestDefForListAccessPolicy();
    static HttpRequestDef genRequestDefForListAddonInstances();
    static HttpRequestDef genRequestDefForListAddonPrecheckTasks();
    static HttpRequestDef genRequestDefForListAddonTemplates();
    static HttpRequestDef genRequestDefForListCharts();
    static HttpRequestDef genRequestDefForListClusterMasterSnapshotTasks();
    static HttpRequestDef genRequestDefForListClusterUpgradeFeatureGates();
    static HttpRequestDef genRequestDefForListClusterUpgradePaths();
    static HttpRequestDef genRequestDefForListClusters();
    static HttpRequestDef genRequestDefForListHyperNodes();
    static HttpRequestDef genRequestDefForListNodePools();
    static HttpRequestDef genRequestDefForListNodes();
    static HttpRequestDef genRequestDefForListPartitions();
    static HttpRequestDef genRequestDefForListPreCheckTasks();
    static HttpRequestDef genRequestDefForListReleases();
    static HttpRequestDef genRequestDefForListUpgradeClusterTasks();
    static HttpRequestDef genRequestDefForListUpgradeWorkFlows();
    static HttpRequestDef genRequestDefForLockNodepoolNodeScaleDown();
    static HttpRequestDef genRequestDefForMigrateNode();
    static HttpRequestDef genRequestDefForPauseUpgradeClusterTask();
    static HttpRequestDef genRequestDefForRemoveNode();
    static HttpRequestDef genRequestDefForResetNode();
    static HttpRequestDef genRequestDefForResizeCluster();
    static HttpRequestDef genRequestDefForRetryUpgradeClusterTask();
    static HttpRequestDef genRequestDefForRevokeKubernetesClusterCert();
    static HttpRequestDef genRequestDefForRollbackAddonInstance();
    static HttpRequestDef genRequestDefForScaleNodePool();
    static HttpRequestDef genRequestDefForShowAddonInstance();
    static HttpRequestDef genRequestDefForShowChart();
    static HttpRequestDef genRequestDefForShowChartValues();
    static HttpRequestDef genRequestDefForShowCluster();
    static HttpRequestDef genRequestDefForShowClusterConfig();
    static HttpRequestDef genRequestDefForShowClusterConfigurationDetails();
    static HttpRequestDef genRequestDefForShowClusterEndpoints();
    static HttpRequestDef genRequestDefForShowClusterSupportConfiguration();
    static HttpRequestDef genRequestDefForShowClusterUpgradeInfo();
    static HttpRequestDef genRequestDefForShowFeatureGates();
    static HttpRequestDef genRequestDefForShowNode();
    static HttpRequestDef genRequestDefForShowNodePool();
    static HttpRequestDef genRequestDefForShowNodePoolConfigurationDetails();
    static HttpRequestDef genRequestDefForShowNodePoolConfigurations();
    static HttpRequestDef genRequestDefForShowPartition();
    static HttpRequestDef genRequestDefForShowPreCheck();
    static HttpRequestDef genRequestDefForShowQuotas();
    static HttpRequestDef genRequestDefForShowRelease();
    static HttpRequestDef genRequestDefForShowReleaseHistory();
    static HttpRequestDef genRequestDefForShowUpgradeClusterTask();
    static HttpRequestDef genRequestDefForShowUpgradeWorkFlow();
    static HttpRequestDef genRequestDefForShowUserChartsQuotas();
    static HttpRequestDef genRequestDefForSyncNode();
    static HttpRequestDef genRequestDefForUnlockNodepoolNodeScaleDown();
    static HttpRequestDef genRequestDefForUpdateAccessPolicy();
    static HttpRequestDef genRequestDefForUpdateAddonInstance();
    static HttpRequestDef genRequestDefForUpdateCluster();
    static HttpRequestDef genRequestDefForUpdateClusterEip();
    static HttpRequestDef genRequestDefForUpdateClusterLogConfig();
    static HttpRequestDef genRequestDefForUpdateNode();
    static HttpRequestDef genRequestDefForUpdateNodePool();
    static HttpRequestDef genRequestDefForUpdatePartition();
    static HttpRequestDef genRequestDefForUpdateRelease();
    static HttpRequestDef genRequestDefForUpgradeCluster();
    static HttpRequestDef genRequestDefForUpgradeNodePool();
    static HttpRequestDef genRequestDefForUpgradeWorkFlowUpdate();
    static HttpRequestDef genRequestDefForShowVersion();
    static HttpRequestDef genRequestDefForBatchCreateAutopilotClusterTags();
    static HttpRequestDef genRequestDefForBatchDeleteAutopilotClusterTags();
    static HttpRequestDef genRequestDefForCreateAutopilotAddonInstance();
    static HttpRequestDef genRequestDefForCreateAutopilotCluster();
    static HttpRequestDef genRequestDefForCreateAutopilotClusterMasterSnapshot();
    static HttpRequestDef genRequestDefForCreateAutopilotKubernetesClusterCert();
    static HttpRequestDef genRequestDefForCreateAutopilotMaintenanceWindow();
    static HttpRequestDef genRequestDefForCreateAutopilotPostCheck();
    static HttpRequestDef genRequestDefForCreateAutopilotPreCheck();
    static HttpRequestDef genRequestDefForCreateAutopilotRelease();
    static HttpRequestDef genRequestDefForCreateAutopilotUpgradeWorkFlow();
    static HttpRequestDef genRequestDefForDeleteAutopilotAddonInstance();
    static HttpRequestDef genRequestDefForDeleteAutopilotChart();
    static HttpRequestDef genRequestDefForDeleteAutopilotCluster();
    static HttpRequestDef genRequestDefForDeleteAutopilotMaintenanceWindow();
    static HttpRequestDef genRequestDefForDeleteAutopilotRelease();
    static HttpRequestDef genRequestDefForDownloadAutopilotChart();
    static HttpRequestDef genRequestDefForListAutopilotAddonInstances();
    static HttpRequestDef genRequestDefForListAutopilotAddonTemplates();
    static HttpRequestDef genRequestDefForListAutopilotCharts();
    static HttpRequestDef genRequestDefForListAutopilotClusterMasterSnapshotTasks();
    static HttpRequestDef genRequestDefForListAutopilotClusterUpgradeFeatureGates();
    static HttpRequestDef genRequestDefForListAutopilotClusterUpgradePaths();
    static HttpRequestDef genRequestDefForListAutopilotClusters();
    static HttpRequestDef genRequestDefForListAutopilotPreCheckTasks();
    static HttpRequestDef genRequestDefForListAutopilotReleases();
    static HttpRequestDef genRequestDefForListAutopilotUpgradeClusterTasks();
    static HttpRequestDef genRequestDefForListAutopilotUpgradePlans();
    static HttpRequestDef genRequestDefForListAutopilotUpgradeWorkFlows();
    static HttpRequestDef genRequestDefForRetryAutopilotUpgradeClusterTask();
    static HttpRequestDef genRequestDefForRollbackAutopilotAddonInstance();
    static HttpRequestDef genRequestDefForShowAutopilotAddonInstance();
    static HttpRequestDef genRequestDefForShowAutopilotChart();
    static HttpRequestDef genRequestDefForShowAutopilotChartValues();
    static HttpRequestDef genRequestDefForShowAutopilotCluster();
    static HttpRequestDef genRequestDefForShowAutopilotClusterEndpoints();
    static HttpRequestDef genRequestDefForShowAutopilotClusterUpgradeInfo();
    static HttpRequestDef genRequestDefForShowAutopilotMaintenanceWindow();
    static HttpRequestDef genRequestDefForShowAutopilotPreCheck();
    static HttpRequestDef genRequestDefForShowAutopilotQuotas();
    static HttpRequestDef genRequestDefForShowAutopilotRelease();
    static HttpRequestDef genRequestDefForShowAutopilotReleaseHistory();
    static HttpRequestDef genRequestDefForShowAutopilotUpgradeClusterTask();
    static HttpRequestDef genRequestDefForShowAutopilotUpgradeWorkFlow();
    static HttpRequestDef genRequestDefForShowAutopilotUserChartsQuotas();
    static HttpRequestDef genRequestDefForUpdateAutopilotAddonInstance();
    static HttpRequestDef genRequestDefForUpdateAutopilotCluster();
    static HttpRequestDef genRequestDefForUpdateAutopilotClusterEip();
    static HttpRequestDef genRequestDefForUpdateAutopilotMaintenanceWindow();
    static HttpRequestDef genRequestDefForUpdateAutopilotRelease();
    static HttpRequestDef genRequestDefForUpdateAutopilotUpgradePlan();
    static HttpRequestDef genRequestDefForUpgradeAutopilotCluster();
    static HttpRequestDef genRequestDefForUpgradeAutopilotWorkFlowUpdate();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_CceMeta_H_
