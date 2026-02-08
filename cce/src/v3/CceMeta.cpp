
#include <huaweicloud/cce/v3/CceMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef CceMeta::genRequestDefForAddNode() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForAddNodesToNodePool() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForAwakeCluster() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForBatchCreateAddonPrecheck() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForBatchCreateClusterTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForBatchDeleteClusterTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForBatchSyncNodes() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForContinueUpgradeClusterTask() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForCreateAccessPolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForCreateAddonInstance() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForCreateCloudPersistentVolumeClaims() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXClusterID;
    reqDefBuilder.withRequestField(headerParamXClusterID
                  .withName("XClusterID")
                  .withJsonTag("X-Cluster-ID")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForCreateCluster() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForCreateClusterMasterSnapshot() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForCreateKubernetesClusterCert() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("portID").
        withJsonTag("Port-ID").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForCreateNode() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("NodepoolScaleUp")
                  .withJsonTag("nodepoolScaleUp")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForCreateNodePool() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForCreatePartition() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForCreatePostCheck() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForCreatePreCheck() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForCreateRelease() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForCreateUpgradeWorkFlow() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForDeleteAccessPolicy() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForDeleteAddonInstance() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ClusterId")
                  .withJsonTag("cluster_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForDeleteChart() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForDeleteCloudPersistentVolumeClaims() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("DeleteVolume")
                  .withJsonTag("deleteVolume")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StorageType")
                  .withJsonTag("storageType")
                  .withLocationType(Query_));
    FieldDef headerParamXClusterID;
    reqDefBuilder.withRequestField(headerParamXClusterID
                  .withName("XClusterID")
                  .withJsonTag("X-Cluster-ID")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForDeleteCluster() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ErrorStatus")
                  .withJsonTag("errorStatus")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DeleteEfs")
                  .withJsonTag("delete_efs")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DeleteEni")
                  .withJsonTag("delete_eni")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DeleteEvs")
                  .withJsonTag("delete_evs")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DeleteNet")
                  .withJsonTag("delete_net")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DeleteObs")
                  .withJsonTag("delete_obs")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DeleteSfs")
                  .withJsonTag("delete_sfs")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DeleteSfs30")
                  .withJsonTag("delete_sfs30")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LtsReclaimPolicy")
                  .withJsonTag("lts_reclaim_policy")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Tobedeleted")
                  .withJsonTag("tobedeleted")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OndemandNodePolicy")
                  .withJsonTag("ondemand_node_policy")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PeriodicNodePolicy")
                  .withJsonTag("periodic_node_policy")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForDeleteNode() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ErrorStatus")
                  .withJsonTag("errorStatus")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("NodepoolScaleDown")
                  .withJsonTag("nodepoolScaleDown")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForDeleteNodePool() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ErrorStatus")
                  .withJsonTag("errorStatus")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForDeleteRelease() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ShowResources")
                  .withJsonTag("show_resources")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForDownloadChart() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForGetAccessPolicy() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForGetAvaliableZone() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Locale")
                  .withJsonTag("locale")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForGetClusterFlavorSpecs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ClusterType")
                  .withJsonTag("clusterType")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForGetClusterLongAkskConfig() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForGetClusterQuota() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForGetCustomizeTags() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForGetLabels() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForGetLongAkskConfig() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForGetResourceTags() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForHibernateCluster() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForListAccessPolicy() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ClusterId")
                  .withJsonTag("cluster_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForListAddonInstances() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AddonTemplateName")
                  .withJsonTag("addon_template_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ClusterId")
                  .withJsonTag("cluster_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForListAddonPrecheckTasks() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TaskId")
                  .withJsonTag("task_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AddonInstanceId")
                  .withJsonTag("addon_instance_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForListAddonTemplates() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AddonTemplateName")
                  .withJsonTag("addon_template_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("BaseUpdateAddonVersion")
                  .withJsonTag("base_update_addon_version")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ClusterId")
                  .withJsonTag("cluster_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Newest")
                  .withJsonTag("newest")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Version")
                  .withJsonTag("version")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForListCharts() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForListClusterMasterSnapshotTasks() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForListClusterUpgradeFeatureGates() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForListClusterUpgradePaths() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForListClusters() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ErrorStatus")
                  .withJsonTag("errorStatus")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Detail")
                  .withJsonTag("detail")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Version")
                  .withJsonTag("version")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForListHyperNodes() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForListNodePools() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ErrorStatus")
                  .withJsonTag("errorStatus")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ShowDefaultNodePool")
                  .withJsonTag("showDefaultNodePool")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForListNodes() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ErrorStatus")
                  .withJsonTag("errorStatus")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForListPartitions() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForListPreCheckTasks() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForListReleases() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ChartId")
                  .withJsonTag("chart_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Namespace")
                  .withJsonTag("namespace")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForListUpgradeClusterTasks() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForListUpgradeWorkFlows() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForLockNodepoolNodeScaleDown() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForMigrateNode() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForMigrateToNodePool() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForPauseUpgradeClusterTask() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForRemoveNode() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForResetNode() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForResizeCluster() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ErrorStatus")
                  .withJsonTag("errorStatus")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForRetryUpgradeClusterTask() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForRevokeKubernetesClusterCert() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForRollbackAddonInstance() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForScaleNodePool() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowAddonInstance() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ClusterId")
                  .withJsonTag("cluster_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowChart() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowChartValues() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowCluster() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ErrorStatus")
                  .withJsonTag("errorStatus")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Detail")
                  .withJsonTag("detail")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowClusterConfig() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowClusterConfigurationDetails() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
                withName("Body").
                withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowClusterEndpoints() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowClusterSupportConfiguration() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ClusterType")
                  .withJsonTag("clusterType")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ClusterVersion")
                  .withJsonTag("clusterVersion")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ClusterID")
                  .withJsonTag("clusterID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("NetworkMode")
                  .withJsonTag("networkMode")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
                withName("Body").
                withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowClusterUpgradeInfo() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowFeatureGates() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowNode() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ErrorStatus")
                  .withJsonTag("errorStatus")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowNodePool() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ErrorStatus")
                  .withJsonTag("errorStatus")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowNodePoolConfigurationDetails() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
                withName("Body").
                withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowNodePoolConfigurations() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowPartition() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowPreCheck() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowQuotas() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowRelease() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ShowResources")
                  .withJsonTag("show_resources")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowReleaseHistory() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowUpgradeClusterTask() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowUpgradeWorkFlow() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowUserChartsQuotas() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForSyncNode() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForUnlockNodepoolNodeScaleDown() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForUpdateAccessPolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForUpdateAddonInstance() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForUpdateCluster() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ErrorStatus")
                  .withJsonTag("errorStatus")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForUpdateClusterEip() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForUpdateClusterLogConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForUpdateClusterLongAkskConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForUpdateLongAkskConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForUpdateNode() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ErrorStatus")
                  .withJsonTag("errorStatus")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForUpdateNodePool() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ErrorStatus")
                  .withJsonTag("errorStatus")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForUpdatePartition() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForUpdateRelease() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ShowResources")
                  .withJsonTag("show_resources")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForUpgradeCluster() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForUpgradeNodePool() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForUpgradeWorkFlowUpdate() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowVersion() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForBatchCreateAutopilotClusterTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForBatchDeleteAutopilotClusterTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForCreateAutopilotAddonInstance() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForCreateAutopilotCluster() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForCreateAutopilotClusterMasterSnapshot() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForCreateAutopilotKubernetesClusterCert() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("portID").
        withJsonTag("Port-ID").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForCreateAutopilotMaintenanceWindow() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForCreateAutopilotPostCheck() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForCreateAutopilotPreCheck() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForCreateAutopilotRelease() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForCreateAutopilotUpgradeWorkFlow() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForDeleteAutopilotAddonInstance() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ClusterId")
                  .withJsonTag("cluster_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForDeleteAutopilotChart() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForDeleteAutopilotCluster() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ErrorStatus")
                  .withJsonTag("errorStatus")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DeleteEfs")
                  .withJsonTag("delete_efs")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DeleteEni")
                  .withJsonTag("delete_eni")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DeleteNet")
                  .withJsonTag("delete_net")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DeleteObs")
                  .withJsonTag("delete_obs")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DeleteSfs30")
                  .withJsonTag("delete_sfs30")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LtsReclaimPolicy")
                  .withJsonTag("lts_reclaim_policy")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForDeleteAutopilotMaintenanceWindow() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForDeleteAutopilotRelease() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForDownloadAutopilotChart() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForListAutopilotAddonInstances() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AddonTemplateName")
                  .withJsonTag("addon_template_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ClusterId")
                  .withJsonTag("cluster_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForListAutopilotAddonTemplates() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AddonTemplateName")
                  .withJsonTag("addon_template_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("BaseUpdateAddonVersion")
                  .withJsonTag("base_update_addon_version")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ClusterId")
                  .withJsonTag("cluster_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Newest")
                  .withJsonTag("newest")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Version")
                  .withJsonTag("version")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForListAutopilotCharts() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForListAutopilotClusterMasterSnapshotTasks() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForListAutopilotClusterUpgradeFeatureGates() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForListAutopilotClusterUpgradePaths() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForListAutopilotClusters() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ErrorStatus")
                  .withJsonTag("errorStatus")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Detail")
                  .withJsonTag("detail")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Version")
                  .withJsonTag("version")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForListAutopilotPreCheckTasks() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForListAutopilotReleases() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ChartId")
                  .withJsonTag("chart_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Namespace")
                  .withJsonTag("namespace")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForListAutopilotUpgradeClusterTasks() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForListAutopilotUpgradePlans() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForListAutopilotUpgradeWorkFlows() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForRetryAutopilotUpgradeClusterTask() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForRollbackAutopilotAddonInstance() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowAutopilotAddonInstance() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ClusterId")
                  .withJsonTag("cluster_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowAutopilotChart() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowAutopilotChartValues() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowAutopilotCluster() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ErrorStatus")
                  .withJsonTag("errorStatus")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Detail")
                  .withJsonTag("detail")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowAutopilotClusterConfig() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowAutopilotClusterEndpoints() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowAutopilotClusterUpgradeInfo() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowAutopilotFeatureGates() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowAutopilotMaintenanceWindow() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowAutopilotPreCheck() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowAutopilotQuotas() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowAutopilotRelease() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowAutopilotReleaseHistory() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowAutopilotUpgradeClusterTask() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowAutopilotUpgradeWorkFlow() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowAutopilotUserChartsQuotas() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForUpdateAutopilotAddonInstance() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForUpdateAutopilotCluster() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ErrorStatus")
                  .withJsonTag("errorStatus")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForUpdateAutopilotClusterEip() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForUpdateAutopilotMaintenanceWindow() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForUpdateAutopilotRelease() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForUpdateAutopilotUpgradePlan() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForUpgradeAutopilotCluster() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForUpgradeAutopilotWorkFlowUpdate() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForDeleteAutopilotJob() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForGetAutopilotOneJob() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForListAutopilotJobs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}


}
}
}
}

