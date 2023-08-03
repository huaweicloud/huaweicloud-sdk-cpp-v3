#ifndef HUAWEICLOUD_SDK_DRS_V3_DrsClient_H_
#define HUAWEICLOUD_SDK_DRS_V3_DrsClient_H_

#include <huaweicloud/drs/v3/DrsExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/drs/v3/model/BatchChangeDataRequest.h>
#include <huaweicloud/drs/v3/model/BatchChangeDataResponse.h>
#include <huaweicloud/drs/v3/model/BatchCheckJobsRequest.h>
#include <huaweicloud/drs/v3/model/BatchCheckJobsResponse.h>
#include <huaweicloud/drs/v3/model/BatchCheckResultsRequest.h>
#include <huaweicloud/drs/v3/model/BatchCheckResultsResponse.h>
#include <huaweicloud/drs/v3/model/BatchCreateJobReq.h>
#include <huaweicloud/drs/v3/model/BatchCreateJobsRequest.h>
#include <huaweicloud/drs/v3/model/BatchCreateJobsResponse.h>
#include <huaweicloud/drs/v3/model/BatchDataTransformationReq.h>
#include <huaweicloud/drs/v3/model/BatchDeleteJobReq.h>
#include <huaweicloud/drs/v3/model/BatchDeleteJobsRequest.h>
#include <huaweicloud/drs/v3/model/BatchDeleteJobsResponse.h>
#include <huaweicloud/drs/v3/model/BatchImportSmnInfoReq.h>
#include <huaweicloud/drs/v3/model/BatchLimitSpeedReq.h>
#include <huaweicloud/drs/v3/model/BatchListJobDetailsRequest.h>
#include <huaweicloud/drs/v3/model/BatchListJobDetailsResponse.h>
#include <huaweicloud/drs/v3/model/BatchListJobStatusRequest.h>
#include <huaweicloud/drs/v3/model/BatchListJobStatusResponse.h>
#include <huaweicloud/drs/v3/model/BatchListProgressesRequest.h>
#include <huaweicloud/drs/v3/model/BatchListProgressesResponse.h>
#include <huaweicloud/drs/v3/model/BatchListRposAndRtosRequest.h>
#include <huaweicloud/drs/v3/model/BatchListRposAndRtosResponse.h>
#include <huaweicloud/drs/v3/model/BatchListStructDetailRequest.h>
#include <huaweicloud/drs/v3/model/BatchListStructDetailResponse.h>
#include <huaweicloud/drs/v3/model/BatchListStructProcessRequest.h>
#include <huaweicloud/drs/v3/model/BatchListStructProcessResponse.h>
#include <huaweicloud/drs/v3/model/BatchModifyJobReq.h>
#include <huaweicloud/drs/v3/model/BatchModifyPwdReq.h>
#include <huaweicloud/drs/v3/model/BatchPauseJobReq.h>
#include <huaweicloud/drs/v3/model/BatchPrecheckReq.h>
#include <huaweicloud/drs/v3/model/BatchQueryJobReq.h>
#include <huaweicloud/drs/v3/model/BatchQueryJobReqPage.h>
#include <huaweicloud/drs/v3/model/BatchQueryParamReq.h>
#include <huaweicloud/drs/v3/model/BatchQueryPrecheckResultReq.h>
#include <huaweicloud/drs/v3/model/BatchQueryProgressReq.h>
#include <huaweicloud/drs/v3/model/BatchQueryRpoAndRtoReq.h>
#include <huaweicloud/drs/v3/model/BatchReplaceDefinerReq.h>
#include <huaweicloud/drs/v3/model/BatchResetPasswordRequest.h>
#include <huaweicloud/drs/v3/model/BatchResetPasswordResponse.h>
#include <huaweicloud/drs/v3/model/BatchRestoreTaskRequest.h>
#include <huaweicloud/drs/v3/model/BatchRestoreTaskResponse.h>
#include <huaweicloud/drs/v3/model/BatchRetryReq.h>
#include <huaweicloud/drs/v3/model/BatchSetDefinerRequest.h>
#include <huaweicloud/drs/v3/model/BatchSetDefinerResponse.h>
#include <huaweicloud/drs/v3/model/BatchSetObjectsRequest.h>
#include <huaweicloud/drs/v3/model/BatchSetObjectsResponse.h>
#include <huaweicloud/drs/v3/model/BatchSetPolicyRequest.h>
#include <huaweicloud/drs/v3/model/BatchSetPolicyResponse.h>
#include <huaweicloud/drs/v3/model/BatchSetSmnRequest.h>
#include <huaweicloud/drs/v3/model/BatchSetSmnResponse.h>
#include <huaweicloud/drs/v3/model/BatchSetSpeedRequest.h>
#include <huaweicloud/drs/v3/model/BatchSetSpeedResponse.h>
#include <huaweicloud/drs/v3/model/BatchSetupSyncPolicyReq.h>
#include <huaweicloud/drs/v3/model/BatchShowParamsRequest.h>
#include <huaweicloud/drs/v3/model/BatchShowParamsResponse.h>
#include <huaweicloud/drs/v3/model/BatchSpecialTestConnectionReq.h>
#include <huaweicloud/drs/v3/model/BatchStartJobReq.h>
#include <huaweicloud/drs/v3/model/BatchStartJobsRequest.h>
#include <huaweicloud/drs/v3/model/BatchStartJobsResponse.h>
#include <huaweicloud/drs/v3/model/BatchStopJobsRequest.h>
#include <huaweicloud/drs/v3/model/BatchStopJobsResponse.h>
#include <huaweicloud/drs/v3/model/BatchSwitchoverReq.h>
#include <huaweicloud/drs/v3/model/BatchSwitchoverRequest.h>
#include <huaweicloud/drs/v3/model/BatchSwitchoverResponse.h>
#include <huaweicloud/drs/v3/model/BatchTestConnectionReq.h>
#include <huaweicloud/drs/v3/model/BatchUpdateDatabaseObjectReq.h>
#include <huaweicloud/drs/v3/model/BatchUpdateJobRequest.h>
#include <huaweicloud/drs/v3/model/BatchUpdateJobResponse.h>
#include <huaweicloud/drs/v3/model/BatchUpdateSrcUserReq.h>
#include <huaweicloud/drs/v3/model/BatchUpdateUserRequest.h>
#include <huaweicloud/drs/v3/model/BatchUpdateUserResponse.h>
#include <huaweicloud/drs/v3/model/BatchValidateClustersConnectionsRequest.h>
#include <huaweicloud/drs/v3/model/BatchValidateClustersConnectionsResponse.h>
#include <huaweicloud/drs/v3/model/BatchValidateConnectionsRequest.h>
#include <huaweicloud/drs/v3/model/BatchValidateConnectionsResponse.h>
#include <huaweicloud/drs/v3/model/CreateCompareTaskReq.h>
#include <huaweicloud/drs/v3/model/CreateCompareTaskRequest.h>
#include <huaweicloud/drs/v3/model/CreateCompareTaskResponse.h>
#include <huaweicloud/drs/v3/model/ListAvailableZoneRequest.h>
#include <huaweicloud/drs/v3/model/ListAvailableZoneResponse.h>
#include <huaweicloud/drs/v3/model/ListCompareResultRequest.h>
#include <huaweicloud/drs/v3/model/ListCompareResultResponse.h>
#include <huaweicloud/drs/v3/model/ListUsersRequest.h>
#include <huaweicloud/drs/v3/model/ListUsersResponse.h>
#include <huaweicloud/drs/v3/model/ModifyTargetParamsReq.h>
#include <huaweicloud/drs/v3/model/ModifyTuningParamsReq.h>
#include <huaweicloud/drs/v3/model/QueryAvailableNodeTypeReq.h>
#include <huaweicloud/drs/v3/model/QueryCompareResultReq.h>
#include <huaweicloud/drs/v3/model/QueryJobsReq.h>
#include <huaweicloud/drs/v3/model/ShowJobListRequest.h>
#include <huaweicloud/drs/v3/model/ShowJobListResponse.h>
#include <huaweicloud/drs/v3/model/ShowMonitoringDataRequest.h>
#include <huaweicloud/drs/v3/model/ShowMonitoringDataResponse.h>
#include <huaweicloud/drs/v3/model/ShowQuotasRequest.h>
#include <huaweicloud/drs/v3/model/ShowQuotasResponse.h>
#include <huaweicloud/drs/v3/model/UpdateParamsRequest.h>
#include <huaweicloud/drs/v3/model/UpdateParamsResponse.h>
#include <huaweicloud/drs/v3/model/UpdateTuningParamsRequest.h>
#include <huaweicloud/drs/v3/model/UpdateTuningParamsResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Drs::V3::Model;

class HUAWEICLOUD_DRS_V3_EXPORT  DrsClient : public Client
{
public:

    DrsClient();

    virtual ~DrsClient();

    static ClientBuilder<DrsClient> newBuilder();

    // 批量数据加工
    //
    // 数据复制服务支持对同步的对象进行加工，即可以为选择的对象添加规则。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchChangeDataResponse> batchChangeData(
        BatchChangeDataRequest &request
    );
    // 批量预检查
    //
    // 批量预检查，校验是否可进行迁移。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCheckJobsResponse> batchCheckJobs(
        BatchCheckJobsRequest &request
    );
    // 批量查询预检查结果
    //
    // 批量查询任务的预检查结果。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCheckResultsResponse> batchCheckResults(
        BatchCheckResultsRequest &request
    );
    // 批量创建任务
    //
    // 根据请求参数不同，可以批量创建实时迁移、实时同步、实时灾备任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCreateJobsResponse> batchCreateJobs(
        BatchCreateJobsRequest &request
    );
    // 批量结束任务或删除任务
    //
    // 批量结束任务或删除实时迁移、实时同步、实时灾备任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteJobsResponse> batchDeleteJobs(
        BatchDeleteJobsRequest &request
    );
    // 批量查询任务详情
    //
    // 根据任务ID批量查询任务详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchListJobDetailsResponse> batchListJobDetails(
        BatchListJobDetailsRequest &request
    );
    // 批量查询任务状态
    //
    // 根据任务ID批量查询任务状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchListJobStatusResponse> batchListJobStatus(
        BatchListJobStatusRequest &request
    );
    // 批量查询任务进度
    //
    // 根据任务ID批量查询全量进度、增量时延信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchListProgressesResponse> batchListProgresses(
        BatchListProgressesRequest &request
    );
    // 批量查询RPO和RTO
    //
    // 批量查询RPO和RTO。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchListRposAndRtosResponse> batchListRposAndRtos(
        BatchListRposAndRtosRequest &request
    );
    // 批量查询灾备初始化对象详情
    //
    // 根据任务ID批量查询灾备初始化对象详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchListStructDetailResponse> batchListStructDetail(
        BatchListStructDetailRequest &request
    );
    // 批量查询灾备初始化进度
    //
    // 根据任务ID批量查询灾备初始化进度，虚拟id不支持查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchListStructProcessResponse> batchListStructProcess(
        BatchListStructProcessRequest &request
    );
    // 批量修改源库/目标库密码
    //
    // 任务启动之后需要修改源库/目标库密码时调用此接口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchResetPasswordResponse> batchResetPassword(
        BatchResetPasswordRequest &request
    );
    // 批量续传/重试
    //
    // 在迁移过程中由于不确定因素导致迁移任务失败，可通过重试功能，重新提交迁移任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchRestoreTaskResponse> batchRestoreTask(
        BatchRestoreTaskRequest &request
    );
    // 批量设置definer
    //
    // 批量设置Definer迁移是否迁移到到该用户下。
    // - 选择是：迁移后，所有源数据库对象的Definer都会迁移至该用户下，其他用户需要授权后才具有数据库对象权限。
    // - 选择否：迁移后，将保持源数据库对象Definer定义不变，选择此选项，需要配合下一步用户权限迁移功能，将源数据库的用户全部迁移，这样才能保持源数据库的权限体系完全不变。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchSetDefinerResponse> batchSetDefiner(
        BatchSetDefinerRequest &request
    );
    // 批量数据库对象选择
    //
    // 迁移之前，选择需要迁移的数据库或者表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchSetObjectsResponse> batchSetObjects(
        BatchSetObjectsRequest &request
    );
    // 批量设置同步策略
    //
    // - 批量设置同步策略，包括冲突策略、过滤DROP Datase、对象同步范围。
    // - 设置kafka同步策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchSetPolicyResponse> batchSetPolicy(
        BatchSetPolicyRequest &request
    );
    // 批量配置异常通知
    //
    // 批量设置异常通知，已结束的任务不支持设置。
    // - 支持选择已有的SMN主题和手动输入手机号、邮箱两种方式，具体根据自己使用情况选择
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchSetSmnResponse> batchSetSmn(
        BatchSetSmnRequest &request
    );
    // 批量设置任务限速
    //
    // 批量设置任务限速，任务创建成功后默认不限速。
    // - 限速：自定义的最大迁移速度，迁移过程中的迁移速度将不会超过该速度。
    // - 不限速：对迁移速度不进行限制，通常会最大化使用源数据库的出口带宽。该流速模式同时会对源数据库造成读消耗，消耗取决于源数据库的出口带宽。比如：源数据库的出口带宽为100MB/s，假设高速模式使用了80%带宽，则迁移对源数据库将造成80MB/s的读操作IO消耗。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchSetSpeedResponse> batchSetSpeed(
        BatchSetSpeedRequest &request
    );
    // 批量获取数据库参数
    //
    // 在进行数据库迁移时，为了确保迁移成功后业务应用的使用不受影响，数据复制服务提供了参数对比功能帮助您进行源库和目标库参数一致性对比，此接口可以获取源库和目标库的数据库参数。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchShowParamsResponse> batchShowParams(
        BatchShowParamsRequest &request
    );
    // 批量启动任务
    //
    // 批量启动实时迁移、同步、灾备任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchStartJobsResponse> batchStartJobs(
        BatchStartJobsRequest &request
    );
    // 批量暂停任务
    //
    // 批量暂停任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchStopJobsResponse> batchStopJobs(
        BatchStopJobsRequest &request
    );
    // 批量主备倒换
    //
    // 批量主备倒换。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchSwitchoverResponse> batchSwitchover(
        BatchSwitchoverRequest &request
    );
    // 批量修改任务
    //
    // 批量修改任务名称或描述，设置异常通知信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchUpdateJobResponse> batchUpdateJob(
        BatchUpdateJobRequest &request
    );
    // 批量更新迁移用户信息
    //
    // 数据库的迁移过程中，迁移用户需要进行单独处理，该接口可以批量设置需要迁移的用户和角色。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchUpdateUserResponse> batchUpdateUser(
        BatchUpdateUserRequest &request
    );
    // 批量测试连接-集群模式
    //
    // - 批量测试连接（集群模式）。
    // - 主备任务测试连接
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchValidateClustersConnectionsResponse> batchValidateClustersConnections(
        BatchValidateClustersConnectionsRequest &request
    );
    // 批量测试连接
    //
    // 批量测试连接。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchValidateConnectionsResponse> batchValidateConnections(
        BatchValidateConnectionsRequest &request
    );
    // 创建对比任务
    //
    // 创建对比任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateCompareTaskResponse> createCompareTask(
        CreateCompareTaskRequest &request
    );
    // 查询规格未售罄的可用区
    //
    // 查询规格未售罄的可用区
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAvailableZoneResponse> listAvailableZone(
        ListAvailableZoneRequest &request
    );
    // 查询对比结果
    //
    // 查询对比结果。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListCompareResultResponse> listCompareResult(
        ListCompareResultRequest &request
    );
    // 获取源库迁移用户列表
    //
    // 数据库的迁移过程中，迁移用户需要进行单独处理，该接口可以查询源库的用户信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListUsersResponse> listUsers(
        ListUsersRequest &request
    );
    // 查询租户任务列表
    //
    // 查询租户任务列表，可以根据引擎类型，网络类型，任务状态，任务名称，任务ID进行查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobListResponse> showJobList(
        ShowJobListRequest &request
    );
    // 查询容灾监控数据
    //
    // 根据任务ID查询容灾监控数据。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMonitoringDataResponse> showMonitoringData(
        ShowMonitoringDataRequest &request
    );
    // 查询配额
    //
    // 查询单租户在某一项目下DRS服务下的配额信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowQuotasResponse> showQuotas(
        ShowQuotasRequest &request
    );
    // 修改数据库参数
    //
    // 修改数据库参数。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateParamsResponse> updateParams(
        UpdateParamsRequest &request
    );
    // 高级设置
    //
    // 修改调优参数的值。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateTuningParamsResponse> updateTuningParams(
        UpdateTuningParamsRequest &request
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

template class HUAWEICLOUD_DRS_V3_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Drs::V3::DrsClient>;

#endif // HUAWEICLOUD_SDK_DRS_V3_DrsClient_H_

