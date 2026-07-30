#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_ModelArtsClient_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_ModelArtsClient_H_

#include <huaweicloud/modelarts/v1/ModelArtsExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/modelarts/v1/model/AcceptScheduledEventRequest.h>
#include <huaweicloud/modelarts/v1/model/AcceptScheduledEventResponse.h>
#include <huaweicloud/modelarts/v1/model/Algorithm.h>
#include <huaweicloud/modelarts/v1/model/AttachDynamicStorageRequest.h>
#include <huaweicloud/modelarts/v1/model/AttachDynamicStorageResponse.h>
#include <huaweicloud/modelarts/v1/model/AuthorizationRequest.h>
#include <huaweicloud/modelarts/v1/model/BatchBindApiKeyRequest.h>
#include <huaweicloud/modelarts/v1/model/BatchBindInferApiKeysRequest.h>
#include <huaweicloud/modelarts/v1/model/BatchBindInferApiKeysResponse.h>
#include <huaweicloud/modelarts/v1/model/BatchBindPoolNodesReq.h>
#include <huaweicloud/modelarts/v1/model/BatchBindPoolNodesRequest.h>
#include <huaweicloud/modelarts/v1/model/BatchBindPoolNodesResponse.h>
#include <huaweicloud/modelarts/v1/model/BatchCreatePoolTagsRequest.h>
#include <huaweicloud/modelarts/v1/model/BatchCreatePoolTagsResponse.h>
#include <huaweicloud/modelarts/v1/model/BatchDeleteInferIntranetConnectionsRequest.h>
#include <huaweicloud/modelarts/v1/model/BatchDeleteInferIntranetConnectionsResponse.h>
#include <huaweicloud/modelarts/v1/model/BatchDeleteInferServicesRequest.h>
#include <huaweicloud/modelarts/v1/model/BatchDeleteInferServicesResponse.h>
#include <huaweicloud/modelarts/v1/model/BatchDeletePoolNodesRequest.h>
#include <huaweicloud/modelarts/v1/model/BatchDeletePoolNodesResponse.h>
#include <huaweicloud/modelarts/v1/model/BatchDeletePoolTagsRequest.h>
#include <huaweicloud/modelarts/v1/model/BatchDeletePoolTagsResponse.h>
#include <huaweicloud/modelarts/v1/model/BatchLockPoolNodesRequest.h>
#include <huaweicloud/modelarts/v1/model/BatchLockPoolNodesRequestBody.h>
#include <huaweicloud/modelarts/v1/model/BatchLockPoolNodesResponse.h>
#include <huaweicloud/modelarts/v1/model/BatchMigratePoolNodesRequest.h>
#include <huaweicloud/modelarts/v1/model/BatchMigratePoolNodesResponse.h>
#include <huaweicloud/modelarts/v1/model/BatchRebootPoolNodesRequest.h>
#include <huaweicloud/modelarts/v1/model/BatchRebootPoolNodesRequestBody.h>
#include <huaweicloud/modelarts/v1/model/BatchRebootPoolNodesResponse.h>
#include <huaweicloud/modelarts/v1/model/BatchResetPoolNodesRequest.h>
#include <huaweicloud/modelarts/v1/model/BatchResetPoolNodesResponse.h>
#include <huaweicloud/modelarts/v1/model/BatchResizePoolNodesRequest.h>
#include <huaweicloud/modelarts/v1/model/BatchResizePoolNodesResponse.h>
#include <huaweicloud/modelarts/v1/model/BatchResizeRequestBody.h>
#include <huaweicloud/modelarts/v1/model/BatchUnBindApiKeyRequest.h>
#include <huaweicloud/modelarts/v1/model/BatchUnbindInferApiKeysRequest.h>
#include <huaweicloud/modelarts/v1/model/BatchUnbindInferApiKeysResponse.h>
#include <huaweicloud/modelarts/v1/model/BatchUnlockPoolNodesRequest.h>
#include <huaweicloud/modelarts/v1/model/BatchUnlockPoolNodesResponse.h>
#include <huaweicloud/modelarts/v1/model/BatchUpdatePoolNodesRequest.h>
#include <huaweicloud/modelarts/v1/model/BatchUpdatePoolNodesRequestBody.h>
#include <huaweicloud/modelarts/v1/model/BatchUpdatePoolNodesResponse.h>
#include <huaweicloud/modelarts/v1/model/BindInferApiKeyRequest.h>
#include <huaweicloud/modelarts/v1/model/BindInferApiKeyResponse.h>
#include <huaweicloud/modelarts/v1/model/CancelInferDeploymentRequest.h>
#include <huaweicloud/modelarts/v1/model/CancelInferDeploymentResponse.h>
#include <huaweicloud/modelarts/v1/model/ChangeAlgorithmRequest.h>
#include <huaweicloud/modelarts/v1/model/ChangeAlgorithmResponse.h>
#include <huaweicloud/modelarts/v1/model/ChangeTrainingExperimentRequest.h>
#include <huaweicloud/modelarts/v1/model/ChangeTrainingExperimentRequestBody.h>
#include <huaweicloud/modelarts/v1/model/ChangeTrainingExperimentResponse.h>
#include <huaweicloud/modelarts/v1/model/ChangeTrainingJobDescriptionRequest.h>
#include <huaweicloud/modelarts/v1/model/ChangeTrainingJobDescriptionResponse.h>
#include <huaweicloud/modelarts/v1/model/CheckTrainingExperimentRequest.h>
#include <huaweicloud/modelarts/v1/model/CheckTrainingExperimentResponse.h>
#include <huaweicloud/modelarts/v1/model/CountInferServicesByTagsRequest.h>
#include <huaweicloud/modelarts/v1/model/CountInferServicesByTagsResponse.h>
#include <huaweicloud/modelarts/v1/model/CreateAlgorithmRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateAlgorithmResponse.h>
#include <huaweicloud/modelarts/v1/model/CreateAlgorithmVersionToGalleryBody.h>
#include <huaweicloud/modelarts/v1/model/CreateAlgorithmVersionToGalleryRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateAlgorithmVersionToGalleryResponse.h>
#include <huaweicloud/modelarts/v1/model/CreateApiKeyReq.h>
#include <huaweicloud/modelarts/v1/model/CreateAuthorizationRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateAuthorizationResponse.h>
#include <huaweicloud/modelarts/v1/model/CreateInferApiKeyRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateInferApiKeyResponse.h>
#include <huaweicloud/modelarts/v1/model/CreateInferDeploymentRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateInferDeploymentResponse.h>
#include <huaweicloud/modelarts/v1/model/CreateInferIntranetConnectionRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateInferIntranetConnectionResponse.h>
#include <huaweicloud/modelarts/v1/model/CreateInferServiceRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateInferServiceResponse.h>
#include <huaweicloud/modelarts/v1/model/CreateInferServiceTagRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateInferServiceTagResponse.h>
#include <huaweicloud/modelarts/v1/model/CreateModelArtsAgencyRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateModelArtsAgencyResponse.h>
#include <huaweicloud/modelarts/v1/model/CreateNetworkRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateNetworkResponse.h>
#include <huaweicloud/modelarts/v1/model/CreateNodePoolRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateNodePoolRequestBody.h>
#include <huaweicloud/modelarts/v1/model/CreateNodePoolResponse.h>
#include <huaweicloud/modelarts/v1/model/CreateOrderIdRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateOrderIdResponse.h>
#include <huaweicloud/modelarts/v1/model/CreateOrderRequestBody.h>
#include <huaweicloud/modelarts/v1/model/CreatePluginRequestBody.h>
#include <huaweicloud/modelarts/v1/model/CreatePoolPluginRequest.h>
#include <huaweicloud/modelarts/v1/model/CreatePoolPluginResponse.h>
#include <huaweicloud/modelarts/v1/model/CreatePoolRequest.h>
#include <huaweicloud/modelarts/v1/model/CreatePoolRequestBody.h>
#include <huaweicloud/modelarts/v1/model/CreatePoolResponse.h>
#include <huaweicloud/modelarts/v1/model/CreateSaveImageJobRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateSaveImageJobResponse.h>
#include <huaweicloud/modelarts/v1/model/CreateTagRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateTmsTagsRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateTrainJobTagsRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateTrainJobTagsResponse.h>
#include <huaweicloud/modelarts/v1/model/CreateTrainingExperimentRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateTrainingExperimentRequestBody.h>
#include <huaweicloud/modelarts/v1/model/CreateTrainingExperimentResponse.h>
#include <huaweicloud/modelarts/v1/model/CreateTrainingJobRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateTrainingJobResponse.h>
#include <huaweicloud/modelarts/v1/model/CreateWorkspaceReq.h>
#include <huaweicloud/modelarts/v1/model/CreateWorkspaceRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateWorkspaceResponse.h>
#include <huaweicloud/modelarts/v1/model/DataVolumesReq.h>
#include <huaweicloud/modelarts/v1/model/DeleteAlgorithmRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteAlgorithmResponse.h>
#include <huaweicloud/modelarts/v1/model/DeleteAuthorizationsRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteAuthorizationsResponse.h>
#include <huaweicloud/modelarts/v1/model/DeleteImageGroupRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteImageGroupRequestBody.h>
#include <huaweicloud/modelarts/v1/model/DeleteImageGroupResponse.h>
#include <huaweicloud/modelarts/v1/model/DeleteImageRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteImageRequestBody.h>
#include <huaweicloud/modelarts/v1/model/DeleteImageResponse.h>
#include <huaweicloud/modelarts/v1/model/DeleteInferApiKeyRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteInferApiKeyResponse.h>
#include <huaweicloud/modelarts/v1/model/DeleteInferDeploymentInstanceRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteInferDeploymentInstanceResponse.h>
#include <huaweicloud/modelarts/v1/model/DeleteInferDeploymentPodRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteInferDeploymentPodResponse.h>
#include <huaweicloud/modelarts/v1/model/DeleteInferDeploymentRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteInferDeploymentResponse.h>
#include <huaweicloud/modelarts/v1/model/DeleteInferDeploymentVersionRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteInferDeploymentVersionResponse.h>
#include <huaweicloud/modelarts/v1/model/DeleteInferServiceTagRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteInferServiceTagResponse.h>
#include <huaweicloud/modelarts/v1/model/DeleteInferTmsTagsRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteNetworkRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteNetworkResponse.h>
#include <huaweicloud/modelarts/v1/model/DeleteNodePoolRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteNodePoolResponse.h>
#include <huaweicloud/modelarts/v1/model/DeletePoolRequest.h>
#include <huaweicloud/modelarts/v1/model/DeletePoolResponse.h>
#include <huaweicloud/modelarts/v1/model/DeleteServicesRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteTagRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteTmsTagsRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteTrainJobTagsRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteTrainJobTagsResponse.h>
#include <huaweicloud/modelarts/v1/model/DeleteTrainingExperimentRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteTrainingExperimentResponse.h>
#include <huaweicloud/modelarts/v1/model/DeleteTrainingJobRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteTrainingJobResponse.h>
#include <huaweicloud/modelarts/v1/model/DeleteWorkspaceRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteWorkspaceResponse.h>
#include <huaweicloud/modelarts/v1/model/DetachDynamicStorageRequest.h>
#include <huaweicloud/modelarts/v1/model/DetachDynamicStorageResponse.h>
#include <huaweicloud/modelarts/v1/model/EventUpdate.h>
#include <huaweicloud/modelarts/v1/model/GetAuthorizationsRequest.h>
#include <huaweicloud/modelarts/v1/model/GetAuthorizationsResponse.h>
#include <huaweicloud/modelarts/v1/model/GetHyperinstanceOperationRequest.h>
#include <huaweicloud/modelarts/v1/model/GetHyperinstanceOperationResponse.h>
#include <huaweicloud/modelarts/v1/model/GroupConfig.h>
#include <huaweicloud/modelarts/v1/model/GroupConfigUpdateRequest.h>
#include <huaweicloud/modelarts/v1/model/ImageRegRequest.h>
#include <huaweicloud/modelarts/v1/model/ImageSaveJob.h>
#include <huaweicloud/modelarts/v1/model/IntranetConnectionDeleteRequest.h>
#include <huaweicloud/modelarts/v1/model/IntranetConnectionModifyRequest.h>
#include <huaweicloud/modelarts/v1/model/IntranetConnectionRequest.h>
#include <huaweicloud/modelarts/v1/model/Job.h>
#include <huaweicloud/modelarts/v1/model/JobActionType.h>
#include <huaweicloud/modelarts/v1/model/JobDescription.h>
#include <huaweicloud/modelarts/v1/model/JobSearches.h>
#include <huaweicloud/modelarts/v1/model/ListAlgorithmsRequest.h>
#include <huaweicloud/modelarts/v1/model/ListAlgorithmsResponse.h>
#include <huaweicloud/modelarts/v1/model/ListDynamicStoragesRequest.h>
#include <huaweicloud/modelarts/v1/model/ListDynamicStoragesResponse.h>
#include <huaweicloud/modelarts/v1/model/ListEventCategoriesRequest.h>
#include <huaweicloud/modelarts/v1/model/ListEventCategoriesResponse.h>
#include <huaweicloud/modelarts/v1/model/ListEventsRequest.h>
#include <huaweicloud/modelarts/v1/model/ListEventsResponse.h>
#include <huaweicloud/modelarts/v1/model/ListImageGroupRequest.h>
#include <huaweicloud/modelarts/v1/model/ListImageGroupResponse.h>
#include <huaweicloud/modelarts/v1/model/ListImageRequest.h>
#include <huaweicloud/modelarts/v1/model/ListImageResponse.h>
#include <huaweicloud/modelarts/v1/model/ListInferApiKeysRequest.h>
#include <huaweicloud/modelarts/v1/model/ListInferApiKeysResponse.h>
#include <huaweicloud/modelarts/v1/model/ListInferClusterFlavorsRequest.h>
#include <huaweicloud/modelarts/v1/model/ListInferClusterFlavorsResponse.h>
#include <huaweicloud/modelarts/v1/model/ListInferDeploymentInstancesRequest.h>
#include <huaweicloud/modelarts/v1/model/ListInferDeploymentInstancesResponse.h>
#include <huaweicloud/modelarts/v1/model/ListInferDeploymentPodEventsRequest.h>
#include <huaweicloud/modelarts/v1/model/ListInferDeploymentPodEventsResponse.h>
#include <huaweicloud/modelarts/v1/model/ListInferDeploymentPodsRequest.h>
#include <huaweicloud/modelarts/v1/model/ListInferDeploymentPodsResponse.h>
#include <huaweicloud/modelarts/v1/model/ListInferDeploymentVersionsRequest.h>
#include <huaweicloud/modelarts/v1/model/ListInferDeploymentVersionsResponse.h>
#include <huaweicloud/modelarts/v1/model/ListInferDeploymentsRequest.h>
#include <huaweicloud/modelarts/v1/model/ListInferDeploymentsResponse.h>
#include <huaweicloud/modelarts/v1/model/ListInferIntranetConnectionApplicationsRequest.h>
#include <huaweicloud/modelarts/v1/model/ListInferIntranetConnectionApplicationsResponse.h>
#include <huaweicloud/modelarts/v1/model/ListInferIntranetConnectionReviewsRequest.h>
#include <huaweicloud/modelarts/v1/model/ListInferIntranetConnectionReviewsResponse.h>
#include <huaweicloud/modelarts/v1/model/ListInferServiceEventsRequest.h>
#include <huaweicloud/modelarts/v1/model/ListInferServiceEventsResponse.h>
#include <huaweicloud/modelarts/v1/model/ListInferServiceTagsRequest.h>
#include <huaweicloud/modelarts/v1/model/ListInferServiceTagsResponse.h>
#include <huaweicloud/modelarts/v1/model/ListInferServicesByTagsRequest.h>
#include <huaweicloud/modelarts/v1/model/ListInferServicesByTagsResponse.h>
#include <huaweicloud/modelarts/v1/model/ListInferServicesRequest.h>
#include <huaweicloud/modelarts/v1/model/ListInferServicesResponse.h>
#include <huaweicloud/modelarts/v1/model/ListJobsRequest.h>
#include <huaweicloud/modelarts/v1/model/ListJobsResponse.h>
#include <huaweicloud/modelarts/v1/model/ListNetworksRequest.h>
#include <huaweicloud/modelarts/v1/model/ListNetworksResponse.h>
#include <huaweicloud/modelarts/v1/model/ListNodePoolNodesRequest.h>
#include <huaweicloud/modelarts/v1/model/ListNodePoolNodesResponse.h>
#include <huaweicloud/modelarts/v1/model/ListNodePoolsRequest.h>
#include <huaweicloud/modelarts/v1/model/ListNodePoolsResponse.h>
#include <huaweicloud/modelarts/v1/model/ListPluginTemplatesRequest.h>
#include <huaweicloud/modelarts/v1/model/ListPluginTemplatesResponse.h>
#include <huaweicloud/modelarts/v1/model/ListPoolNodesRequest.h>
#include <huaweicloud/modelarts/v1/model/ListPoolNodesResponse.h>
#include <huaweicloud/modelarts/v1/model/ListPoolPluginsRequest.h>
#include <huaweicloud/modelarts/v1/model/ListPoolPluginsResponse.h>
#include <huaweicloud/modelarts/v1/model/ListPoolTagsRequest.h>
#include <huaweicloud/modelarts/v1/model/ListPoolTagsResponse.h>
#include <huaweicloud/modelarts/v1/model/ListPoolsRequest.h>
#include <huaweicloud/modelarts/v1/model/ListPoolsResponse.h>
#include <huaweicloud/modelarts/v1/model/ListResourceFlavorsRequest.h>
#include <huaweicloud/modelarts/v1/model/ListResourceFlavorsResponse.h>
#include <huaweicloud/modelarts/v1/model/ListScheduledEventsRequest.h>
#include <huaweicloud/modelarts/v1/model/ListScheduledEventsResponse.h>
#include <huaweicloud/modelarts/v1/model/ListTrainingExperimentsRequest.h>
#include <huaweicloud/modelarts/v1/model/ListTrainingExperimentsResponse.h>
#include <huaweicloud/modelarts/v1/model/ListTrainingJobEventsRequest.h>
#include <huaweicloud/modelarts/v1/model/ListTrainingJobEventsResponse.h>
#include <huaweicloud/modelarts/v1/model/ListTrainingJobStagesRequest.h>
#include <huaweicloud/modelarts/v1/model/ListTrainingJobStagesResponse.h>
#include <huaweicloud/modelarts/v1/model/ListTrainingJobTasksRequest.h>
#include <huaweicloud/modelarts/v1/model/ListTrainingJobTasksResponse.h>
#include <huaweicloud/modelarts/v1/model/ListTrainingJobsRequest.h>
#include <huaweicloud/modelarts/v1/model/ListTrainingJobsResponse.h>
#include <huaweicloud/modelarts/v1/model/ListWorkloadsRequest.h>
#include <huaweicloud/modelarts/v1/model/ListWorkloadsResponse.h>
#include <huaweicloud/modelarts/v1/model/ListWorkspaceRequest.h>
#include <huaweicloud/modelarts/v1/model/ListWorkspaceResponse.h>
#include <huaweicloud/modelarts/v1/model/ModelArtsAgencyRequest.h>
#include <huaweicloud/modelarts/v1/model/ModifyInferIntranetConnectionsRequest.h>
#include <huaweicloud/modelarts/v1/model/ModifyInferIntranetConnectionsResponse.h>
#include <huaweicloud/modelarts/v1/model/NetworkCreationRequest.h>
#include <huaweicloud/modelarts/v1/model/NetworkUpdateRequest.h>
#include <huaweicloud/modelarts/v1/model/NodeBatchMigrationRequest.h>
#include <huaweicloud/modelarts/v1/model/NodesDeletionRequest.h>
#include <huaweicloud/modelarts/v1/model/NotifyTrainingJobInformationRequest.h>
#include <huaweicloud/modelarts/v1/model/NotifyTrainingJobInformationResponse.h>
#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/modelarts/v1/model/PatchNetworkRequest.h>
#include <huaweicloud/modelarts/v1/model/PatchNetworkResponse.h>
#include <huaweicloud/modelarts/v1/model/PatchNodePoolRequest.h>
#include <huaweicloud/modelarts/v1/model/PatchNodePoolRequestBody.h>
#include <huaweicloud/modelarts/v1/model/PatchNodePoolResponse.h>
#include <huaweicloud/modelarts/v1/model/PatchPoolRequest.h>
#include <huaweicloud/modelarts/v1/model/PatchPoolResponse.h>
#include <huaweicloud/modelarts/v1/model/PoolUpdateRequest.h>
#include <huaweicloud/modelarts/v1/model/QueryTmsResourceCountRequest.h>
#include <huaweicloud/modelarts/v1/model/QueryTmsResourceRequest.h>
#include <huaweicloud/modelarts/v1/model/RegisterImageRequest.h>
#include <huaweicloud/modelarts/v1/model/RegisterImageResponse.h>
#include <huaweicloud/modelarts/v1/model/ReportEventBody.h>
#include <huaweicloud/modelarts/v1/model/ResetNodesRequest.h>
#include <huaweicloud/modelarts/v1/model/ServiceCreateRequest.h>
#include <huaweicloud/modelarts/v1/model/ServicePodEventResponse.h>
#include <huaweicloud/modelarts/v1/model/ServiceUpdateRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowAlgorithmByUuidRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowAlgorithmByUuidResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowAuthmodeDetailRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowAuthmodeDetailResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowAutoSearchParamAnalysisResultPathRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowAutoSearchParamAnalysisResultPathResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowAutoSearchParamsAnalysisRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowAutoSearchParamsAnalysisResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowAutoSearchPerTrialRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowAutoSearchPerTrialResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowAutoSearchTrialEarlyStopRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowAutoSearchTrialEarlyStopResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowAutoSearchTrialsRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowAutoSearchTrialsResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowAutoSearchYamlTemplateContentRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowAutoSearchYamlTemplateContentResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowAutoSearchYamlTemplatesInfoRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowAutoSearchYamlTemplatesInfoResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowDynamicStorageRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowDynamicStorageResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowImageRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowImageResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowInferDeploymentRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowInferDeploymentResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowInferDeploymentVersionRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowInferDeploymentVersionResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowInferServiceClusterRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowInferServiceClusterResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowInferServiceRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowInferServiceResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowInferServiceTagsRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowInferServiceTagsResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowNetworkAvailableIpRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowNetworkAvailableIpResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowNetworkRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowNetworkResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowNodeConfigTemplateRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowNodeConfigTemplateResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowNodePoolRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowNodePoolResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowObsUrlOfTrainingJobLogsRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowObsUrlOfTrainingJobLogsResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowOrderRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowOrderResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowOsConfigRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowOsConfigResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowOsQuotaRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowOsQuotaResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowPluginTemplateRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowPluginTemplateResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowPoolMonitorRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowPoolMonitorResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowPoolNodeConfigRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowPoolNodeConfigResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowPoolNodeConfigTemplateRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowPoolNodeConfigTemplateResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowPoolNodeRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowPoolNodeResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowPoolRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowPoolResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowPoolRuntimeMetricsRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowPoolRuntimeMetricsResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowPoolStatisticsRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowPoolStatisticsResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowPoolTagsRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowPoolTagsResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowSaveImageJobRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowSaveImageJobResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowSearchAlgorithmsRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowSearchAlgorithmsResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowTrainJobTagsRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowTrainJobTagsResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowTrainingExperimentDetailsRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowTrainingExperimentDetailsResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowTrainingJobDetailsRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowTrainingJobDetailsResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowTrainingJobEnginesRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowTrainingJobEnginesResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowTrainingJobFlavorsRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowTrainingJobFlavorsResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowTrainingJobLogsPreviewRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowTrainingJobLogsPreviewResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowTrainingJobMetricsRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowTrainingJobMetricsResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowTrainingQuotasRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowTrainingQuotasResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowWorkloadStatisticsRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowWorkloadStatisticsResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowWorkspaceQuotasRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowWorkspaceQuotasResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowWorkspaceRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowWorkspaceResponse.h>
#include <huaweicloud/modelarts/v1/model/StartInferDeploymentRequest.h>
#include <huaweicloud/modelarts/v1/model/StartInferDeploymentResponse.h>
#include <huaweicloud/modelarts/v1/model/StartInferServiceRequest.h>
#include <huaweicloud/modelarts/v1/model/StartInferServiceResponse.h>
#include <huaweicloud/modelarts/v1/model/StopInferDeploymentRequest.h>
#include <huaweicloud/modelarts/v1/model/StopInferDeploymentResponse.h>
#include <huaweicloud/modelarts/v1/model/StopInferServiceRequest.h>
#include <huaweicloud/modelarts/v1/model/StopInferServiceResponse.h>
#include <huaweicloud/modelarts/v1/model/StopTrainingJobRequest.h>
#include <huaweicloud/modelarts/v1/model/StopTrainingJobResponse.h>
#include <huaweicloud/modelarts/v1/model/SuccessResponse.h>
#include <huaweicloud/modelarts/v1/model/SwitchInferDeploymentVersionRequest.h>
#include <huaweicloud/modelarts/v1/model/SwitchInferDeploymentVersionRequestBody.h>
#include <huaweicloud/modelarts/v1/model/SwitchInferDeploymentVersionResponse.h>
#include <huaweicloud/modelarts/v1/model/SyncImageRequest.h>
#include <huaweicloud/modelarts/v1/model/SyncImageResponse.h>
#include <huaweicloud/modelarts/v1/model/TaskHistory.h>
#include <huaweicloud/modelarts/v1/model/UnbindInferApiKeyRequest.h>
#include <huaweicloud/modelarts/v1/model/UnbindInferApiKeyResponse.h>
#include <huaweicloud/modelarts/v1/model/UpdateAuthModeRequest.h>
#include <huaweicloud/modelarts/v1/model/UpdateAuthModeRequestBody.h>
#include <huaweicloud/modelarts/v1/model/UpdateAuthModeResponse.h>
#include <huaweicloud/modelarts/v1/model/UpdateImageGroupRequest.h>
#include <huaweicloud/modelarts/v1/model/UpdateImageGroupRequestBody.h>
#include <huaweicloud/modelarts/v1/model/UpdateImageGroupResponse.h>
#include <huaweicloud/modelarts/v1/model/UpdateInferDeploymentRequest.h>
#include <huaweicloud/modelarts/v1/model/UpdateInferDeploymentResponse.h>
#include <huaweicloud/modelarts/v1/model/UpdateInferDeploymentScale.h>
#include <huaweicloud/modelarts/v1/model/UpdateInferDeploymentScaleRequest.h>
#include <huaweicloud/modelarts/v1/model/UpdateInferDeploymentScaleResponse.h>
#include <huaweicloud/modelarts/v1/model/UpdateInferIntranetConnectionRequest.h>
#include <huaweicloud/modelarts/v1/model/UpdateInferIntranetConnectionResponse.h>
#include <huaweicloud/modelarts/v1/model/UpdateInferServiceRequest.h>
#include <huaweicloud/modelarts/v1/model/UpdateInferServiceResponse.h>
#include <huaweicloud/modelarts/v1/model/UpdateIntranetConnectionRequestBody.h>
#include <huaweicloud/modelarts/v1/model/UpdateWorkspaceQuotasReq.h>
#include <huaweicloud/modelarts/v1/model/UpdateWorkspaceQuotasRequest.h>
#include <huaweicloud/modelarts/v1/model/UpdateWorkspaceQuotasResponse.h>
#include <huaweicloud/modelarts/v1/model/UpdateWorkspaceReq.h>
#include <huaweicloud/modelarts/v1/model/UpdateWorkspaceRequest.h>
#include <huaweicloud/modelarts/v1/model/UpdateWorkspaceResponse.h>
#include <huaweicloud/modelarts/v1/model/ValidateAuthorizationRequest.h>
#include <huaweicloud/modelarts/v1/model/ValidateAuthorizationRequestBody.h>
#include <huaweicloud/modelarts/v1/model/ValidateAuthorizationResponse.h>
#include <string>

#include <huaweicloud/modelarts/v1/model/CreateHpaRequestBody.h>
#include <huaweicloud/modelarts/v1/model/CreateInferDeploymentHpaRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateInferDeploymentHpaResponse.h>
#include <huaweicloud/modelarts/v1/model/DeleteInferDeploymentHpaRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteInferDeploymentHpaResponse.h>
#include <huaweicloud/modelarts/v1/model/ListInferDeploymentHpaEventsRequest.h>
#include <huaweicloud/modelarts/v1/model/ListInferDeploymentHpaEventsResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowInferDeploymentHpaRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowInferDeploymentHpaResponse.h>
#include <huaweicloud/modelarts/v1/model/UpdateHpaRequestBody.h>
#include <huaweicloud/modelarts/v1/model/UpdateInferDeploymentHpaRequest.h>
#include <huaweicloud/modelarts/v1/model/UpdateInferDeploymentHpaResponse.h>
#include <string>

#include <huaweicloud/modelarts/v1/model/CreateHraRequestBody.h>
#include <huaweicloud/modelarts/v1/model/CreateInferHraRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateInferHraResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowInferHraRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowInferHraResponse.h>
#include <huaweicloud/modelarts/v1/model/UpdateHraRequestBody.h>
#include <huaweicloud/modelarts/v1/model/UpdateInferHraRequest.h>
#include <huaweicloud/modelarts/v1/model/UpdateInferHraResponse.h>
#include <string>

#include <huaweicloud/modelarts/v1/model/AttachDevServerVolumeRequest.h>
#include <huaweicloud/modelarts/v1/model/AttachDevServerVolumeResponse.h>
#include <huaweicloud/modelarts/v1/model/AttachServerVolumeRequest.h>
#include <huaweicloud/modelarts/v1/model/BatchDevServersActionRequest.h>
#include <huaweicloud/modelarts/v1/model/BatchDevServersActionResponse.h>
#include <huaweicloud/modelarts/v1/model/BindDevServerPublicIPRequest.h>
#include <huaweicloud/modelarts/v1/model/BindDevServerPublicIPResponse.h>
#include <huaweicloud/modelarts/v1/model/ChangeDevServerOSRequest.h>
#include <huaweicloud/modelarts/v1/model/ChangeDevServerOSResponse.h>
#include <huaweicloud/modelarts/v1/model/ChangeHyperinstanceOSRequest.h>
#include <huaweicloud/modelarts/v1/model/ChangeHyperinstanceOSResponse.h>
#include <huaweicloud/modelarts/v1/model/CreateDevServerJobRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateDevServerJobResponse.h>
#include <huaweicloud/modelarts/v1/model/CreateDevServerRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateDevServerResponse.h>
#include <huaweicloud/modelarts/v1/model/CreateHyperClusterRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateHyperClusterResponse.h>
#include <huaweicloud/modelarts/v1/model/CreateHyperinstanceTagsRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateHyperinstanceTagsResponse.h>
#include <huaweicloud/modelarts/v1/model/CreateRoceNetworkRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateRoceNetworkResponse.h>
#include <huaweicloud/modelarts/v1/model/DeleteDevServerJobsRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteDevServerJobsResponse.h>
#include <huaweicloud/modelarts/v1/model/DeleteDevServerRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteDevServerResponse.h>
#include <huaweicloud/modelarts/v1/model/DeleteHyperClusterRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteHyperClusterResponse.h>
#include <huaweicloud/modelarts/v1/model/DeleteHyperinstanceRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteHyperinstanceResponse.h>
#include <huaweicloud/modelarts/v1/model/DeleteHyperinstanceTagsRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteHyperinstanceTagsResponse.h>
#include <huaweicloud/modelarts/v1/model/DetachDevServerVolumeRequest.h>
#include <huaweicloud/modelarts/v1/model/DetachDevServerVolumeResponse.h>
#include <huaweicloud/modelarts/v1/model/DevServerBatchRequest.h>
#include <huaweicloud/modelarts/v1/model/DevServerJobCreateRequest.h>
#include <huaweicloud/modelarts/v1/model/GetDevServerImageRequest.h>
#include <huaweicloud/modelarts/v1/model/GetDevServerImageResponse.h>
#include <huaweicloud/modelarts/v1/model/GetDevServerJobRequest.h>
#include <huaweicloud/modelarts/v1/model/GetDevServerJobResponse.h>
#include <huaweicloud/modelarts/v1/model/GetDevServerJobServiceRequest.h>
#include <huaweicloud/modelarts/v1/model/GetDevServerJobServiceResponse.h>
#include <huaweicloud/modelarts/v1/model/GetDevServerJobTemplateRequest.h>
#include <huaweicloud/modelarts/v1/model/GetDevServerJobTemplateResponse.h>
#include <huaweicloud/modelarts/v1/model/GetDevServerOperationRequest.h>
#include <huaweicloud/modelarts/v1/model/GetDevServerOperationResponse.h>
#include <huaweicloud/modelarts/v1/model/GetHyperClusterRequest.h>
#include <huaweicloud/modelarts/v1/model/GetHyperClusterResponse.h>
#include <huaweicloud/modelarts/v1/model/GetHyperinstanceRequest.h>
#include <huaweicloud/modelarts/v1/model/GetHyperinstanceResponse.h>
#include <huaweicloud/modelarts/v1/model/GetScaleEvaluationsDevServerRequest.h>
#include <huaweicloud/modelarts/v1/model/GetScaleEvaluationsDevServerResponse.h>
#include <huaweicloud/modelarts/v1/model/GetTopologiesRequest.h>
#include <huaweicloud/modelarts/v1/model/GetTopologiesResponse.h>
#include <huaweicloud/modelarts/v1/model/HyperClusterCreateRequest.h>
#include <huaweicloud/modelarts/v1/model/HyperinstanceClustersCapacityRequest.h>
#include <huaweicloud/modelarts/v1/model/ListAllDevServersRequest.h>
#include <huaweicloud/modelarts/v1/model/ListAllDevServersResponse.h>
#include <huaweicloud/modelarts/v1/model/ListAllHyperinstancesRequest.h>
#include <huaweicloud/modelarts/v1/model/ListAllHyperinstancesResponse.h>
#include <huaweicloud/modelarts/v1/model/ListDevServerFlavorsRequest.h>
#include <huaweicloud/modelarts/v1/model/ListDevServerFlavorsResponse.h>
#include <huaweicloud/modelarts/v1/model/ListDevServerImagesRequest.h>
#include <huaweicloud/modelarts/v1/model/ListDevServerImagesResponse.h>
#include <huaweicloud/modelarts/v1/model/ListDevServerJobTemplatesRequest.h>
#include <huaweicloud/modelarts/v1/model/ListDevServerJobTemplatesResponse.h>
#include <huaweicloud/modelarts/v1/model/ListDevServerJobsRequest.h>
#include <huaweicloud/modelarts/v1/model/ListDevServerJobsResponse.h>
#include <huaweicloud/modelarts/v1/model/ListDevServerPublicIPRequest.h>
#include <huaweicloud/modelarts/v1/model/ListDevServerPublicIPResponse.h>
#include <huaweicloud/modelarts/v1/model/ListDevServersRequest.h>
#include <huaweicloud/modelarts/v1/model/ListDevServersResponse.h>
#include <huaweicloud/modelarts/v1/model/ListHyperClusterRequest.h>
#include <huaweicloud/modelarts/v1/model/ListHyperClusterResponse.h>
#include <huaweicloud/modelarts/v1/model/ListHyperinstanceClustersCapacityRequest.h>
#include <huaweicloud/modelarts/v1/model/ListHyperinstanceClustersCapacityResponse.h>
#include <huaweicloud/modelarts/v1/model/ListHyperinstancesRequest.h>
#include <huaweicloud/modelarts/v1/model/ListHyperinstancesResponse.h>
#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/modelarts/v1/model/QueryHyperinstanceTagsRequest.h>
#include <huaweicloud/modelarts/v1/model/QueryHyperinstanceTagsResponse.h>
#include <huaweicloud/modelarts/v1/model/RebootDevServerRequest.h>
#include <huaweicloud/modelarts/v1/model/RebootDevServerResponse.h>
#include <huaweicloud/modelarts/v1/model/ReinstallDevServerOSRequest.h>
#include <huaweicloud/modelarts/v1/model/ReinstallDevServerOSResponse.h>
#include <huaweicloud/modelarts/v1/model/ScaleDownHyperinstanceRequest.h>
#include <huaweicloud/modelarts/v1/model/ScaleDownHyperinstanceResponse.h>
#include <huaweicloud/modelarts/v1/model/ScaleUpHyperinstanceRequest.h>
#include <huaweicloud/modelarts/v1/model/ScaleUpHyperinstanceResponse.h>
#include <huaweicloud/modelarts/v1/model/ServerBindPublicIPRequest.h>
#include <huaweicloud/modelarts/v1/model/ServerCreateRequest.h>
#include <huaweicloud/modelarts/v1/model/ServerHyperScaleUpRequest.h>
#include <huaweicloud/modelarts/v1/model/ServerJobDeleteRequest.h>
#include <huaweicloud/modelarts/v1/model/ServerOsRequest.h>
#include <huaweicloud/modelarts/v1/model/ServerRoceNetworkRequest.h>
#include <huaweicloud/modelarts/v1/model/ServerScaleDownRequest.h>
#include <huaweicloud/modelarts/v1/model/ServerStartRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowDevServerRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowDevServerResponse.h>
#include <huaweicloud/modelarts/v1/model/StartDevServerRequest.h>
#include <huaweicloud/modelarts/v1/model/StartDevServerResponse.h>
#include <huaweicloud/modelarts/v1/model/StartHyperinstanceRequest.h>
#include <huaweicloud/modelarts/v1/model/StartHyperinstanceResponse.h>
#include <huaweicloud/modelarts/v1/model/StopDevServerRequest.h>
#include <huaweicloud/modelarts/v1/model/StopDevServerResponse.h>
#include <huaweicloud/modelarts/v1/model/StopHyperinstanceRequest.h>
#include <huaweicloud/modelarts/v1/model/StopHyperinstanceResponse.h>
#include <huaweicloud/modelarts/v1/model/SyncDevServersRequest.h>
#include <huaweicloud/modelarts/v1/model/SyncDevServersResponse.h>
#include <huaweicloud/modelarts/v1/model/TagRequest.h>
#include <huaweicloud/modelarts/v1/model/UpdateDevServerRequest.h>
#include <huaweicloud/modelarts/v1/model/UpdateDevServerResponse.h>
#include <huaweicloud/modelarts/v1/model/UpdateServerRequest.h>
#include <string>

#include <huaweicloud/modelarts/v1/model/CreateImageRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateImageResponse.h>
#include <huaweicloud/modelarts/v1/model/CreateNotebookRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateNotebookResponse.h>
#include <huaweicloud/modelarts/v1/model/CreateNotebookTagsRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateNotebookTagsResponse.h>
#include <huaweicloud/modelarts/v1/model/CreateTmsTagsRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteNotebookRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteNotebookResponse.h>
#include <huaweicloud/modelarts/v1/model/DeleteNotebookTagsRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteNotebookTagsResponse.h>
#include <huaweicloud/modelarts/v1/model/DeleteTmsTagsRequest.h>
#include <huaweicloud/modelarts/v1/model/ImageCreateReq.h>
#include <huaweicloud/modelarts/v1/model/LeaseReq.h>
#include <huaweicloud/modelarts/v1/model/ListAllNotebooksRequest.h>
#include <huaweicloud/modelarts/v1/model/ListAllNotebooksResponse.h>
#include <huaweicloud/modelarts/v1/model/ListAuthoringClustersRequest.h>
#include <huaweicloud/modelarts/v1/model/ListAuthoringClustersResponse.h>
#include <huaweicloud/modelarts/v1/model/ListFeaturesRequest.h>
#include <huaweicloud/modelarts/v1/model/ListFeaturesResponse.h>
#include <huaweicloud/modelarts/v1/model/ListFlavorsRequest.h>
#include <huaweicloud/modelarts/v1/model/ListFlavorsResponse.h>
#include <huaweicloud/modelarts/v1/model/ListNotebooksRequest.h>
#include <huaweicloud/modelarts/v1/model/ListNotebooksResponse.h>
#include <huaweicloud/modelarts/v1/model/NotebookCreateRequest.h>
#include <huaweicloud/modelarts/v1/model/NotebookUpdateRequest.h>
#include <huaweicloud/modelarts/v1/model/RenewLeaseRequest.h>
#include <huaweicloud/modelarts/v1/model/RenewLeaseResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowClusterRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowClusterResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowLeaseRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowLeaseResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowNotebookRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowNotebookResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowNotebookTagsRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowNotebookTagsResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowSwitchableFlavorsRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowSwitchableFlavorsResponse.h>
#include <huaweicloud/modelarts/v1/model/StartNotebookRequest.h>
#include <huaweicloud/modelarts/v1/model/StartNotebookResponse.h>
#include <huaweicloud/modelarts/v1/model/StopNotebookRequest.h>
#include <huaweicloud/modelarts/v1/model/StopNotebookResponse.h>
#include <huaweicloud/modelarts/v1/model/UpdateNotebookRequest.h>
#include <huaweicloud/modelarts/v1/model/UpdateNotebookResponse.h>
#include <string>

#include <huaweicloud/modelarts/v1/model/CreateWorkflowPurchasePoolRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateWorkflowPurchasePoolResponse.h>
#include <huaweicloud/modelarts/v1/model/CreateWorkflowRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateWorkflowResponse.h>
#include <huaweicloud/modelarts/v1/model/CreateWorkflowServiceAuthRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateWorkflowServiceAuthResponse.h>
#include <huaweicloud/modelarts/v1/model/DeleteWorkflowRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteWorkflowResponse.h>
#include <huaweicloud/modelarts/v1/model/ListWorkflowsRequest.h>
#include <huaweicloud/modelarts/v1/model/ListWorkflowsResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowWorkflowLabelsRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowWorkflowLabelsResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowWorkflowRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowWorkflowResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowWorkflowsOverviewRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowWorkflowsOverviewResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowWorkflowsTodolistRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowWorkflowsTodolistResponse.h>
#include <huaweicloud/modelarts/v1/model/UpdateWorkflowRequest.h>
#include <huaweicloud/modelarts/v1/model/UpdateWorkflowResponse.h>
#include <huaweicloud/modelarts/v1/model/WorkflowMainServiceAuthReq.h>
#include <huaweicloud/modelarts/v1/model/WorkflowParam.h>
#include <huaweicloud/modelarts/v1/model/WorkflowServicePackage.h>
#include <huaweicloud/modelarts/v1/model/WorkflowUpdate.h>
#include <string>

#include <huaweicloud/modelarts/v1/model/CreateWorkflowExecutionRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateWorkflowExecutionResponse.h>
#include <huaweicloud/modelarts/v1/model/CreateWorkflowExecutionsActionsRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateWorkflowExecutionsActionsResponse.h>
#include <huaweicloud/modelarts/v1/model/CreateWorkflowStepExecutionsActionsRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateWorkflowStepExecutionsActionsResponse.h>
#include <huaweicloud/modelarts/v1/model/DeleteWorkflowExecutionRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteWorkflowExecutionResponse.h>
#include <huaweicloud/modelarts/v1/model/ExecutionAction.h>
#include <huaweicloud/modelarts/v1/model/ListExecutionLabelsRequest.h>
#include <huaweicloud/modelarts/v1/model/ListExecutionLabelsResponse.h>
#include <huaweicloud/modelarts/v1/model/ListWorkflowExecutionsRequest.h>
#include <huaweicloud/modelarts/v1/model/ListWorkflowExecutionsResponse.h>
#include <huaweicloud/modelarts/v1/model/ListWorkflowStepExecutionRequest.h>
#include <huaweicloud/modelarts/v1/model/ListWorkflowStepExecutionResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowWorkflowExecutionRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowWorkflowExecutionResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowWorkflowStepExecutionMetricsRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowWorkflowStepExecutionMetricsResponse.h>
#include <huaweicloud/modelarts/v1/model/StepExecutionAction.h>
#include <huaweicloud/modelarts/v1/model/UpdateWorkflowExecutionRequest.h>
#include <huaweicloud/modelarts/v1/model/UpdateWorkflowExecutionResponse.h>
#include <huaweicloud/modelarts/v1/model/WorkflowExecution.h>
#include <huaweicloud/modelarts/v1/model/WorkflowStepMetric.h>
#include <string>

#include <huaweicloud/modelarts/v1/model/CreateWorkflowScheduleRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateWorkflowScheduleResponse.h>
#include <huaweicloud/modelarts/v1/model/DeleteWorkflowScheduleIdRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteWorkflowScheduleIdResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowWorkflowScheduleListRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowWorkflowScheduleListResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowWorkflowScheduleRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowWorkflowScheduleResponse.h>
#include <huaweicloud/modelarts/v1/model/UpdateWorkflowScheduleRequest.h>
#include <huaweicloud/modelarts/v1/model/UpdateWorkflowScheduleResponse.h>
#include <huaweicloud/modelarts/v1/model/WorkflowSchedule.h>
#include <huaweicloud/modelarts/v1/model/WorkflowScheduleUpdate.h>
#include <string>

#include <huaweicloud/modelarts/v1/model/CreateWorkflowSubscriptionsRequest.h>
#include <huaweicloud/modelarts/v1/model/CreateWorkflowSubscriptionsResponse.h>
#include <huaweicloud/modelarts/v1/model/DeleteWorkflowSubscriptionRequest.h>
#include <huaweicloud/modelarts/v1/model/DeleteWorkflowSubscriptionResponse.h>
#include <huaweicloud/modelarts/v1/model/ShowWorkflowSubscriptionRequest.h>
#include <huaweicloud/modelarts/v1/model/ShowWorkflowSubscriptionResponse.h>
#include <huaweicloud/modelarts/v1/model/Subscription.h>
#include <huaweicloud/modelarts/v1/model/UpdateWorkflowSubscriptionRequest.h>
#include <huaweicloud/modelarts/v1/model/UpdateWorkflowSubscriptionResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Modelarts::V1::Model;

class HUAWEICLOUD_MODELARTS_V1_EXPORT  ModelArtsClient : public Client
{
public:

    ModelArtsClient();

    virtual ~ModelArtsClient();

    static ClientBuilder<ModelArtsClient> newBuilder();

    // 计划事件授权
    //
    // 计划事件授权接口用于为指定的计划事件分配或调整权限。该接口适用于以下场景：当创建新的计划事件、调整现有计划事件的权限设置或变更权限分配时，用户可通过此接口为指定的计划事件授予或修改权限。使用该接口的前提条件是计划事件已存在且用户具有管理员权限。授权操作完成后，计划事件的权限设置将被更新，相关变更将被记录以便审计。若计划事件不存在、用户无权限操作或授权信息格式不正确，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AcceptScheduledEventResponse> acceptScheduledEvent(
        AcceptScheduledEventRequest &request
    );
    // 动态挂载Notebook存储
    //
    // 动态挂载Notebook存储接口支持将存储动态挂载到运行中的Notebook实例的指定文件目录。调用该接口后，系统将在Notebook实例中**异步**挂载指定的存储实例，挂载完成后用户可在容器中以文件系统方式读写存储实例中的文件。若用户无权限访问指定实例或Notebook实例未运行，接口将返回相应的错误信息。
    // 
    // 支持的存储类型：
    // - **对象存储 OBS**：适合直接使用OBS桶作为持久化存储进行AI开发和探索场景，但小文件频繁读写性能较差，**模型训练，大文件解压等场景慎用，此类场景可能会导致Notebook文件操作卡顿**。
    // - **并行文件系统 PFS**：高性能对象存储文件系统，存储成本低，吞吐量大，能够快速处理高性能计算（HPC）工作负载，**但小文件频繁读写较弱。小文件频繁读写场景可能会导致Notebook文件操作卡顿**
    // - **高性能弹性文件服务SFS Turbo**：仅支持专属资源池实例挂载，**挂载前需要在资源池网络管理界面中进行网络关联**，支持多个环境使用，可以在多个开发环境、开发环境和训练之间共享。适合探索、实验等非正式生产场景，但不适合重IO读写模型。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AttachDynamicStorageResponse> attachDynamicStorage(
        AttachDynamicStorageRequest &request
    );
    // 批量绑定应用密钥
    //
    // 本接口用于将生成的多个apikey与指定服务进行批量绑定，用于访问特定服务。调用此接口前，确保已成功创建服务实例，并获取到有效的apikey。绑定成功后，apikey将作为服务调用时的身份验证凭证，确保仅授权用户能够访问该服务。如果尝试绑定已失效或已绑定当前服务的apikey将返回相应的异常信息，提示用户检查apikey的有效性和绑定状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchBindInferApiKeysResponse> batchBindInferApiKeys(
        BatchBindInferApiKeysRequest &request
    );
    // 批量为节点绑定逻辑子池
    //
    // 批量为节点绑定逻辑子池接口用于在物理专属池开启节点绑定功能时，对逻辑子池中的节点进行逻辑子池的换绑操作。该接口适用于以下场景：当需要重新分配资源、调整业务负载或优化资源使用效率时，用户可通过此接口将指定节点从当前逻辑子池迁移到另一个逻辑子池。使用该接口的前提条件是物理专属池已开启节点绑定功能，且目标逻辑子池已存在并具备足够的资源容量。绑定操作完成后，节点将从原逻辑子池解绑并绑定到目标逻辑子池，原逻辑子池的节点数减少，目标逻辑子池的节点数增加。若节点未绑定到任何逻辑子池、目标逻辑子池不存在或资源不足，或用户无权限操作，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchBindPoolNodesResponse> batchBindPoolNodes(
        BatchBindPoolNodesRequest &request
    );
    // 批量创建资源池标签
    //
    // 批量创建资源池标签接口用于为指定资源池添加或更新多个标签信息。该接口适用于以下场景：当需要对资源池进行统一分类管理（如成本归属、环境标识）、批量配置元数据（如项目归属、负责人信息）或更新已有标签值时，管理员可通过此接口一次性操作多个标签。使用该接口的前提条件是目标资源池必须已存在且处于可管理状态，调用者需具备资源池标签管理权限，且提交的标签数据需符合格式规范（如key非空、value长度限制）。操作完成后，系统将为资源池添加新标签或覆盖同名标签的值，且不会影响资源池的其他配置属性。若资源池不存在、用户权限不足、标签格式错误或系统服务异常，接口将返回对应的错误信息（如\&quot;404 Not Found\&quot;、\&quot;403 Forbidden\&quot;、\&quot;400 Bad Request\&quot;或\&quot;503 Service Unavailable\&quot;）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCreatePoolTagsResponse> batchCreatePoolTags(
        BatchCreatePoolTagsRequest &request
    );
    // 批量删除内网接入
    //
    // 本接口用于批量删除指定的内网接入点，适用于需要清理多个不再使用的内网接入点的场景。调用此接口前，确保已具备相应的删除权限，并提供一个有效的内网接入点ID列表。删除成功后，所指定的内网接入点将被彻底移除，不再对任何服务生效。如果提供的内网接入点ID列表中包含无效或已删除的ID，将返回相应的异常信息，提示用户检查ID的有效性。此外，如果调用时出现权限不足或其他系统异常，也将返回相应的异常信息，提示用户检查权限或联系技术支持。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteInferIntranetConnectionsResponse> batchDeleteInferIntranetConnections(
        BatchDeleteInferIntranetConnectionsRequest &request
    );
    // 删除指定服务列表
    //
    // 删除指定服务列表功能允许用户批量删除多个服务，适用于需要清理资源、释放计算能力或管理多个服务的场景。使用此功能前，请确保您具备删除服务的权限，并提供有效的服务ID列表。成功执行后，指定的服务将被终止运行并释放相关资源。若服务ID无效、权限不足或服务状态不允许删除，将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteInferServicesResponse> batchDeleteInferServices(
        BatchDeleteInferServicesRequest &request
    );
    // 批量删除节点
    //
    // 批量删除节点接口用于批量删除指定资源池中的节点。该接口适用于以下场景：当需要清理资源池中的冗余节点、重新分配资源或移除故障节点时，用户可通过此接口批量删除指定的节点。使用该接口的前提条件是资源池已创建且处于可用状态，用户具有删除节点的权限，且资源池中至少保留一个节点。删除操作完成后，指定的节点将被永久移除，资源池中剩余的节点将继续提供服务。若资源池不存在、节点不存在、用户无权限操作或资源池中节点不足，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeletePoolNodesResponse> batchDeletePoolNodes(
        BatchDeletePoolNodesRequest &request
    );
    // 批量删除资源池标签
    //
    // 批量删除资源标签接口用于移除指定资源上的多个标签信息。该接口适用于以下场景：当需要清理冗余标签（如过期分类、无效元数据）、统一调整资源分类策略或因权限变更需批量移除标签时，管理员可通过此接口一次性删除多个标签。使用该接口的前提条件是目标资源必须已存在且处于可管理状态，调用者需具备资源标签管理权限，且待删除的标签必须已关联至该资源，系统标签管理服务需正常运行。操作完成后，指定标签将从资源中彻底移除，且不会影响资源的其他配置属性。若资源不存在、用户权限不足、标签未关联或系统服务异常，接口将返回对应的错误信息（如\&quot;404 Not Found\&quot;、\&quot;403 Forbidden\&quot;、\&quot;400 Bad Request\&quot;或\&quot;503 Service Unavailable\&quot;）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeletePoolTagsResponse> batchDeletePoolTags(
        BatchDeletePoolTagsRequest &request
    );
    // 批量对节点功能上锁
    //
    // 批量对节点功能上锁接口用于批量对指定节点的功能进行上锁操作，被上锁的功能在控制台将无法正常使用。该接口适用于以下场景：当需要临时禁用某些节点的功能以防止误操作、进行系统维护或测试时，用户可通过此接口批量对节点功能进行上锁。使用该接口的前提条件是节点功能已存在且用户具有管理员权限。上锁操作完成后，指定节点的功能将在控制台被禁用，无法进行相关操作。若节点功能不存在、用户无权限操作或请求参数无效，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchLockPoolNodesResponse> batchLockPoolNodes(
        BatchLockPoolNodesRequest &request
    );
    // 批量迁移节点
    //
    // 批量迁移节点接口用于在资源池之间批量迁移节点，将节点从一个资源池迁移到另一个资源池。该接口适用于以下场景：当资源池的节点分布不均衡、需要进行集群维护或业务扩展时，用户可通过此接口将指定节点从一个资源池迁移到另一个资源池。使用该接口的前提条件是资源池中至少包含两个节点，且目标资源池具备足够的资源容量（如IP地址等）以接收迁移节点。若资源池只有一个节点、目标集群资源不足、节点状态不支持迁移或用户无权限操作，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchMigratePoolNodesResponse> batchMigratePoolNodes(
        BatchMigratePoolNodesRequest &request
    );
    // 批量重启节点
    //
    // 批量重启节点接口用于批量重启指定资源池中的节点。该接口适用于以下场景：当需要对资源池中的节点进行系统更新、配置变更、故障恢复或维护操作时，用户可通过此接口批量重启指定的节点。使用该接口的前提条件是资源池已创建且处于可用状态，节点属于该资源池且处于运行状态，且用户具有重启节点的权限。重启操作完成后，指定的节点将被重新启动，资源池中的其他节点将继续正常运行。若资源池不存在、节点不在资源池中、节点未处于运行状态或用户无权限操作，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchRebootPoolNodesResponse> batchRebootPoolNodes(
        BatchRebootPoolNodesRequest &request
    );
    // 重置节点
    //
    // 重置节点接口用于将指定节点恢复到初始状态，清除节点上的数据和配置。该接口适用于以下场景：当节点出现故障、配置错误、需要重新部署或进行系统恢复时，用户可通过此接口重置节点，使其恢复到出厂或初始状态。使用该接口的前提条件是节点已存在且用户具有管理员权限。重置操作完成后，节点上的所有数据和配置将被清除，节点将被重新启动并恢复到初始状态。若节点不存在、用户无权限操作或节点处于不可重置状态（如正在运行任务），接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchResetPoolNodesResponse> batchResetPoolNodes(
        BatchResetPoolNodesRequest &request
    );
    // 节点规格变更
    //
    // 节点规格变更接口用于调整指定节点的规格（如步长），例如将节点从8节点超节点扩容到16节点超节点。该接口适用于以下场景：当需要根据业务需求调整节点的资源容量、优化资源利用率或进行系统升级时，用户可通过此接口变更节点的规格。使用该接口的前提条件是节点已创建且处于可变更状态，目标规格在支持范围内，且用户具有管理员权限。规格变更完成后，节点的资源容量将按新规格调整，相关服务和配置将重新加载以适应新的规格。若节点不存在、节点状态不允许变更、目标规格不支持或用户无权限操作，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchResizePoolNodesResponse> batchResizePoolNodes(
        BatchResizePoolNodesRequest &request
    );
    // 批量解绑应用密钥
    //
    // 本接口用于将已绑定的apikey从指定服务中批量解绑，适用于需要撤销多个apikey对特定服务的访问权限的场景。调用此接口前，确保已获取到需要解绑的多个apikey，并确认这些apikey当前绑定在指定服务上。解绑成功后，这些apikey将不再对指定服务生效，但仍可继续用于其他服务。如果尝试解绑不存在或未绑定到指定服务的apikey，将返回相应的异常信息，提示用户检查apikey的有效性和绑定状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchUnbindInferApiKeysResponse> batchUnbindInferApiKeys(
        BatchUnbindInferApiKeysRequest &request
    );
    // 批量对节点功能解锁
    //
    // 批量对节点功能解锁接口用于批量解除指定节点功能的锁定状态，使被上锁的功能在控制台恢复正常可用状态。该接口适用于以下场景：当需要恢复被锁定的节点功能以正常使用、完成系统维护或测试后，用户可通过此接口批量对节点功能进行解锁。使用该接口的前提条件是节点功能已被上锁且用户具有管理员权限。解锁操作完成后，指定节点的功能将在控制台恢复正常，用户可以正常使用相关功能。若节点功能未被锁定、用户无权限操作或请求参数无效，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchUnlockPoolNodesResponse> batchUnlockPoolNodes(
        BatchUnlockPoolNodesRequest &request
    );
    // 批量更新节点
    //
    // 批量更新节点接口用于同时修改多个节点的配置或属性，支持批量操作时各节点独立执行更新流程。该接口适用于以下场景：当用户需统一升级节点软件版本、批量处理选中节点的资源标签、调整资源分配策略、应用安全补丁或同步配置变更时，可通过此接口批量更新目标节点，确保每个节点的更新过程互不影响。使用该接口的前提条件包括：目标节点已存在且用户具备管理员权限，节点需处于可操作状态（如非锁定或维护中），批量操作时需提供有效的节点列表及更新参数（如配置项、版本号等）作为输入。操作完成后，指定节点将应用新配置并更新状态为可用，原有配置将被覆盖。若节点不存在、用户权限不足、节点状态异常（如正在维护）、更新参数不合规或输入参数缺失，接口将返回对应错误信息（如404未找到节点、403权限拒绝、400参数校验失败等）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchUpdatePoolNodesResponse> batchUpdatePoolNodes(
        BatchUpdatePoolNodesRequest &request
    );
    // 绑定应用密钥
    //
    // 本接口用于将生成的apikey与指定服务进行绑定，适用于应用程序需要调用特定服务的场景。调用此接口前，确保已成功创建服务实例，并获取到有效的apikey。绑定成功后，apikey将作为服务调用时的身份验证凭证，确保仅授权用户能够访问该服务。如果尝试绑定已失效的apikey，将返回相应的异常信息，提示用户检查apikey的有效性和绑定状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BindInferApiKeyResponse> bindInferApiKey(
        BindInferApiKeyRequest &request
    );
    // 中断服务部署
    //
    // 中断服务部署接口用于中断处于“升级中”或“部署中”状态的部署，使其快速停止。该接口适用于以下场景：当部署出现严重故障需要立即修复、资源需要快速释放以部署更高优先级的部署，或在测试环境中需要快速迭代时，用户可通过此接口中断指定部署。使用该接口的前提条件是部署当前状态为“升级中”或“部署中”，且用户具有中断部署的权限。若部署为“部署中”状态，执行中断操作，部署状态将变成“停止”，相关资源将被释放，且终端操作将被记录；若部署为“升级中”状态，执行中断操作，部署状态将变成“运行中”。若部署当前状态不是“升级中”或“部署中”，若用户无权限操作，接口将返回相应的错误信息。若部署ID无效、版本号不存在或用户无权限，则返回400 Bad Request或403 Forbidden；
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CancelInferDeploymentResponse> cancelInferDeployment(
        CancelInferDeploymentRequest &request
    );
    // 更新算法
    //
    // 更新算法。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeAlgorithmResponse> changeAlgorithm(
        ChangeAlgorithmRequest &request
    );
    // 更新训练实验信息
    //
    // 通过实验ID更新训练实验信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeTrainingExperimentResponse> changeTrainingExperiment(
        ChangeTrainingExperimentRequest &request
    );
    // 更新训练作业描述
    //
    // 更新训练作业描述。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeTrainingJobDescriptionResponse> changeTrainingJobDescription(
        ChangeTrainingJobDescriptionRequest &request
    );
    // 校验训练实验名称
    //
    // 校验训练实验名称接口用于新增训练实验前校验训练实验名称是否重复。
    // 该接口适用于以下场景：当用户需要创建新的训练实验时，可以通过此接口校验定义的实验名称是否已存在。使用该接口的前提条件是用户具有创建实验的权限。查询操作完成后，将返回实验名称是否重复的结果。若用户无权限操作，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckTrainingExperimentResponse> checkTrainingExperiment(
        CheckTrainingExperimentRequest &request
    );
    // 通过标签查询资源数量
    //
    // 该接口适用于需要统计和获取符合特定标签或资源名称条件的资源数量的场景，例如在资源管理和监控中，用户可以通过指定标签或资源名称进行精确或模糊查询来统计资源数量。通过调用此接口，用户可以基于多个标签或资源名称进行查询，若不传标签则返回所有资源的总数。用户必须具有足够的权限，且目标资源需存在。查询成功后，返回符合条件的资源总数；若失败，返回具体的错误信息。常见异常包括权限验证错误、资源不存在错误和参数验证错误。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CountInferServicesByTagsResponse> countInferServicesByTags(
        CountInferServicesByTagsRequest &request
    );
    // 创建算法
    //
    // 创建一个算法。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAlgorithmResponse> createAlgorithm(
        CreateAlgorithmRequest &request
    );
    // 创建发布算法资产
    //
    // 创建发布算法资产接口用于在算法管理中创建并发布新的算法资产。
    // 该接口适用于以下场景：当用户开发完成新的算法并希望将其发布为可复用的算法资产时，可以通过此接口创建并发布算法资产。使用该接口的前提条件是用户已登录且具有创建和发布算法资产的权限。创建发布操作完成后，系统将生成新的算法资产，并将其添加到算法资产列表中，用户可以通过算法ID进行管理和调用。若用户无权限操作、算法资产信息不完整或已存在相同名称的算法资产，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAlgorithmVersionToGalleryResponse> createAlgorithmVersionToGallery(
        CreateAlgorithmVersionToGalleryRequest &request
    );
    // 配置授权
    //
    // 配置授权接口用于配置ModelArts的授权。该接口适用于以下场景：当需要为IAM子用户设置访问ModelArts的权限时，管理员可通过此接口配置授权。使用该接口的前提条件是管理员具备IAM系统的Security Administrator权限，并且需要为子用户设置访问密钥。配置完成后，子用户将被授予访问ModelArts资源的权限，从而能够正常使用训练管理、开发环境、数据管理、在线服务等功能。若管理员无权限操作或子用户不存在，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAuthorizationResponse> createAuthorization(
        CreateAuthorizationRequest &request
    );
    // 创建应用密钥
    //
    // 本接口用于在系统中创建一个新的API_KEY，适用于需要为用户或应用程序生成访问凭证的场景。调用此接口前，确保已具备相应的创建权限，并提供必要的参数，如用户ID或应用程序ID。创建成功后，系统将生成一个唯一的API_KEY，并返回该API_KEY的详细信息，包括API_KEY值、创建时间等。如果提供的参数无效或系统中已存在相同的API_KEY，将返回相应的异常信息，提示用户检查输入数据的有效性。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateInferApiKeyResponse> createInferApiKey(
        CreateInferApiKeyRequest &request
    );
    // 添加部署
    //
    // 将模型部署为在线服务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateInferDeploymentResponse> createInferDeployment(
        CreateInferDeploymentRequest &request
    );
    // 创建内网接入
    //
    // 本接口用于在指定Region中创建内网接入点，适用于需要为应用程序或服务配置内网连接的场景。调用此接口前，确保已具备相应的创建权限，并提供必要的参数，如Region ID、内网接入点名称和网络配置信息。创建成功后，系统将生成一个内网接入点，并返回该接入点的详细信息，包括接入点ID、创建时间、状态等。如果提供的参数无效或内网接入配置冲突，将返回相应的异常信息，提示用户检查输入数据的有效性和配置冲突情况。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateInferIntranetConnectionResponse> createInferIntranetConnection(
        CreateInferIntranetConnectionRequest &request
    );
    // 创建服务
    //
    // 将模型部署为在线服务，适用于用户在开发或运维过程中需要将训练好的模型部署为在线服务，以便通过API或HTTP接口提供预测或处理能力的场景。调用此接口前，用户必须具有创建服务的权限，并提供合法的模型镜像路径和完整的服务配置信息（如服务名称、模型镜像路径、资源配置、升级配置等）。调用成功后，系统将成功创建并部署服务，服务状态变为“部署中”，并生成服务的唯一ID返回给用户。服务的详细信息（如状态、创建时间、更新时间等）也会记录在系统中。如果用户没有创建服务的权限，或提供的模型镜像路径不合法，或服务配置信息不完整，调用将返回相应的错误信息。如果系统在部署过程中遇到资源不足或其他内部错误，也将返回错误信息并记录日志。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateInferServiceResponse> createInferService(
        CreateInferServiceRequest &request
    );
    // 添加标签
    //
    // 该接口适用于需要为资源（如模型、数据集、服务等）添加元数据标签的场景，例如在资源管理或分类中，用户可以通过添加标签来标注资源的用途、状态或其他属性。通过调用此接口，用户可以批量添加标签，如果标签key已存在，则更新其value。用户必须具有足够的权限，且目标资源需存在。添加成功后，资源将包含新的标签信息；若失败，返回具体的错误信息。常见异常包括权限验证错误、资源不存在错误和参数验证错误。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateInferServiceTagResponse> createInferServiceTag(
        CreateInferServiceTagRequest &request
    );
    // 创建ModelArts委托
    //
    // 创建ModelArts委托接口用于创建包含OBS、SWR、IEF等依赖服务的ModelArts委托。该接口适用于以下场景：当需要配置ModelArts访问OBS、SWR、IEF等服务的权限时，用户可通过此接口创建委托。使用该接口的前提条件是用户具备创建委托的权限，并且需要在IAM系统中具备相应的权限。创建完成后，ModelArts将被授权访问OBS、SWR、IEF等服务，从而能够正常执行数据存储、镜像拉取、模型部署等功能。若用户无权限创建委托或依赖服务未配置，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateModelArtsAgencyResponse> createModelArtsAgency(
        CreateModelArtsAgencyRequest &request
    );
    // 创建网络资源
    //
    // 创建网络资源接口用于在系统中创建新的网络资源。该接口适用于以下场景：当需要为业务扩展、资源规划或网络架构调整时，用户可通过此接口创建新的网络资源，如虚拟网络、子网或路由等。使用该接口的前提条件是用户具有管理员权限，并且系统中具备足够的资源支持新网络资源的创建。创建操作完成后，新的网络资源将被成功添加到系统中，并可用于后续的业务配置。若用户无权限、资源不足或输入参数有误，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateNetworkResponse> createNetwork(
        CreateNetworkRequest &request
    );
    // 创建节点池
    //
    // 创建节点池接口用于创建新的节点池。该接口适用于以下场景：当需要扩展计算资源、优化资源分配或部署新的服务时，用户可通过此接口创建指定配置的节点池。使用该接口的前提条件是用户具有管理员权限且节点池的配置参数（如节点数量、规格、网络配置等）已正确设置。创建操作完成后，节点池将被成功创建并处于可用状态，相关节点信息将被记录。若用户无权限操作、配置参数错误或系统资源不足，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateNodePoolResponse> createNodePool(
        CreateNodePoolRequest &request
    );
    // 创建资源池的订单id
    //
    // 创建资源池订单ID接口用于生成资源池申请的订单标识。该接口适用于以下场景：当用户需要申请新资源池时（如业务扩展、资源不足或临时资源需求），可通过此接口提交按需转包周期订单的创建请求。使用该接口的前提条件是用户需具备资源申请权限，提交的资源池配置参数（如资源类型、容量、周期等）需符合系统校验规则，且当前仅支持按需转包周期订单类型。订单创建成功后，系统将生成唯一订单ID并触发后续资源分配流程，同时记录操作日志。若用户权限不足、配置参数缺失/冲突（如容量超出配额）、订单类型不支持或系统资源不足，接口将返回对应错误码及提示信息，且不会生成订单ID或占用资源。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateOrderIdResponse> createOrderId(
        CreateOrderIdRequest &request
    );
    // 创建资源池
    //
    // 创建资源池接口用于在系统中创建新的资源池。该接口适用于以下场景：当需要为新业务分配资源、优化资源管理或进行资源隔离时，用户可通过此接口创建新的资源池，用于管理计算、存储、网络等资源。使用该接口的前提条件是用户具有管理员权限，并且系统中具备足够的资源支持新资源池的创建。创建操作完成后，新的资源池将被成功添加到系统中，并处于可用状态，可支持后续的资源分配和管理。若用户无权限、系统资源不足或输入参数有误，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePoolResponse> createPool(
        CreatePoolRequest &request
    );
    // 创建插件
    //
    // 创建插件实例接口用于在系统中创建一个新的插件实例。该接口适用于以下场景：当需要扩展系统功能、部署新的插件、更新现有插件配置或测试插件时，用户可通过此接口创建指定插件的实例。使用该接口的前提条件是插件已存在且用户具有管理员权限或插件管理权限。创建操作完成后，插件实例将被成功创建并处于可用状态，相关配置信息将被记录。若插件不存在、用户无权限操作、配置参数错误或系统资源不足，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePoolPluginResponse> createPoolPlugin(
        CreatePoolPluginRequest &request
    );
    // 创建训练作业镜像保存任务
    //
    // 创建训练作业镜像保存任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateSaveImageJobResponse> createSaveImageJob(
        CreateSaveImageJobRequest &request
    );
    // 创建训练作业标签
    //
    // 创建训练作业标签，支持批量添加，当添加的标签key已存在，则覆盖该标签的value。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTrainJobTagsResponse> createTrainJobTags(
        CreateTrainJobTagsRequest &request
    );
    // 创建训练实验
    //
    // 创建训练实验接口用于在ModelArts平台上创建新的实验分类。
    // 该接口适用于以下场景：当用户需要将训练作业放入实验中分类，有序地进行管理，可以通过此接口创建训练实验，常用于多任务的版本管理等场景。使用该接口的前提条件是用户已登录ModelArts平台并具有创建训练实验的权限。创建操作完成后，系统将返回训练实验的详细信息，包括实验ID、当前实验下的训练作业总个数等。若用户无权限操作，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTrainingExperimentResponse> createTrainingExperiment(
        CreateTrainingExperimentRequest &request
    );
    // 创建训练作业
    //
    // 创建训练作业。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTrainingJobResponse> createTrainingJob(
        CreateTrainingJobRequest &request
    );
    // 创建工作空间
    //
    // 创建工作空间（\&quot;default\&quot;为系统预留的默认工作空间名称，不能使用）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateWorkspaceResponse> createWorkspace(
        CreateWorkspaceRequest &request
    );
    // 删除算法
    //
    // 删除算法。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAlgorithmResponse> deleteAlgorithm(
        DeleteAlgorithmRequest &request
    );
    // 删除授权
    //
    // 删除授权接口用于删除指定用户的授权或删除全量用户的授权。该接口适用于以下场景：当需要撤销特定用户的访问权限或在系统维护时清理所有用户的授权时，管理员可通过此接口删除指定用户的授权或全量用户的授权。使用该接口的前提条件是管理员具备删除授权的权限，并且需要指定要删除授权的用户或选择删除全量用户的授权。删除操作完成后，指定用户的授权将被移除，或所有用户的授权将被清空，用户将无法再访问相关功能。若用户不存在、管理员无权限操作或删除全量授权时系统检测到无管理员权限，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAuthorizationsResponse> deleteAuthorizations(
        DeleteAuthorizationsRequest &request
    );
    // 删除镜像
    //
    // 删除镜像接口用于删除镜像对象，对于个人私有镜像可以通过参数一并删除SWR镜像内容。该接口适用于以下场景：当镜像不再需要、配置错误或需要清理资源时，用户可通过此接口删除指定的镜像对象。使用该接口的前提条件是镜像已存在且用户具有删除权限。删除操作完成后，镜像对象将被永久移除，相关资源和配置也将被清理。若镜像不存在、用户无权限操作或镜像正在被使用，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteImageResponse> deleteImage(
        DeleteImageRequest &request
    );
    // 删除镜像组
    //
    // 删除镜像组接口用于删除镜像组内所有的版本对象，对于个人私有镜像可以通过参数一并删除SWR镜像内容。该接口适用于以下场景：当镜像不再需要、配置错误或需要清理资源时，用户可通过此接口删除指定的镜像组对象内所有版本。使用该接口的前提条件是镜像组已存在且用户具有删除权限。删除操作完成后，镜像组内所有版本对象将被永久移除，相关资源和配置也将被清理。若镜像组不存在、用户无权限操作或镜像正在被使用，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteImageGroupResponse> deleteImageGroup(
        DeleteImageGroupRequest &request
    );
    // 删除应用密钥
    //
    // 本接口用于删除指定的apikey，适用于管理员需要撤销对某个应用程序或用户的访问权限的场景。调用此接口前，确保已获取到需要删除的apikey，并确认apikey未在其他服务中使用。删除成功后，该apikey将无法再用于访问任何相关服务。如果尝试删除不存在或已删除的apikey，将返回相应的异常信息，提示用户检查apikey的有效性。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteInferApiKeyResponse> deleteInferApiKey(
        DeleteInferApiKeyRequest &request
    );
    // 删除服务部署
    //
    // 该接口适用于删除服务的某个部署。若服务ID、部署ID无效、版本号不存在或用户无权限，则返回400 Bad Request或403 Forbidden
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteInferDeploymentResponse> deleteInferDeployment(
        DeleteInferDeploymentRequest &request
    );
    // 删除服务部署的实例
    //
    // 本接口用于删除指定的单个部署的实例，适用于需要清理或释放不再使用的部署实例资源的场景。调用此接口前，确保已具备相应的删除权限，并提供有效的服务实例ID、部署ID。删除成功后，指定的服务部署实例将被彻底移除，不再对任何请求生效。如果提供的服务实例ID、部署ID无效、服务实例已删除或权限不足，将返回相应的异常信息，提示用户检查输入数据的有效性和权限。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteInferDeploymentInstanceResponse> deleteInferDeploymentInstance(
        DeleteInferDeploymentInstanceRequest &request
    );
    // 删除Pod
    //
    // 本接口用于删除指定的单个Pod，适用于需要清理或释放不再使用的Pod资源的场景。调用此接口前，确保已具备相应的删除权限，并提供有效的Pod ID。删除成功后，指定的Pod将被彻底移除，不再对任何服务请求生效。如果提供的Pod ID无效、Pod已删除或权限不足，将返回相应的异常信息，提示用户检查输入数据的有效性和权限。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteInferDeploymentPodResponse> deleteInferDeploymentPod(
        DeleteInferDeploymentPodRequest &request
    );
    // 删除在线服务部署版本
    //
    // 此接口用于删除指定服务部署的某个在线版本，适用于需要清理不再使用的版本或优化资源管理的场景。
    // 请求需包含有效的服务ID、部署ID及版本号。用户必须具有对目标服务部署的管理权限，并且该版本当前未处于活跃状态。
    // 删除成功后，指定版本将从在线服务部署中移除，相关资源将被释放。
    // 若服务ID、部署ID无效、版本号不存在或用户无权限，则返回400 Bad Request或403 Forbidden；若版本处于活跃状态或有其他依赖，则返回400 Bad Request。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteInferDeploymentVersionResponse> deleteInferDeploymentVersion(
        DeleteInferDeploymentVersionRequest &request
    );
    // 删除资源标签
    //
    // 该接口适用于需要从资源（如模型、数据集、服务等）中移除特定标签的场景，例如在资源管理或分类中，用户可以通过删除标签来调整或清理资源的元数据。通过调用此接口，用户可以批量删除指定的标签。用户必须具有足够的权限，且目标资源需存在。删除成功后，资源将不再包含指定的标签信息；若失败，返回具体的错误信息。常见异常包括权限验证错误、资源不存在错误和参数验证错误。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteInferServiceTagResponse> deleteInferServiceTag(
        DeleteInferServiceTagRequest &request
    );
    // 删除网络资源
    //
    // 删除网络资源接口用于移除指定的网络资源。该接口适用于以下场景：当网络资源不再需要、配置错误或需要清理资源时，用户可通过此接口删除指定的网络资源。使用该接口的前提条件是网络资源已存在且用户具有管理员权限。删除操作完成后，指定的网络资源将被永久移除，相关配置和关联关系也将被清理。若指定的网络资源不存在、用户无权限操作或资源被其他资源依赖，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteNetworkResponse> deleteNetwork(
        DeleteNetworkRequest &request
    );
    // 删除节点池
    //
    // 删除节点池接口用于移除已创建的节点池，包周期资源池不支持。该接口适用于以下场景：当节点池完成任务、配置错误或需要清理资源时，用户可通过此接口删除指定的节点池。使用该接口的前提条件是节点池已存在且用户具有管理员权限。删除操作完成后，节点池将被永久移除，相关资源和配置也将被清理。若节点池不存在、用户无权限操作或节点池处于不可删除状态（如包周期资源池或节点池正在使用中），接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteNodePoolResponse> deleteNodePool(
        DeleteNodePoolRequest &request
    );
    // 删除资源池
    //
    // 删除资源池接口用于移除指定的资源池。该接口适用于以下场景：当资源池不再需要、配置错误或需要清理资源时，用户可通过此接口删除指定的资源池。使用该接口的前提条件是资源池已存在且用户具有管理员权限。删除操作完成后，指定的资源池将被永久移除，相关资源和配置也将被清理。若资源池不存在、用户无权限操作或资源池被其他资源依赖，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeletePoolResponse> deletePool(
        DeletePoolRequest &request
    );
    // 删除训练作业标签
    //
    // 删除训练作业标签，支持批量删除。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTrainJobTagsResponse> deleteTrainJobTags(
        DeleteTrainJobTagsRequest &request
    );
    // 删除训练实验
    //
    // 删除训练实验接口用于移除已创建的训练实验。
    // 该接口适用于以下场景：当训练实验完成、配置错误或需要清理资源时，用户可以通过此接口删除指定的训练实验。使用该接口的前提条件是训练实验已存在且用户具有删除该实验的权限。删除操作完成后，训练实验将被永久移除，相关的配置和资源也将被清理。若训练实验不存在或用户无权限操作，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTrainingExperimentResponse> deleteTrainingExperiment(
        DeleteTrainingExperimentRequest &request
    );
    // 删除训练作业
    //
    // 删除训练作业。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTrainingJobResponse> deleteTrainingJob(
        DeleteTrainingJobRequest &request
    );
    // 删除工作空间
    //
    // 删除工作空间。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteWorkspaceResponse> deleteWorkspace(
        DeleteWorkspaceRequest &request
    );
    // 动态卸载Notebook存储
    //
    // 动态卸载Notebook存储接口用于从运行中的Notebook实例中卸载已挂载的动态存储实例。
    // 
    // 适用场景：用户需要清理或重新组织Notebook实例的挂载资源时，可通过此接口卸载指定的存储实例。使用该接口的前提条件是用户已登录系统并具有访问目标Notebook实例的权限，同时Notebook实例必须处于运行状态且存储实例处于MOUNTED / UNMOUNT_FAILED / MOUNT_FAILED状态。调用该接口后，系统将卸载指定的存储实例，Notebook容器将无法再操作存储中的文件或对象，但存储中的文件或对象保持不变。若用户无权限访问指定实例或Notebook实例未运行，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DetachDynamicStorageResponse> detachDynamicStorage(
        DetachDynamicStorageRequest &request
    );
    // 查看授权列表
    //
    // 查看授权列表接口用于查看授权信息。该接口适用于以下场景：当用户需要了解当前的授权情况、审核权限分配或管理权限时，可通过此接口查看授权列表。使用该接口的前提条件是用户具备查看授权的权限。查看操作完成后，将返回授权列表，包括被授权的资源、授权类型以及授权内容等信息。若用户无权限查看或授权列表不存在，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetAuthorizationsResponse> getAuthorizations(
        GetAuthorizationsRequest &request
    );
    // 查询超节点Operation详情
    //
    // 查询Operation详情接口用于获取指定Operation的详细信息。该接口适用于以下场景：当用户需要了解某个Operation的具体执行情况和状态，以便进行故障排查或操作审计时，可以通过此接口获取相关信息。使用该接口的前提条件是用户已登录并具有查询Operation详情的权限，且指定的Operation已存在。查询操作完成后，接口将返回指定Operation的详细信息，包括Operation ID、操作类型、执行状态、开始时间、结束时间、操作结果等。若用户无权限操作、指定的Operation不存在或Operation ID无效，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetHyperinstanceOperationResponse> getHyperinstanceOperation(
        GetHyperinstanceOperationRequest &request
    );
    // 查询算法列表
    //
    // 查询算法列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAlgorithmsResponse> listAlgorithms(
        ListAlgorithmsRequest &request
    );
    // 获取动态挂载存储信息列表
    //
    // 此接口用于获取指定Notebook实例下挂载的动态存储信息列表。
    // 适用场景：用户需要获取指定Notebook实例下挂载的动态存储的存储id、存储类型、挂载路径、挂载状态等信息的场景。若挂载失败，会返回相应错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDynamicStoragesResponse> listDynamicStorages(
        ListDynamicStoragesRequest &request
    );
    // 获取事件类型列表
    //
    // 获取事件类型列表接口用于获取训练管理中支持的事件类型列表。
    // 该接口适用于以下场景：当用户需要了解训练管理中支持的事件类型，以便在创建或管理训练任务时进行相关配置时，可以通过此接口获取事件类型列表。使用该接口的前提条件是用户已登录且具有访问训练管理的权限。获取操作完成后，响应消息体中将包含所有支持的事件类型及其描述。若用户无权限访问或系统中无事件类型信息，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEventCategoriesResponse> listEventCategories(
        ListEventCategoriesRequest &request
    );
    // 查询事件列表
    //
    // 查询事件列表接口用于获取系统中记录的事件信息。该接口适用于以下场景：当用户需要监控系统状态、排查问题或进行审计时，可通过此接口查询系统中发生的事件记录。使用该接口的前提条件是用户具有相应的权限，并且系统中已存在事件记录。查询操作完成后，接口将返回事件列表，包含事件ID、类型、时间、描述等信息。若用户无权限、事件记录不存在或查询参数有误，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEventsResponse> listEvents(
        ListEventsRequest &request
    );
    // 查询支持的镜像列表
    //
    // 查询支持的镜像列表接口用于根据指定条件分页查询满足条件的所有镜像。该接口适用于以下场景：当用户需要查找特定镜像、管理镜像仓库或选择合适的镜像版本进行部署时，可通过此接口获取符合条件的镜像列表。使用该接口的前提条件是镜像仓库已存在且用户具有访问权限。查询操作完成后，将返回满足条件的镜像列表，包括镜像ID、名称、版本、类型、状态、大小和创建时间等详细信息。若镜像仓库不存在、用户无权限访问或查询条件有误，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListImageResponse> listImage(
        ListImageRequest &request
    );
    // 查询用户镜像列表
    //
    // 查询用户镜像列表接口用于查询用户镜像信息概览，以镜像名称作为聚合的信息。该接口适用于以下场景：当用户需要管理多个镜像或了解各镜像的基本信息时，可通过此接口获取镜像列表及其概览信息。使用该接口的前提条件是用户具备镜像管理权限，并且镜像已存在。查询操作完成后，将返回用户所有镜像的列表，包括镜像名称、版本、状态等信息。若镜像不存在或用户无权限访问，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListImageGroupResponse> listImageGroup(
        ListImageGroupRequest &request
    );
    // 查询应用密钥
    //
    // 本接口用于查询当前系统中的apikey列表，适用于管理员或用户需要查看和管理apikey的场景。调用此接口前，确保已具备相应的查询权限。返回的列表将包含每个apikey的基本信息，如apikey值、创建时间、绑定的服务等。如果当前系统中没有apikey，将返回空列表或相应的异常信息，提示用户检查查询条件。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInferApiKeysResponse> listInferApiKeys(
        ListInferApiKeysRequest &request
    );
    // 查询支持可切换规格列表
    //
    // 该接口允许用户查询当前资源实例支持的可切换规格列表，适用于需要调整实例资源配置的场景。使用该接口前，用户需确保已登录并拥有查询权限。执行成功后，用户将获得一个包含各种可切换规格的详细列表，包括规格ID、名称、资源配额等信息，可用于后续的实例规格变更操作。如果用户没有相应的查询权限或资源实例ID无效，接口将返回错误信息，如401 Unauthorized或404 Not Found。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInferClusterFlavorsResponse> listInferClusterFlavors(
        ListInferClusterFlavorsRequest &request
    );
    // 查询服务部署实例列表
    //
    // 本接口用于查询当前[租户](tag:hws,hws_hk,fcs,fcs_super)[资源空间](tag:hcs,hcs_sm)的服务部署实例列表，并支持根据服务部署实例的状态进行筛选，包括运行中和已删除状态，同时支持分页和关键词筛选。适用于需要管理和监控服务实例状态的场景。调用此接口前，确保已具备相应的查询权限，并提供可选的筛选条件和分页参数。返回的列表将包含每个服务部署实例的基本信息，如部署名字、最新更新时间、状态等。如果当前租户没有符合条件的服务实例或提供的参数无效，将返回空列表或相应的异常信息，提示用户检查输入数据的有效性和权限。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInferDeploymentInstancesResponse> listInferDeploymentInstances(
        ListInferDeploymentInstancesRequest &request
    );
    // 查询Pod事件
    //
    // 本接口用于查询指定Pod的Kubernetes事件，适用于需要监控和排查Pod运行状态的场景。调用此接口前，确保已具备相应的查询权限，并提供有效的Pod ID。返回的事件列表将包含每个事件的详细信息，如事件类型、发生次数、事件名称、事件信息、发生时间等。如果提供的Pod ID无效、Pod不存在或权限不足，将返回相应的异常信息，提示用户检查输入数据的有效性和权限。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInferDeploymentPodEventsResponse> listInferDeploymentPodEvents(
        ListInferDeploymentPodEventsRequest &request
    );
    // 查询服务部署的pod的列表
    //
    // 本接口用于查询指定服务部署的pod列表，并支持选择是否只获取当前运行中的pod。适用于需要管理和监控服务部署pod状态的场景。调用此接口前，确保已具备相应的查询权限，并提供有效的服务ID、部署ID和可选的筛选参数pod status（如是否只获取当前运行中的pod）。返回的列表将包含每个pod的基本信息，如pod名称、pod所在node的IP、pod所在node名字、pod角色、状态、最近更新时间等。如果指定的服务ID无效或当前服务没有pod，将返回空列表或相应的异常信息，提示用户检查输入数据的有效性和权限。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInferDeploymentPodsResponse> listInferDeploymentPods(
        ListInferDeploymentPodsRequest &request
    );
    // 查询在线服务部署版本列表
    //
    // 此接口用于获取指定服务部署的版本列表，适用于需要了解当前服务部署可用版本的场景，例如进行版本选择或确认当前版本信息。请求需包含有效的服务ID、部署ID，也可通过排序参数对列表进行排序。用户必须具有对目标服务部署的查看权限。请求成功后，返回该服务部署的所有在线版本信息，包括版本号、发布时间和状态。若服务ID/部署ID无效或用户无权限，则返回400 Bad Request或403 Forbidden；若服务部署无在线版本，则返回空列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInferDeploymentVersionsResponse> listInferDeploymentVersions(
        ListInferDeploymentVersionsRequest &request
    );
    // 查询服务部署列表
    //
    // 支持分页和筛选，适用于用户在管理控制台或通过API需要查看特定条件下（如服务状态、名称等）的部署列表的情况。调用此接口前，用户必须具有查询部署列表的权限，并提供合法的分页参数（如页码、每页条数）和筛选条件（如部署状态、名称等）。调用成功后，系统将返回符合筛选条件的部署列表，包含指定页码的数据，并返回总页数和总记录数。如果用户没有查询部署列表的权限，或提供的分页参数和筛选条件不合法，调用将返回相应的错误信息。如果系统在查询过程中遇到内部错误，也将返回错误信息并记录日志。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInferDeploymentsResponse> listInferDeployments(
        ListInferDeploymentsRequest &request
    );
    // 查询当前的内网接入申请列表
    //
    // 本接口用于查询当前所有的内网接入申请记录，适用于需要管理和监控内网接入申请状态的场景。调用此接口前，确保已具备相应的查询权限。返回的列表将包含每个内网接入申请的基本信息，如申请ID、创建时间、状态、Region ID等。如果当前租户没有内网接入申请记录，将返回空列表。如果调用时出现权限不足或其他系统异常，将返回相应的异常信息，提示用户检查权限或联系技术支持。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInferIntranetConnectionApplicationsResponse> listInferIntranetConnectionApplications(
        ListInferIntranetConnectionApplicationsRequest &request
    );
    // 查询当前的内网接入审批列表
    //
    // 本接口用于查询当前所有的内网接入审批记录，适用于需要管理和监控内网接入审批状态的场景。调用此接口前，确保已具备相应的查询权限。返回的列表将包含每个内网接入审批的基本信息，如审批ID、申请时间、状态（如待审批、已批准、已拒绝）、申请者信息、Region ID等。如果当前租户没有内网接入审批记录，将返回空列表。如果调用时出现权限不足或其他系统异常，将返回相应的异常信息，提示用户检查权限或联系技术支持。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInferIntranetConnectionReviewsResponse> listInferIntranetConnectionReviews(
        ListInferIntranetConnectionReviewsRequest &request
    );
    // 获取在线服务事件列表
    //
    // 该接口适用于需要监控和管理在线服务事件的场景，例如用户或运维人员需要定期检查服务的日志事件，以及时发现和处理问题。通过调用此接口，用户可以获取当前在线服务的所有事件记录，包括事件类型、事件信息、时间、发生次数等信息。用户必须具有查询服务事件列表的权限，才能成功访问该接口。获取成功后，返回事件列表；若失败，返回具体的错误信息。常见异常包括权限验证错误、服务状态错误和参数验证错误。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInferServiceEventsResponse> listInferServiceEvents(
        ListInferServiceEventsRequest &request
    );
    // 查询某一类资源下的标签
    //
    // 该接口适用于需要获取用户当前项目中某一类资源（如指定的Service）的标签信息的场景，例如在资源管理和监控中，用户可以通过查询标签来了解各类资源的分类和属性。通过调用此接口，用户可以获取指定Service在所有工作空间中的标签列表，但无权限的工作空间标签数据将被过滤不返回。用户必须具有足够的权限，且目标资源需存在。查询成功后，返回指定Service的标签列表；若失败，返回具体的错误信息。常见异常包括权限验证错误、资源不存在错误和参数验证错误。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInferServiceTagsResponse> listInferServiceTags(
        ListInferServiceTagsRequest &request
    );
    // 查询服务列表
    //
    // 支持分页和筛选
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInferServicesResponse> listInferServices(
        ListInferServicesRequest &request
    );
    // 通过标签反查资源列表
    //
    // 该接口适用于需要根据标签或资源名称查找相关资源的场景，例如在资源管理和搜索中，用户可以通过指定标签或进行模糊查询来查找符合特定条件的资源。通过调用此接口，用户可以基于多个标签或资源名称进行精确或模糊查询，若不传标签则返回所有资源。用户必须具有足够的权限，且目标资源需存在。查询成功后，返回符合条件的资源列表；若失败，返回具体的错误信息。常见异常包括权限验证错误、资源不存在错误和参数验证错误。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInferServicesByTagsResponse> listInferServicesByTags(
        ListInferServicesByTagsRequest &request
    );
    // 查询任务列表
    //
    // 查询任务列表接口用于获取当前用户下的任务列表。该接口适用于以下场景：当需要查看任务状态、管理任务进度或统计任务数量时，用户可通过此接口获取当前用户下所有任务的详细信息。使用该接口的前提条件是用户已登录系统且具有查看任务的权限。调用接口成功后，系统将返回当前用户下的任务列表，包括任务ID、名称、状态、创建时间等信息。若用户未登录、无权限访问或系统中未配置任务，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListJobsResponse> listJobs(
        ListJobsRequest &request
    );
    // 查询网络资源列表
    //
    // 查询网络资源列表接口用于获取系统中已创建的网络资源信息。该接口适用于以下场景：当用户需要监控网络状态、进行资源规划、排查网络问题或进行审计时，可通过此接口查询系统中现有的网络资源列表。使用该接口的前提条件是用户具有相应的权限，并且系统中已存在网络资源。查询操作完成后，接口将返回网络资源列表，包含资源ID、类型、状态、创建时间等详细信息。若用户无权限、系统中无网络资源或查询参数有误，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListNetworksResponse> listNetworks(
        ListNetworksRequest &request
    );
    // 查询节点池的节点列表
    //
    // 查询节点池的节点列表接口用于获取指定节点池中所有节点的详细信息。该接口适用于以下场景：当需要查看节点池的节点状态、资源使用情况或管理节点资源时，用户可通过此接口获取节点池中节点的详细信息。使用该接口的前提条件是节点池已存在且用户具有访问该节点池的权限。调用接口成功后，系统将返回节点池中所有节点的列表，包括节点ID、名称、状态、IP地址、资源使用情况等详细信息。若节点池不存在、用户无权限访问或节点池当前不可用，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListNodePoolNodesResponse> listNodePoolNodes(
        ListNodePoolNodesRequest &request
    );
    // 查询节点池列表
    //
    // 查询节点池列表接口用于获取指定节点池的列表信息。该接口适用于以下场景：当需要查看节点池的配置、状态或管理节点池资源时，用户可通过此接口获取节点池的详细信息。使用该接口的前提条件是节点池已存在且用户具有管理员权限。调用接口成功后，系统将返回节点池的列表，包括节点池ID、名称、节点数量、状态等详细信息。若节点池不存在、用户无权限操作或节点池当前不可用，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListNodePoolsResponse> listNodePools(
        ListNodePoolsRequest &request
    );
    // 查询插件模板列表
    //
    // 查询插件模板列表接口用于获取插件模板的基本信息列表。该接口适用于以下场景：当需要浏览或管理插件模板时，用户可通过此接口查询所有可用的插件模板信息，以便选择或进一步操作。使用该接口的前提条件是用户具有访问插件模板的权限，且插件模板服务处于正常运行状态。查询操作完成后，用户将获得插件模板的列表信息，包括模板名称、类型、版本等，便于后续的插件开发或管理。若用户无权限访问、插件模板服务不可用或请求参数无效，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPluginTemplatesResponse> listPluginTemplates(
        ListPluginTemplatesRequest &request
    );
    // 查询资源池节点列表
    //
    // 查询资源池节点列表接口用于获取指定资源池中的节点信息列表。该接口适用于以下场景：当需要了解资源池中节点的分布、状态或资源使用情况时，用户可通过此接口查询资源池中的节点列表，以便进行资源监控、分配或管理。使用该接口的前提条件是资源池已创建且处于可用状态，且用户具有访问资源池的权限。查询操作完成后，用户将获得资源池中节点的详细信息，包括节点ID、状态、资源使用情况等，便于后续的资源管理和优化。若资源池不存在、用户无权限访问或请求参数无效，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPoolNodesResponse> listPoolNodes(
        ListPoolNodesRequest &request
    );
    // 查询插件列表
    //
    // 查询插件实例列表接口用于获取系统中已部署的插件实例信息。该接口适用于以下场景：当用户需要查看系统中已部署的插件实例、监控插件运行状态、管理插件配置或进行故障排查时，可通过此接口获取插件实例的详细信息。使用该接口的前提条件是用户具有查询权限且系统中已部署至少一个插件实例。调用该接口后，系统将返回所有插件实例的列表，包括插件名称、类型、状态、版本及部署环境等信息。若用户无权限访问或系统中未部署任何插件实例，接口将返回相应的错误信息或空列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPoolPluginsResponse> listPoolPlugins(
        ListPoolPluginsRequest &request
    );
    // 查询资源池的所有标签
    //
    // 查询资源池所有标签接口用于获取用户当前项目下资源池的所有标签信息，默认查询所有工作空间，但无权限的工作空间不会返回标签数据。该接口适用于以下场景：当需要管理、分类或统计资源池的标签信息时，用户可通过此接口获取资源池的标签数据。使用该接口的前提条件是用户具有访问资源池的权限且资源池已存在。调用接口成功后，系统将返回用户当前项目下所有可访问工作空间的资源池标签信息。若用户无权限访问资源池、资源池不存在或项目未创建，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPoolTagsResponse> listPoolTags(
        ListPoolTagsRequest &request
    );
    // 查询资源池列表
    //
    // 查询资源池列表接口用于获取系统中已创建的资源池信息。该接口适用于以下场景：当用户需要监控资源池状态、进行资源规划、管理资源分配或进行审计时，可通过此接口查询系统中现有的资源池列表。使用该接口的前提条件是用户具有相应的权限，并且系统中已存在资源池。查询操作完成后，接口将返回资源池列表，包含资源池ID、名称、类型、状态、资源配额等详细信息。若用户无权限、系统中无资源池或查询参数有误，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPoolsResponse> listPools(
        ListPoolsRequest &request
    );
    // 查询资源规格列表
    //
    // 查询资源规格列表接口用于获取可用的资源规格信息。该接口适用于以下场景：当需要查看或选择资源规格以创建资源池、分配资源或了解可用资源规格时，用户可通过此接口获取资源规格的详细信息。使用该接口的前提条件是用户具有相应的权限（如管理员权限或资源管理权限）。调用接口成功后，系统将返回资源规格的列表，包括规格ID、名称、CPU核数、内存大小、存储容量等详细信息。若用户无权限访问该接口或系统中未配置资源规格，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListResourceFlavorsResponse> listResourceFlavors(
        ListResourceFlavorsRequest &request
    );
    // 查询计划事件列表
    //
    // 查询计划事件列表信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListScheduledEventsResponse> listScheduledEvents(
        ListScheduledEventsRequest &request
    );
    // 查询训练实验列表
    //
    // 查询训练实验列表接口用于获取ModelArts平台上用户已创建的训练实验的列表。
    // 该接口适用于以下场景：当用户需要查看所有或部分训练实验的概要信息，如实验名称、描述、创建时间等时，可以通过此接口查询训练实验列表。使用该接口的前提条件是用户已登录ModelArts平台并具有查看训练实验的权限。查询操作完成后，系统将返回符合条件的训练实验列表。若用户无权限操作或查询条件不合法，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTrainingExperimentsResponse> listTrainingExperiments(
        ListTrainingExperimentsRequest &request
    );
    // 获取训练作业事件列表
    //
    // 获取训练作业事件列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTrainingJobEventsResponse> listTrainingJobEvents(
        ListTrainingJobEventsRequest &request
    );
    // 获取训练作业流程阶段信息列表
    //
    // 获取训练作业流程阶段信息列表接口用于获取ModelArts平台上指定训练作业的流程阶段信息列表。
    // 该接口适用于以下场景：当用户需要查看特定训练作业的流程阶段记录时，可以通过此接口获取阶段信息列表。使用该接口的前提条件是用户已知训练作业ID，并具有查看阶段信息列表的权限。查询操作完成后，平台将返回包含训练作业的阶段信息记录。若训练作业ID不存在或用户无权限操作，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTrainingJobStagesResponse> listTrainingJobStages(
        ListTrainingJobStagesRequest &request
    );
    // 查询训练作业的实例历史调度信息
    //
    // 查询训练作业调度的实例IP、节点IP等信息，可通过schedule_count参数查询具体的某一次调度的实例信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTrainingJobTasksResponse> listTrainingJobTasks(
        ListTrainingJobTasksRequest &request
    );
    // 查询训练作业列表
    //
    // 根据指定查询条件查询用户创建的训练作业列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTrainingJobsResponse> listTrainingJobs(
        ListTrainingJobsRequest &request
    );
    // 查询资源池作业列表
    //
    // 查询专属资源池作业列表接口用于获取指定专属资源池中的作业信息列表。该接口适用于以下场景：当需要监控专属资源池的资源使用情况、查看作业状态或管理资源分配时，用户可通过此接口获取专属资源池中作业的详细信息。使用该接口的前提条件是专属资源池已存在且用户具有相应的权限（如管理员权限或资源管理权限）。调用接口成功后，系统将返回专属资源池中作业的列表，包括作业ID、名称、状态、资源使用情况等详细信息。若专属资源池不存在、用户无权限操作或资源池当前不可用，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListWorkloadsResponse> listWorkloads(
        ListWorkloadsRequest &request
    );
    // 查询工作空间列表
    //
    // 查询工作空间列表，响应消息体中包含详细信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListWorkspaceResponse> listWorkspace(
        ListWorkspaceRequest &request
    );
    // 修改添加自定义URL申请
    //
    // 本接口用于修改添加内网自定义URL请求，适用于需要同时更新或者添加多个内网接入点的场景。调用此接口前，确保调用者具备相应的更新权限，提供需要更新的参数，如IP地址、VPC ID、子网ID等。指定的内网接入点将添加新的配置，新的配置将对相关服务生效。如果提供的内网接入点ID列表中包含无效或不存在的ID，接口将返回相应的异常信息，提示用户检查ID的有效性，如果提供的更新参数不符合格式要求（如IP地址格式不正确），接口将返回相应的异常信息，提示用户检查参数的有效性。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyInferIntranetConnectionsResponse> modifyInferIntranetConnections(
        ModifyInferIntranetConnectionsRequest &request
    );
    // 训练作业事件上报接口
    //
    // 训练事件上报给业务面
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NotifyTrainingJobInformationResponse> notifyTrainingJobInformation(
        NotifyTrainingJobInformationRequest &request
    );
    // 更新网络资源
    //
    // 更新网络资源接口用于修改指定网络资源的配置信息。该接口适用于以下场景：当需要调整网络资源的属性、修复配置错误或优化资源设置时，用户可通过此接口更新指定网络资源的详细信息。使用该接口的前提条件是网络资源已存在且用户具有管理员权限。更新操作完成后，指定网络资源的配置信息将被成功修改，系统将反映最新的资源状态和属性。若指定的网络资源不存在、用户无权限操作或输入参数有误，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<PatchNetworkResponse> patchNetwork(
        PatchNetworkRequest &request
    );
    // 更新节点池
    //
    // 更新节点池接口用于修改指定节点池的配置信息。该接口适用于以下场景：当需要扩展节点池容量、调整节点规格、优化资源分配或修复节点池配置时，用户可通过此接口更新节点池的相关信息。使用该接口的前提条件是节点池已存在且用户具有管理员权限。更新操作完成后，节点池的配置将被更新，包括节点数量、规格、网络配置等参数。若节点池不存在、用户无权限操作或配置参数错误，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<PatchNodePoolResponse> patchNodePool(
        PatchNodePoolRequest &request
    );
    // 更新资源池
    //
    // 更新资源池接口用于修改指定资源池的配置和容量。该接口适用于以下场景：当资源池需要扩展容量、调整配置或优化性能时，用户可通过此接口更新资源池的相关信息。使用该接口的前提条件是资源池已存在且用户具有管理员权限。更新操作完成后，资源池的配置和容量将被更新，相关资源和配置也将被调整。若资源池不存在、用户无权限操作或资源池处于不可更新状态，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<PatchPoolResponse> patchPool(
        PatchPoolRequest &request
    );
    // 注册自定义镜像
    //
    // 注册自定义镜像接口用于将用户自定义的镜像注册到ModelArts镜像管理。该接口适用于以下场景：当用户需要将自己的自定义镜像（如特定算法环境、工具链或配置）集成到ModelArts平台时，可通过此接口将镜像注册到镜像管理中以便后续使用。使用该接口的前提条件是用户具备ModelArts镜像管理权限，并且需要提供有效的镜像地址和符合要求的镜像格式。注册操作完成后，自定义镜像将被成功添加到ModelArts镜像列表中，用户可以在后续任务中选择使用该镜像。若镜像地址无效、镜像格式不符合要求或用户无权限操作，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RegisterImageResponse> registerImage(
        RegisterImageRequest &request
    );
    // 查询算法详情
    //
    // 根据算法id查询指定算法。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAlgorithmByUuidResponse> showAlgorithmByUuid(
        ShowAlgorithmByUuidRequest &request
    );
    // 查询授权模式
    //
    // 查询授权模式接口用于获取指定资源或功能的授权方式和权限配置信息。该接口适用于以下场景：当系统管理员需要查看资源的访问权限设置、开发者需要验证授权策略配置是否正确，或安全审计人员需要检查授权配置是否符合安全规范时，可通过此接口查询授权模式的详细信息。使用该接口的前提条件是用户具有查询权限且目标资源或功能的授权模式已配置。调用成功后，接口将返回授权模式的类型、规则及权限范围等详细信息。若用户无权限访问该接口，或目标资源的授权模式未配置，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAuthmodeDetailResponse> showAuthmodeDetail(
        ShowAuthmodeDetailRequest &request
    );
    // 获取某个超参敏感度分析图像的路径
    //
    // 获取某个超参敏感度分析图像的保存路径。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAutoSearchParamAnalysisResultPathResponse> showAutoSearchParamAnalysisResultPath(
        ShowAutoSearchParamAnalysisResultPathRequest &request
    );
    // 获取超参敏感度分析结果
    //
    // 获取超参敏感度分析结果的汇总表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAutoSearchParamsAnalysisResponse> showAutoSearchParamsAnalysis(
        ShowAutoSearchParamsAnalysisRequest &request
    );
    // 查询超参搜索某个trial的结果
    //
    // 根据传入的trial_id，查询指定trial的搜索结果。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAutoSearchPerTrialResponse> showAutoSearchPerTrial(
        ShowAutoSearchPerTrialRequest &request
    );
    // 提前终止自动化搜索作业的某个trial
    //
    // 提前终止自动化搜索作业的某个trial。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAutoSearchTrialEarlyStopResponse> showAutoSearchTrialEarlyStop(
        ShowAutoSearchTrialEarlyStopRequest &request
    );
    // 查询超参搜索所有trial的结果
    //
    // 查询超参搜索所有trial的结果。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAutoSearchTrialsResponse> showAutoSearchTrials(
        ShowAutoSearchTrialsRequest &request
    );
    // 获取自动化搜索作业yaml模板的内容
    //
    // 获取自动化搜索作业yaml模板的内容。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAutoSearchYamlTemplateContentResponse> showAutoSearchYamlTemplateContent(
        ShowAutoSearchYamlTemplateContentRequest &request
    );
    // 获取自动化搜索作业yaml模板的信息
    //
    // 获取自动化搜索作业yaml模板的信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAutoSearchYamlTemplatesInfoResponse> showAutoSearchYamlTemplatesInfo(
        ShowAutoSearchYamlTemplatesInfoRequest &request
    );
    // 获取动态挂载存储实例详情
    //
    // 获取动态挂载OBS实例详情接口用于获取已挂载到运行中Notebook实例中的存储实例的详细信息。
    // 
    // 适用场景：用户需要查看Notebook实例中已挂载的存储实例的详细信息时，可通过此接口获取。使用该接口的前提条件是用户已登录系统并具有访问目标Notebook实例的权限。调用该接口后，系统将返回指定Notebook实例中挂载的存储实例的详细信息。若用户无权限访问指定实例，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDynamicStorageResponse> showDynamicStorage(
        ShowDynamicStorageRequest &request
    );
    // 查询镜像详情
    //
    // 查询镜像详情接口用于查询镜像的详细信息。该接口适用于以下场景：当用户需要了解特定镜像的详细信息（如镜像名称、版本、创建时间、大小、状态等）或对镜像执行一些操作时，可通过此接口获取镜像的详细信息。使用该接口的前提条件是用户具备镜像管理权限，并且待查询镜像有效且存在。查询操作完成后，将返回镜像的详细信息，包括镜像ID、名称、版本、创建时间、大小以及状态等。若镜像不存在或用户无权限访问，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowImageResponse> showImage(
        ShowImageRequest &request
    );
    // 查询服务部署详情
    //
    // 通过服务ID、部署ID查询对应的部署详情，调用者可以通过有效的服务ID、部署ID获取部署的名称、状态、服务实例、配置参数等详细信息。调用者需具有足够的权限，且输入的服务ID、部署ID必须有效。查询成功时返回部署详细信息，查询失败时返回特定的错误码和错误信息。若服务ID或者部署ID无效、版本号不存在或用户无权限，则返回400 Bad Request或403 Forbidden；
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInferDeploymentResponse> showInferDeployment(
        ShowInferDeploymentRequest &request
    );
    // 查询在线服务部署版本详情
    //
    // 此接口用于获取指定服务部署版本的详细信息，适用于需要查看特定版本的详细配置和状态的场景，例如确认版本的功能、性能参数或发布历史。请求需包含有效的服务ID、部署ID及版本号。用户必须具有对目标服务部署的查看权限。请求成功后，返回该版本的详细信息，包括版本号、发布时间、配置参数和状态。若服务ID、部署ID无效、版本号不存在或用户无权限，则返回400 Bad Request或403 Forbidden；若服务部署无该版本信息，则返回404 Not Found。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInferDeploymentVersionResponse> showInferDeploymentVersion(
        ShowInferDeploymentVersionRequest &request
    );
    // 查询服务详情
    //
    // 通过服务ID查询对应的服务详情，调用者可以通过有效的服务ID获取服务的名称、状态、服务实例、配置参数等详细信息。调用者需具有足够的权限，且输入的服务ID必须有效。查询成功时返回服务详细信息，查询失败时返回特定的错误码和错误信息。若服务ID无效、版本号不存在或用户无权限，则返回400 Bad Request或403 Forbidden。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInferServiceResponse> showInferService(
        ShowInferServiceRequest &request
    );
    // 查询纳管资源池详情
    //
    // 该接口允许用户通过指定资源池的ID来查询纳管资源池的详细信息，包括实例ID、名称、Flavor规格、实例状态和实例可访问的URL。此功能适用于需要监控或管理云资源的用户，使用该接口前，用户需确保已拥有访问权限及正确的资源池ID。执行成功后，用户将获得所需的实例详情，可用于进一步的资源管理和配置。如果资源池ID无效或用户没有相应的访问权限，接口将返回错误信息，如404 Not Found或401 Unauthorized。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInferServiceClusterResponse> showInferServiceCluster(
        ShowInferServiceClusterRequest &request
    );
    // 查询资源标签
    //
    // 该接口适用于需要获取资源（如模型、数据集、服务等）的标签信息的场景，例如在资源管理或分类中，用户可以通过查询标签来了解资源的用途、状态或其他属性。通过调用此接口，用户可以通过资源ID获取指定资源的所有标签列表。用户必须具有足够的权限，且目标资源需存在。查询成功后，返回资源的标签列表；若失败，返回具体的错误信息。常见异常包括权限验证错误、资源不存在错误和参数验证错误。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInferServiceTagsResponse> showInferServiceTags(
        ShowInferServiceTagsRequest &request
    );
    // 查询网络资源
    //
    // 查询网络资源接口用于获取指定网络资源的详情信息。该接口适用于以下场景：当用户需要查看特定网络资源的详细配置、状态或属性时，可通过此接口查询指定网络资源的详细信息。使用该接口的前提条件是用户具有相应的权限，并且指定的网络资源已存在于系统中。查询操作完成后，接口将返回指定网络资源的详细信息，包括资源ID、类型、状态、配置参数等。若指定的网络资源不存在、用户无权限操作或输入参数有误，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowNetworkResponse> showNetwork(
        ShowNetworkRequest &request
    );
    // 查询网络可用的IP
    //
    // 查询网络可用的IP接口用于查找指定网络中未被占用的IP地址。该接口适用于以下场景：在网络规划、资源分配或故障排查时，用户需要快速获取可用的IP地址信息。使用该接口的前提条件是用户具有访问目标网络的权限，并且需要提供有效的网络范围（如子网掩码或IP段）。查询完成后，接口将返回指定网络中未被占用的IP地址列表，用户可以根据结果进行IP地址的分配或进一步操作。若网络不可达、权限不足或网络范围有误，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowNetworkAvailableIpResponse> showNetworkAvailableIp(
        ShowNetworkAvailableIpRequest &request
    );
    // 查询节点配置模板
    //
    // 查询节点配置模板接口用于获取指定节点配置模板的详细信息。该接口适用于以下场景：当用户需要查看节点配置模板的内容、管理节点配置或进行相关操作时，可通过此接口获取指定节点配置模板的详细信息。使用该接口的前提条件是节点配置模板已存在且用户具有相应的访问权限。调用该接口后，系统将返回指定节点配置模板的详细信息，包括模板名称、版本、配置参数及描述等。若节点配置模板不存在或用户无权限访问，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowNodeConfigTemplateResponse> showNodeConfigTemplate(
        ShowNodeConfigTemplateRequest &request
    );
    // 查询指定节点池详情
    //
    // 查询指定节点池详情接口用于获取指定节点池的详细信息。该接口适用于以下场景：当需要查看节点池的配置、状态、资源使用情况或管理节点池时，用户可通过此接口获取节点池的详细信息。使用该接口的前提条件是节点池已存在且用户具有访问该节点池的权限。调用接口成功后，系统将返回节点池的详细信息，包括节点池ID、名称、节点数量、状态、创建时间、配置参数等。若节点池不存在、用户无权限访问或节点池当前不可用，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowNodePoolResponse> showNodePool(
        ShowNodePoolRequest &request
    );
    // 查询训练作业指定任务的日志（OBS链接）
    //
    // 查询训练作业指定任务的日志（OBS临时链接，有效期5分钟），可全量查看或直接下载。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowObsUrlOfTrainingJobLogsResponse> showObsUrlOfTrainingJobLogs(
        ShowObsUrlOfTrainingJobLogsRequest &request
    );
    // 查询订单详情
    //
    // 查询订单详情接口用于获取指定订单的详细信息。该接口适用于以下场景：当需要查看订单的状态、金额、商品信息或处理订单相关问题时，用户可通过此接口获取订单的详细数据。使用该接口的前提条件是订单已存在且用户具有访问该订单的权限。调用接口成功后，系统将返回订单的详细信息，包括订单号、商品列表、金额、支付状态、下单时间等。若订单不存在、用户无权限访问或订单信息未正确配置，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowOrderResponse> showOrder(
        ShowOrderRequest &request
    );
    // 查询OS的配置参数
    //
    // 查询OS的配置参数接口用于获取ModelArts OS服务的配置参数，如网络网段、用户资源配额等。该接口适用于以下场景：当需要了解当前ModelArts OS服务的网络配置、资源分配情况或进行系统管理时，用户可通过此接口查询相关的配置参数。使用该接口的前提条件是用户具有访问ModelArts OS服务的权限，且服务处于正常运行状态。查询操作完成后，用户将获得指定的配置参数信息，便于进行后续的资源规划或系统优化。若用户无权限访问、服务不可用或请求参数无效，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowOsConfigResponse> showOsConfig(
        ShowOsConfigRequest &request
    );
    // 查询OS的配额
    //
    // 查询OS配额接口用于获取ModelArts OS服务中部分资源的配额信息，如资源池配额、网络配额等。该接口适用于以下场景：当需要了解资源池或网络资源的使用限制、规划资源分配或监控资源使用情况时，用户可通过此接口获取相关配额信息。使用该接口的前提条件是ModelArts OS服务已部署且用户具有相应的权限（如管理员权限或资源管理权限）。调用接口成功后，系统将返回资源池配额、网络配额等详细信息，帮助用户更好地进行资源规划和管理。若用户无权限访问该接口、服务不可用或配额信息未配置，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowOsQuotaResponse> showOsQuota(
        ShowOsQuotaRequest &request
    );
    // 查询插件模板
    //
    // 查询插件模板接口用于获取指定插件模板的详细信息。该接口适用于以下场景：当需要了解特定插件模板的配置、功能或使用方式时，用户可通过此接口查询插件模板的详细信息。使用该接口的前提条件是插件模板已存在且用户具有访问权限。查询操作完成后，用户将获得指定插件模板的详细信息，包括模板的配置参数、功能描述等，便于后续的插件开发或配置管理。若插件模板不存在或用户无权限访问，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPluginTemplateResponse> showPluginTemplate(
        ShowPluginTemplateRequest &request
    );
    // 查询资源池
    //
    // 查询资源池信息接口用于获取指定资源池的详细信息。该接口适用于以下场景：当用户需要查看特定资源池的详细配置、状态、资源使用情况或进行资源管理时，可通过此接口查询指定资源池的详细信息。使用该接口的前提条件是用户具有相应的权限，并且指定的资源池已存在于系统中。查询操作完成后，接口将返回资源池的详细信息，包括资源池ID、名称、类型、状态、资源配额、利用率等。若指定的资源池不存在、用户无权限操作或输入参数有误，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPoolResponse> showPool(
        ShowPoolRequest &request
    );
    // 资源池监控
    //
    // 资源池监控接口用于获取指定资源池的实时或历史监控信息。该接口适用于以下场景：当需要实时查看资源池的资源使用情况、性能状态或历史数据时，用户可通过此接口获取资源池的监控数据。使用该接口的前提条件是资源池已存在且用户具有管理员权限。调用接口成功后，系统将返回资源池的监控信息，包括资源使用率、性能指标及历史趋势等数据。若资源池不存在、用户无权限操作或资源池当前不可用，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPoolMonitorResponse> showPoolMonitor(
        ShowPoolMonitorRequest &request
    );
    // 查询资源池单个节点详情
    //
    // 查询资源池中的单个节点接口用于获取指定资源池内单个节点的详细信息。该接口适用于以下场景：当用户需要了解节点资源分配、详细信息时，可通过此接口获取节点的类型、状态、配置参数及关联服务等信息。使用该接口的前提条件是目标资源池已存在且用户具备查看权限，同时需提供有效的资源池标识符作为输入参数。接口调用后，系统将返回资源池中单个节点数据；若资源池不存在、用户权限不足或输入参数无效，接口将返回对应的错误信息（如404未找到资源池或403权限拒绝）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPoolNodeResponse> showPoolNode(
        ShowPoolNodeRequest &request
    );
    // 查询资源池节点自定义配置
    //
    // 查询资源池节点自定义配置接口用于获取指定资源池节点的自定义配置信息。该接口适用于以下场景：当需要查看资源池节点的详细配置、优化资源分配或管理节点资源时，用户可通过此接口获取节点的自定义配置数据。使用该接口的前提条件是资源池节点已存在且用户具有访问该节点的权限。调用接口成功后，系统将返回资源池节点的自定义配置信息，包括硬件规格、软件环境、网络设置等详细参数。若资源池节点不存在、用户无权限访问或节点配置信息未正确配置，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPoolNodeConfigResponse> showPoolNodeConfig(
        ShowPoolNodeConfigRequest &request
    );
    // 查询资源池节点自定义配置模板
    //
    // 查询资源池节点自定义配置模板接口用于获取节点配置模板的结构定义与参数规范。该接口适用于以下场景：当需要了解节点自定义配置的模板结构（如参数字段、校验规则、示例值）、验证配置模板是否符合规范或进行配置模板选型时，用户可通过此接口获取模板的元数据（如参数说明、类型限制、依赖关系等）。使用该接口的前提条件是目标配置模板必须已注册至系统且处于可访问状态，调用者需具备模板查看权限，且系统配置管理服务正常运行。查询操作完成后，系统将返回模板的完整定义信息（如参数列表、版本号、更新时间等），且不会对模板内容或节点配置产生影响。若模板未注册、用户权限不足或系统服务异常，接口将返回对应的错误信息（如\&quot;404 Not Found\&quot;、\&quot;403 Forbidden\&quot;或\&quot;503 Service Unavailable\&quot;）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPoolNodeConfigTemplateResponse> showPoolNodeConfigTemplate(
        ShowPoolNodeConfigTemplateRequest &request
    );
    // 查询资源实时利用率
    //
    // 查询资源实时利用率接口用于获取当前项目下所有资源池的实时利用率信息。该接口适用于以下场景：当用户需要监控资源使用情况、进行资源优化、容量规划或故障排查时，可通过此接口查询资源池的实时利用率，包括CPU、内存、存储等资源的使用情况。使用该接口的前提条件是用户具有访问该项目的权限，并且资源池已存在且处于运行状态。查询操作完成后，接口将返回资源池的实时利用率数据，包含利用率百分比、资源类型、时间戳等详细信息。若用户无权限、资源池不存在或系统无法获取实时数据，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPoolRuntimeMetricsResponse> showPoolRuntimeMetrics(
        ShowPoolRuntimeMetricsRequest &request
    );
    // 资源池统计
    //
    // 资源池统计接口用于获取指定资源池的统计信息。该接口适用于以下场景：当需要了解资源池的资源使用情况、分配情况或利用率时，用户可通过此接口获取资源池的统计数据。使用该接口的前提条件是资源池已存在且用户具有管理员权限。调用接口成功后，系统将返回资源池的统计信息，包括资源使用总量、已分配量、利用率及资源分配趋势等数据。若资源池不存在、用户无权限操作或资源池当前不可用，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPoolStatisticsResponse> showPoolStatistics(
        ShowPoolStatisticsRequest &request
    );
    // 查询资源池上的标签
    //
    // 查询资源池的标签接口用于获取指定资源池的标签信息。该接口适用于以下场景：当需要查看、管理或统计特定资源池的标签信息时，用户可通过此接口获取资源池的标签数据。使用该接口的前提条件是资源池已存在且用户具有访问该资源池的权限。调用接口成功后，系统将返回指定资源池的标签信息，包括标签键和标签值。若资源池不存在、用户无权限访问或资源池未配置标签，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPoolTagsResponse> showPoolTags(
        ShowPoolTagsRequest &request
    );
    // 查询训练作业镜像保存任务
    //
    // 查询训练作业镜像保存任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSaveImageJobResponse> showSaveImageJob(
        ShowSaveImageJobRequest &request
    );
    // 获取支持的超参搜索算法
    //
    // 获取支持的超参搜索算法。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSearchAlgorithmsResponse> showSearchAlgorithms(
        ShowSearchAlgorithmsRequest &request
    );
    // 查询训练作业标签
    //
    // 查询训练作业标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTrainJobTagsResponse> showTrainJobTags(
        ShowTrainJobTagsRequest &request
    );
    // 查询训练实验详情
    //
    // 查询训练实验详情接口用于获取指定训练实验的详细信息。
    // 该接口适用于以下场景：当用户需要查看训练实验的实验名称、描述、创建时间等详细信息时，可以通过此接口获取。使用该接口的前提条件是训练实验已存在且用户具有查看该实验的权限。查询操作完成后，将返回训练实验的详细信息，包括但不限于实验ID、名称、描述、创建时间等。若训练实验不存在或用户无权限操作，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTrainingExperimentDetailsResponse> showTrainingExperimentDetails(
        ShowTrainingExperimentDetailsRequest &request
    );
    // 查询训练作业详情
    //
    // 查询训练作业详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTrainingJobDetailsResponse> showTrainingJobDetails(
        ShowTrainingJobDetailsRequest &request
    );
    // 获取训练作业支持的AI预置框架
    //
    // 获取训练作业支持的AI预置框架。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTrainingJobEnginesResponse> showTrainingJobEngines(
        ShowTrainingJobEnginesRequest &request
    );
    // 获取训练作业支持的公共规格
    //
    // 获取训练作业支持的公共规格。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTrainingJobFlavorsResponse> showTrainingJobFlavors(
        ShowTrainingJobFlavorsRequest &request
    );
    // 查询训练作业指定任务的日志（预览）
    //
    // 查询训练作业指定任务的日志（预览）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTrainingJobLogsPreviewResponse> showTrainingJobLogsPreview(
        ShowTrainingJobLogsPreviewRequest &request
    );
    // 查询训练作业指定任务的运行指标
    //
    // 查询训练作业指定任务的运行指标。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTrainingJobMetricsResponse> showTrainingJobMetrics(
        ShowTrainingJobMetricsRequest &request
    );
    // 获取训练配额
    //
    // 获取训练配额接口用于查询用户在ModelArts服务中的训练资源配额信息。
    // 该接口适用于以下场景：当用户需要了解当前可用的训练资源配额，以便合理规划和管理训练任务时，可以通过此接口获取配额详情。使用该接口的前提条件是用户已登录并具有查看配额的权限。响应消息体中包含用户已创建的训练作业个数、剩余可创建个数等。若用户无权限或配额信息为空，接口将返回相应的错误信息或空列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTrainingQuotasResponse> showTrainingQuotas(
        ShowTrainingQuotasRequest &request
    );
    // 查询专属资源池作业统计信息
    //
    // 查询专属资源池作业统计信息接口用于获取指定专属资源池中作业的统计信息。该接口适用于以下场景：当需要了解专属资源池中作业的整体运行情况、资源使用效率或作业状态分布时，用户可通过此接口获取统计信息。使用该接口的前提条件是专属资源池已存在且用户具有相应的权限（如管理员权限或资源管理权限）。调用接口成功后，系统将返回专属资源池中作业的统计信息，包括作业总数、运行中作业数、完成作业数、资源使用率等数据。若专属资源池不存在、用户无权限操作或资源池当前不可用，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowWorkloadStatisticsResponse> showWorkloadStatistics(
        ShowWorkloadStatisticsRequest &request
    );
    // 查询工作空间详情
    //
    // 查询工作空间详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowWorkspaceResponse> showWorkspace(
        ShowWorkspaceRequest &request
    );
    // 查询工作空间配额
    //
    // 查询工作空间配额。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowWorkspaceQuotasResponse> showWorkspaceQuotas(
        ShowWorkspaceQuotasRequest &request
    );
    // 启动服务部署
    //
    // 使部署从“停止”或“失败”状态进入“部署中”状态，适用于用户需要重新启动已停止或启动失败的部署的情况。调用此接口前，部署状态必须为“停止”或“失败”，且用户需具有启动部署的权限。调用成功后，部署状态将变为“部署中”，系统将开始执行部署流程，包括资源准备、配置加载等。如果部署当前状态不是“停止”或“失败”，或用户没有启动部署的权限，调用将返回错误。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartInferDeploymentResponse> startInferDeployment(
        StartInferDeploymentRequest &request
    );
    // 启动服务
    //
    // 使服务从\&quot;停止\&quot;或\&quot;失败\&quot;状态进入\&quot;部署中\&quot;状态，适用于用户需要重新启动已停止或启动失败的服务的情况。调用此接口前，服务状态必须为\&quot;停止\&quot;或\&quot;失败\&quot;，且用户需具有启动服务的权限。调用成功后，服务状态将变为\&quot;部署中\&quot;，系统将开始执行部署流程，包括资源准备、配置加载等。如果服务当前状态不是\&quot;停止\&quot;或\&quot;失败\&quot;，或用户没有启动服务的权限，调用将返回错误。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartInferServiceResponse> startInferService(
        StartInferServiceRequest &request
    );
    // 停止在线服务部署
    //
    // 停止在线部署功能允许用户在特定状态下主动终止正在运行或处于其他可操作状态的部署实例。该功能适用于需要维护、升级或检测到异常的服务场景，支持在服务处于\&quot;运行中\&quot;、\&quot;部署中\&quot;、\&quot;失败\&quot;或\&quot;告警\&quot;状态时执行停止操作。使用此功能前，请确保部署实例处于可停止状态，并具备相应的API调用权限。成功执行后，部署将进入停止状态，释放相关资源并停止处理新的请求。若部署不在允许停止的状态、调用权限不足或系统内部出现错误，将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopInferDeploymentResponse> stopInferDeployment(
        StopInferDeploymentRequest &request
    );
    // 停止服务
    //
    // 使服务从\&quot;运行中\&quot;状态进入\&quot;停止中\&quot;最终变为\&quot;停止\&quot;状态，适用于用户需要停止正在运行的服务以节省资源成本的场景。用户需具有停止服务的权限。调用成功后，服务状态将变为\&quot;停止中\&quot;，系统将开始执行停止流程，包括释放资源、保存状态等。如果用户没有停止服务的权限，调用将返回错误。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopInferServiceResponse> stopInferService(
        StopInferServiceRequest &request
    );
    // 终止训练作业
    //
    // 终止训练作业，只可终止创建中、等待中、运行中的作业。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopTrainingJobResponse> stopTrainingJob(
        StopTrainingJobRequest &request
    );
    // 切换部署到指定版本
    //
    // 此接口用于将部署切换到指定版本，适用于需要在不同版本间进行切换以测试或回滚的场景。请求需包含有效的服务ID、部署ID及目标版本号，版本号必须是已发布的有效版本。用户必须具有对目标服务部署的管理权限，并且部署处于运行状态。切换成功后，部署将立即使用新的版本。若服务ID无效、部署ID无效、版本号不存在或用户无权限，则返回400 Bad Request或403 Forbidden；若部署状态不允许切换，则返回400 Bad Request。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchInferDeploymentVersionResponse> switchInferDeploymentVersion(
        SwitchInferDeploymentVersionRequest &request
    );
    // 同步镜像状态
    //
    // 同步镜像状态接口用于修正镜像状态的异常情况。该接口适用于以下场景：当镜像状态因误操作、网络问题或系统故障等原因出现异常时，用户可通过此接口同步镜像的最新状态。使用该接口的前提条件是镜像已存在且用户具有相应的操作权限。同步操作完成后，镜像的状态将被更新为最新的正确状态，相关资源和配置也将被同步。若镜像不存在、用户无权限操作或同步过程中出现错误，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SyncImageResponse> syncImage(
        SyncImageRequest &request
    );
    // 解绑应用密钥
    //
    // 本接口用于将已绑定的apikey从指定服务中解绑，适用于需要撤销某个apikey对特定服务的访问权限的场景。调用此接口前，确保已获取到需要解绑的apikey，并确认该apikey当前绑定在指定服务上。解绑成功后，该apikey将不再对指定服务生效，但仍可继续用于其他服务。如果尝试解绑不存在或未绑定到指定服务的apikey，将返回相应的异常信息，提示用户检查apikey的有效性和绑定状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UnbindInferApiKeyResponse> unbindInferApiKey(
        UnbindInferApiKeyRequest &request
    );
    // 更新授权模式
    //
    // 更新授权模式接口用于修改指定资源或功能的授权方式和权限配置信息。该接口适用于以下场景：当系统管理员需要调整资源的访问权限、开发者需要更新授权策略以适应新的业务需求，或安全审计人员需要修改授权配置以符合新的安全规范时，可通过此接口更新授权模式的详细信息。使用该接口的前提条件是用户具有更新权限且目标资源或功能的授权模式已存在。调用成功后，接口将更新目标资源的授权模式，并返回更新后的授权模式信息。若用户无权限访问该接口，或目标资源的授权模式不存在，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAuthModeResponse> updateAuthMode(
        UpdateAuthModeRequest &request
    );
    // 更新镜像组
    //
    // 更新镜像组接口用于更新镜像组的标签及说明信息。该接口适用于以下场景：当镜像说明需要修改，或者镜像的标签需要修改时，用户可通过此接口修改。使用该接口的前提条件是镜像组已存在且用户具有更新权限。更新操作完成后，镜像组对应的配置文件会。若镜像组不存在、用户无权限操作或镜像正在被使用，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateImageGroupResponse> updateImageGroup(
        UpdateImageGroupRequest &request
    );
    // 更新服务部署配置
    //
    // 该接口适用于需要动态调整模型服务部署配置的场景
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateInferDeploymentResponse> updateInferDeployment(
        UpdateInferDeploymentRequest &request
    );
    // 手动服务扩缩容
    //
    // 该接口适用于模型服务实例扩缩容。通过调用此接口，用户可以在原有服务的情况下，对服务进行扩缩容，且不会增加新的版本；包括权限验证错误、服务状态错误和参数验证错误。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateInferDeploymentScaleResponse> updateInferDeploymentScale(
        UpdateInferDeploymentScaleRequest &request
    );
    // 变更内网申请
    //
    // 本接口用于对当前租户的内网接入申请进行状态变更操作，支持通过（APPROVE）、拒绝（REJECT）、取消（CANCEL）和重试（RETRY）等操作。适用于需要管理内网接入申请审批流程的场景。调用此接口前，确保已具备相应的变更权限，并提供有效的内网申请ID和所需的操作类型。变更成功后，内网申请的状态将更新为指定的操作结果，并记录相关日志。如果提供的内网申请ID无效、操作类型不支持或权限不足，将返回相应的异常信息，提示用户检查输入数据的有效性和权限。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateInferIntranetConnectionResponse> updateInferIntranetConnection(
        UpdateInferIntranetConnectionRequest &request
    );
    // 更新服务配置
    //
    // 该接口适用于需要动态调整模型服务配置的场景，对模型的性能参数、资源池配置、服务调用配置等进行更新升级。通过调用此接口，用户可以在原有服务的情况下，升级成一个新的服务版本。调用此接口前，服务状态必须为“停止”、“失败”或“运行中”，且用户需具有修改服务的权限。更新成功后，新配置立即生效；若失败，服务保持原有配置并返回错误信息。常见异常包括参数验证错误、权限验证错误和服务状态错误。若服务ID无效、版本号不存在或用户无权限，则返回400 Bad Request或403 Forbidden；若服务状态不允许切换，则返回400 Bad Request。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateInferServiceResponse> updateInferService(
        UpdateInferServiceRequest &request
    );
    // 修改工作空间
    //
    // 修改工作空间。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateWorkspaceResponse> updateWorkspace(
        UpdateWorkspaceRequest &request
    );
    // 修改工作空间配额
    //
    // 修改工作空间配额。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateWorkspaceQuotasResponse> updateWorkspaceQuotas(
        UpdateWorkspaceQuotasRequest &request
    );
    // 鉴权能否使用当前工作空间资源
    //
    // 鉴权能否使用当前工作空间资源接口用于验证用户是否有权限访问和使用当前工作空间中的资源。该接口适用于以下场景：当用户尝试访问或操作工作空间中的资源时，系统需要确认用户是否具有相应的权限。使用该接口的前提条件是用户已登录且工作空间已存在。鉴权成功后，用户可以正常访问和使用工作空间资源；若鉴权失败，接口将返回相应的错误信息，如用户无权限或工作空间不存在等。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ValidateAuthorizationResponse> validateAuthorization(
        ValidateAuthorizationRequest &request
    );

    // 创建自动扩缩容策略
    //
    // 本接口用于在已部署的服务上创建定时扩缩容策略，适用于需要根据业务负载或特定时间自动调整服务实例个数的场景。调用此接口前，确保服务已成功部署并获取了有效的服务ID，并提供详细的扩缩容策略参数，如扩缩容时间、实例个数范围、条件触发器等。创建成功后，系统将根据设定的策略自动调整服务实例个数，确保服务在指定时间内的性能和可用性。如果提供的服务ID无效、参数配置错误或系统资源不足，将返回相应的异常信息，提示用户检查输入数据的有效性或联系技术支持。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateInferDeploymentHpaResponse> createInferDeploymentHpa(
        CreateInferDeploymentHpaRequest &request
    );
    // 删除自动扩缩容策略
    //
    // 本接口用于在已部署的服务上删除定时扩缩容策略，适用于需要根据业务负载或特定时间自动删除服务的场景。调用此接口前，确保服务已成功部署并获取了有效的服务ID，部署ID。如果提供的服务ID无效、参数配置错误或系统资源不足，将返回相应的异常信息，提示用户检查输入数据的有效性或联系技术支持。暂时为非开放接口，后端清理服务下的自动扩缩容策略规则使用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteInferDeploymentHpaResponse> deleteInferDeploymentHpa(
        DeleteInferDeploymentHpaRequest &request
    );
    // 查看自动扩缩容策略事件
    //
    // 本接口用于在已部署的服务上查看自动扩缩容策略事件，适用于查看自动扩缩容策略变动历史记录。调用此接口前，确保获取了有效的用户项目ID，服务ID，部署ID。调用成功后，会返回策略事件ID，事件状态，规则执行信息，扩缩容前实例数，扩缩容后实例数，预设目标实例数，执行记录时间。如果提供的服务ID无效、参数配置错误或系统资源不足，将返回相应的异常信息，提示用户检查输入数据的有效性或联系技术支持。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInferDeploymentHpaEventsResponse> listInferDeploymentHpaEvents(
        ListInferDeploymentHpaEventsRequest &request
    );
    // 查看自动扩缩容策略
    //
    // 本接口用于在已部署的服务上查看自动扩缩容策略。调用此接口前，确保服务已成功部署并获取了有效的服务ID。查询成功后，返回服务对应的策略信息，如规则ID，规则名称，扩缩容类型，扩缩容状态，扩缩容cron表达式，目标实例数等。如果提供的服务ID无效、参数配置错误或系统资源不足，将返回相应的异常信息，提示用户检查输入数据的有效性或联系技术支持。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInferDeploymentHpaResponse> showInferDeploymentHpa(
        ShowInferDeploymentHpaRequest &request
    );
    // 修改自动扩缩容策略
    //
    // 本接口用于在已部署的服务上修改定时扩缩容策略，适用于需要根据业务负载或特定时间自动调整服务实例个数的场景。调用此接口前，确保服务已成功部署并获取了有效的服务ID，部署ID，并提供详细的扩缩容策略参数，如扩缩容时间、实例个数范围、条件触发器等。修改成功后，系统将根据设定的策略自动调整服务实例个数，确保服务在指定时间内的性能和可用性。如果提供的服务ID无效、参数配置错误或系统资源不足，将返回相应的异常信息，提示用户检查输入数据的有效性或联系技术支持。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateInferDeploymentHpaResponse> updateInferDeploymentHpa(
        UpdateInferDeploymentHpaRequest &request
    );

    // 创建HRA策略
    //
    // 本接口用于在已部署且支持HRA策略的服务上创建HRA策略，适用于需要根据业务负载或特定时间自动调整服务实例个数的场景。调用此接口前，确保服务已成功部署并获取了有效的服务ID，并提供详细的hra策略参数，如hra时间、实例个数范围、条件触发器等。创建成功后，系统将根据设定的策略自动调整服务实例个数，确保服务在指定时间内的性能和可用性。如果提供的服务ID无效、参数配置错误或系统资源不足，将返回相应的异常信息，提示用户检查输入数据的有效性或联系技术支持。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateInferHraResponse> createInferHra(
        CreateInferHraRequest &request
    );
    // 获取推理单元配比检测信息
    //
    // 本接口用于在已部署的服务上查看推理单元配比检测信息。调用此接口前，确保服务已成功部署并获取了有效的服务ID。查询成功后，返回服务对应的策略信息，如规则ID，规则名称，策略状态，HRA结果状态等。如果提供的服务ID无效、参数配置错误或系统资源不足，将返回相应的异常信息，提示用户检查输入数据的有效性或联系技术支持。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInferHraResponse> showInferHra(
        ShowInferHraRequest &request
    );
    // 修改指定部署的HRA策略配置
    //
    // 本接口用于在已创建HRA策略的服务上修改指定部署的HRA策略配置，适用于需要根据业务负载或特定时间自动调整服务实例个数的场景。调用此接口前，确保服务已成功部署并获取了有效的服务ID，部署ID，并提供详细的hra策略参数，如HRA规则列表、HRA结果状态、策略状态等。修改成功后，系统将根据设定的策略自动调整服务实例个数，确保服务在指定时间内的性能和可用性。如果提供的服务ID无效、参数配置错误或系统资源不足，将返回相应的异常信息，提示用户检查输入数据的有效性或联系技术支持。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateInferHraResponse> updateInferHra(
        UpdateInferHraRequest &request
    );

    // Lite Server服务器挂载磁盘
    //
    // Lite Server服务器挂载磁盘接口用于将额外的磁盘挂载到Lite Server服务器上。该接口适用于以下场景：当用户需要扩展Lite Server服务器的存储空间以满足更大的数据存储需求时，可以通过此接口将指定的磁盘挂载到服务器上。使用该接口的前提条件是Lite Server服务器已创建且处于运行状态、或者停止状态，用户具有挂载磁盘的权限，且指定的磁盘已存在且未被其他服务器使用。挂载操作完成后，磁盘将成功挂载到Lite Server服务器上，用户可以访问和使用新增的存储空间。若Lite Server服务器不存在、指定的磁盘不存在或已被使用，或用户无权限操作，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AttachDevServerVolumeResponse> attachDevServerVolume(
        AttachDevServerVolumeRequest &request
    );
    // 批量操作Lite Server实例
    //
    // 批量操作Lite Server实例接口用于对多个Lite Server实例进行统一操作，如启动、停止、重启或删除等。该接口适用于以下场景：当需要对多个Lite Server实例进行相同的操作，例如在维护期间批量停止实例、更新配置后批量重启实例或清理不再需要的实例时，用户可通过此接口高效地完成批量操作。使用该接口的前提条件是目标Lite Server实例已存在且用户具有相应的操作权限。操作完成后，所有指定的Lite Server实例将根据请求完成相应的状态变更或被移除，相关资源和配置也将被相应调整或清理。若目标Lite Server实例不存在、用户无权限操作或请求参数不正确，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDevServersActionResponse> batchDevServersAction(
        BatchDevServersActionRequest &request
    );
    // Lite Server服务器绑定EIP
    //
    // Lite Server服务器绑定的EIP接口用于将弹性公网IP（EIP）绑定到Lite Server服务器上。该接口适用于以下场景：当用户需要为Lite Server服务器分配一个固定的公网IP地址，以便从外部网络访问服务器时，可以通过此接口将指定的EIP绑定到服务器上。使用该接口的前提条件是Lite Server服务器已创建且处于运行状态，用户具有绑定EIP的权限，且指定的EIP已存在且未被其他资源使用。绑定操作完成后，EIP将成功绑定到Lite Server服务器上，服务器可以通过该EIP从外部网络访问。若Lite Server服务器不存在、已处于停止状态、指定的EIP不存在或已被使用，或用户无权限操作，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BindDevServerPublicIPResponse> bindDevServerPublicIP(
        BindDevServerPublicIPRequest &request
    );
    // 切换Lite Server服务器操作系统镜像
    //
    // 切换Lite Server服务器操作系统镜像接口用于更换Lite Server服务器当前使用的操作系统镜像。该接口适用于以下场景：当用户需要更换操作系统以适应不同的开发或测试需求时，可以通过此接口切换指定的Lite Server服务器操作系统镜像。使用该接口的前提条件是Lite Server服务器已存在且处于停止状态，用户具有切换操作系统的权限。切换操作完成后，Lite Server服务器将安装新的操作系统镜像，并重新进入运行状态，若Lite Server服务器不存在、已处于运行状态或用户无权限操作，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeDevServerOSResponse> changeDevServerOS(
        ChangeDevServerOSRequest &request
    );
    // 切换Lite Server超节点服务器操作系统镜像
    //
    // 切换Lite Server超节点服务器操作系统镜像接口用于更换Lite Server超节点服务器当前使用的操作系统镜像。该接口适用于以下场景：当用户需要更换操作系统以适应不同的开发或测试需求时，可以通过此接口切换指定的Lite Server超节点服务器操作系统镜像。使用该接口的前提条件是Lite Server超节点服务器已存在且处于停止状态，用户具有切换操作系统的权限。切换操作完成后，Lite Server超节点服务器将安装新的操作系统镜像，并重新进入运行状态，若Lite Server超节点服务器不存在、已处于运行状态或用户无权限操作，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeHyperinstanceOSResponse> changeHyperinstanceOS(
        ChangeHyperinstanceOSRequest &request
    );
    // 创建Lite Server
    //
    // 创建Lite Server接口用于创建LiteServer弹性云服务器、裸金属服务器及超节点服务器。该接口适用于以下场景：用户需要根据业务需求快速部署和配置不同类型的服务器资源。使用该接口的前提条件是用户已登录且具有创建Lite Server的权限，并且需要提供服务器类型、规格、网络配置等必要参数。创建操作完成后，系统将返回新创建的Lite Server实例信息，包括实例ID、状态等。若用户无权限、参数配置错误或资源不足，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDevServerResponse> createDevServer(
        CreateDevServerRequest &request
    );
    // 创建Lite Server任务
    //
    // 创建Lite Server任务接口用于在Lite Server上创建新的任务。该接口适用于以下场景：当用户需要在Lite Server上启动新的开发、测试或部署任务时，可以通过此接口创建并配置任务。使用该接口的前提条件是用户具有创建任务的权限，并且提供的任务配置参数符合要求。创建操作完成后，新的Lite Server任务将被成功创建，并返回任务ID和其他相关信息。若用户无权限操作、提供的参数不正确或系统资源不足，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDevServerJobResponse> createDevServerJob(
        CreateDevServerJobRequest &request
    );
    // 创建Hyper Cluster
    //
    // 创建Hyper Cluster接口用于在系统中创建一个新的Hyper Cluster。该接口适用于以下场景：当用户需要使用超节点网络时，可以通过此接口创建Hyper Cluster。使用该接口的前提条件是用户已登录并具有创建Hyper Cluster的权限，且系统中已配置了必要的资源。创建操作完成后，将生成一个新的超节点网络，并返回超节点网络的详细信息，包括ID、名称、子网信息等。若用户无权限操作、系统中缺少必要的资源或配置参数无效，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateHyperClusterResponse> createHyperCluster(
        CreateHyperClusterRequest &request
    );
    // 创建Lite Server超节点标签
    //
    // 创建Lite Server超节点标签接口用于为Lite Server超节点添加自定义标签。该接口适用于以下场景：当用户需要对Lite Server超节点进行分类管理或标记特定信息时，可以通过此接口为指定的超节点创建标签。使用该接口的前提条件是Lite Server超节点已存在，用户具有创建标签的权限。创建操作完成后，标签将被成功添加到指定的超节点上，用户可以通过标签进行快速查找和管理。若Lite Server超节点不存在、标签已存在或用户无权限操作，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateHyperinstanceTagsResponse> createHyperinstanceTags(
        CreateHyperinstanceTagsRequest &request
    );
    // 创建RoCE网络
    //
    // 创建RoCE网络接口用于在系统中创建一个新的RoCE网络。该接口适用于以下场景：当用户需要为高性能计算或低延迟应用创建专用的RoCE网络时，可以通过此接口创建并配置RoCE网络。使用该接口的前提条件是用户已登录并具有创建RoCE网络的权限，且系统中已配置了必要的网络资源。创建操作完成后，将生成一个新的RoCE网络，并返回网络的详细信息，包括网络ID、子网信息、配置参数等。若用户无权限操作、系统中缺少必要的网络资源或网络配置参数无效，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRoceNetworkResponse> createRoceNetwork(
        CreateRoceNetworkRequest &request
    );
    // 删除Lite Server实例
    //
    // 删除Lite Server实例接口用于移除已创建的Lite Server实例。该接口适用于以下场景：当Lite Server按需实例不再需要使用时或者创建失败的实例以及处于ERROR状态时，用户可通过此接口删除指定的Lite Server实例。使用该接口的前提条件是Lite Server实例已存在且用户具有管理员权限。删除操作完成后，Lite Server实例将被永久移除，相关资源也将被清理。若Lite Server实例不存在或用户无权限操作，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDevServerResponse> deleteDevServer(
        DeleteDevServerRequest &request
    );
    // 批量删除Lite Server Job
    //
    // 批量删除Lite Server Job接口用于批量移除已创建的Lite Server Job。该接口适用于以下场景：当多个Lite Server Job已完成、配置错误或需要清理资源时，用户可以通过此接口批量删除指定的Lite Server Job。使用该接口的前提条件是目标Lite Server Job已存在且用户具有管理员权限。删除操作完成后，指定的Lite Server Job将被永久移除，相关资源和配置也将被清理。若目标Lite Server Job不存在、用户无权限操作或请求参数不正确，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDevServerJobsResponse> deleteDevServerJobs(
        DeleteDevServerJobsRequest &request
    );
    // 删除Hyper Cluster实例
    //
    // 删除Hyper Cluster实例接口用于移除已创建的Hyper Cluster。该接口适用于以下场景：当超节点网络配置错误或需要清理资源时，用户可通过此接口删除指定的超节点网络。使用该接口的前提条件是Hyper Cluster实例已存在且用户具有管理员权限。删除操作完成后，超节点网络将被永久移除，相关资源和配置也将被清理。若Hyper Cluster实例不存在或用户无权限操作，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteHyperClusterResponse> deleteHyperCluster(
        DeleteHyperClusterRequest &request
    );
    // 删除Lite Server超节点实例
    //
    // 删除Lite Server超节点实例接口用于删除按需超节点实例同时移除处于ERROR状态的Lite Server超节点实例。该接口适用于以下场景：当超节点实例因创建失败、或其他原因进入ERROR状态；按需超节点实例，用户可以通过此接口删除指定的超节点实例。使用该接口的前提条件是用户已登录并具有删除超节点实例的权限，且指定的超节点实例是按需且处于运行状态、或者处于ERROR状态。删除操作完成后，指定的超节点实例将被永久移除，相关资源也将被清理。若指定的超节点实例不存在、未处于ERROR状态或用户无权限操作，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteHyperinstanceResponse> deleteHyperinstance(
        DeleteHyperinstanceRequest &request
    );
    // 删除Lite Server超节点标签
    //
    // 删除Lite Server超节点标签接口用于移除已创建的Lite Server超节点标签。该接口适用于以下场景：当用户需要清理不再需要的标签或修正标签错误时，可以通过此接口删除指定的超节点标签。使用该接口的前提条件是Lite Server超节点已存在，且该超节点上已存在要删除的标签，用户具有删除标签的权限。删除操作完成后，指定的标签将从超节点上移除，超节点的其他配置和数据保持不变。若Lite Server超节点不存在、标签不存在或用户无权限操作，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteHyperinstanceTagsResponse> deleteHyperinstanceTags(
        DeleteHyperinstanceTagsRequest &request
    );
    // Lite Server服务器卸载磁盘
    //
    // Lite Server服务器卸载磁盘接口用于从Lite Server服务器上卸载已挂载的磁盘。该接口适用于以下场景：当用户需要释放存储资源或重新分配磁盘时，可以通过此接口卸载指定的磁盘。使用该接口的前提条件是Lite Server服务器已创建且处于运行状态、或者停止状态，用户具有卸载磁盘的权限，且指定的磁盘已挂载到服务器上。卸载操作完成后，磁盘将从Lite Server服务器上成功卸载，用户可以将其挂载到其他服务器或进行其他操作。若Lite Server服务器不存在、指定的磁盘未挂载到服务器上，或用户无权限操作，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DetachDevServerVolumeResponse> detachDevServerVolume(
        DetachDevServerVolumeRequest &request
    );
    // 查询Lite Server镜像详情
    //
    // 查询Lite Server镜像详情接口用于获取指定Lite Server镜像的详细信息。该接口适用于以下场景：当用户需要了解某个Lite Server镜像的具体配置和属性，以便在创建或调整Lite Server实例时选择合适的镜像时，可以通过此接口获取相关信息。使用该接口的前提条件是用户已登录并具有查询镜像详情的权限，且指定的镜像已存在。查询操作完成后，接口将返回指定Lite Server镜像的详细信息，包括镜像ID、名称、操作系统、版本、创建时间等。若用户无权限操作、指定的镜像不存在或镜像ID无效，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetDevServerImageResponse> getDevServerImage(
        GetDevServerImageRequest &request
    );
    // 查询Lite Server Job详情
    //
    // 查询Lite Server Job详情接口用于获取指定Lite Server Job的详细信息。该接口适用于以下场景：当用户需要查看某个Lite Server Job的执行状态、配置参数、日志信息等详细数据时，可以通过此接口获取相关信息。使用该接口的前提条件是目标Lite Server Job已存在且用户具有查看权限。查询操作完成后，接口将返回指定Lite Server Job的详细信息，包括但不限于Job ID、状态、创建时间、执行时间、配置参数和日志等。若目标Lite Server Job不存在或用户无权限操作，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetDevServerJobResponse> getDevServerJob(
        GetDevServerJobRequest &request
    );
    // 获取Lite Server 部署服务详情
    //
    // 根据服务id获取Lite Server部署服务详情。该接口适用于以下场景：当用户需要查看部署服务详情，以便查看已部署服务的状态、api等信息时，可以通过此接口获取服务详情。使用该接口的前提条件是用户具有查看服务的权限。查询操作完成后，接口将返回此部署服务的详细信息，包括名称、状态、描述、所用模型、实例详情等信息。若用户无权限操作或无相应id，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetDevServerJobServiceResponse> getDevServerJobService(
        GetDevServerJobServiceRequest &request
    );
    // 获取Lite Server Job模板详情
    //
    // 获取Lite Server Job模板详情接口用于获取指定Lite Server Job模板的详细信息。该接口适用于以下场景：当用户需要查看某个特定Job模板的详细配置，以便了解其参数设置、使用说明等信息时，可以通过此接口获取模板详情。查询操作完成后，接口将返回指定模板的详细信息，包括模板ID、名称、描述、配置参数等。若目标模板不存在，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetDevServerJobTemplateResponse> getDevServerJobTemplate(
        GetDevServerJobTemplateRequest &request
    );
    // 查询Operation详情
    //
    // 查询Operation详情接口用于获取指定Operation的详细信息。该接口适用于以下场景：当用户需要了解某个Operation的具体执行情况和状态，以便进行故障排查或操作审计时，可以通过此接口获取相关信息。使用该接口的前提条件是用户已登录并具有查询Operation详情的权限，且指定的Operation已存在。查询操作完成后，接口将返回指定Operation的详细信息，包括Operation ID、操作类型、执行状态、开始时间、结束时间、操作结果等。若用户无权限操作、指定的Operation不存在或Operation ID无效，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetDevServerOperationResponse> getDevServerOperation(
        GetDevServerOperationRequest &request
    );
    // 查询Hyper Cluster实例详情
    //
    // 查询Hyper Cluster实例详情接口用于获取指定Hyper Cluster实例的详细信息。该接口适用于以下场景：当用户需要了解某个超节点网络的具体配置和状态，以便进行管理和监控时，可以通过此接口获取相关信息。使用该接口的前提条件是用户已登录并具有查询Hyper Cluster详情的权限，且指定的超节点网络已存在。查询操作完成后，接口将返回指定超节点网络的详细信息，包括ID、名称、子网信息等。若用户无权限操作、指定的超节点网络不存在或ID无效，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetHyperClusterResponse> getHyperCluster(
        GetHyperClusterRequest &request
    );
    // 查询指定超节点实例详情
    //
    // 查询指定超节点实例详情接口用于获取特定Lite Server超节点实例的详细信息。该接口适用于以下场景：当用户需要查看某个具体超节点实例的配置、状态和使用情况时，可以通过此接口获取相关信息。使用该接口的前提条件是用户已登录并具有查询超节点实例的权限，且指定的超节点实例已存在。查询操作完成后，接口将返回指定超节点实例的详细信息，包括实例ID、操作系统、运行状态、资源使用情况等。若用户无权限操作、指定的超节点实例不存在或实例ID无效，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetHyperinstanceResponse> getHyperinstance(
        GetHyperinstanceRequest &request
    );
    // 查询Lite Server超节点扩缩容支持规格列表及容量测算
    //
    // 查询Lite Server超节点扩缩容支持规格列表及容量测算接口用于获取Lite Server超节点支持的扩缩容规格列表，并进行容量测算。该接口适用于以下场景：当用户需要了解Lite Server超节点支持的扩缩容选项，以便在调整超节点资源时选择合适的规格，并评估扩缩容后的资源需求时，可以通过此接口获取相关信息。使用该接口的前提条件是用户已登录并具有查询超节点扩缩容规格的权限，且指定的超节点已存在。查询操作完成后，接口将返回支持的扩缩容规格列表及容量测算结果，包括规格ID、CPU、内存、存储等详细配置和扩缩容后的资源使用情况。若用户无权限操作、指定的超节点不存在或系统中没有可用的扩缩容规格，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetScaleEvaluationsDevServerResponse> getScaleEvaluationsDevServer(
        GetScaleEvaluationsDevServerRequest &request
    );
    // 查询实例的Tor信息
    //
    // 查询实例的Tor信息接口用于获取指定实例的Top-of-Rack（Tor）交换机相关信息。该接口适用于以下场景：当用户需要了解实例连接的Tor交换机的详细信息，以便进行网络配置时，可以通过此接口获取相关信息。使用该接口的前提条件是用户已登录并具有查询实例Tor信息的权限，且指定的实例已存在。查询操作完成后，接口将返回指定实例的Tor信息。若用户无权限操作、指定的实例不存在或实例未连接到Tor交换机，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetTopologiesResponse> getTopologies(
        GetTopologiesRequest &request
    );
    // 查询租户Lite Server列表
    //
    // 查询租户Lite Server列表接口用于获取指定租户的所有Lite Server实例信息。该接口适用于以下场景：当用户需要查看其租户下所有Lite Server实例的详细信息，以便进行管理和监控时，可以通过此接口获取相关信息。使用该接口的前提条件是用户已登录并具有查询租户Lite Server列表的权限。查询操作完成后，接口将返回租户下所有Lite Server实例的详细信息，包括实例ID、名称、状态、资源配置等。若用户无权限操作或租户下没有Lite Server实例，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAllDevServersResponse> listAllDevServers(
        ListAllDevServersRequest &request
    );
    // 查询租户Hyperinstance列表
    //
    // 查询租户Hyperinstance列表接口用于获取指定租户的所有Hyperinstance实例信息。该接口适用于以下场景：当用户需要查看其租户下所有Hyperinstance实例的详细信息，以便进行管理和监控时，可以通过此接口获取相关信息。使用该接口的前提条件是用户已登录并具有查询租户Hyperinstance列表的权限。查询操作完成后，接口将返回租户下所有Hyperinstance实例的详细信息，包括实例ID、名称、状态、资源配置等。若用户无权限操作或租户下没有Hyperinstance实例，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAllHyperinstancesResponse> listAllHyperinstances(
        ListAllHyperinstancesRequest &request
    );
    // 查询规格列表
    //
    // 查询规格列表接口用于获取系统中所有可用的资源规格信息。该接口适用于以下场景：当用户需要了解可用的资源规格，以便在创建或调整Lite Server实例时选择合适的配置时，可以通过此接口获取规格列表。使用该接口的前提条件是用户已登录并具有查询规格的权限。查询操作完成后，接口将返回所有可用的资源规格信息，包括规格ID、CPU、内存、存储等详细配置。若用户无权限操作或系统中没有可用的资源规格，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDevServerFlavorsResponse> listDevServerFlavors(
        ListDevServerFlavorsRequest &request
    );
    // 查询Lite Server镜像列表
    //
    // 查询Lite Server镜像列表接口用于获取系统中所有可用的Lite Server镜像信息。该接口适用于以下场景：当用户需要了解可用的Lite Server镜像，以便在创建或调整Lite Server实例时选择合适的镜像时，可以通过此接口获取镜像列表。使用该接口的前提条件是用户已登录并具有查询镜像列表的权限。查询操作完成后，接口将返回所有可用的Lite Server镜像信息，包括镜像ID、名称、架构类型等。若用户无权限操作或系统中没有可用的镜像，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDevServerImagesResponse> listDevServerImages(
        ListDevServerImagesRequest &request
    );
    // 获取Lite Server Job模板列表
    //
    // 获取Lite Server Job模板列表接口用于获取可用的Lite Server Job模板列表。该接口适用于以下场景：当用户需要查看可用的Job模板，以便选择合适的模板来创建新的Lite Server任务时，可以通过此接口获取模板列表。查询操作完成后，接口将返回所有可用的Lite Server Job模板列表，包括模板ID、名称、描述等信息。若系统中无可用模板，接口将返回相应的信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDevServerJobTemplatesResponse> listDevServerJobTemplates(
        ListDevServerJobTemplatesRequest &request
    );
    // 查询Lite Server Job列表
    //
    // 查询Lite Server Job列表接口用于获取Lite Server Job的列表信息，并支持按照状态、ID等相关字段进行过滤。该接口适用于以下场景：当用户需要查看多个Lite Server Job的概要信息，例如在监控作业状态、排查问题或进行日常管理时，可以通过此接口获取符合过滤条件的Job列表。使用该接口的前提条件是用户具有查看权限。查询操作完成后，接口将返回符合条件的Lite Server Job列表，包括每个Job的ID、状态、创建时间等基本信息。若用户无权限操作或请求参数不正确，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDevServerJobsResponse> listDevServerJobs(
        ListDevServerJobsRequest &request
    );
    // 查询已绑定的EIP
    //
    // 查询已绑定的EIP接口用于获取已绑定到Lite Server服务器上的弹性公网IP（EIP）信息。该接口适用于以下场景：当用户需要查看Lite Server服务器上已绑定的EIP及其详细信息时，可以通过此接口获取相关信息。使用该接口的前提条件是用户已登录并具有查询EIP的权限，且指定的Lite Server服务器已存在。查询操作完成后，接口将返回已绑定到Lite Server服务器上的EIP的详细信息，包括EIP地址、绑定时间、状态等。若Lite Server服务器不存在、未绑定EIP或用户无权限操作，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDevServerPublicIPResponse> listDevServerPublicIP(
        ListDevServerPublicIPRequest &request
    );
    // 查询用户所有Lite Server实例列表
    //
    // 查询用户所有Lite Server实例列表接口用于获取用户名下所有Lite Server实例的详细信息。该接口适用于以下场景：用户需要查看其所有Lite Server实例的状态、配置等信息，以便进行资源管理和监控。使用该接口的前提条件是用户已登录且具有查看Lite Server实例的权限。调用此接口后，系统将返回用户名下所有Lite Server实例的列表，包括实例ID、名称、状态、创建时间等信息。若用户无权限或未登录，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDevServersResponse> listDevServers(
        ListDevServersRequest &request
    );
    // 查询Hyper Cluster详情列表
    //
    // 查询Hyper Cluster详情列表接口用于获取所有Hyper Cluster的详细信息。该接口适用于以下场景：当用户需要了解系统中所有超节点网络的配置和状态时，可以通过此接口获取相关信息。使用该接口的前提条件是用户已登录并具有查询Hyper Cluster详情的权限。查询操作完成后，接口将返回所有超节点网络的详细信息，包括ID、名称、子网信息等。若用户无权限操作或系统中没有Hyper Cluster，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListHyperClusterResponse> listHyperCluster(
        ListHyperClusterRequest &request
    );
    // 查询超节点hyperinstance-clusters逻辑容量测算结果
    //
    // 查询超节点hyperinstance-clusters逻辑容量测算结果接口用于获取指定超节点集群的逻辑容量测算结果。该接口适用于以下场景：当用户需要了解超节点集群的资源使用情况和容量规划，以便进行资源管理和优化时，可以通过此接口获取逻辑容量测算结果。使用该接口的前提条件是用户已登录并具有查询超节点集群逻辑容量的权限，且指定的超节点集群已存在。查询操作完成后，接口将返回指定超节点集群的逻辑容量测算结果，包括可用容量信息。若用户无权限操作、指定的超节点集群不存在或集群ID无效，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListHyperinstanceClustersCapacityResponse> listHyperinstanceClustersCapacity(
        ListHyperinstanceClustersCapacityRequest &request
    );
    // 查询用户所有超节点实例详情
    //
    // 查询用户所有超节点实例详情接口用于获取用户所有Lite Server超节点实例的详细信息。该接口适用于以下场景：当用户需要查看其所有超节点实例的配置、状态和使用情况时，可以通过此接口获取相关信息。使用该接口的前提条件是用户已登录并具有查询超节点实例的权限。查询操作完成后，接口将返回所有超节点实例的详细信息，包括实例ID、操作系统、运行状态、资源使用情况等。若用户无权限操作或没有超节点实例，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListHyperinstancesResponse> listHyperinstances(
        ListHyperinstancesRequest &request
    );
    // 查询Lite Server超节点标签
    //
    // 查询Lite Server超节点标签接口用于获取Lite Server超节点上的所有标签信息。该接口适用于以下场景：当用户需要查看或管理Lite Server超节点的标签时，可以通过此接口查询指定超节点上的所有标签。使用该接口的前提条件是Lite Server超节点已存在，用户具有查询标签的权限。查询操作完成后，接口将返回超节点上的所有标签信息，包括标签名称和相关属性。若Lite Server超节点不存在或用户无权限操作，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<QueryHyperinstanceTagsResponse> queryHyperinstanceTags(
        QueryHyperinstanceTagsRequest &request
    );
    // 重启Lite Server实例
    //
    // 重启Lite Server实例接口用于重启正在运行的Lite Server实例。该接口适用于以下场景：当用户需要重启实例以应用配置更改、解决运行问题或进行系统维护时，可以通过此接口重启指定的Lite Server实例。使用该接口的前提条件是Lite Server实例已创建且处于运行状态，用户具有重启实例的权限。重启操作完成后，Lite Server实例将重新启动并进入运行状态，用户可以继续使用实例提供的服务。若Lite Server实例不存在、已处于停止状态或用户无权限操作，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RebootDevServerResponse> rebootDevServer(
        RebootDevServerRequest &request
    );
    // 重装Lite Server服务器操作系统镜像
    //
    // 重装Lite Server服务器操作系统镜像接口用于重新安装Lite Server服务器的操作系统镜像。该接口适用于以下场景：当用户需要更新操作系统版本、修复系统故障或重新配置系统环境时，可以通过此接口重装指定的Lite Server服务器操作系统镜像。使用该接口的前提条件是Lite Server服务器已存在且处于停止状态，用户具有重装操作系统的权限。重装操作完成后，Lite Server服务器将安装新的操作系统镜像，并重新进入运行状态，若Lite Server服务器不存在、已处于运行状态或用户无权限操作，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ReinstallDevServerOSResponse> reinstallDevServerOS(
        ReinstallDevServerOSRequest &request
    );
    // 缩容Lite Server超节点
    //
    // 缩容Lite Server超节点接口用于减少Lite Server超节点的资源容量。该接口适用于以下场景：当用户需要降低Lite Server超节点的资源使用，以节省成本或优化资源分配时，可以通过此接口进行缩容。使用该接口的前提条件是用户已登录并具有缩容超节点的权限，且指定的超节点已存在且处于运行状态。缩容操作完成后，超节点的资源容量将根据指定的规格进行调整，用户可以立即使用减少后的资源。若用户无权限操作、指定的超节点不存在、超节点已处于最小容量或指定的缩容规格无效，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ScaleDownHyperinstanceResponse> scaleDownHyperinstance(
        ScaleDownHyperinstanceRequest &request
    );
    // 扩容Lite Server超节点
    //
    // 扩容Lite Server超节点接口用于增加Lite Server超节点的资源容量。该接口适用于以下场景：当用户需要提升Lite Server超节点的性能，以支持更多的负载或更大的数据处理需求时，可以通过此接口进行扩容。使用该接口的前提条件是用户已登录并具有扩容超节点的权限，且指定的超节点已存在且处于运行状态。扩容操作完成后，超节点的资源容量将根据指定的规格进行调整，用户可以立即使用增加的资源。若用户无权限操作、指定的超节点不存在、超节点已处于最大容量或指定的扩容规格无效，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ScaleUpHyperinstanceResponse> scaleUpHyperinstance(
        ScaleUpHyperinstanceRequest &request
    );
    // 查询Lite Server实例详情
    //
    // 查询Lite Server实例详情接口用于获取指定Lite Server实例的详细信息。该接口适用于以下场景：用户需要查看特定Lite Server实例的配置、状态、网络信息等详细数据，以便进行故障排查、资源管理和监控。使用该接口的前提条件是用户已登录且具有查看Lite Server实例的权限，并且需要提供有效的实例ID。查询操作完成后，系统将返回指定Lite Server实例的详细信息，包括实例ID、名称、状态、配置、网络配置等。若用户无权限、实例ID无效或实例不存在，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDevServerResponse> showDevServer(
        ShowDevServerRequest &request
    );
    // 启动Lite Server实例
    //
    // 启动Lite Server实例接口用于启动已创建但未运行的Lite Server实例。该接口适用于以下场景：当用户需要开始使用Lite Server实例进行开发或测试时，可以通过此接口启动指定的Lite Server实例。使用该接口的前提条件是Lite Server实例已创建且处于停止状态，用户具有启动实例的权限。若Lite Server实例不存在、已处于运行状态或用户无权限操作，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartDevServerResponse> startDevServer(
        StartDevServerRequest &request
    );
    // 启动Lite Server超节点服务器
    //
    // 启动Lite Server超节点服务器接口用于启动已创建但未运行的Lite Server超节点服务器。该接口适用于以下场景：当用户需要开始使用Lite Server超节点服务器进行开发或测试时，可以通过此接口启动指定的超节点服务器。使用该接口的前提条件是Lite Server超节点服务器已创建且处于停止状态，用户具有启动超节点服务器的权限。启动操作完成后，超节点服务器将进入运行状态，用户可以访问和使用服务器提供的服务。若Lite Server超节点服务器不存在、已处于运行状态或用户无权限操作，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartHyperinstanceResponse> startHyperinstance(
        StartHyperinstanceRequest &request
    );
    // 停止Lite Server实例
    //
    // 停止Lite Server实例接口用于停止正在运行的Lite Server实例。该接口适用于以下场景：当用户需要停止Lite Server实例，以节省资源或进行维护时，可以通过此接口停止指定的Lite Server实例。使用该接口的前提条件是Lite Server实例已创建且处于运行状态，用户具有停止实例的权限。若Lite Server实例不存在、已处于停止状态或用户无权限操作，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopDevServerResponse> stopDevServer(
        StopDevServerRequest &request
    );
    // 停止Lite Server超节点服务器
    //
    // 停止Lite Server超节点服务器接口用于停止正在运行的Lite Server超节点服务器。该接口适用于以下场景：当用户需要暂停使用Lite Server超节点服务器，以节省资源或进行维护时，可以通过此接口停止指定的超节点服务器。使用该接口的前提条件是Lite Server超节点服务器已创建且处于运行状态或者停止失败状态，用户具有停止超节点服务器的权限。停止操作完成后，超节点服务器将进入停止状态，不再提供服务。若Lite Server超节点服务器不存在、已处于停止状态或用户无权限操作，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopHyperinstanceResponse> stopHyperinstance(
        StopHyperinstanceRequest &request
    );
    // 实时同步用户指定Lite Server实例状态
    //
    // 实时同步用户Lite Server实例状态接口用于实时获取并同步用户Lite Server实例的当前状态。该接口适用于以下场景：用户需要实时监控其Lite Server实例的运行状态，确保实例正常运行或及时发现并处理异常情况。使用该接口的前提条件是用户已登录并具有相应的权限，且Lite Server实例已创建并处于运行状态。接口调用成功后，将返回Lite Server实例的最新状态信息，包括但不限于实例ID、运行状态、资源使用情况等。若用户无权限操作或Lite Server实例不存在，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SyncDevServersResponse> syncDevServers(
        SyncDevServersRequest &request
    );
    // 修改Lite Server实例名称
    //
    // 修改DevServer实例名称接口用于更改已创建的DevServer实例的名称。该接口适用于以下场景：当用户需要对DevServer实例进行重命名以更好地反映实例的功能或用途时，或者在实例名称不再符合当前项目命名规范时进行更新。使用该接口的前提条件是DevServer实例已存在且用户具有对该实例的管理权限。修改操作完成后，实例的新名称将立即生效，并在所有相关视图和记录中更新。若DevServer实例不存在、用户无权限操作或新名称不符合命名规则，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDevServerResponse> updateDevServer(
        UpdateDevServerRequest &request
    );

    // 通过运行的实例保存成容器镜像
    //
    // 通过运行的实例保存成容器镜像接口用于将正在运行的实例保存为容器镜像。该接口适用于以下场景：用户需要保存当前运行环境以便后续使用或开发时，可通过此接口将实例保存为镜像。使用该接口的前提条件是用户已登录系统并具有访问目标实例的权限，同时实例必须处于运行状态。调用该接口后，系统将保存实例的当前状态为容器镜像，包括安装的依赖包和插件。若用户无权限访问指定实例或实例未运行，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateImageResponse> createImage(
        CreateImageRequest &request
    );
    // 创建Notebook实例
    //
    // 创建Notebook实例接口用于根据指定的参数创建一个新的Notebook实例。该接口适用于以下场景：用户需要为特定任务或项目创建Notebook实例时，可通过此接口指定实例规格、AI引擎镜像和存储配置。使用该接口的前提条件是用户已登录系统并具有创建Notebook实例的权限，同时需提供有效的创建参数。调用该接口后，系统将异步创建Notebook实例，用户可通过查询接口获取实例状态。创建完成后，用户可通过网页或SSH客户端访问Notebook实例。若用户无权限创建实例或参数无效，接口将返回相应的错误信息。异常情况包括：若系统资源不足，或创建操作失败，接口将返回相应的错误提示。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateNotebookResponse> createNotebook(
        CreateNotebookRequest &request
    );
    // 添加资源标签
    //
    // 添加资源标签接口用于为指定的Notebook实例添加标签信息。该接口适用于以下场景：用户需要为Notebook实例添加标签信息，可通过此接口添加一个或多个标签。使用该接口的前提条件是用户已登录系统并具有操作目标Notebook实例的权限。调用该接口后，系统将为指定的Notebook实例添加标签，若标签的key已存在，则覆盖原有的value值。若用户无权限操作指定Notebook实例或输入的参数无效，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateNotebookTagsResponse> createNotebookTags(
        CreateNotebookTagsRequest &request
    );
    // 删除Notebook实例
    //
    // 删除Notebook实例接口用于移除已创建的Notebook实例及其相关资源。该接口适用于以下场景：用户需要清理不再使用的Notebook实例时，可通过此接口删除指定的Notebook实例，包括其容器和所有存储资源。使用该接口的前提条件是用户已登录系统并具有操作目标Notebook实例的权限。调用该接口后，系统将删除指定的Notebook实例及其相关资源。若用户无权限操作指定实例或Notebook实例未停止，接口将返回相应的错误信息。异常情况包括：若指定的Notebook实例不存在，或删除操作失败，接口将返回相应的错误提示。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteNotebookResponse> deleteNotebook(
        DeleteNotebookRequest &request
    );
    // 删除资源标签
    //
    // 删除资源标签接口用于移除指定Notebook实例的标签信息。该接口适用于以下场景：用户需要清理或重新组织Notebook实例的标签时，可通过此接口删除单个或多个标签。使用该接口的前提条件是用户已登录系统并具有操作目标Notebook实例的权限。调用该接口后，系统将删除指定的标签，若标签不存在则不进行操作。若用户无权限操作指定Notebook实例或输入的参数无效，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteNotebookTagsResponse> deleteNotebookTags(
        DeleteNotebookTagsRequest &request
    );
    // 查询所有Notebook实例列表
    //
    // 查询所有Notebook实例列表接口用于获取所有已创建的Notebook实例信息。该接口适用于以下场景：用户需要全面了解当前系统中所有Notebook实例的状态、资源使用情况或管理多个Notebook实例时，可通过此接口获取相关信息。使用该接口的前提条件是用户已创建Notebook实例，并且具有相应的查询权限。调用成功后，系统将返回所有Notebook实例的列表，包含实例ID、状态、创建时间等详细信息。若用户无权限访问，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAllNotebooksResponse> listAllNotebooks(
        ListAllNotebooksRequest &request
    );
    // 查询用户所有Notebook资源池实例详情
    //
    // 查询用户所有Notebook资源池实例详情接口用于获取用户关联的所有Notebook资源池实例的详细信息。该接口适用于以下场景：当用户创建Notebook示例需要选择资源池时，可通过此接口获取所有资源池实例列表信息。使用该接口的前提条件是用户已注册并登录系统，且具有查看资源池实例的权限。调用成功后，接口将返回包含所有资源池实例的详细信息列表，包括实例名称、状态、节点规格等。若用户未登录、无权限访问或系统内部出现错误，接口将返回相应的错误信息，如未认证、无权限或服务不可用等。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuthoringClustersResponse> listAuthoringClusters(
        ListAuthoringClustersRequest &request
    );
    // 查询当前用户指定特性的开关及配额
    //
    // 查询当前用户指定特性的开关及配额接口用于获取指定特性在当前用户下的开关状态及配额信息。该接口适用于以下场景：当用户需要了解特定特性是否已开启、查看配额限制或监控已使用的资源情况时，可通过此接口查询相关信息。使用该接口的前提条件是用户已登录且具有查询权限，同时指定的特性必须存在。调用该接口后，系统将返回该特性是否已开启、配额总量及已使用的资源情况等详细信息。若用户无权限查询、特性不存在或系统出现异常，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFeaturesResponse> listFeatures(
        ListFeaturesRequest &request
    );
    // 查询Notebook支持的有效规格列表
    //
    // 查询Notebook支持的有效规格列表接口用于获取运行Notebook实例时可使用的规格选项。该接口适用于以下场景：用户需要了解Notebook实例支持的配置选项时，可通过此接口查询可用的规格列表。使用该接口的前提条件是用户已登录系统并具有访问目标Notebook实例的权限。调用该接口后，系统将返回Notebook实例支持的有效规格列表，包括内存、CPU等配置信息。若用户无权限访问指定实例或Notebook实例未运行，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFlavorsResponse> listFlavors(
        ListFlavorsRequest &request
    );
    // 查询Notebook实例列表
    //
    // 查询Notebook实例列表接口用于获取满足特定条件的Notebook实例信息。该接口适用于以下场景：用户管理多个Notebook实例或查看特定状态的Notebook实例时，可通过此接口获取相关信息。使用该接口的前提条件是用户已创建Notebook实例，并且具有相应的查询权限。调用成功后，系统将返回符合条件的Notebook实例列表，包含实例ID、状态、创建时间等详细信息。若用户无权限访问或查询条件不明确，接口将返回相应的错误信息或空列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListNotebooksResponse> listNotebooks(
        ListNotebooksRequest &request
    );
    // Notebook时长续约
    //
    // Notebook时长续约接口用于延长运行中的Notebook实例的运行时间。该接口适用于以下场景：用户需要延长Notebook实例的使用时间以完成长时间任务时，可通过此接口延长指定实例的运行时间。使用该接口的前提条件是用户已登录系统并具有操作目标Notebook实例的权限，同时Notebook实例必须处于运行状态。调用该接口后，系统将延长指定Notebook实例的运行时间，用户可继续使用。若用户无权限操作指定实例或Notebook实例未运行，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RenewLeaseResponse> renewLease(
        RenewLeaseRequest &request
    );
    // 查询Notebook资源池详情
    //
    // 查询Notebook资源池详情接口用于获取资源池的详细信息。该接口适用于以下场景：当用户需要创建Notebook实例作业时，可通过此接口查询指定集群的详细信息。使用该接口的前提条件是集群已成功纳管且用户具有相应的访问权限。调用该接口后，系统将返回集群的实例ID、名称、Flavor规格、实例状态以及实例可打开的URL等详细信息。若集群不存在、未被纳管或用户无权限访问，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowClusterResponse> showCluster(
        ShowClusterRequest &request
    );
    // 查询运行中的Notebook可用时长
    //
    // 查询运行中的Notebook可用时长接口用于获取正在运行的Notebook实例的剩余可用时间。该接口适用于以下场景：用户需要了解Notebook实例的剩余运行时间以合理安排任务时，可通过此接口查询指定实例的可用时长。使用该接口的前提条件是用户已登录系统并具有访问目标Notebook实例的权限，同时Notebook实例必须处于运行状态。调用该接口后，系统将返回指定Notebook实例的可用时长信息。若用户无权限访问指定实例或Notebook实例未运行，接口将返回相应的错误信息。异常情况包括：若指定的Notebook实例不存在，或查询操作失败，接口将返回相应的错误提示。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowLeaseResponse> showLease(
        ShowLeaseRequest &request
    );
    // 查询Notebook实例详情
    //
    // 查询Notebook实例详情接口用于获取指定Notebook实例的详细信息。该接口适用于以下场景：用户需要查看特定Notebook实例的详细配置、运行状态或获取访问链接时，可通过此接口获取相关信息。使用该接口的前提条件是Notebook实例已存在且用户具有相应的查询权限。调用成功后，系统将返回实例ID、名称、规格、镜像、实例状态和实例可打开的URL等详细信息。若实例不存在或用户无权限访问，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowNotebookResponse> showNotebook(
        ShowNotebookRequest &request
    );
    // 查询Notebook资源类型下的标签
    //
    // 查询Notebook资源类型下的标签接口用于获取用户当前project下Notebook实例的标签信息。该接口适用于以下场景：用户需要管理或统计Notebook资源时，可通过此接口查询特定标签或所有标签的Notebook实例。使用该接口的前提条件是用户已登录系统并具有访问权限，同时可指定工作空间或默认查询所有工作空间。调用该接口后，系统将返回指定Notebook实例的标签列表，包括标签名称、标签值等信息。若用户无权限，则返回相应的异常信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowNotebookTagsResponse> showNotebookTags(
        ShowNotebookTagsRequest &request
    );
    // 查询Notebook支持的可切换规格列表
    //
    // 查询Notebook支持的可切换规格列表接口用于获取创建Notebook实例时可选择的规格选项。该接口适用于以下场景：用户需要了解Notebook实例支持的配置选项时，可通过此接口查询可用的规格列表。使用该接口的前提条件是用户已登录系统并具有创建Notebook实例的权限。调用该接口后，系统将返回Notebook实例支持的可切换规格列表，包括内存、CPU等配置信息。若用户无权限创建Notebook实例，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSwitchableFlavorsResponse> showSwitchableFlavors(
        ShowSwitchableFlavorsRequest &request
    );
    // 启动Notebook实例
    //
    // 启动Notebook实例接口用于启动已创建的Notebook实例。该接口适用于以下场景：用户需要开始运行Notebook实例以进行数据处理、模型训练或开发时，可通过此接口启动指定的Notebook实例。使用该接口的前提条件是用户已登录系统并具有操作目标Notebook实例的权限，同时Notebook实例必须处于停止状态且配置正确。调用该接口后，系统将启动指定的Notebook实例，用户可开始使用。若用户无权限操作指定实例或Notebook实例未停止，接口将返回相应的错误信息。异常情况包括：若指定的Notebook实例不存在，或启动操作失败，接口将返回相应的错误提示。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartNotebookResponse> startNotebook(
        StartNotebookRequest &request
    );
    // 停止Notebook实例
    //
    // 停止Notebook实例接口用于停止正在运行的Notebook实例。该接口适用于以下场景：用户需要释放Notebook实例占用的资源或结束当前运行的任务时，可通过此接口停止指定的Notebook实例。使用该接口的前提条件是用户已登录系统并具有操作目标Notebook实例的权限，同时Notebook实例必须处于运行状态。调用该接口后，系统将停止指定的Notebook实例，释放相关资源。若用户无权限操作指定实例或Notebook实例未运行，接口将返回相应的错误信息。异常情况包括：若指定的Notebook实例不存在，或停止操作失败，接口将返回相应的错误提示。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopNotebookResponse> stopNotebook(
        StopNotebookRequest &request
    );
    // 更新Notebook实例
    //
    // 更新Notebook实例接口用于修改Notebook实例的配置信息，包括名称、描述、规格和镜像等。该接口适用于以下场景：用户需要调整Notebook实例的配置以适应新的需求时，可通过此接口更新实例的详细信息。使用该接口的前提条件是用户已登录系统并具有操作目标Notebook实例的权限，同时Notebook实例必须处于停止状态。调用该接口后，系统将更新指定Notebook实例的配置信息。若用户无权限操作指定实例或Notebook实例未停止，接口将返回相应的错误信息。异常情况包括：若指定的Notebook实例不存在，或更新参数无效，接口将返回相应的错误提示。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateNotebookResponse> updateNotebook(
        UpdateNotebookRequest &request
    );

    // 新建Workflow工作流
    //
    // 创建Workflow工作流。[可参考[如何开发Workflow](https://support.huaweicloud.com/usermanual-standard-modelarts/modelarts_workflow_0292.html)，创建工作流。](tag:hc)
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateWorkflowResponse> createWorkflow(
        CreateWorkflowRequest &request
    );
    // 创建在线服务包
    //
    // 计费工作流购买资源。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateWorkflowPurchasePoolResponse> createWorkflowPurchasePool(
        CreateWorkflowPurchasePoolRequest &request
    );
    // 在线服务鉴权
    //
    // 计费工作流在线服务鉴权。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateWorkflowServiceAuthResponse> createWorkflowServiceAuth(
        CreateWorkflowServiceAuthRequest &request
    );
    // 删除Workflow工作流
    //
    // 通过ID删除Workflow工作流。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteWorkflowResponse> deleteWorkflow(
        DeleteWorkflowRequest &request
    );
    // 获取Workflow工作流列表
    //
    // 展示Workflow工作流列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListWorkflowsResponse> listWorkflows(
        ListWorkflowsRequest &request
    );
    // 查询Workflow工作流
    //
    // 通过ID查询Workflow工作流详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowWorkflowResponse> showWorkflow(
        ShowWorkflowRequest &request
    );
    // Workflow列表所有标签
    //
    // Workflow列表所有标签接口用于获取指定项目下所有工作流的标签信息。
    // 该接口适用于以下场景：当用户需要了解项目中所有工作流的标签配置，以便进行资源管理和筛选时，可以通过此接口获取标签列表。使用该接口的前提条件是用户已登录并具有查看工作流标签的权限。响应消息体中包含每个工作流的标签信息，如标签键和值。若用户无权限或项目下无工作流，接口将返回相应的错误信息或空列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowWorkflowLabelsResponse> showWorkflowLabels(
        ShowWorkflowLabelsRequest &request
    );
    // 总览Workflow工作流
    //
    // 获取Workflow工作流统计信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowWorkflowsOverviewResponse> showWorkflowsOverview(
        ShowWorkflowsOverviewRequest &request
    );
    // 查询Workflow待办事项
    //
    // 获取Workflow待办列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowWorkflowsTodolistResponse> showWorkflowsTodolist(
        ShowWorkflowsTodolistRequest &request
    );
    // 修改Workflow工作流
    //
    // 更新Workflow工作流信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateWorkflowResponse> updateWorkflow(
        UpdateWorkflowRequest &request
    );

    // 新建Workflow Execution
    //
    // 创建Workflow Execution。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateWorkflowExecutionResponse> createWorkflowExecution(
        CreateWorkflowExecutionRequest &request
    );
    // 管理Workflow Execution
    //
    // 本接口支持对Workflow Execution进行停止或重跑操作。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateWorkflowExecutionsActionsResponse> createWorkflowExecutionsActions(
        CreateWorkflowExecutionsActionsRequest &request
    );
    // 管理Workflow StepExecution
    //
    // 本接口支持对Workflow StepExecution进行重试、停止和继续操作。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateWorkflowStepExecutionsActionsResponse> createWorkflowStepExecutionsActions(
        CreateWorkflowStepExecutionsActionsRequest &request
    );
    // 删除Workflow Execution
    //
    // 通过ID删除Workflow Execution。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteWorkflowExecutionResponse> deleteWorkflowExecution(
        DeleteWorkflowExecutionRequest &request
    );
    // 获取Workflow Execution列表的所有标签
    //
    // 获取Workflow Execution列表的所有标签接口用于查询指定工作流执行记录中的所有标签。
    // 该接口适用于以下场景：当用户需要查看工作流执行记录的标签信息，以便进行分类、筛选或统计时，可以通过此接口获取所有标签的列表。使用该接口的前提条件是用户已登录且具有查看工作流执行记录的权限。接口响应消息体中包含每个标签的详细信息，如标签键和标签值。若用户无权限操作或指定的工作流执行记录不存在，接口将返回相应的错误信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListExecutionLabelsResponse> listExecutionLabels(
        ListExecutionLabelsRequest &request
    );
    // 获取Execution列表
    //
    // 查询Workflow下的执行记录列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListWorkflowExecutionsResponse> listWorkflowExecutions(
        ListWorkflowExecutionsRequest &request
    );
    // 获取StepExecution列表
    //
    // 查询指定工作流中各步骤的执行情况。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListWorkflowStepExecutionResponse> listWorkflowStepExecution(
        ListWorkflowStepExecutionRequest &request
    );
    // 查询Workflow Execution
    //
    // 通过ID查询Workflow Execution详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowWorkflowExecutionResponse> showWorkflowExecution(
        ShowWorkflowExecutionRequest &request
    );
    // 获取Workflow工作流节点度量信息
    //
    // 获取Workflow工作流节点的度量信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowWorkflowStepExecutionMetricsResponse> showWorkflowStepExecutionMetrics(
        ShowWorkflowStepExecutionMetricsRequest &request
    );
    // 更新Workflow Execution
    //
    // 通过ID更新Workflow Exectuion。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateWorkflowExecutionResponse> updateWorkflowExecution(
        UpdateWorkflowExecutionRequest &request
    );

    // 创建工作流定时调度
    //
    // 创建Workflow定时调度。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateWorkflowScheduleResponse> createWorkflowSchedule(
        CreateWorkflowScheduleRequest &request
    );
    // 删除工作流定时调度信息
    //
    // 删除工作流调度信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteWorkflowScheduleIdResponse> deleteWorkflowScheduleId(
        DeleteWorkflowScheduleIdRequest &request
    );
    // 查询工作流定时调度详情
    //
    // 查询工作流调度详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowWorkflowScheduleResponse> showWorkflowSchedule(
        ShowWorkflowScheduleRequest &request
    );
    // 查询工作流定时调度列表
    //
    // 查询工作流定时调度列表接口用于获取指定项目下所有工作流的定时调度信息。
    // 该接口适用于以下场景：当用户需要查看项目中所有工作流的定时调度配置，以便进行任务管理和调度优化时，可以通过此接口获取定时调度列表。使用该接口的前提条件是用户已登录并具有查看工作流定时调度的权限。响应消息体中包含每个工作流的定时调度信息，如调度ID、调度时间、状态等。若用户无权限或项目下无工作流定时调度，接口将返回相应的错误信息或空列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowWorkflowScheduleListResponse> showWorkflowScheduleList(
        ShowWorkflowScheduleListRequest &request
    );
    // 更新工作流定时调度信息
    //
    // 更新WorkflowSchedule信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateWorkflowScheduleResponse> updateWorkflowSchedule(
        UpdateWorkflowScheduleRequest &request
    );

    // 新建消息订阅Subscription
    //
    // 为Workflow工作流添加消息订阅功能。工作流已订阅的事件发生时，会产生消息提醒。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateWorkflowSubscriptionsResponse> createWorkflowSubscriptions(
        CreateWorkflowSubscriptionsRequest &request
    );
    // 删除消息订阅Subscription
    //
    // 删除已订阅的消息订阅Subscription。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteWorkflowSubscriptionResponse> deleteWorkflowSubscription(
        DeleteWorkflowSubscriptionRequest &request
    );
    // 查询消息订阅Subscription详情
    //
    // 查询Workflow工作流已订阅的订阅信息详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowWorkflowSubscriptionResponse> showWorkflowSubscription(
        ShowWorkflowSubscriptionRequest &request
    );
    // 更新消息订阅Subscription
    //
    // 更新Workflow工作流已订阅的订阅信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateWorkflowSubscriptionResponse> updateWorkflowSubscription(
        UpdateWorkflowSubscriptionRequest &request
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

template class HUAWEICLOUD_MODELARTS_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Modelarts::V1::ModelArtsClient>;

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_ModelArtsClient_H_

