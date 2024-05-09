#ifndef HUAWEICLOUD_SDK_DRS_V5_DrsClient_H_
#define HUAWEICLOUD_SDK_DRS_V5_DrsClient_H_

#include <huaweicloud/drs/v5/DrsExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/drs/v5/model/ApiHttpNullResp.h>
#include <huaweicloud/drs/v5/model/BatchAddTagReq.h>
#include <huaweicloud/drs/v5/model/BatchAsyncCreateJobReq.h>
#include <huaweicloud/drs/v5/model/BatchAsyncUpdateJobReq.h>
#include <huaweicloud/drs/v5/model/BatchCreateJobsAsyncRequest.h>
#include <huaweicloud/drs/v5/model/BatchCreateJobsAsyncResponse.h>
#include <huaweicloud/drs/v5/model/BatchCreateTagsRequest.h>
#include <huaweicloud/drs/v5/model/BatchCreateTagsResponse.h>
#include <huaweicloud/drs/v5/model/BatchDealResourceTagReq.h>
#include <huaweicloud/drs/v5/model/BatchDeleteJobReq.h>
#include <huaweicloud/drs/v5/model/BatchDeleteJobsByIdRequest.h>
#include <huaweicloud/drs/v5/model/BatchDeleteJobsByIdResponse.h>
#include <huaweicloud/drs/v5/model/BatchDeleteTagReq.h>
#include <huaweicloud/drs/v5/model/BatchDeleteTagsRequest.h>
#include <huaweicloud/drs/v5/model/BatchDeleteTagsResponse.h>
#include <huaweicloud/drs/v5/model/BatchExecuteJobActionsRequest.h>
#include <huaweicloud/drs/v5/model/BatchExecuteJobActionsResponse.h>
#include <huaweicloud/drs/v5/model/BatchJobActionReq.h>
#include <huaweicloud/drs/v5/model/BatchStopJobActionReq.h>
#include <huaweicloud/drs/v5/model/BatchStopJobsActionRequest.h>
#include <huaweicloud/drs/v5/model/BatchStopJobsActionResponse.h>
#include <huaweicloud/drs/v5/model/BatchTagActionRequest.h>
#include <huaweicloud/drs/v5/model/BatchTagActionResponse.h>
#include <huaweicloud/drs/v5/model/CheckDataFilterRequest.h>
#include <huaweicloud/drs/v5/model/CheckDataFilterResponse.h>
#include <huaweicloud/drs/v5/model/CheckJobNameReq.h>
#include <huaweicloud/drs/v5/model/CloneJobReq.h>
#include <huaweicloud/drs/v5/model/CollectColumnsRequest.h>
#include <huaweicloud/drs/v5/model/CollectColumnsResponse.h>
#include <huaweicloud/drs/v5/model/CollectDbObjectsAsyncRequest.h>
#include <huaweicloud/drs/v5/model/CollectDbObjectsAsyncResponse.h>
#include <huaweicloud/drs/v5/model/CollectDbObjectsInfoRequest.h>
#include <huaweicloud/drs/v5/model/CollectDbObjectsInfoResponse.h>
#include <huaweicloud/drs/v5/model/CollectPositionAsyncRequest.h>
#include <huaweicloud/drs/v5/model/CollectPositionAsyncResponse.h>
#include <huaweicloud/drs/v5/model/CommitAsyncJobRequest.h>
#include <huaweicloud/drs/v5/model/CommitAsyncJobResponse.h>
#include <huaweicloud/drs/v5/model/CopyJobRequest.h>
#include <huaweicloud/drs/v5/model/CopyJobResponse.h>
#include <huaweicloud/drs/v5/model/CountInstanceByTagsRequest.h>
#include <huaweicloud/drs/v5/model/CountInstanceByTagsResponse.h>
#include <huaweicloud/drs/v5/model/CreateJobRequest.h>
#include <huaweicloud/drs/v5/model/CreateJobResponse.h>
#include <huaweicloud/drs/v5/model/DataProcessReq.h>
#include <huaweicloud/drs/v5/model/DeleteDriverReq.h>
#include <huaweicloud/drs/v5/model/DeleteJdbcDriverRequest.h>
#include <huaweicloud/drs/v5/model/DeleteJdbcDriverResponse.h>
#include <huaweicloud/drs/v5/model/DeleteJobRequest.h>
#include <huaweicloud/drs/v5/model/DeleteJobResponse.h>
#include <huaweicloud/drs/v5/model/DownloadBatchCreateTemplateRequest.h>
#include <huaweicloud/drs/v5/model/DownloadBatchCreateTemplateResponse.h>
#include <huaweicloud/drs/v5/model/DownloadDbObjectTemplateRequest.h>
#include <huaweicloud/drs/v5/model/DownloadDbObjectTemplateResponse.h>
#include <huaweicloud/drs/v5/model/ExecuteJobActionRequest.h>
#include <huaweicloud/drs/v5/model/ExecuteJobActionResponse.h>
#include <huaweicloud/drs/v5/model/ExportOperationInfoRequest.h>
#include <huaweicloud/drs/v5/model/ExportOperationInfoResponse.h>
#include <huaweicloud/core/utils/HttpContent.h>
#include <huaweicloud/drs/v5/model/ImportBatchCreateJobsRequest.h>
#include <huaweicloud/drs/v5/model/ImportBatchCreateJobsRequestBody.h>
#include <huaweicloud/drs/v5/model/ImportBatchCreateJobsResponse.h>
#include <huaweicloud/drs/v5/model/JobActionReq.h>
#include <huaweicloud/drs/v5/model/ListAsyncJobDetailRequest.h>
#include <huaweicloud/drs/v5/model/ListAsyncJobDetailResponse.h>
#include <huaweicloud/drs/v5/model/ListAsyncJobsRequest.h>
#include <huaweicloud/drs/v5/model/ListAsyncJobsResponse.h>
#include <huaweicloud/drs/v5/model/ListDbObjectsRequest.h>
#include <huaweicloud/drs/v5/model/ListDbObjectsResponse.h>
#include <huaweicloud/drs/v5/model/ListInstanceByTagsRequest.h>
#include <huaweicloud/drs/v5/model/ListInstanceByTagsResponse.h>
#include <huaweicloud/drs/v5/model/ListInstanceTagsRequest.h>
#include <huaweicloud/drs/v5/model/ListInstanceTagsResponse.h>
#include <huaweicloud/drs/v5/model/ListJdbcDriversRequest.h>
#include <huaweicloud/drs/v5/model/ListJdbcDriversResponse.h>
#include <huaweicloud/drs/v5/model/ListJobHistoryParametersRequest.h>
#include <huaweicloud/drs/v5/model/ListJobHistoryParametersResponse.h>
#include <huaweicloud/drs/v5/model/ListJobParametersRequest.h>
#include <huaweicloud/drs/v5/model/ListJobParametersResponse.h>
#include <huaweicloud/drs/v5/model/ListJobsRequest.h>
#include <huaweicloud/drs/v5/model/ListJobsResponse.h>
#include <huaweicloud/drs/v5/model/ListLinksRequest.h>
#include <huaweicloud/drs/v5/model/ListLinksResponse.h>
#include <huaweicloud/drs/v5/model/ListProjectTagsRequest.h>
#include <huaweicloud/drs/v5/model/ListProjectTagsResponse.h>
#include <huaweicloud/drs/v5/model/ListTagsRequest.h>
#include <huaweicloud/drs/v5/model/ListTagsResponse.h>
#include <huaweicloud/drs/v5/model/ListsAgencyPermissionsRequest.h>
#include <huaweicloud/drs/v5/model/ListsAgencyPermissionsResponse.h>
#include <huaweicloud/drs/v5/model/ModifyComparePolicyReq.h>
#include <huaweicloud/drs/v5/model/ModifyParameterReq.h>
#include <huaweicloud/drs/v5/model/ModifyStartPositionReq.h>
#include <huaweicloud/drs/v5/model/QueryColumnReq.h>
#include <huaweicloud/drs/v5/model/QueryDbPositionReq.h>
#include <huaweicloud/drs/v5/model/QueryInstanceByTagReq.h>
#include <huaweicloud/drs/v5/model/QuerySelectObjectInfoReq.h>
#include <huaweicloud/drs/v5/model/QueryUserSelectedObjectInfoReq.h>
#include <huaweicloud/drs/v5/model/ShowActionsRequest.h>
#include <huaweicloud/drs/v5/model/ShowActionsResponse.h>
#include <huaweicloud/drs/v5/model/ShowColumnInfoResultRequest.h>
#include <huaweicloud/drs/v5/model/ShowColumnInfoResultResponse.h>
#include <huaweicloud/drs/v5/model/ShowComparePolicyRequest.h>
#include <huaweicloud/drs/v5/model/ShowComparePolicyResponse.h>
#include <huaweicloud/drs/v5/model/ShowDataFilteringResultRequest.h>
#include <huaweicloud/drs/v5/model/ShowDataFilteringResultResponse.h>
#include <huaweicloud/drs/v5/model/ShowDataProcessingRulesResultRequest.h>
#include <huaweicloud/drs/v5/model/ShowDataProcessingRulesResultResponse.h>
#include <huaweicloud/drs/v5/model/ShowDataProgressRequest.h>
#include <huaweicloud/drs/v5/model/ShowDataProgressResponse.h>
#include <huaweicloud/drs/v5/model/ShowDbObjectCollectionStatusRequest.h>
#include <huaweicloud/drs/v5/model/ShowDbObjectCollectionStatusResponse.h>
#include <huaweicloud/drs/v5/model/ShowDbObjectTemplateProgressRequest.h>
#include <huaweicloud/drs/v5/model/ShowDbObjectTemplateProgressResponse.h>
#include <huaweicloud/drs/v5/model/ShowDbObjectTemplateResultRequest.h>
#include <huaweicloud/drs/v5/model/ShowDbObjectTemplateResultResponse.h>
#include <huaweicloud/drs/v5/model/ShowDbObjectsListRequest.h>
#include <huaweicloud/drs/v5/model/ShowDbObjectsListResponse.h>
#include <huaweicloud/drs/v5/model/ShowDirtyDataRequest.h>
#include <huaweicloud/drs/v5/model/ShowDirtyDataResponse.h>
#include <huaweicloud/drs/v5/model/ShowEnterpriseProjectRequest.h>
#include <huaweicloud/drs/v5/model/ShowEnterpriseProjectResponse.h>
#include <huaweicloud/drs/v5/model/ShowHealthCompareJobDetailRequest.h>
#include <huaweicloud/drs/v5/model/ShowHealthCompareJobDetailResponse.h>
#include <huaweicloud/drs/v5/model/ShowHealthCompareJobListRequest.h>
#include <huaweicloud/drs/v5/model/ShowHealthCompareJobListResponse.h>
#include <huaweicloud/drs/v5/model/ShowHealthObjectCompareJobOverviewRequest.h>
#include <huaweicloud/drs/v5/model/ShowHealthObjectCompareJobOverviewResponse.h>
#include <huaweicloud/drs/v5/model/ShowIncrementComponentsDetailRequest.h>
#include <huaweicloud/drs/v5/model/ShowIncrementComponentsDetailResponse.h>
#include <huaweicloud/drs/v5/model/ShowInstanceTagsRequest.h>
#include <huaweicloud/drs/v5/model/ShowInstanceTagsResponse.h>
#include <huaweicloud/drs/v5/model/ShowJobDetailRequest.h>
#include <huaweicloud/drs/v5/model/ShowJobDetailResponse.h>
#include <huaweicloud/drs/v5/model/ShowMeteringRequest.h>
#include <huaweicloud/drs/v5/model/ShowMeteringResponse.h>
#include <huaweicloud/drs/v5/model/ShowMonitorDataRequest.h>
#include <huaweicloud/drs/v5/model/ShowMonitorDataResponse.h>
#include <huaweicloud/drs/v5/model/ShowObjectMappingRequest.h>
#include <huaweicloud/drs/v5/model/ShowObjectMappingResponse.h>
#include <huaweicloud/drs/v5/model/ShowPositionResultRequest.h>
#include <huaweicloud/drs/v5/model/ShowPositionResultResponse.h>
#include <huaweicloud/drs/v5/model/ShowProgressDataRequest.h>
#include <huaweicloud/drs/v5/model/ShowProgressDataResponse.h>
#include <huaweicloud/drs/v5/model/ShowReplayResultsRequest.h>
#include <huaweicloud/drs/v5/model/ShowReplayResultsResponse.h>
#include <huaweicloud/drs/v5/model/ShowSupportObjectTypeRequest.h>
#include <huaweicloud/drs/v5/model/ShowSupportObjectTypeResponse.h>
#include <huaweicloud/drs/v5/model/ShowUpdateObjectSavingStatusRequest.h>
#include <huaweicloud/drs/v5/model/ShowUpdateObjectSavingStatusResponse.h>
#include <huaweicloud/drs/v5/model/SingleCreateJobReq.h>
#include <huaweicloud/drs/v5/model/SingleUpdateJobReq.h>
#include <huaweicloud/drs/v5/model/StopJobActionReq.h>
#include <huaweicloud/drs/v5/model/StopJobActionRequest.h>
#include <huaweicloud/drs/v5/model/StopJobActionResponse.h>
#include <huaweicloud/drs/v5/model/SyncJdbcDriverRequest.h>
#include <huaweicloud/drs/v5/model/SyncJdbcDriverResponse.h>
#include <huaweicloud/drs/v5/model/UpdateBatchAsyncJobsRequest.h>
#include <huaweicloud/drs/v5/model/UpdateBatchAsyncJobsResponse.h>
#include <huaweicloud/drs/v5/model/UpdateComparePolicyRequest.h>
#include <huaweicloud/drs/v5/model/UpdateComparePolicyResponse.h>
#include <huaweicloud/drs/v5/model/UpdateDataProgressRequest.h>
#include <huaweicloud/drs/v5/model/UpdateDataProgressResponse.h>
#include <huaweicloud/drs/v5/model/UpdateDriverReq.h>
#include <huaweicloud/drs/v5/model/UpdateJobConfigurationsRequest.h>
#include <huaweicloud/drs/v5/model/UpdateJobConfigurationsResponse.h>
#include <huaweicloud/drs/v5/model/UpdateJobRequest.h>
#include <huaweicloud/drs/v5/model/UpdateJobResponse.h>
#include <huaweicloud/drs/v5/model/UpdateStartPositionRequest.h>
#include <huaweicloud/drs/v5/model/UpdateStartPositionResponse.h>
#include <huaweicloud/drs/v5/model/UploadDbObjectTemplateRequest.h>
#include <huaweicloud/drs/v5/model/UploadDbObjectTemplateRequestBody.h>
#include <huaweicloud/drs/v5/model/UploadDbObjectTemplateResponse.h>
#include <huaweicloud/drs/v5/model/UploadJdbcDriverRequest.h>
#include <huaweicloud/drs/v5/model/UploadJdbcDriverRequestBody.h>
#include <huaweicloud/drs/v5/model/UploadJdbcDriverResponse.h>
#include <huaweicloud/drs/v5/model/ValidateJobNameRequest.h>
#include <huaweicloud/drs/v5/model/ValidateJobNameResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Drs::V5::Model;

class HUAWEICLOUD_DRS_V5_EXPORT  DrsClient : public Client
{
public:

    DrsClient();

    virtual ~DrsClient();

    static ClientBuilder<DrsClient> newBuilder();

    // 批量异步创建任务
    //
    // 批量异步创建任务，根据请求参数不同，可以批量异步创建实时迁移、实时同步、实时灾备等任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCreateJobsAsyncResponse> batchCreateJobsAsync(
        BatchCreateJobsAsyncRequest &request
    );
    // 批量添加资源标签
    //
    // 批量添加资源标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCreateTagsResponse> batchCreateTags(
        BatchCreateTagsRequest &request
    );
    // 批量删除任务
    //
    // 批量删除租户指定ID任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteJobsByIdResponse> batchDeleteJobsById(
        BatchDeleteJobsByIdRequest &request
    );
    // 批量删除资源标签
    //
    // 为指定实例批量删除标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteTagsResponse> batchDeleteTags(
        BatchDeleteTagsRequest &request
    );
    // 批量操作指定ID任务
    //
    // 批量操作租户指定ID任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchExecuteJobActionsResponse> batchExecuteJobActions(
        BatchExecuteJobActionsRequest &request
    );
    // 批量结束任务
    //
    // 批量结束租户指定ID任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchStopJobsActionResponse> batchStopJobsAction(
        BatchStopJobsActionRequest &request
    );
    // 批量添加或删除资源标签
    //
    // 批量添加删除资源标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchTagActionResponse> batchTagAction(
        BatchTagActionRequest &request
    );
    // 数据过滤规则校验
    //
    // 数据过滤规则校验
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckDataFilterResponse> checkDataFilter(
        CheckDataFilterRequest &request
    );
    // 采集指定数据库表的列信息
    //
    // 采集指定数据库表的列信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CollectColumnsResponse> collectColumns(
        CollectColumnsRequest &request
    );
    // 提交查询数据库对象信息
    //
    // 提交查询数据库对象信息。例如：
    // - 当type取值为source时，表示查询源库库表信息。
    // - 当源库库表信息有变化时，则type取值为source，is_refresh取值为true。
    // - 当已同步到目标库的库表信息过大，需要提前将数据加载到缓存中时，type取值为synchronized。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CollectDbObjectsAsyncResponse> collectDbObjectsAsync(
        CollectDbObjectsAsyncRequest &request
    );
    // 提交查询数据库对象信息
    //
    // 提交查询数据库对象信息。例如：
    // - 当type取值为source时，表示查询源库库表信息。
    // - 当源库库表信息有变化时，则type取值为source，is_refresh取值为true。
    // - 当已同步到目标库的库表信息过大，需要提前将数据加载到缓存中时，type取值为synchronized。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CollectDbObjectsInfoResponse> collectDbObjectsInfo(
        CollectDbObjectsInfoRequest &request
    );
    // 采集数据库位点信息
    //
    // 采集数据库位点信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CollectPositionAsyncResponse> collectPositionAsync(
        CollectPositionAsyncRequest &request
    );
    // 提交批量创建异步任务
    //
    // 提交批量创建异步任务，当批量异步任务创建或更新参数后，系统会自动开始进行参数校验，待所有任务成功完成参数校验后并且无报错时，可调用此接口开始创建DRS任务实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CommitAsyncJobResponse> commitAsyncJob(
        CommitAsyncJobRequest &request
    );
    // 克隆任务
    //
    // DRS支持通过克隆功能，快速复制现有同步任务的配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CopyJobResponse> copyJob(
        CopyJobRequest &request
    );
    // 查询资源实例数量
    //
    // 查询资源实例数量。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CountInstanceByTagsResponse> countInstanceByTags(
        CountInstanceByTagsRequest &request
    );
    // 创建任务
    //
    // 创建单个任务，根据请求参数不同，可以创建单个实时迁移、实时同步、实时灾备等任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateJobResponse> createJob(
        CreateJobRequest &request
    );
    // 删除驱动文件
    //
    // 删除驱动文件。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteJdbcDriverResponse> deleteJdbcDriver(
        DeleteJdbcDriverRequest &request
    );
    // 删除指定ID任务
    //
    // 删除租户指定ID任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteJobResponse> deleteJob(
        DeleteJobRequest &request
    );
    // 下载批量导入任务模板
    //
    // 下载批量导入任务模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadBatchCreateTemplateResponse> downloadBatchCreateTemplate(
        DownloadBatchCreateTemplateRequest &request
    );
    // 对象选择（文件导入 - 模板下载）
    //
    // 对象选择（文件导入 - 模板下载）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadDbObjectTemplateResponse> downloadDbObjectTemplate(
        DownloadDbObjectTemplateRequest &request
    );
    // 操作指定ID任务
    //
    // 操作租户指定ID任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ExecuteJobActionResponse> executeJobAction(
        ExecuteJobActionRequest &request
    );
    // 导出任务操作统计信息
    //
    // 导出指定任务操作统计信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ExportOperationInfoResponse> exportOperationInfo(
        ExportOperationInfoRequest &request
    );
    // 批量导入任务
    //
    // 批量导入任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ImportBatchCreateJobsResponse> importBatchCreateJobs(
        ImportBatchCreateJobsRequest &request
    );
    // 查询指定ID批量异步任务详情
    //
    // 查询租户指定ID批量异步任务详情，默认为任务的“create_time”降序排序获取结果，支持分页查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAsyncJobDetailResponse> listAsyncJobDetail(
        ListAsyncJobDetailRequest &request
    );
    // 查询批量异步创建的任务列表
    //
    // 查询租户批量异步创建的任务列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAsyncJobsResponse> listAsyncJobs(
        ListAsyncJobsRequest &request
    );
    // 查询数据库对象信息
    //
    // 查询数据库对象信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDbObjectsResponse> listDbObjects(
        ListDbObjectsRequest &request
    );
    // 查询资源实例列表
    //
    // 查询资源实例列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstanceByTagsResponse> listInstanceByTags(
        ListInstanceByTagsRequest &request
    );
    // 查询资源标签
    //
    // 查询指定实例的标签信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstanceTagsResponse> listInstanceTags(
        ListInstanceTagsRequest &request
    );
    // 查询驱动文件列表
    //
    // 查询驱动文件列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListJdbcDriversResponse> listJdbcDrivers(
        ListJdbcDriversRequest &request
    );
    // 查询任务的参数配置修改历史
    //
    // 查询任务的参数配置修改历史
    // - 仅engine_type为mysql、mysql-to-pgl、mysql-to-gaussdbv5、mysql-to-gaussdbv5ha、mysql-to-dws、mysql-to-taurus、mysql-to-kafka、mysql-to-elasticsearch、mysql-to-oracle且任务状态只能为配置中、全量中、增量中、全量失败、增量失败、暂停中的实时同步任务支持。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListJobHistoryParametersResponse> listJobHistoryParameters(
        ListJobHistoryParametersRequest &request
    );
    // 查询任务参数配置列表
    //
    // 查询任务的参数配置列表信息
    // - 仅engine_type为mysql、mysql-to-pgl、mysql-to-gaussdbv5、mysql-to-gaussdbv5ha、mysql-to-dws、mysql-to-taurus、mysql-to-kafka、mysql-to-elasticsearch、mysql-to-oracle且任务状态只能为配置中、全量中、增量中、全量失败、增量失败、暂停中的实时同步任务支持。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListJobParametersResponse> listJobParameters(
        ListJobParametersRequest &request
    );
    // 查询任务列表
    //
    // 查询租户任务列表，可以根据企业项目，引擎类型，网络类型，任务状态，任务名称，任务ID进行查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListJobsResponse> listJobs(
        ListJobsRequest &request
    );
    // 查询可用链路信息
    //
    // 根据参数不同，可查询实时迁移、实时同步、实时灾备等可用链路信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListLinksResponse> listLinks(
        ListLinksRequest &request
    );
    // 查询项目标签
    //
    // 查询指定project ID下不同任务类型的所有标签集合。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectTagsResponse> listProjectTags(
        ListProjectTagsRequest &request
    );
    // 查询项目标签
    //
    // 查询租户在指定Project中实例类型的所有资源标签集合。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTagsResponse> listTags(
        ListTagsRequest &request
    );
    // 查询委托的权限列表
    //
    // 根据源库类型，目标库类型，是否自建，获取委托所需要的权限
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListsAgencyPermissionsResponse> listsAgencyPermissions(
        ListsAgencyPermissionsRequest &request
    );
    // 获取指定任务操作信息
    //
    // 获取指定任务允许、不允许、当前操作信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowActionsResponse> showActions(
        ShowActionsRequest &request
    );
    // 获取指定数据库表列信息
    //
    // 获取指定数据库表列信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowColumnInfoResultResponse> showColumnInfoResult(
        ShowColumnInfoResultRequest &request
    );
    // 查询对比策略
    //
    // 查询对比策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowComparePolicyResponse> showComparePolicy(
        ShowComparePolicyRequest &request
    );
    // 获取数据过滤校验结果
    //
    // 获取数据过滤校验结果
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDataFilteringResultResponse> showDataFilteringResult(
        ShowDataFilteringResultRequest &request
    );
    // 获取指定任务数据加工规则更新结果
    //
    // 获取指定任务数据加工规则更新结果
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDataProcessingRulesResultResponse> showDataProcessingRulesResult(
        ShowDataProcessingRulesResultRequest &request
    );
    // 查询数据加工规则
    //
    // 查询数据加工规则:包含数据库表的映射信息、列信息、数据过滤信息、附加列信息、DDL以及DML信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDataProgressResponse> showDataProgress(
        ShowDataProgressRequest &request
    );
    // 获取提交查询数据库对象信息的结果
    //
    // 获取提交查询数据库对象信息的结果。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDbObjectCollectionStatusResponse> showDbObjectCollectionStatus(
        ShowDbObjectCollectionStatusRequest &request
    );
    // 对象选择（文件导入 - 进度查询）
    //
    // 对象选择（文件导入 - 进度查询）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDbObjectTemplateProgressResponse> showDbObjectTemplateProgress(
        ShowDbObjectTemplateProgressRequest &request
    );
    // 对象选择（文件导入 - 获取导入结果）
    //
    // 对象选择（文件导入 - 获取导入结果）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDbObjectTemplateResultResponse> showDbObjectTemplateResult(
        ShowDbObjectTemplateResultRequest &request
    );
    // 查询数据库对象信息
    //
    // 查询数据库对象信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDbObjectsListResponse> showDbObjectsList(
        ShowDbObjectsListRequest &request
    );
    // 查询异常数据列表
    //
    // 查询异常数据列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDirtyDataResponse> showDirtyData(
        ShowDirtyDataRequest &request
    );
    // 查询企业项目列表
    //
    // 查询企业项目列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowEnterpriseProjectResponse> showEnterpriseProject(
        ShowEnterpriseProjectRequest &request
    );
    // 查询健康对比任务详情
    //
    // 查询健康对比任务详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowHealthCompareJobDetailResponse> showHealthCompareJobDetail(
        ShowHealthCompareJobDetailRequest &request
    );
    // 查询健康对比列表
    //
    // 查询健康对比列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowHealthCompareJobListResponse> showHealthCompareJobList(
        ShowHealthCompareJobListRequest &request
    );
    // 获取健康对比对象级对比概览
    //
    // 获取健康对比对象级对比概览。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowHealthObjectCompareJobOverviewResponse> showHealthObjectCompareJobOverview(
        ShowHealthObjectCompareJobOverviewRequest &request
    );
    // 查询增量组件详情
    //
    // 查询任务同步的增量组件的详细信息，实时同步任务，任务模式为增量或者全量+增量才支持。具体介绍可以参考：[查询同步进度](https://support.huaweicloud.com/realtimesyn-drs/drs_10_0007.html)
    // - 支持的引擎：oracle-to-gaussdbv5，oracle-to-gaussdbv5ha，gaussdbv5，gaussdbv5-to-mysql，gaussdbv5-to-gaussdbv5ha，gaussdbv5ha，gaussdbv5ha-to-gaussdbv5，gaussdbv5-to-dws，gaussdbv5ha-to-dws，gaussdbv5-to-oracle，gaussdbv5ha-to-oracle，oracle-to-dws，oracle-to-mysql
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowIncrementComponentsDetailResponse> showIncrementComponentsDetail(
        ShowIncrementComponentsDetailRequest &request
    );
    // 查询资源标签
    //
    // 查询指定实例的标签信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInstanceTagsResponse> showInstanceTags(
        ShowInstanceTagsRequest &request
    );
    // 查询任务详情
    //
    // 查询任务详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobDetailResponse> showJobDetail(
        ShowJobDetailRequest &request
    );
    // 获取任务价格信息
    //
    // 获取询价接口的参数。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMeteringResponse> showMetering(
        ShowMeteringRequest &request
    );
    // 查询监控数据
    //
    // 获取任务监控数据。
    // - Cassandra灾备不支持。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMonitorDataResponse> showMonitorData(
        ShowMonitorDataRequest &request
    );
    // 查询同步映射列表
    //
    // 查询实时同步映射关系包括对象选择时的库映射、schema映射、表映射和数据加工时的列映射。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowObjectMappingResponse> showObjectMapping(
        ShowObjectMappingRequest &request
    );
    // 获取查询数据库位点的结果
    //
    // 获取查询数据库位点的结果
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPositionResultResponse> showPositionResult(
        ShowPositionResultRequest &request
    );
    // 查询数据级流式对比列表
    //
    // 查询不同迁移对象类型的迁移进度。
    // 说明：
    // - 目前仅MySQL-&gt;MySQL、MySQL-&gt;GaussDB(for MySQL)、MongoDB-&gt;DDS、DDS-&gt;MongoDB的实时迁移和所有实时同步链路支持查看迁移明细。
    // - 在任务未结束前，不能修改源库和目标库的所有用户、密码和用户权限等。
    // - 全量、增量完成不代表任务结束，如果存在触发器和事件将会进行迁移。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProgressDataResponse> showProgressData(
        ShowProgressDataRequest &request
    );
    // 查询录制回放结果
    //
    // 获取录制回放结果数据，包括：回放基于时间维度统计信息，异常SQL及统计结果、慢SQL及统计结果
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowReplayResultsResponse> showReplayResults(
        ShowReplayResultsRequest &request
    );
    // 查询是否支持对象选择和列映射
    //
    // 查询任务支持的对象选择类型、列映射、支持搜索的对象类型等信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSupportObjectTypeResponse> showSupportObjectType(
        ShowSupportObjectTypeRequest &request
    );
    // 获取对象保存进度
    //
    // 获取对象保存进度。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowUpdateObjectSavingStatusResponse> showUpdateObjectSavingStatus(
        ShowUpdateObjectSavingStatusRequest &request
    );
    // 结束任务
    //
    // 结束租户指定ID任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopJobActionResponse> stopJobAction(
        StopJobActionRequest &request
    );
    // 同步驱动文件
    //
    // 同步驱动文件。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SyncJdbcDriverResponse> syncJdbcDriver(
        SyncJdbcDriverRequest &request
    );
    // 更新指定ID批量异步任务详情
    //
    // 更新租户指定ID批量异步任务详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateBatchAsyncJobsResponse> updateBatchAsyncJobs(
        UpdateBatchAsyncJobsRequest &request
    );
    // 修改对比策略
    //
    // 修改周期性对比的对比策略，目前仅MySQL-&gt;MySQL、MySQL-&gt;GaussDB(for MySQL)、MySQL-&gt;GaussDB(DWS)、GaussDB(for MySQL)-&gt;MySQL同步任务，MySQL-&gt;MySQL、MySQL-&gt;GaussDB(for MySQL)迁移任务，MySQL-&gt;MySQL、MySQL-&gt;GaussDB(for MySQL)、GaussDB(for MySQL)-&gt;GaussDB(for MySQL)、DDM-&gt;DDM、DDS-DDS灾备任务支持对比策略设置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateComparePolicyResponse> updateComparePolicy(
        UpdateComparePolicyRequest &request
    );
    // 更新指定任务数据加工规则
    //
    // 更新指定任务数据加工规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDataProgressResponse> updateDataProgress(
        UpdateDataProgressRequest &request
    );
    // 更新指定ID任务详情
    //
    // 更新租户指定ID任务详情。
    // 当type取值为db_object， 进行异步处理。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateJobResponse> updateJob(
        UpdateJobRequest &request
    );
    // 更新任务的参数信息
    //
    // 更新任务的参数信息。
    // - 仅engine_type为mysql、mysql-to-pgl、mysql-to-gaussdbv5、mysql-to-gaussdbv5ha、mysql-to-dws、mysql-to-taurus、mysql-to-kafka、mysql-to-elasticsearch、mysql-to-oracle且任务状态只能为配置中、全量中、增量中、全量失败、增量失败、暂停中的实时同步任务支持。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateJobConfigurationsResponse> updateJobConfigurations(
        UpdateJobConfigurationsRequest &request
    );
    // 更新增量任务启动位点
    //
    // 更新增量任务的启动位点。
    // - 仅engine_type为mysql,mysql-to-dws,mysql-to-taurus,taurus,mysql-to-oracle,taurus-to-oracle,taurus-to-mysql,mysql-to-kafka,taurus-to-kafka,mongodb-to-kafka,mongodb且为单增量实时同步任务支持。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateStartPositionResponse> updateStartPosition(
        UpdateStartPositionRequest &request
    );
    // 对象选择（文件导入 - 模板上传）
    //
    // 对象选择（文件导入 - 模板上传）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UploadDbObjectTemplateResponse> uploadDbObjectTemplate(
        UploadDbObjectTemplateRequest &request
    );
    // 上传驱动文件
    //
    // 上传驱动文件。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UploadJdbcDriverResponse> uploadJdbcDriver(
        UploadJdbcDriverRequest &request
    );
    // 任务名称校验
    //
    // 创建任务时对任务名称进行校验。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ValidateJobNameResponse> validateJobName(
        ValidateJobNameRequest &request
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

template class HUAWEICLOUD_DRS_V5_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Drs::V5::DrsClient>;

#endif // HUAWEICLOUD_SDK_DRS_V5_DrsClient_H_

