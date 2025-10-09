#ifndef HUAWEICLOUD_SDK_CCE_V3_CceClient_H_
#define HUAWEICLOUD_SDK_CCE_V3_CceClient_H_

#include <huaweicloud/cce/v3/CceExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/cce/v3/model/AccessPolicy.h>
#include <huaweicloud/cce/v3/model/AddNodeList.h>
#include <huaweicloud/cce/v3/model/AddNodeRequest.h>
#include <huaweicloud/cce/v3/model/AddNodeResponse.h>
#include <huaweicloud/cce/v3/model/AddNodesToNodePoolList.h>
#include <huaweicloud/cce/v3/model/AddNodesToNodePoolRequest.h>
#include <huaweicloud/cce/v3/model/AddNodesToNodePoolResponse.h>
#include <huaweicloud/cce/v3/model/AddonInstanceRollbackRequest.h>
#include <huaweicloud/cce/v3/model/AwakeClusterRequest.h>
#include <huaweicloud/cce/v3/model/AwakeClusterResponse.h>
#include <huaweicloud/cce/v3/model/BatchCreateClusterTagsRequest.h>
#include <huaweicloud/cce/v3/model/BatchCreateClusterTagsRequestBody.h>
#include <huaweicloud/cce/v3/model/BatchCreateClusterTagsResponse.h>
#include <huaweicloud/cce/v3/model/BatchDeleteClusterTagsRequest.h>
#include <huaweicloud/cce/v3/model/BatchDeleteClusterTagsRequestBody.h>
#include <huaweicloud/cce/v3/model/BatchDeleteClusterTagsResponse.h>
#include <huaweicloud/cce/v3/model/BatchSyncNodesRequest.h>
#include <huaweicloud/cce/v3/model/BatchSyncNodesResponse.h>
#include <huaweicloud/cce/v3/model/CertDuration.h>
#include <huaweicloud/cce/v3/model/CertRevokeConfigRequestBody.h>
#include <huaweicloud/cce/v3/model/ChartResp.h>
#include <huaweicloud/cce/v3/model/Cluster.h>
#include <huaweicloud/cce/v3/model/ClusterInformation.h>
#include <huaweicloud/cce/v3/model/ClusterLogConfig.h>
#include <huaweicloud/cce/v3/model/ClusterNodeInformation.h>
#include <huaweicloud/cce/v3/model/ContinueUpgradeClusterTaskRequest.h>
#include <huaweicloud/cce/v3/model/ContinueUpgradeClusterTaskResponse.h>
#include <huaweicloud/cce/v3/model/CreateAccessPolicyRequest.h>
#include <huaweicloud/cce/v3/model/CreateAccessPolicyResponse.h>
#include <huaweicloud/cce/v3/model/CreateAddonInstanceRequest.h>
#include <huaweicloud/cce/v3/model/CreateAddonInstanceResponse.h>
#include <huaweicloud/cce/v3/model/CreateCloudPersistentVolumeClaimsRequest.h>
#include <huaweicloud/cce/v3/model/CreateCloudPersistentVolumeClaimsResponse.h>
#include <huaweicloud/cce/v3/model/CreateClusterMasterSnapshotRequest.h>
#include <huaweicloud/cce/v3/model/CreateClusterMasterSnapshotResponse.h>
#include <huaweicloud/cce/v3/model/CreateClusterRequest.h>
#include <huaweicloud/cce/v3/model/CreateClusterResponse.h>
#include <huaweicloud/cce/v3/model/CreateKubernetesClusterCertRequest.h>
#include <huaweicloud/cce/v3/model/CreateKubernetesClusterCertResponse.h>
#include <huaweicloud/cce/v3/model/CreateNodePoolRequest.h>
#include <huaweicloud/cce/v3/model/CreateNodePoolResponse.h>
#include <huaweicloud/cce/v3/model/CreateNodeRequest.h>
#include <huaweicloud/cce/v3/model/CreateNodeResponse.h>
#include <huaweicloud/cce/v3/model/CreatePartitionRequest.h>
#include <huaweicloud/cce/v3/model/CreatePartitionResponse.h>
#include <huaweicloud/cce/v3/model/CreatePostCheckRequest.h>
#include <huaweicloud/cce/v3/model/CreatePostCheckResponse.h>
#include <huaweicloud/cce/v3/model/CreatePreCheckRequest.h>
#include <huaweicloud/cce/v3/model/CreatePreCheckResponse.h>
#include <huaweicloud/cce/v3/model/CreateReleaseReqBody.h>
#include <huaweicloud/cce/v3/model/CreateReleaseRequest.h>
#include <huaweicloud/cce/v3/model/CreateReleaseResponse.h>
#include <huaweicloud/cce/v3/model/CreateUpgradeWorkFlowRequest.h>
#include <huaweicloud/cce/v3/model/CreateUpgradeWorkFlowRequestBody.h>
#include <huaweicloud/cce/v3/model/CreateUpgradeWorkFlowResponse.h>
#include <huaweicloud/cce/v3/model/DeleteAccessPolicyRequest.h>
#include <huaweicloud/cce/v3/model/DeleteAccessPolicyResponse.h>
#include <huaweicloud/cce/v3/model/DeleteAddonInstanceRequest.h>
#include <huaweicloud/cce/v3/model/DeleteAddonInstanceResponse.h>
#include <huaweicloud/cce/v3/model/DeleteChartRequest.h>
#include <huaweicloud/cce/v3/model/DeleteChartResponse.h>
#include <huaweicloud/cce/v3/model/DeleteCloudPersistentVolumeClaimsRequest.h>
#include <huaweicloud/cce/v3/model/DeleteCloudPersistentVolumeClaimsResponse.h>
#include <huaweicloud/cce/v3/model/DeleteClusterRequest.h>
#include <huaweicloud/cce/v3/model/DeleteClusterResponse.h>
#include <huaweicloud/cce/v3/model/DeleteNodePoolRequest.h>
#include <huaweicloud/cce/v3/model/DeleteNodePoolResponse.h>
#include <huaweicloud/cce/v3/model/DeleteNodeRequest.h>
#include <huaweicloud/cce/v3/model/DeleteNodeResponse.h>
#include <huaweicloud/cce/v3/model/DeleteReleaseRequest.h>
#include <huaweicloud/cce/v3/model/DeleteReleaseResponse.h>
#include <huaweicloud/cce/v3/model/DownloadChartRequest.h>
#include <huaweicloud/cce/v3/model/DownloadChartResponse.h>
#include <huaweicloud/cce/v3/model/GetAccessPolicyRequest.h>
#include <huaweicloud/cce/v3/model/GetAccessPolicyResponse.h>
#include <huaweicloud/cce/v3/model/GetAvailableZoneResponseBody.h>
#include <huaweicloud/cce/v3/model/GetAvaliableZoneRequest.h>
#include <huaweicloud/cce/v3/model/GetAvaliableZoneResponse.h>
#include <huaweicloud/cce/v3/model/GetClusterFlavorSpecsRequest.h>
#include <huaweicloud/cce/v3/model/GetClusterFlavorSpecsResponse.h>
#include <huaweicloud/cce/v3/model/GetClusterQuotaRequest.h>
#include <huaweicloud/cce/v3/model/GetClusterQuotaResponse.h>
#include <huaweicloud/cce/v3/model/GetClusterSupportConfigurationRequest.h>
#include <huaweicloud/cce/v3/model/GetClusterSupportConfigurationResponse.h>
#include <huaweicloud/cce/v3/model/GetCustomizeTagsRequest.h>
#include <huaweicloud/cce/v3/model/GetCustomizeTagsResponse.h>
#include <huaweicloud/cce/v3/model/GetLabelsRequest.h>
#include <huaweicloud/cce/v3/model/GetLabelsResponse.h>
#include <huaweicloud/cce/v3/model/GetResourceTagsRequest.h>
#include <huaweicloud/cce/v3/model/GetResourceTagsResponse.h>
#include <huaweicloud/cce/v3/model/HibernateClusterRequest.h>
#include <huaweicloud/cce/v3/model/HibernateClusterResponse.h>
#include <huaweicloud/cce/v3/model/InstanceRequest.h>
#include <huaweicloud/cce/v3/model/ListAccessPolicyRequest.h>
#include <huaweicloud/cce/v3/model/ListAccessPolicyResponse.h>
#include <huaweicloud/cce/v3/model/ListAddonInstancesRequest.h>
#include <huaweicloud/cce/v3/model/ListAddonInstancesResponse.h>
#include <huaweicloud/cce/v3/model/ListAddonTemplatesRequest.h>
#include <huaweicloud/cce/v3/model/ListAddonTemplatesResponse.h>
#include <huaweicloud/cce/v3/model/ListChartsRequest.h>
#include <huaweicloud/cce/v3/model/ListChartsResponse.h>
#include <huaweicloud/cce/v3/model/ListClusterMasterSnapshotTasksRequest.h>
#include <huaweicloud/cce/v3/model/ListClusterMasterSnapshotTasksResponse.h>
#include <huaweicloud/cce/v3/model/ListClusterUpgradeFeatureGatesRequest.h>
#include <huaweicloud/cce/v3/model/ListClusterUpgradeFeatureGatesResponse.h>
#include <huaweicloud/cce/v3/model/ListClusterUpgradePathsRequest.h>
#include <huaweicloud/cce/v3/model/ListClusterUpgradePathsResponse.h>
#include <huaweicloud/cce/v3/model/ListClustersRequest.h>
#include <huaweicloud/cce/v3/model/ListClustersResponse.h>
#include <huaweicloud/cce/v3/model/ListNodePoolsRequest.h>
#include <huaweicloud/cce/v3/model/ListNodePoolsResponse.h>
#include <huaweicloud/cce/v3/model/ListNodesRequest.h>
#include <huaweicloud/cce/v3/model/ListNodesResponse.h>
#include <huaweicloud/cce/v3/model/ListPartitionsRequest.h>
#include <huaweicloud/cce/v3/model/ListPartitionsResponse.h>
#include <huaweicloud/cce/v3/model/ListPreCheckTasksRequest.h>
#include <huaweicloud/cce/v3/model/ListPreCheckTasksResponse.h>
#include <huaweicloud/cce/v3/model/ListReleasesRequest.h>
#include <huaweicloud/cce/v3/model/ListReleasesResponse.h>
#include <huaweicloud/cce/v3/model/ListUpgradeClusterTasksRequest.h>
#include <huaweicloud/cce/v3/model/ListUpgradeClusterTasksResponse.h>
#include <huaweicloud/cce/v3/model/ListUpgradeWorkFlowsRequest.h>
#include <huaweicloud/cce/v3/model/ListUpgradeWorkFlowsResponse.h>
#include <huaweicloud/cce/v3/model/LockNodeScaledownRequestBody.h>
#include <huaweicloud/cce/v3/model/LockNodepoolNodeScaleDownRequest.h>
#include <huaweicloud/cce/v3/model/LockNodepoolNodeScaleDownResponse.h>
#include <huaweicloud/cce/v3/model/MasterEIPRequest.h>
#include <huaweicloud/cce/v3/model/MigrateNodeRequest.h>
#include <huaweicloud/cce/v3/model/MigrateNodeResponse.h>
#include <huaweicloud/cce/v3/model/MigrateNodesTask.h>
#include <huaweicloud/cce/v3/model/NodeCreateRequest.h>
#include <huaweicloud/cce/v3/model/NodePool.h>
#include <huaweicloud/cce/v3/model/NodePoolUpdate.h>
#include <huaweicloud/cce/v3/model/PackageOptions.h>
#include <huaweicloud/cce/v3/model/PartitionReqBody.h>
#include <huaweicloud/cce/v3/model/PauseUpgradeClusterTaskRequest.h>
#include <huaweicloud/cce/v3/model/PauseUpgradeClusterTaskResponse.h>
#include <huaweicloud/cce/v3/model/PersistentVolumeClaim.h>
#include <huaweicloud/cce/v3/model/PostcheckClusterRequestBody.h>
#include <huaweicloud/cce/v3/model/PrecheckClusterRequestBody.h>
#include <huaweicloud/cce/v3/model/ReleaseResp.h>
#include <huaweicloud/cce/v3/model/RemoveNodeRequest.h>
#include <huaweicloud/cce/v3/model/RemoveNodeResponse.h>
#include <huaweicloud/cce/v3/model/RemoveNodesTask.h>
#include <huaweicloud/cce/v3/model/ResetNodeList.h>
#include <huaweicloud/cce/v3/model/ResetNodeRequest.h>
#include <huaweicloud/cce/v3/model/ResetNodeResponse.h>
#include <huaweicloud/cce/v3/model/ResizeClusterRequest.h>
#include <huaweicloud/cce/v3/model/ResizeClusterRequestBody.h>
#include <huaweicloud/cce/v3/model/ResizeClusterResponse.h>
#include <huaweicloud/cce/v3/model/RetryUpgradeClusterTaskRequest.h>
#include <huaweicloud/cce/v3/model/RetryUpgradeClusterTaskResponse.h>
#include <huaweicloud/cce/v3/model/RevokeKubernetesClusterCertRequest.h>
#include <huaweicloud/cce/v3/model/RevokeKubernetesClusterCertResponse.h>
#include <huaweicloud/cce/v3/model/RollbackAddonInstanceRequest.h>
#include <huaweicloud/cce/v3/model/RollbackAddonInstanceResponse.h>
#include <huaweicloud/cce/v3/model/ScaleNodePoolRequest.h>
#include <huaweicloud/cce/v3/model/ScaleNodePoolRequestBody.h>
#include <huaweicloud/cce/v3/model/ScaleNodePoolResponse.h>
#include <huaweicloud/cce/v3/model/ShowAddonInstanceRequest.h>
#include <huaweicloud/cce/v3/model/ShowAddonInstanceResponse.h>
#include <huaweicloud/cce/v3/model/ShowChartRequest.h>
#include <huaweicloud/cce/v3/model/ShowChartResponse.h>
#include <huaweicloud/cce/v3/model/ShowChartValuesRequest.h>
#include <huaweicloud/cce/v3/model/ShowChartValuesResponse.h>
#include <huaweicloud/cce/v3/model/ShowClusterConfigRequest.h>
#include <huaweicloud/cce/v3/model/ShowClusterConfigResponse.h>
#include <huaweicloud/cce/v3/model/ShowClusterConfigurationDetailsRequest.h>
#include <huaweicloud/cce/v3/model/ShowClusterConfigurationDetailsResponse.h>
#include <huaweicloud/cce/v3/model/ShowClusterEndpointsRequest.h>
#include <huaweicloud/cce/v3/model/ShowClusterEndpointsResponse.h>
#include <huaweicloud/cce/v3/model/ShowClusterRequest.h>
#include <huaweicloud/cce/v3/model/ShowClusterResponse.h>
#include <huaweicloud/cce/v3/model/ShowClusterUpgradeInfoRequest.h>
#include <huaweicloud/cce/v3/model/ShowClusterUpgradeInfoResponse.h>
#include <huaweicloud/cce/v3/model/ShowFeatureGatesRequest.h>
#include <huaweicloud/cce/v3/model/ShowFeatureGatesResponse.h>
#include <huaweicloud/cce/v3/model/ShowNodePoolConfigurationDetailsRequest.h>
#include <huaweicloud/cce/v3/model/ShowNodePoolConfigurationDetailsResponse.h>
#include <huaweicloud/cce/v3/model/ShowNodePoolConfigurationsRequest.h>
#include <huaweicloud/cce/v3/model/ShowNodePoolConfigurationsResponse.h>
#include <huaweicloud/cce/v3/model/ShowNodePoolRequest.h>
#include <huaweicloud/cce/v3/model/ShowNodePoolResponse.h>
#include <huaweicloud/cce/v3/model/ShowNodeRequest.h>
#include <huaweicloud/cce/v3/model/ShowNodeResponse.h>
#include <huaweicloud/cce/v3/model/ShowPartitionRequest.h>
#include <huaweicloud/cce/v3/model/ShowPartitionResponse.h>
#include <huaweicloud/cce/v3/model/ShowPreCheckRequest.h>
#include <huaweicloud/cce/v3/model/ShowPreCheckResponse.h>
#include <huaweicloud/cce/v3/model/ShowQuotasRequest.h>
#include <huaweicloud/cce/v3/model/ShowQuotasResponse.h>
#include <huaweicloud/cce/v3/model/ShowReleaseHistoryRequest.h>
#include <huaweicloud/cce/v3/model/ShowReleaseHistoryResponse.h>
#include <huaweicloud/cce/v3/model/ShowReleaseRequest.h>
#include <huaweicloud/cce/v3/model/ShowReleaseResponse.h>
#include <huaweicloud/cce/v3/model/ShowUpgradeClusterTaskRequest.h>
#include <huaweicloud/cce/v3/model/ShowUpgradeClusterTaskResponse.h>
#include <huaweicloud/cce/v3/model/ShowUpgradeWorkFlowRequest.h>
#include <huaweicloud/cce/v3/model/ShowUpgradeWorkFlowResponse.h>
#include <huaweicloud/cce/v3/model/ShowUserChartsQuotasRequest.h>
#include <huaweicloud/cce/v3/model/ShowUserChartsQuotasResponse.h>
#include <huaweicloud/cce/v3/model/SyncNodeRequest.h>
#include <huaweicloud/cce/v3/model/SyncNodeResponse.h>
#include <huaweicloud/cce/v3/model/UnlockNodeScaledownRequestBody.h>
#include <huaweicloud/cce/v3/model/UnlockNodepoolNodeScaleDownRequest.h>
#include <huaweicloud/cce/v3/model/UnlockNodepoolNodeScaleDownResponse.h>
#include <huaweicloud/cce/v3/model/UpdateAccessPolicyRequest.h>
#include <huaweicloud/cce/v3/model/UpdateAccessPolicyResponse.h>
#include <huaweicloud/cce/v3/model/UpdateAddonInstanceRequest.h>
#include <huaweicloud/cce/v3/model/UpdateAddonInstanceResponse.h>
#include <huaweicloud/cce/v3/model/UpdateClusterEipRequest.h>
#include <huaweicloud/cce/v3/model/UpdateClusterEipResponse.h>
#include <huaweicloud/cce/v3/model/UpdateClusterLogConfigRequest.h>
#include <huaweicloud/cce/v3/model/UpdateClusterLogConfigResponse.h>
#include <huaweicloud/cce/v3/model/UpdateClusterRequest.h>
#include <huaweicloud/cce/v3/model/UpdateClusterResponse.h>
#include <huaweicloud/cce/v3/model/UpdateNodePoolRequest.h>
#include <huaweicloud/cce/v3/model/UpdateNodePoolResponse.h>
#include <huaweicloud/cce/v3/model/UpdateNodeRequest.h>
#include <huaweicloud/cce/v3/model/UpdateNodeResponse.h>
#include <huaweicloud/cce/v3/model/UpdatePartitionRequest.h>
#include <huaweicloud/cce/v3/model/UpdatePartitionResponse.h>
#include <huaweicloud/cce/v3/model/UpdateReleaseReqBody.h>
#include <huaweicloud/cce/v3/model/UpdateReleaseRequest.h>
#include <huaweicloud/cce/v3/model/UpdateReleaseResponse.h>
#include <huaweicloud/cce/v3/model/UpgradeClusterRequest.h>
#include <huaweicloud/cce/v3/model/UpgradeClusterRequestBody.h>
#include <huaweicloud/cce/v3/model/UpgradeClusterResponse.h>
#include <huaweicloud/cce/v3/model/UpgradeNodePool.h>
#include <huaweicloud/cce/v3/model/UpgradeNodePoolRequest.h>
#include <huaweicloud/cce/v3/model/UpgradeNodePoolResponse.h>
#include <huaweicloud/cce/v3/model/UpgradeWorkFlowUpdateRequest.h>
#include <huaweicloud/cce/v3/model/UpgradeWorkFlowUpdateRequestBody.h>
#include <huaweicloud/cce/v3/model/UpgradeWorkFlowUpdateResponse.h>
#include <string>

#include <huaweicloud/cce/v3/model/ShowVersionRequest.h>
#include <huaweicloud/cce/v3/model/ShowVersionResponse.h>

#include <huaweicloud/cce/v3/model/AddonInstanceRollbackRequest.h>
#include <huaweicloud/cce/v3/model/AutopilotCluster.h>
#include <huaweicloud/cce/v3/model/AutopilotClusterInformation.h>
#include <huaweicloud/cce/v3/model/BatchCreateAutopilotClusterTagsRequest.h>
#include <huaweicloud/cce/v3/model/BatchCreateAutopilotClusterTagsResponse.h>
#include <huaweicloud/cce/v3/model/BatchCreateClusterTagsRequestBody.h>
#include <huaweicloud/cce/v3/model/BatchDeleteAutopilotClusterTagsRequest.h>
#include <huaweicloud/cce/v3/model/BatchDeleteAutopilotClusterTagsResponse.h>
#include <huaweicloud/cce/v3/model/BatchDeleteClusterTagsRequestBody.h>
#include <huaweicloud/cce/v3/model/CertDuration.h>
#include <huaweicloud/cce/v3/model/ChartResp.h>
#include <huaweicloud/cce/v3/model/CreateAutopilotAddonInstanceRequest.h>
#include <huaweicloud/cce/v3/model/CreateAutopilotAddonInstanceResponse.h>
#include <huaweicloud/cce/v3/model/CreateAutopilotClusterMasterSnapshotRequest.h>
#include <huaweicloud/cce/v3/model/CreateAutopilotClusterMasterSnapshotResponse.h>
#include <huaweicloud/cce/v3/model/CreateAutopilotClusterRequest.h>
#include <huaweicloud/cce/v3/model/CreateAutopilotClusterResponse.h>
#include <huaweicloud/cce/v3/model/CreateAutopilotKubernetesClusterCertRequest.h>
#include <huaweicloud/cce/v3/model/CreateAutopilotKubernetesClusterCertResponse.h>
#include <huaweicloud/cce/v3/model/CreateAutopilotMaintenanceWindowRequest.h>
#include <huaweicloud/cce/v3/model/CreateAutopilotMaintenanceWindowResponse.h>
#include <huaweicloud/cce/v3/model/CreateAutopilotPostCheckRequest.h>
#include <huaweicloud/cce/v3/model/CreateAutopilotPostCheckResponse.h>
#include <huaweicloud/cce/v3/model/CreateAutopilotPreCheckRequest.h>
#include <huaweicloud/cce/v3/model/CreateAutopilotPreCheckResponse.h>
#include <huaweicloud/cce/v3/model/CreateAutopilotReleaseRequest.h>
#include <huaweicloud/cce/v3/model/CreateAutopilotReleaseResponse.h>
#include <huaweicloud/cce/v3/model/CreateAutopilotUpgradeWorkFlowRequest.h>
#include <huaweicloud/cce/v3/model/CreateAutopilotUpgradeWorkFlowResponse.h>
#include <huaweicloud/cce/v3/model/CreateReleaseReqBody.h>
#include <huaweicloud/cce/v3/model/CreateUpgradeWorkFlowRequestBody.h>
#include <huaweicloud/cce/v3/model/DelayUpgradePlanRequestBody.h>
#include <huaweicloud/cce/v3/model/DeleteAutopilotAddonInstanceRequest.h>
#include <huaweicloud/cce/v3/model/DeleteAutopilotAddonInstanceResponse.h>
#include <huaweicloud/cce/v3/model/DeleteAutopilotChartRequest.h>
#include <huaweicloud/cce/v3/model/DeleteAutopilotChartResponse.h>
#include <huaweicloud/cce/v3/model/DeleteAutopilotClusterRequest.h>
#include <huaweicloud/cce/v3/model/DeleteAutopilotClusterResponse.h>
#include <huaweicloud/cce/v3/model/DeleteAutopilotMaintenanceWindowRequest.h>
#include <huaweicloud/cce/v3/model/DeleteAutopilotMaintenanceWindowResponse.h>
#include <huaweicloud/cce/v3/model/DeleteAutopilotReleaseRequest.h>
#include <huaweicloud/cce/v3/model/DeleteAutopilotReleaseResponse.h>
#include <huaweicloud/cce/v3/model/DownloadAutopilotChartRequest.h>
#include <huaweicloud/cce/v3/model/DownloadAutopilotChartResponse.h>
#include <huaweicloud/cce/v3/model/InstanceRequest.h>
#include <huaweicloud/cce/v3/model/ListAutopilotAddonInstancesRequest.h>
#include <huaweicloud/cce/v3/model/ListAutopilotAddonInstancesResponse.h>
#include <huaweicloud/cce/v3/model/ListAutopilotAddonTemplatesRequest.h>
#include <huaweicloud/cce/v3/model/ListAutopilotAddonTemplatesResponse.h>
#include <huaweicloud/cce/v3/model/ListAutopilotChartsRequest.h>
#include <huaweicloud/cce/v3/model/ListAutopilotChartsResponse.h>
#include <huaweicloud/cce/v3/model/ListAutopilotClusterMasterSnapshotTasksRequest.h>
#include <huaweicloud/cce/v3/model/ListAutopilotClusterMasterSnapshotTasksResponse.h>
#include <huaweicloud/cce/v3/model/ListAutopilotClusterUpgradeFeatureGatesRequest.h>
#include <huaweicloud/cce/v3/model/ListAutopilotClusterUpgradeFeatureGatesResponse.h>
#include <huaweicloud/cce/v3/model/ListAutopilotClusterUpgradePathsRequest.h>
#include <huaweicloud/cce/v3/model/ListAutopilotClusterUpgradePathsResponse.h>
#include <huaweicloud/cce/v3/model/ListAutopilotClustersRequest.h>
#include <huaweicloud/cce/v3/model/ListAutopilotClustersResponse.h>
#include <huaweicloud/cce/v3/model/ListAutopilotPreCheckTasksRequest.h>
#include <huaweicloud/cce/v3/model/ListAutopilotPreCheckTasksResponse.h>
#include <huaweicloud/cce/v3/model/ListAutopilotReleasesRequest.h>
#include <huaweicloud/cce/v3/model/ListAutopilotReleasesResponse.h>
#include <huaweicloud/cce/v3/model/ListAutopilotUpgradeClusterTasksRequest.h>
#include <huaweicloud/cce/v3/model/ListAutopilotUpgradeClusterTasksResponse.h>
#include <huaweicloud/cce/v3/model/ListAutopilotUpgradePlansRequest.h>
#include <huaweicloud/cce/v3/model/ListAutopilotUpgradePlansResponse.h>
#include <huaweicloud/cce/v3/model/ListAutopilotUpgradeWorkFlowsRequest.h>
#include <huaweicloud/cce/v3/model/ListAutopilotUpgradeWorkFlowsResponse.h>
#include <huaweicloud/cce/v3/model/MaintenanceWindow.h>
#include <huaweicloud/cce/v3/model/MasterEIPRequest.h>
#include <huaweicloud/cce/v3/model/PostcheckClusterRequestBody.h>
#include <huaweicloud/cce/v3/model/PrecheckClusterRequestBody.h>
#include <huaweicloud/cce/v3/model/ReleaseResp.h>
#include <huaweicloud/cce/v3/model/RetryAutopilotUpgradeClusterTaskRequest.h>
#include <huaweicloud/cce/v3/model/RetryAutopilotUpgradeClusterTaskResponse.h>
#include <huaweicloud/cce/v3/model/RollbackAutopilotAddonInstanceRequest.h>
#include <huaweicloud/cce/v3/model/RollbackAutopilotAddonInstanceResponse.h>
#include <huaweicloud/cce/v3/model/ShowAutopilotAddonInstanceRequest.h>
#include <huaweicloud/cce/v3/model/ShowAutopilotAddonInstanceResponse.h>
#include <huaweicloud/cce/v3/model/ShowAutopilotChartRequest.h>
#include <huaweicloud/cce/v3/model/ShowAutopilotChartResponse.h>
#include <huaweicloud/cce/v3/model/ShowAutopilotChartValuesRequest.h>
#include <huaweicloud/cce/v3/model/ShowAutopilotChartValuesResponse.h>
#include <huaweicloud/cce/v3/model/ShowAutopilotClusterEndpointsRequest.h>
#include <huaweicloud/cce/v3/model/ShowAutopilotClusterEndpointsResponse.h>
#include <huaweicloud/cce/v3/model/ShowAutopilotClusterRequest.h>
#include <huaweicloud/cce/v3/model/ShowAutopilotClusterResponse.h>
#include <huaweicloud/cce/v3/model/ShowAutopilotClusterUpgradeInfoRequest.h>
#include <huaweicloud/cce/v3/model/ShowAutopilotClusterUpgradeInfoResponse.h>
#include <huaweicloud/cce/v3/model/ShowAutopilotMaintenanceWindowRequest.h>
#include <huaweicloud/cce/v3/model/ShowAutopilotMaintenanceWindowResponse.h>
#include <huaweicloud/cce/v3/model/ShowAutopilotPreCheckRequest.h>
#include <huaweicloud/cce/v3/model/ShowAutopilotPreCheckResponse.h>
#include <huaweicloud/cce/v3/model/ShowAutopilotQuotasRequest.h>
#include <huaweicloud/cce/v3/model/ShowAutopilotQuotasResponse.h>
#include <huaweicloud/cce/v3/model/ShowAutopilotReleaseHistoryRequest.h>
#include <huaweicloud/cce/v3/model/ShowAutopilotReleaseHistoryResponse.h>
#include <huaweicloud/cce/v3/model/ShowAutopilotReleaseRequest.h>
#include <huaweicloud/cce/v3/model/ShowAutopilotReleaseResponse.h>
#include <huaweicloud/cce/v3/model/ShowAutopilotUpgradeClusterTaskRequest.h>
#include <huaweicloud/cce/v3/model/ShowAutopilotUpgradeClusterTaskResponse.h>
#include <huaweicloud/cce/v3/model/ShowAutopilotUpgradeWorkFlowRequest.h>
#include <huaweicloud/cce/v3/model/ShowAutopilotUpgradeWorkFlowResponse.h>
#include <huaweicloud/cce/v3/model/ShowAutopilotUserChartsQuotasRequest.h>
#include <huaweicloud/cce/v3/model/ShowAutopilotUserChartsQuotasResponse.h>
#include <huaweicloud/cce/v3/model/UpdateAutopilotAddonInstanceRequest.h>
#include <huaweicloud/cce/v3/model/UpdateAutopilotAddonInstanceResponse.h>
#include <huaweicloud/cce/v3/model/UpdateAutopilotClusterEipRequest.h>
#include <huaweicloud/cce/v3/model/UpdateAutopilotClusterEipResponse.h>
#include <huaweicloud/cce/v3/model/UpdateAutopilotClusterRequest.h>
#include <huaweicloud/cce/v3/model/UpdateAutopilotClusterResponse.h>
#include <huaweicloud/cce/v3/model/UpdateAutopilotMaintenanceWindowRequest.h>
#include <huaweicloud/cce/v3/model/UpdateAutopilotMaintenanceWindowResponse.h>
#include <huaweicloud/cce/v3/model/UpdateAutopilotReleaseRequest.h>
#include <huaweicloud/cce/v3/model/UpdateAutopilotReleaseResponse.h>
#include <huaweicloud/cce/v3/model/UpdateAutopilotUpgradePlanRequest.h>
#include <huaweicloud/cce/v3/model/UpdateAutopilotUpgradePlanResponse.h>
#include <huaweicloud/cce/v3/model/UpdateReleaseReqBody.h>
#include <huaweicloud/cce/v3/model/UpgradeAutopilotClusterRequest.h>
#include <huaweicloud/cce/v3/model/UpgradeAutopilotClusterResponse.h>
#include <huaweicloud/cce/v3/model/UpgradeAutopilotWorkFlowUpdateRequest.h>
#include <huaweicloud/cce/v3/model/UpgradeAutopilotWorkFlowUpdateResponse.h>
#include <huaweicloud/cce/v3/model/UpgradeClusterRequestBody.h>
#include <huaweicloud/cce/v3/model/UpgradeWorkFlowUpdateRequestBody.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Cce::V3::Model;

class HUAWEICLOUD_CCE_V3_EXPORT  CceClient : public Client
{
public:

    CceClient();

    virtual ~CceClient();

    static ClientBuilder<CceClient> newBuilder();

    // 纳管节点
    //
    // 该API用于在指定集群下纳管节点。
    // &gt;集群管理的URL格式为：https://Endpoint/uri。其中uri为资源路径，也即API访问的路径。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddNodeResponse> addNode(
        AddNodeRequest &request
    );
    // 自定义节点池纳管节点
    //
    // 该API用于在指定集群自定义节点池下纳管节点。竞价实例不支持纳管。
    // &gt;集群管理的URL格式为：https://Endpoint/uri。其中uri为资源路径，也即API访问的路径。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddNodesToNodePoolResponse> addNodesToNodePool(
        AddNodesToNodePoolRequest &request
    );
    // 集群唤醒
    //
    // 集群唤醒用于唤醒已休眠的集群，唤醒后，将继续收取控制节点资源费用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AwakeClusterResponse> awakeCluster(
        AwakeClusterRequest &request
    );
    // 批量添加指定集群的资源标签
    //
    // 该API用于批量添加指定集群的资源标签。
    // &gt; - 每个集群支持最多20个资源标签。
    // &gt; - 此接口为幂等接口：创建时，如果创建的标签已经存在（key/value均相同视为重复），默认处理成功；key相同，value不同时会覆盖原有标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCreateClusterTagsResponse> batchCreateClusterTags(
        BatchCreateClusterTagsRequest &request
    );
    // 批量删除指定集群的资源标签
    //
    // 该API用于批量删除指定集群的资源标签。
    // &gt; - 此接口为幂等接口：删除时，如果删除的标签key不存在，默认处理成功。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteClusterTagsResponse> batchDeleteClusterTags(
        BatchDeleteClusterTagsRequest &request
    );
    // 批量同步节点
    //
    // 该API用于批量同步节点。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchSyncNodesResponse> batchSyncNodes(
        BatchSyncNodesRequest &request
    );
    // 继续执行集群升级任务
    //
    // 继续执行被暂停的集群升级任务。
    // &gt; - 集群升级涉及多维度的组件升级操作，强烈建议统一通过CCE控制台执行交互式升级，降低集群升级过程的业务意外受损风险；
    // &gt; - 当前集群升级相关接口受限开放。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ContinueUpgradeClusterTaskResponse> continueUpgradeClusterTask(
        ContinueUpgradeClusterTaskRequest &request
    );
    // 创建访问策略
    //
    // 该API用于创建访问策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAccessPolicyResponse> createAccessPolicy(
        CreateAccessPolicyRequest &request
    );
    // 创建AddonInstance
    //
    // 根据提供的插件模板，安装插件实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAddonInstanceResponse> createAddonInstance(
        CreateAddonInstanceRequest &request
    );
    // 创建PVC（待废弃）
    //
    // 该API用于在指定的Namespace下通过云存储服务中的云存储（EVS、SFS、OBS）去创建PVC（PersistentVolumeClaim）。该API待废弃，请使用Kubernetes PVC相关接口。
    // 
    // 
    // &gt;存储管理的URL格式为：https://{clusterid}.Endpoint/uri。其中{clusterid}为集群ID，uri为资源路径，也即API访问的路径。如果使用https://Endpoint/uri，则必须指定请求header中的X-Cluster-ID参数。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateCloudPersistentVolumeClaimsResponse> createCloudPersistentVolumeClaims(
        CreateCloudPersistentVolumeClaimsRequest &request
    );
    // 创建集群
    //
    // 该API用于创建一个空集群（即只有控制节点Master，没有工作节点Node）。请在调用本接口完成集群创建之后，通过[创建节点](cce_02_0242.xml)添加节点。
    // 
    // 
    // &gt;   - 集群管理的URL格式为：https://Endpoint/uri。其中uri为资源路径，也即API访问的路径。
    // &gt;   - 调用该接口创建集群时，默认不安装ICAgent，若需安装ICAgent，可在请求Body参数的annotations中加入\&quot;cluster.install.addons.external/install\&quot;:\&quot;[{\&quot;addonTemplateName\&quot;:\&quot;icagent\&quot;}]\&quot;的集群注解，将在创建集群时自动安装ICAgent。ICAgent是应用性能管理APM的采集代理，运行在应用所在的服务器上，用于实时采集探针所获取的数据，安装ICAgent是使用应用性能管理APM的前提。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateClusterResponse> createCluster(
        CreateClusterRequest &request
    );
    // 集群备份
    //
    // 集群备份
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateClusterMasterSnapshotResponse> createClusterMasterSnapshot(
        CreateClusterMasterSnapshotRequest &request
    );
    // 获取集群证书
    //
    // 该API用于获取指定集群的证书信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateKubernetesClusterCertResponse> createKubernetesClusterCert(
        CreateKubernetesClusterCertRequest &request
    );
    // 创建节点
    //
    // 该API用于在指定集群下创建节点。
    // &gt; - 若无集群，请先[创建集群](cce_02_0236.xml)。
    // &gt; - 集群管理的URL格式为：https://Endpoint/uri。其中uri为资源路径，也即API访问的路径。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateNodeResponse> createNode(
        CreateNodeRequest &request
    );
    // 创建节点池
    //
    // 该API用于在指定集群下创建节点池。仅支持集群在处于可用、扩容、缩容状态时调用。
    // 
    // 1.21版本的集群创建节点池时支持绑定安全组，每个节点池最多绑定五个安全组。
    // 
    // 更新节点池的安全组后，只针对新创的pod生效，建议驱逐节点上原有的pod。
    // 
    // &gt; 若无集群，请先[创建集群](cce_02_0236.xml)。
    // &gt; 集群管理的URL格式为：https://Endpoint/uri。其中uri为资源路径，也即API访问的路径
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateNodePoolResponse> createNodePool(
        CreateNodePoolRequest &request
    );
    // 创建分区
    //
    // 创建分区
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePartitionResponse> createPartition(
        CreatePartitionRequest &request
    );
    // 集群升级后确认
    //
    // 集群升级后确认，该接口建议配合Console使用，主要用于升级步骤完成后，客户确认集群状态和业务正常后做反馈。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePostCheckResponse> createPostCheck(
        CreatePostCheckRequest &request
    );
    // 集群升级前检查
    //
    // 集群升级前检查
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePreCheckResponse> createPreCheck(
        CreatePreCheckRequest &request
    );
    // 创建模板实例
    //
    // 创建模板实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateReleaseResponse> createRelease(
        CreateReleaseRequest &request
    );
    // 开启集群升级流程引导任务
    //
    // 该API用于创建一个集群升级流程引导任务。请在调用本接口完成引导任务创建之后，通过集群升级前检查开始检查任务。
    // 升级流程任务用于控制集群升级任务的执行流程，执行流程为 升级前检查 &#x3D;&gt; 集群升级 &#x3D;&gt; 升级后检查。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateUpgradeWorkFlowResponse> createUpgradeWorkFlow(
        CreateUpgradeWorkFlowRequest &request
    );
    // 删除访问策略
    //
    // 该API用于删除单个访问策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAccessPolicyResponse> deleteAccessPolicy(
        DeleteAccessPolicyRequest &request
    );
    // 删除AddonInstance
    //
    // 删除插件实例的功能。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAddonInstanceResponse> deleteAddonInstance(
        DeleteAddonInstanceRequest &request
    );
    // 删除模板
    //
    // 删除模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteChartResponse> deleteChart(
        DeleteChartRequest &request
    );
    // 删除PVC（待废弃）
    //
    // 该API用于删除指定Namespace下的PVC（PersistentVolumeClaim）对象，并可以选择保留后端的云存储。该API待废弃，请使用Kubernetes PVC相关接口。
    // &gt;存储管理的URL格式为：https://{clusterid}.Endpoint/uri。其中{clusterid}为集群ID，uri为资源路径，也即API访问的路径。如果使用https://Endpoint/uri，则必须指定请求header中的X-Cluster-ID参数。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteCloudPersistentVolumeClaimsResponse> deleteCloudPersistentVolumeClaims(
        DeleteCloudPersistentVolumeClaimsRequest &request
    );
    // 删除集群
    //
    // 该API用于删除一个指定的集群。
    // &gt;集群管理的URL格式为：https://Endpoint/uri。其中uri为资源路径，也即API访问的路径。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteClusterResponse> deleteCluster(
        DeleteClusterRequest &request
    );
    // 删除节点
    //
    // 该API用于删除指定的节点。
    // &gt;集群管理的URL格式为：https://Endpoint/uri。其中uri为资源路径，也即API访问的路径
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteNodeResponse> deleteNode(
        DeleteNodeRequest &request
    );
    // 删除节点池
    //
    // 该API用于删除指定的节点池。
    // &gt; 集群管理的URL格式为：https://Endpoint/uri。其中uri为资源路径，也即API访问的路径
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteNodePoolResponse> deleteNodePool(
        DeleteNodePoolRequest &request
    );
    // 删除指定模板实例
    //
    // 删除指定模板实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteReleaseResponse> deleteRelease(
        DeleteReleaseRequest &request
    );
    // 下载模板
    //
    // 下载模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadChartResponse> downloadChart(
        DownloadChartRequest &request
    );
    // 获取访问策略详情
    //
    // 该API用于获取单个访问策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetAccessPolicyResponse> getAccessPolicy(
        GetAccessPolicyRequest &request
    );
    // 查询可用区列表
    //
    // 该API用于查询可用区列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetAvaliableZoneResponse> getAvaliableZone(
        GetAvaliableZoneRequest &request
    );
    // 查询集群可售卖规格
    //
    // 该API用于查询集群可售卖规格
    // &gt; 集群管理的URL格式为：https://Endpoint/uri。其中uri为资源路径，也即API访问的路径。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetClusterFlavorSpecsResponse> getClusterFlavorSpecs(
        GetClusterFlavorSpecsRequest &request
    );
    // 获取集群配额
    //
    // 该API用于获取集群配额
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetClusterQuotaResponse> getClusterQuota(
        GetClusterQuotaRequest &request
    );
    // 获取集群支持的可配置参数列表
    //
    // 该API用于根据集群版本类型等查询集群支持的详细配置项，用于集群创建时指定。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetClusterSupportConfigurationResponse> getClusterSupportConfiguration(
        GetClusterSupportConfigurationRequest &request
    );
    // 查询自定义标签
    //
    // 该API用于查询自定义标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetCustomizeTagsResponse> getCustomizeTags(
        GetCustomizeTagsRequest &request
    );
    // 获取节点标签
    //
    // 该API用于获取集群所有节点的标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetLabelsResponse> getLabels(
        GetLabelsRequest &request
    );
    // 查询资源标签
    //
    // 该API用于查询资源标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetResourceTagsResponse> getResourceTags(
        GetResourceTagsRequest &request
    );
    // 集群休眠
    //
    // 集群休眠用于将运行中的集群置于休眠状态，休眠后，将不再收取控制节点资源费用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<HibernateClusterResponse> hibernateCluster(
        HibernateClusterRequest &request
    );
    // 获取访问策略列表
    //
    // 该API用于获取访问策略列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAccessPolicyResponse> listAccessPolicy(
        ListAccessPolicyRequest &request
    );
    // 获取AddonInstance列表
    //
    // 获取集群所有已安装插件实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAddonInstancesResponse> listAddonInstances(
        ListAddonInstancesRequest &request
    );
    // 查询AddonTemplates列表
    //
    // 插件模板查询接口，查询插件信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAddonTemplatesResponse> listAddonTemplates(
        ListAddonTemplatesRequest &request
    );
    // 获取模板列表
    //
    // 获取模板列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListChartsResponse> listCharts(
        ListChartsRequest &request
    );
    // 获取集群备份任务详情列表
    //
    // 获取集群备份任务详情列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListClusterMasterSnapshotTasksResponse> listClusterMasterSnapshotTasks(
        ListClusterMasterSnapshotTasksRequest &request
    );
    // 获取集群升级特性开关配置
    //
    // 获取集群升级特性开关配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListClusterUpgradeFeatureGatesResponse> listClusterUpgradeFeatureGates(
        ListClusterUpgradeFeatureGatesRequest &request
    );
    // 获取集群升级路径
    //
    // 获取集群升级路径
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListClusterUpgradePathsResponse> listClusterUpgradePaths(
        ListClusterUpgradePathsRequest &request
    );
    // 获取指定项目下的集群
    //
    // 该API用于获取指定项目下所有集群的详细信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListClustersResponse> listClusters(
        ListClustersRequest &request
    );
    // 获取集群下所有节点池
    //
    // 该API用于获取集群下所有节点池。
    // &gt; - 集群管理的URL格式为：https://Endpoint/uri。其中uri为资源路径，也即API访问的路径
    // &gt; - nodepool是集群中具有相同配置的节点实例的子集。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListNodePoolsResponse> listNodePools(
        ListNodePoolsRequest &request
    );
    // 获取集群下所有节点
    //
    // 该API用于通过集群ID获取指定集群下所有节点的详细信息。
    // &gt;集群管理的URL格式为：https://Endpoint/uri。其中uri为资源路径，也即API访问的路径。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListNodesResponse> listNodes(
        ListNodesRequest &request
    );
    // 获取分区列表
    //
    // 获取分区列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPartitionsResponse> listPartitions(
        ListPartitionsRequest &request
    );
    // 获取集群升级前检查任务详情列表
    //
    // 获取集群升级前检查任务详情列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPreCheckTasksResponse> listPreCheckTasks(
        ListPreCheckTasksRequest &request
    );
    // 获取模板实例列表
    //
    // 获取模板实例列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListReleasesResponse> listReleases(
        ListReleasesRequest &request
    );
    // 获取集群升级任务详情列表
    //
    // 获取集群升级任务详情列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListUpgradeClusterTasksResponse> listUpgradeClusterTasks(
        ListUpgradeClusterTasksRequest &request
    );
    // 获取UpgradeWorkFlows列表
    //
    // 获取历史集群升级引导任务列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListUpgradeWorkFlowsResponse> listUpgradeWorkFlows(
        ListUpgradeWorkFlowsRequest &request
    );
    // 节点开启缩容保护。
    //
    // 该API用于节点开启缩容保护，开启缩容保护的节点无法通过修改节点池个数的方式被缩容。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<LockNodepoolNodeScaleDownResponse> lockNodepoolNodeScaleDown(
        LockNodepoolNodeScaleDownRequest &request
    );
    // 节点迁移
    //
    // 该API用于在指定集群下迁移节点到另一集群。
    // 
    // &gt;集群管理的URL格式为：https://Endpoint/uri。其中uri为资源路径，也即API访问的路径。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<MigrateNodeResponse> migrateNode(
        MigrateNodeRequest &request
    );
    // 暂停集群升级任务
    //
    // 暂停集群升级任务。
    // &gt; - 集群升级涉及多维度的组件升级操作，强烈建议统一通过CCE控制台执行交互式升级，降低集群升级过程的业务意外受损风险；
    // &gt; - 当前集群升级相关接口受限开放。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<PauseUpgradeClusterTaskResponse> pauseUpgradeClusterTask(
        PauseUpgradeClusterTaskRequest &request
    );
    // 节点移除
    //
    // 该API用于在指定集群下移除节点。
    // &gt;集群管理的URL格式为：https://Endpoint/uri。其中uri为资源路径，也即API访问的路径。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RemoveNodeResponse> removeNode(
        RemoveNodeRequest &request
    );
    // 重置节点
    //
    // 该API用于在指定集群下重置节点。
    // &gt;集群管理的URL格式为：https://Endpoint/uri。其中uri为资源路径，也即API访问的路径。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResetNodeResponse> resetNode(
        ResetNodeRequest &request
    );
    // 变更集群规格
    //
    // 该API用于变更一个指定集群的规格。
    // 
    // &gt;   - 集群管理的URL格式为：https://Endpoint/uri。其中uri为资源路径，也即API访问的路径。
    // &gt;   [- 使用限制请参考[变更集群规格](https://support.huaweicloud.com/usermanual-cce/cce_10_0403.html)。](tag:hws)
    // &gt;   [- 使用限制请参考[变更集群规格](https://support.huaweicloud.com/intl/zh-cn/usermanual-cce/cce_10_0403.html)](tag:hws_hk)
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResizeClusterResponse> resizeCluster(
        ResizeClusterRequest &request
    );
    // 重试集群升级任务
    //
    // 重新执行失败的集群升级任务。
    // &gt; - 集群升级涉及多维度的组件升级操作，强烈建议统一通过CCE控制台执行交互式升级，降低集群升级过程的业务意外受损风险；
    // &gt; - 当前集群升级相关接口受限开放。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RetryUpgradeClusterTaskResponse> retryUpgradeClusterTask(
        RetryUpgradeClusterTaskRequest &request
    );
    // 吊销用户的集群证书
    //
    // 该API用于吊销指定集群的用户证书
    // 
    // &gt; 吊销操作完成后，此证书申请人之前下载的证书和 kubectl 配置文件无法再用于连接集群。此证书申请人可以重新下载证书或 kubectl 配置文件，并使用新下载的文件连接集群
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RevokeKubernetesClusterCertResponse> revokeKubernetesClusterCert(
        RevokeKubernetesClusterCertRequest &request
    );
    // 回滚AddonInstance
    //
    // 将插件实例回滚到升级前的版本。只有在当前插件实例版本支持回滚到升级前的版本（status.isRollbackable为true），且插件实例状态为running（运行中）、available（可用）、abnormal（不可用）、upgradeFailed（升级失败）、rollbackFailed（回滚失败）时支持回滚。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RollbackAddonInstanceResponse> rollbackAddonInstance(
        RollbackAddonInstanceRequest &request
    );
    // 伸缩节点池
    //
    // 该API用于伸缩指定的节点池
    // &gt; 集群管理的URL格式为：https://Endpoint/uri。其中uri为资源路径，也即API访问的路径
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ScaleNodePoolResponse> scaleNodePool(
        ScaleNodePoolRequest &request
    );
    // 获取AddonInstance详情
    //
    // 获取插件实例详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAddonInstanceResponse> showAddonInstance(
        ShowAddonInstanceRequest &request
    );
    // 获取模板
    //
    // 获取模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowChartResponse> showChart(
        ShowChartRequest &request
    );
    // 获取模板Values
    //
    // 获取模板Values
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowChartValuesResponse> showChartValues(
        ShowChartValuesRequest &request
    );
    // 获取指定的集群
    //
    // 该API用于获取指定集群的详细信息。
    // &gt;集群管理的URL格式为：https://Endpoint/uri。其中uri为资源路径，也即API访问的路径。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowClusterResponse> showCluster(
        ShowClusterRequest &request
    );
    // 查询集群日志配置信息
    //
    // 获取集群组件上报的LTS的配置信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowClusterConfigResponse> showClusterConfig(
        ShowClusterConfigRequest &request
    );
    // 查询指定集群支持配置的参数列表
    //
    // 该API用于查询CCE服务下指定集群支持配置的参数列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowClusterConfigurationDetailsResponse> showClusterConfigurationDetails(
        ShowClusterConfigurationDetailsRequest &request
    );
    // 获取集群访问的地址
    //
    // 该API用于通过集群ID获取集群访问的地址，包括PrivateIP(HA集群返回VIP)与PublicIP
    // &gt;集群管理的URL格式为：https://Endpoint/uri。其中uri为资源路径，也即API访问的路径。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowClusterEndpointsResponse> showClusterEndpoints(
        ShowClusterEndpointsRequest &request
    );
    // 获取集群升级相关信息
    //
    // 获取集群升级相关信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowClusterUpgradeInfoResponse> showClusterUpgradeInfo(
        ShowClusterUpgradeInfoRequest &request
    );
    // 查询特性开关状态
    //
    // 该API用于查询特性开关状态
    // &gt; 集群管理的URL格式为：https://Endpoint/uri。其中uri为资源路径，也即API访问的路径。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowFeatureGatesResponse> showFeatureGates(
        ShowFeatureGatesRequest &request
    );
    // 获取指定的节点
    //
    // 该API用于通过节点ID获取指定节点的详细信息。
    // &gt;集群管理的URL格式为：https://Endpoint/uri。其中uri为资源路径，也即API访问的路径。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowNodeResponse> showNode(
        ShowNodeRequest &request
    );
    // 获取指定的节点池
    //
    // 该API用于获取指定节点池的详细信息。
    // &gt; 集群管理的URL格式为：https://Endpoint/uri。其中uri为资源路径，也即API访问的路径
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowNodePoolResponse> showNodePool(
        ShowNodePoolRequest &request
    );
    // 查询指定节点池支持配置的参数列表
    //
    // 该API用于查询CCE服务下指定节点池支持配置的参数列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowNodePoolConfigurationDetailsResponse> showNodePoolConfigurationDetails(
        ShowNodePoolConfigurationDetailsRequest &request
    );
    // 查询指定节点池支持配置的参数内容
    //
    // 该API用于查询指定节点池支持配置的参数内容。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowNodePoolConfigurationsResponse> showNodePoolConfigurations(
        ShowNodePoolConfigurationsRequest &request
    );
    // 获取分区详情
    //
    // 获取分区详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPartitionResponse> showPartition(
        ShowPartitionRequest &request
    );
    // 获取集群升级前检查任务详情
    //
    // 获取集群升级前检查任务详情，任务ID由调用集群检查API后从响应体中uid字段获取。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPreCheckResponse> showPreCheck(
        ShowPreCheckRequest &request
    );
    // 查询CCE服务下的资源配额
    //
    // 该API用于查询CCE服务下的资源配额。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowQuotasResponse> showQuotas(
        ShowQuotasRequest &request
    );
    // 获取指定模板实例
    //
    // 获取指定模板实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowReleaseResponse> showRelease(
        ShowReleaseRequest &request
    );
    // 查询指定模板实例历史记录
    //
    // 查询指定模板实例历史记录
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowReleaseHistoryResponse> showReleaseHistory(
        ShowReleaseHistoryRequest &request
    );
    // 获取集群升级任务详情
    //
    // 获取集群升级任务详情，任务ID由调用集群升级API后从响应体中uid字段获取。
    // &gt; - 集群升级涉及多维度的组件升级操作，强烈建议统一通过CCE控制台执行交互式升级，降低集群升级过程的业务意外受损风险；
    // &gt; - 当前集群升级相关接口受限开放。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowUpgradeClusterTaskResponse> showUpgradeClusterTask(
        ShowUpgradeClusterTaskRequest &request
    );
    // 获取指定集群升级引导任务详情
    //
    // 该API用于通过升级引导任务ID获取任务的详细信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowUpgradeWorkFlowResponse> showUpgradeWorkFlow(
        ShowUpgradeWorkFlowRequest &request
    );
    // 获取用户模板配额
    //
    // 获取用户模板配额
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowUserChartsQuotasResponse> showUserChartsQuotas(
        ShowUserChartsQuotasRequest &request
    );
    // 同步节点
    //
    // 该API用于同步节点。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SyncNodeResponse> syncNode(
        SyncNodeRequest &request
    );
    // 节点关闭缩容保护。
    //
    // 该API用于节点关闭缩容保护，关闭缩容保护的节点可以通过修改节点池个数的方式被缩容，只允许按需节点关闭缩容保护。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UnlockNodepoolNodeScaleDownResponse> unlockNodepoolNodeScaleDown(
        UnlockNodepoolNodeScaleDownRequest &request
    );
    // 更新访问策略
    //
    // 该API用于更新单个访问策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAccessPolicyResponse> updateAccessPolicy(
        UpdateAccessPolicyRequest &request
    );
    // 更新AddonInstance
    //
    // 更新插件实例的功能。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAddonInstanceResponse> updateAddonInstance(
        UpdateAddonInstanceRequest &request
    );
    // 更新指定的集群
    //
    // 该API用于更新指定的集群。
    // &gt;集群管理的URL格式为：https://Endpoint/uri。其中uri为资源路径，也即API访问的路径。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateClusterResponse> updateCluster(
        UpdateClusterRequest &request
    );
    // 绑定、解绑集群公网apiserver地址
    //
    // 该API用于通过集群ID绑定、解绑集群公网apiserver地址
    // &gt;集群管理的URL格式为：https://Endpoint/uri。其中uri为资源路径，也即API访问的路径。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateClusterEipResponse> updateClusterEip(
        UpdateClusterEipRequest &request
    );
    // 配置集群日志
    //
    // 用户可以选择集群管理节点上哪些组件的日志上报LTS
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateClusterLogConfigResponse> updateClusterLogConfig(
        UpdateClusterLogConfigRequest &request
    );
    // 更新指定的节点
    //
    // 该API用于更新指定的节点。
    // &gt; - 当前仅支持更新metadata下的name字段，即节点的名字。
    // &gt; - 集群管理的URL格式为：https://Endpoint/uri。其中uri为资源路径，也即API访问的路径。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateNodeResponse> updateNode(
        UpdateNodeRequest &request
    );
    // 更新指定节点池
    //
    // 该API用于更新指定的节点池。仅支持集群在处于可用、扩容、缩容状态时调用。
    // 
    // 
    // &gt; - 集群管理的URL格式为：https://Endpoint/uri。其中uri为资源路径，也即API访问的路径
    // 
    // &gt; - 当前仅支持更新节点池名称，spec下的initialNodeCount，k8sTags，taints，login，userTags与节点池的扩缩容配置相关字段。若此次更新未设置相关值，默认更新为初始值。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateNodePoolResponse> updateNodePool(
        UpdateNodePoolRequest &request
    );
    // 更新分区
    //
    // 更新分区
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePartitionResponse> updatePartition(
        UpdatePartitionRequest &request
    );
    // 更新指定模板实例
    //
    // 更新指定模板实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateReleaseResponse> updateRelease(
        UpdateReleaseRequest &request
    );
    // 集群升级
    //
    // 集群升级。
    // &gt; - 集群升级涉及多维度的组件升级操作，强烈建议统一通过CCE控制台执行交互式升级，降低集群升级过程的业务意外受损风险；
    // &gt; - 当前集群升级相关接口受限开放。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpgradeClusterResponse> upgradeCluster(
        UpgradeClusterRequest &request
    );
    // 同步节点池
    //
    // 该API用于同步节点池中已有节点的配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpgradeNodePoolResponse> upgradeNodePool(
        UpgradeNodePoolRequest &request
    );
    // 更新指定集群升级引导任务状态
    //
    // 该API用于更新指定集群升级引导任务状态，当前仅适用于取消升级流程
    // 调用该API时升级流程引导任务状态不能为进行中(running) 已完成(success) 已取消(cancel),升级子任务状态不能为running(进行中) init(已初始化) pause(任务被暂停) queue(队列中)
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpgradeWorkFlowUpdateResponse> upgradeWorkFlowUpdate(
        UpgradeWorkFlowUpdateRequest &request
    );

    // 查询API版本信息列表
    //
    // 该API用于查询CCE服务当前支持的API版本信息列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowVersionResponse> showVersion(
        ShowVersionRequest &request
    );

    // 批量添加指定集群的资源标签
    //
    // 该API用于批量添加指定集群的资源标签。
    // &gt; - 每个集群支持最多20个资源标签。
    // &gt; - 此接口为幂等接口：创建时，如果创建的标签已经存在（key/value均相同视为重复），默认处理成功；key相同，value不同时会覆盖原有标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCreateAutopilotClusterTagsResponse> batchCreateAutopilotClusterTags(
        BatchCreateAutopilotClusterTagsRequest &request
    );
    // 批量删除指定集群的资源标签
    //
    // 该API用于批量删除指定集群的资源标签。
    // &gt; - 此接口为幂等接口：删除时，如果删除的标签key不存在，默认处理成功。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteAutopilotClusterTagsResponse> batchDeleteAutopilotClusterTags(
        BatchDeleteAutopilotClusterTagsRequest &request
    );
    // 创建AddonInstance
    //
    // 根据提供的插件模板，安装插件实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAutopilotAddonInstanceResponse> createAutopilotAddonInstance(
        CreateAutopilotAddonInstanceRequest &request
    );
    // 创建集群
    //
    // 该API用于创建一个空集群（即只有控制节点Master，没有工作节点Node）。
    // 
    // 
    // &gt;   - 集群管理的URL格式为：https://Endpoint/uri。其中uri为资源路径，也即API访问的路径。
    // &gt;   - 调用该接口创建集群时，默认不安装ICAgent，若需安装ICAgent，可在请求Body参数的annotations中加入\&quot;cluster.install.addons.external/install\&quot;:\&quot;[{\&quot;addonTemplateName\&quot;:\&quot;icagent\&quot;}]\&quot;的集群注解，将在创建集群时自动安装ICAgent。ICAgent是应用性能管理APM的采集代理，运行在应用所在的服务器上，用于实时采集探针所获取的数据，安装ICAgent是使用应用性能管理APM的前提。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAutopilotClusterResponse> createAutopilotCluster(
        CreateAutopilotClusterRequest &request
    );
    // 集群备份
    //
    // 集群备份
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAutopilotClusterMasterSnapshotResponse> createAutopilotClusterMasterSnapshot(
        CreateAutopilotClusterMasterSnapshotRequest &request
    );
    // 获取集群证书
    //
    // 该API用于获取指定集群的证书信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAutopilotKubernetesClusterCertResponse> createAutopilotKubernetesClusterCert(
        CreateAutopilotKubernetesClusterCertRequest &request
    );
    // 创建集群维护窗口
    //
    // 该API用于创建集群维护窗口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAutopilotMaintenanceWindowResponse> createAutopilotMaintenanceWindow(
        CreateAutopilotMaintenanceWindowRequest &request
    );
    // 集群升级后确认
    //
    // 集群升级后确认，该接口建议配合Console使用，主要用于升级步骤完成后，客户确认集群状态和业务正常后做反馈。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAutopilotPostCheckResponse> createAutopilotPostCheck(
        CreateAutopilotPostCheckRequest &request
    );
    // 集群升级前检查
    //
    // 集群升级前检查
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAutopilotPreCheckResponse> createAutopilotPreCheck(
        CreateAutopilotPreCheckRequest &request
    );
    // 创建模板实例
    //
    // 创建模板实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAutopilotReleaseResponse> createAutopilotRelease(
        CreateAutopilotReleaseRequest &request
    );
    // 开启集群升级流程引导任务
    //
    // 该API用于创建一个集群升级流程引导任务。请在调用本接口完成引导任务创建之后，通过集群升级前检查开始检查任务。
    // 升级流程任务用于控制集群升级任务的执行流程，执行流程为 升级前检查 &#x3D;&gt; 集群升级 &#x3D;&gt; 升级后检查。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAutopilotUpgradeWorkFlowResponse> createAutopilotUpgradeWorkFlow(
        CreateAutopilotUpgradeWorkFlowRequest &request
    );
    // 删除AddonInstance
    //
    // 删除插件实例的功能。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAutopilotAddonInstanceResponse> deleteAutopilotAddonInstance(
        DeleteAutopilotAddonInstanceRequest &request
    );
    // 删除模板
    //
    // 删除模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAutopilotChartResponse> deleteAutopilotChart(
        DeleteAutopilotChartRequest &request
    );
    // 删除集群
    //
    // 该API用于删除一个指定的集群。
    // &gt;集群管理的URL格式为：https://Endpoint/uri。其中uri为资源路径，也即API访问的路径。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAutopilotClusterResponse> deleteAutopilotCluster(
        DeleteAutopilotClusterRequest &request
    );
    // 删除集群维护窗口
    //
    // 该API用于删除集群维护窗口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAutopilotMaintenanceWindowResponse> deleteAutopilotMaintenanceWindow(
        DeleteAutopilotMaintenanceWindowRequest &request
    );
    // 删除指定模板实例
    //
    // 删除指定模板实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAutopilotReleaseResponse> deleteAutopilotRelease(
        DeleteAutopilotReleaseRequest &request
    );
    // 下载模板
    //
    // 下载模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadAutopilotChartResponse> downloadAutopilotChart(
        DownloadAutopilotChartRequest &request
    );
    // 获取AddonInstance列表
    //
    // 获取集群所有已安装插件实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAutopilotAddonInstancesResponse> listAutopilotAddonInstances(
        ListAutopilotAddonInstancesRequest &request
    );
    // 查询AddonTemplates列表
    //
    // 插件模板查询接口，查询插件信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAutopilotAddonTemplatesResponse> listAutopilotAddonTemplates(
        ListAutopilotAddonTemplatesRequest &request
    );
    // 获取模板列表
    //
    // 获取模板列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAutopilotChartsResponse> listAutopilotCharts(
        ListAutopilotChartsRequest &request
    );
    // 获取集群备份任务详情列表
    //
    // 获取集群备份任务详情列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAutopilotClusterMasterSnapshotTasksResponse> listAutopilotClusterMasterSnapshotTasks(
        ListAutopilotClusterMasterSnapshotTasksRequest &request
    );
    // 获取集群升级特性开关配置
    //
    // 获取集群升级特性开关配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAutopilotClusterUpgradeFeatureGatesResponse> listAutopilotClusterUpgradeFeatureGates(
        ListAutopilotClusterUpgradeFeatureGatesRequest &request
    );
    // 获取集群升级路径
    //
    // 获取集群升级路径
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAutopilotClusterUpgradePathsResponse> listAutopilotClusterUpgradePaths(
        ListAutopilotClusterUpgradePathsRequest &request
    );
    // 获取指定项目下的集群
    //
    // 该API用于获取指定项目下所有集群的详细信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAutopilotClustersResponse> listAutopilotClusters(
        ListAutopilotClustersRequest &request
    );
    // 获取集群升级前检查任务详情列表
    //
    // 获取集群升级前检查任务详情列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAutopilotPreCheckTasksResponse> listAutopilotPreCheckTasks(
        ListAutopilotPreCheckTasksRequest &request
    );
    // 获取模板实例列表
    //
    // 获取模板实例列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAutopilotReleasesResponse> listAutopilotReleases(
        ListAutopilotReleasesRequest &request
    );
    // 获取集群升级任务详情列表
    //
    // 获取集群升级任务详情列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAutopilotUpgradeClusterTasksResponse> listAutopilotUpgradeClusterTasks(
        ListAutopilotUpgradeClusterTasksRequest &request
    );
    // 获取自动升级计划
    //
    // 该API用于获取集群自动升级计划。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAutopilotUpgradePlansResponse> listAutopilotUpgradePlans(
        ListAutopilotUpgradePlansRequest &request
    );
    // 获取UpgradeWorkFlows列表
    //
    // 获取历史集群升级引导任务列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAutopilotUpgradeWorkFlowsResponse> listAutopilotUpgradeWorkFlows(
        ListAutopilotUpgradeWorkFlowsRequest &request
    );
    // 重试集群升级任务
    //
    // 重新执行失败的集群升级任务。
    // &gt; - 集群升级涉及多维度的组件升级操作，强烈建议统一通过CCE控制台执行交互式升级，降低集群升级过程的业务意外受损风险；
    // &gt; - 当前集群升级相关接口受限开放。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RetryAutopilotUpgradeClusterTaskResponse> retryAutopilotUpgradeClusterTask(
        RetryAutopilotUpgradeClusterTaskRequest &request
    );
    // 回滚AddonInstance
    //
    // 将插件实例回滚到升级前的版本。只有在当前插件实例版本支持回滚到升级前的版本（status.isRollbackable为true），且插件实例状态为running（运行中）、available（可用）、abnormal（不可用）、upgradeFailed（升级失败）、rollbackFailed（回滚失败）时支持回滚。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RollbackAutopilotAddonInstanceResponse> rollbackAutopilotAddonInstance(
        RollbackAutopilotAddonInstanceRequest &request
    );
    // 获取AddonInstance详情
    //
    // 获取插件实例详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAutopilotAddonInstanceResponse> showAutopilotAddonInstance(
        ShowAutopilotAddonInstanceRequest &request
    );
    // 获取模板
    //
    // 获取模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAutopilotChartResponse> showAutopilotChart(
        ShowAutopilotChartRequest &request
    );
    // 获取模板Values
    //
    // 获取模板Values
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAutopilotChartValuesResponse> showAutopilotChartValues(
        ShowAutopilotChartValuesRequest &request
    );
    // 获取指定的集群
    //
    // 该API用于获取指定集群的详细信息。
    // &gt;集群管理的URL格式为：https://Endpoint/uri。其中uri为资源路径，也即API访问的路径。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAutopilotClusterResponse> showAutopilotCluster(
        ShowAutopilotClusterRequest &request
    );
    // 获取集群访问的地址
    //
    // 该API用于通过集群ID获取集群访问的地址，包括PrivateIP(HA集群返回VIP)与PublicIP
    // &gt;集群管理的URL格式为：https://Endpoint/uri。其中uri为资源路径，也即API访问的路径。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAutopilotClusterEndpointsResponse> showAutopilotClusterEndpoints(
        ShowAutopilotClusterEndpointsRequest &request
    );
    // 获取集群升级相关信息
    //
    // 获取集群升级相关信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAutopilotClusterUpgradeInfoResponse> showAutopilotClusterUpgradeInfo(
        ShowAutopilotClusterUpgradeInfoRequest &request
    );
    // 获取集群维护窗口
    //
    // 该API用于获取集群维护窗口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAutopilotMaintenanceWindowResponse> showAutopilotMaintenanceWindow(
        ShowAutopilotMaintenanceWindowRequest &request
    );
    // 获取集群升级前检查任务详情
    //
    // 获取集群升级前检查任务详情，任务ID由调用集群检查API后从响应体中uid字段获取。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAutopilotPreCheckResponse> showAutopilotPreCheck(
        ShowAutopilotPreCheckRequest &request
    );
    // 查询CCE服务下的资源配额
    //
    // 该API用于查询CCE服务下的资源配额。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAutopilotQuotasResponse> showAutopilotQuotas(
        ShowAutopilotQuotasRequest &request
    );
    // 获取指定模板实例
    //
    // 获取指定模板实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAutopilotReleaseResponse> showAutopilotRelease(
        ShowAutopilotReleaseRequest &request
    );
    // 查询指定模板实例历史记录
    //
    // 查询指定模板实例历史记录
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAutopilotReleaseHistoryResponse> showAutopilotReleaseHistory(
        ShowAutopilotReleaseHistoryRequest &request
    );
    // 获取集群升级任务详情
    //
    // 获取集群升级任务详情，任务ID由调用集群升级API后从响应体中uid字段获取。
    // &gt; - 集群升级涉及多维度的组件升级操作，强烈建议统一通过CCE控制台执行交互式升级，降低集群升级过程的业务意外受损风险；
    // &gt; - 当前集群升级相关接口受限开放。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAutopilotUpgradeClusterTaskResponse> showAutopilotUpgradeClusterTask(
        ShowAutopilotUpgradeClusterTaskRequest &request
    );
    // 获取指定集群升级引导任务详情
    //
    // 该API用于通过升级引导任务ID获取任务的详细信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAutopilotUpgradeWorkFlowResponse> showAutopilotUpgradeWorkFlow(
        ShowAutopilotUpgradeWorkFlowRequest &request
    );
    // 获取用户模板配额
    //
    // 获取用户模板配额
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAutopilotUserChartsQuotasResponse> showAutopilotUserChartsQuotas(
        ShowAutopilotUserChartsQuotasRequest &request
    );
    // 更新AddonInstance
    //
    // 更新插件实例的功能。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAutopilotAddonInstanceResponse> updateAutopilotAddonInstance(
        UpdateAutopilotAddonInstanceRequest &request
    );
    // 更新指定的集群
    //
    // 该API用于更新指定的集群。
    // &gt;集群管理的URL格式为：https://Endpoint/uri。其中uri为资源路径，也即API访问的路径。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAutopilotClusterResponse> updateAutopilotCluster(
        UpdateAutopilotClusterRequest &request
    );
    // 绑定、解绑集群公网apiserver地址
    //
    // 该API用于通过集群ID绑定、解绑集群公网apiserver地址
    // &gt;集群管理的URL格式为：https://Endpoint/uri。其中uri为资源路径，也即API访问的路径。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAutopilotClusterEipResponse> updateAutopilotClusterEip(
        UpdateAutopilotClusterEipRequest &request
    );
    // 更新集群维护窗口
    //
    // 该API用于更新集群维护窗口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAutopilotMaintenanceWindowResponse> updateAutopilotMaintenanceWindow(
        UpdateAutopilotMaintenanceWindowRequest &request
    );
    // 更新指定模板实例
    //
    // 更新指定模板实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAutopilotReleaseResponse> updateAutopilotRelease(
        UpdateAutopilotReleaseRequest &request
    );
    // 延期自动升级计划
    //
    // 该API用于延期集群自动升级计划。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAutopilotUpgradePlanResponse> updateAutopilotUpgradePlan(
        UpdateAutopilotUpgradePlanRequest &request
    );
    // 集群升级
    //
    // 集群升级。
    // &gt; - 集群升级涉及多维度的组件升级操作，强烈建议统一通过CCE控制台执行交互式升级，降低集群升级过程的业务意外受损风险；
    // &gt; - 当前集群升级相关接口受限开放。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpgradeAutopilotClusterResponse> upgradeAutopilotCluster(
        UpgradeAutopilotClusterRequest &request
    );
    // 更新指定集群升级引导任务状态
    //
    // 该API用于更新指定集群升级引导任务状态，当前仅适用于取消升级流程
    // 调用该API时升级流程引导任务状态不能为进行中(running) 已完成(success) 已取消(cancel),升级子任务状态不能为running(进行中) init(已初始化) pause(任务被暂停) queue(队列中)
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpgradeAutopilotWorkFlowUpdateResponse> upgradeAutopilotWorkFlowUpdate(
        UpgradeAutopilotWorkFlowUpdateRequest &request
    );


private:
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
    std::string parameterToString(utility::string_t value);
#endif
    std::string parameterToString(std::string value);
    std::string parameterToString(int32_t value);
    std::string parameterToString(int64_t value);
    std::string parameterToString(float value);
    std::string parameterToString(double value);
    std::string parameterToString(const Object& obj);
    std::string parameterToString(const utility::datetime &value);

    template<class T>
    std::string parameterToString(const std::vector<T> &value)
    {
        std::stringstream ss;
        for( size_t i = 0; i < value.size(); i++)
        {
            if (i > 0) {
                ss << ", ";
            }
            ss << parameterToString(value[i]);
        }

    return ss.str();
    }

    template<class T>
    std::string parameterToString(const std::shared_ptr<T> &value)
    {
        return parameterToString(*value.get());
    }

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};

}
}
}
}

template class HUAWEICLOUD_CCE_V3_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Cce::V3::CceClient>;

#endif // HUAWEICLOUD_SDK_CCE_V3_CceClient_H_

