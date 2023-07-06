#ifndef HUAWEICLOUD_SDK_DRS_V5_DrsClient_H_
#define HUAWEICLOUD_SDK_DRS_V5_DrsClient_H_

#include <huaweicloud/drs/v5/DrsExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/drs/v5/model/BatchAsyncCreateJobReq.h>
#include <huaweicloud/drs/v5/model/BatchAsyncUpdateJobReq.h>
#include <huaweicloud/drs/v5/model/BatchCreateJobsAsyncRequest.h>
#include <huaweicloud/drs/v5/model/BatchCreateJobsAsyncResponse.h>
#include <huaweicloud/drs/v5/model/BatchDeleteJobReq.h>
#include <huaweicloud/drs/v5/model/BatchDeleteJobsByIdRequest.h>
#include <huaweicloud/drs/v5/model/BatchDeleteJobsByIdResponse.h>
#include <huaweicloud/drs/v5/model/BatchExecuteJobActionsRequest.h>
#include <huaweicloud/drs/v5/model/BatchExecuteJobActionsResponse.h>
#include <huaweicloud/drs/v5/model/BatchJobActionReq.h>
#include <huaweicloud/drs/v5/model/CollectDbObjectsAsyncRequest.h>
#include <huaweicloud/drs/v5/model/CollectDbObjectsAsyncResponse.h>
#include <huaweicloud/drs/v5/model/CommitAsyncJobRequest.h>
#include <huaweicloud/drs/v5/model/CommitAsyncJobResponse.h>
#include <huaweicloud/drs/v5/model/CreateJobRequest.h>
#include <huaweicloud/drs/v5/model/CreateJobResponse.h>
#include <huaweicloud/drs/v5/model/DeleteJobRequest.h>
#include <huaweicloud/drs/v5/model/DeleteJobResponse.h>
#include <huaweicloud/drs/v5/model/DownloadDbObjectTemplateRequest.h>
#include <huaweicloud/drs/v5/model/DownloadDbObjectTemplateResponse.h>
#include <huaweicloud/drs/v5/model/ExecuteJobActionRequest.h>
#include <huaweicloud/drs/v5/model/ExecuteJobActionResponse.h>
#include <huaweicloud/core/utils/HttpContent.h>
#include <huaweicloud/drs/v5/model/JobActionReq.h>
#include <huaweicloud/drs/v5/model/ListAsyncJobDetailRequest.h>
#include <huaweicloud/drs/v5/model/ListAsyncJobDetailResponse.h>
#include <huaweicloud/drs/v5/model/ListAsyncJobsRequest.h>
#include <huaweicloud/drs/v5/model/ListAsyncJobsResponse.h>
#include <huaweicloud/drs/v5/model/ListDbObjectsRequest.h>
#include <huaweicloud/drs/v5/model/ListDbObjectsResponse.h>
#include <huaweicloud/drs/v5/model/ListJobsRequest.h>
#include <huaweicloud/drs/v5/model/ListJobsResponse.h>
#include <huaweicloud/drs/v5/model/ListLinksRequest.h>
#include <huaweicloud/drs/v5/model/ListLinksResponse.h>
#include <huaweicloud/drs/v5/model/ShowDbObjectCollectionStatusRequest.h>
#include <huaweicloud/drs/v5/model/ShowDbObjectCollectionStatusResponse.h>
#include <huaweicloud/drs/v5/model/ShowDbObjectTemplateProgressRequest.h>
#include <huaweicloud/drs/v5/model/ShowDbObjectTemplateProgressResponse.h>
#include <huaweicloud/drs/v5/model/ShowDbObjectTemplateResultRequest.h>
#include <huaweicloud/drs/v5/model/ShowDbObjectTemplateResultResponse.h>
#include <huaweicloud/drs/v5/model/ShowJobDetailRequest.h>
#include <huaweicloud/drs/v5/model/ShowJobDetailResponse.h>
#include <huaweicloud/drs/v5/model/ShowUpdateObjectSavingStatusRequest.h>
#include <huaweicloud/drs/v5/model/ShowUpdateObjectSavingStatusResponse.h>
#include <huaweicloud/drs/v5/model/SingleCreateJobReq.h>
#include <huaweicloud/drs/v5/model/SingleUpdateJobReq.h>
#include <huaweicloud/drs/v5/model/UpdateBatchAsyncJobsRequest.h>
#include <huaweicloud/drs/v5/model/UpdateBatchAsyncJobsResponse.h>
#include <huaweicloud/drs/v5/model/UpdateJobRequest.h>
#include <huaweicloud/drs/v5/model/UpdateJobResponse.h>
#include <huaweicloud/drs/v5/model/UploadDbObjectTemplateRequest.h>
#include <huaweicloud/drs/v5/model/UploadDbObjectTemplateRequestBody.h>
#include <huaweicloud/drs/v5/model/UploadDbObjectTemplateResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
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
    // 批量删除任务
    //
    // 批量删除租户指定ID任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteJobsByIdResponse> batchDeleteJobsById(
        BatchDeleteJobsByIdRequest &request
    );
    // 批量操作指定ID任务
    //
    // 批量操作租户指定ID任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchExecuteJobActionsResponse> batchExecuteJobActions(
        BatchExecuteJobActionsRequest &request
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
    // 提交批量创建异步任务
    //
    // 提交批量创建异步任务，当批量异步任务创建或更新参数后，系统会自动开始进行参数校验，待所有任务成功完成参数校验后并且无报错时，可调用此接口开始创建DRS任务实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CommitAsyncJobResponse> commitAsyncJob(
        CommitAsyncJobRequest &request
    );
    // 创建任务
    //
    // 创建单个任务，根据请求参数不同，可以创建单个实时迁移、实时同步、实时灾备等任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateJobResponse> createJob(
        CreateJobRequest &request
    );
    // 删除指定ID任务
    //
    // 删除租户指定ID任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteJobResponse> deleteJob(
        DeleteJobRequest &request
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
    // 查询可用链路信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListLinksResponse> listLinks(
        ListLinksRequest &request
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
    // 查询任务详情
    //
    // 查询任务详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobDetailResponse> showJobDetail(
        ShowJobDetailRequest &request
    );
    // 获取对象保存进度
    //
    // 获取对象保存进度。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowUpdateObjectSavingStatusResponse> showUpdateObjectSavingStatus(
        ShowUpdateObjectSavingStatusRequest &request
    );
    // 更新指定ID批量异步任务详情
    //
    // 更新租户指定ID批量异步任务详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateBatchAsyncJobsResponse> updateBatchAsyncJobs(
        UpdateBatchAsyncJobsRequest &request
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
    // 对象选择（文件导入 - 模板上传）
    //
    // 对象选择（文件导入 - 模板上传）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UploadDbObjectTemplateResponse> uploadDbObjectTemplate(
        UploadDbObjectTemplateRequest &request
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

