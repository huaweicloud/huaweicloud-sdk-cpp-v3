#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_CodeArtsCheckClient_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_CodeArtsCheckClient_H_

#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/codeartscheck/v2/model/CheckParametersRequest.h>
#include <huaweicloud/codeartscheck/v2/model/CheckParametersResponse.h>
#include <huaweicloud/codeartscheck/v2/model/CheckRecordRequest.h>
#include <huaweicloud/codeartscheck/v2/model/CheckRecordResponse.h>
#include <huaweicloud/codeartscheck/v2/model/CheckRulesetParametersRequest.h>
#include <huaweicloud/codeartscheck/v2/model/CheckRulesetParametersResponse.h>
#include <huaweicloud/codeartscheck/v2/model/ConfigTaskParameterBody.h>
#include <huaweicloud/codeartscheck/v2/model/CreateRulesetRequest.h>
#include <huaweicloud/codeartscheck/v2/model/CreateRulesetResponse.h>
#include <huaweicloud/codeartscheck/v2/model/CreateTaskRequest.h>
#include <huaweicloud/codeartscheck/v2/model/CreateTaskRequestV2.h>
#include <huaweicloud/codeartscheck/v2/model/CreateTaskResponse.h>
#include <huaweicloud/codeartscheck/v2/model/DeleteRulesetRequest.h>
#include <huaweicloud/codeartscheck/v2/model/DeleteRulesetResponse.h>
#include <huaweicloud/codeartscheck/v2/model/DeleteTaskRequest.h>
#include <huaweicloud/codeartscheck/v2/model/DeleteTaskResponse.h>
#include <huaweicloud/codeartscheck/v2/model/ListRulesRequest.h>
#include <huaweicloud/codeartscheck/v2/model/ListRulesResponse.h>
#include <huaweicloud/codeartscheck/v2/model/ListRulesetsRequest.h>
#include <huaweicloud/codeartscheck/v2/model/ListRulesetsResponse.h>
#include <huaweicloud/codeartscheck/v2/model/ListTaskParameterRequest.h>
#include <huaweicloud/codeartscheck/v2/model/ListTaskParameterResponse.h>
#include <huaweicloud/codeartscheck/v2/model/ListTaskRulesetRequest.h>
#include <huaweicloud/codeartscheck/v2/model/ListTaskRulesetResponse.h>
#include <huaweicloud/codeartscheck/v2/model/ListTemplateRulesRequest.h>
#include <huaweicloud/codeartscheck/v2/model/ListTemplateRulesResponse.h>
#include <huaweicloud/codeartscheck/v2/model/Ruleset.h>
#include <huaweicloud/codeartscheck/v2/model/RunRequestV2.h>
#include <huaweicloud/codeartscheck/v2/model/RunTaskRequest.h>
#include <huaweicloud/codeartscheck/v2/model/RunTaskResponse.h>
#include <huaweicloud/codeartscheck/v2/model/SetDefaulTemplateRequest.h>
#include <huaweicloud/codeartscheck/v2/model/SetDefaulTemplateResponse.h>
#include <huaweicloud/codeartscheck/v2/model/ShowProgressDetailRequest.h>
#include <huaweicloud/codeartscheck/v2/model/ShowProgressDetailResponse.h>
#include <huaweicloud/codeartscheck/v2/model/ShowTaskCmetricsRequest.h>
#include <huaweicloud/codeartscheck/v2/model/ShowTaskCmetricsResponse.h>
#include <huaweicloud/codeartscheck/v2/model/ShowTaskDefectsRequest.h>
#include <huaweicloud/codeartscheck/v2/model/ShowTaskDefectsResponse.h>
#include <huaweicloud/codeartscheck/v2/model/ShowTaskDefectsStatisticRequest.h>
#include <huaweicloud/codeartscheck/v2/model/ShowTaskDefectsStatisticResponse.h>
#include <huaweicloud/codeartscheck/v2/model/ShowTaskDetailRequest.h>
#include <huaweicloud/codeartscheck/v2/model/ShowTaskDetailResponse.h>
#include <huaweicloud/codeartscheck/v2/model/ShowTaskListByProjectIdRequest.h>
#include <huaweicloud/codeartscheck/v2/model/ShowTaskListByProjectIdResponse.h>
#include <huaweicloud/codeartscheck/v2/model/ShowTaskPathTreeRequest.h>
#include <huaweicloud/codeartscheck/v2/model/ShowTaskPathTreeResponse.h>
#include <huaweicloud/codeartscheck/v2/model/ShowTaskSettingsRequest.h>
#include <huaweicloud/codeartscheck/v2/model/ShowTaskSettingsResponse.h>
#include <huaweicloud/codeartscheck/v2/model/ShowTasklogRequest.h>
#include <huaweicloud/codeartscheck/v2/model/ShowTasklogResponse.h>
#include <huaweicloud/codeartscheck/v2/model/ShowTasksRulesetsRequest.h>
#include <huaweicloud/codeartscheck/v2/model/ShowTasksRulesetsResponse.h>
#include <huaweicloud/codeartscheck/v2/model/StopTaskByIdRequest.h>
#include <huaweicloud/codeartscheck/v2/model/StopTaskByIdResponse.h>
#include <huaweicloud/codeartscheck/v2/model/TaskCheckParamters.h>
#include <huaweicloud/codeartscheck/v2/model/TaskRulesetInfo.h>
#include <huaweicloud/codeartscheck/v2/model/UpdateDefectRequestBody.h>
#include <huaweicloud/codeartscheck/v2/model/UpdateDefectStatusRequest.h>
#include <huaweicloud/codeartscheck/v2/model/UpdateDefectStatusResponse.h>
#include <huaweicloud/codeartscheck/v2/model/UpdateIgnorePathRequest.h>
#include <huaweicloud/codeartscheck/v2/model/UpdateIgnorePathRequestBody.h>
#include <huaweicloud/codeartscheck/v2/model/UpdateIgnorePathResponse.h>
#include <huaweicloud/codeartscheck/v2/model/UpdateTaskRulesetItem.h>
#include <huaweicloud/codeartscheck/v2/model/UpdateTaskRulesetRequest.h>
#include <huaweicloud/codeartscheck/v2/model/UpdateTaskRulesetResponse.h>
#include <huaweicloud/codeartscheck/v2/model/UpdateTaskSettingsRequest.h>
#include <huaweicloud/codeartscheck/v2/model/UpdateTaskSettingsRequestBody.h>
#include <huaweicloud/codeartscheck/v2/model/UpdateTaskSettingsResponse.h>
#include <string>
#include <vector>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Codeartscheck::V2::Model;

class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  CodeArtsCheckClient : public Client
{
public:

    CodeArtsCheckClient();

    virtual ~CodeArtsCheckClient();

    static ClientBuilder<CodeArtsCheckClient> newBuilder();

    // 查询任务规则集的检查参数
    //
    // 查询任务规则集的检查参数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckParametersResponse> checkParameters(
        CheckParametersRequest &request
    );
    // 历史扫描结果查询
    //
    // 提供每次扫描的问题数量统计
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckRecordResponse> checkRecord(
        CheckRecordRequest &request
    );
    // 查询任务规则集的检查参数
    //
    // 查询任务规则集的检查参数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckRulesetParametersResponse> checkRulesetParameters(
        CheckRulesetParametersRequest &request
    );
    // 创建自定义规则集
    //
    // 可根据需求灵活的组合规则。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRulesetResponse> createRuleset(
        CreateRulesetRequest &request
    );
    // 新建检查任务
    //
    // 新建检查任务但是不执行。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTaskResponse> createTask(
        CreateTaskRequest &request
    );
    // 删除自定义规则集
    //
    // 删除自定义规则集，正在使用中的或默认规则集不能删除
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteRulesetResponse> deleteRuleset(
        DeleteRulesetRequest &request
    );
    // 删除检查任务
    //
    // 删除检查任务，执行中的任务删除无法再查看
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTaskResponse> deleteTask(
        DeleteTaskRequest &request
    );
    // 获取规则列表接口
    //
    // 根据语言、问题级别等条件查询规则列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRulesResponse> listRules(
        ListRulesRequest &request
    );
    // 查询规则集列表
    //
    // 根据项目ID、语言等条件查询规则集列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRulesetsResponse> listRulesets(
        ListRulesetsRequest &request
    );
    // 任务配置检查参数
    //
    // 任务配置检查参数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTaskParameterResponse> listTaskParameter(
        ListTaskParameterRequest &request
    );
    // 查询任务的已选规则集列表
    //
    // 查询任务的已选规则集列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTaskRulesetResponse> listTaskRuleset(
        ListTaskRulesetRequest &request
    );
    // 查看规则集的规则列表
    //
    // 根据项目ID、规则集ID等条件查询规则列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTemplateRulesResponse> listTemplateRules(
        ListTemplateRulesRequest &request
    );
    // 执行检查任务
    //
    // 执行检查任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RunTaskResponse> runTask(
        RunTaskRequest &request
    );
    // 设置每个项目对应语言的默认规则集配置
    //
    // 设置每个项目对应语言的默认规则集配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetDefaulTemplateResponse> setDefaulTemplate(
        SetDefaulTemplateRequest &request
    );
    // 查询任务执行状态
    //
    // 根据任务ID查询任务执行状态。任务状态：0表示检查中，1表示检查失败，2表示检查成功，3表示任务中止。只有正在检查中才有进度的详细信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProgressDetailResponse> showProgressDetail(
        ShowProgressDetailRequest &request
    );
    // 查询cmertrics缺陷概要
    //
    // 根据检查任务ID查询cmertrics缺陷概要。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTaskCmetricsResponse> showTaskCmetrics(
        ShowTaskCmetricsRequest &request
    );
    // 查询缺陷详情
    //
    // 根据检查任务ID分页查询缺陷结果详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTaskDefectsResponse> showTaskDefects(
        ShowTaskDefectsRequest &request
    );
    // 查询缺陷详情的统计
    //
    // 根据检查任务ID查询缺陷详情的统计
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTaskDefectsStatisticResponse> showTaskDefectsStatistic(
        ShowTaskDefectsStatisticRequest &request
    );
    // 查询缺陷概要
    //
    // 根据检查任务ID查询缺陷结果的概要。包括问题概述、问题状态、圈复杂度、代码重复率等。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTaskDetailResponse> showTaskDetail(
        ShowTaskDetailRequest &request
    );
    // 查询任务列表
    //
    // 根据DEVCLOUD_PROJECT_UUID查询该项目下的任务列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTaskListByProjectIdResponse> showTaskListByProjectId(
        ShowTaskListByProjectIdRequest &request
    );
    // 获取任务的目录树
    //
    // 获取任务的目录树
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTaskPathTreeResponse> showTaskPathTree(
        ShowTaskPathTreeRequest &request
    );
    // 查询任务的高级选项
    //
    // 查询任务的高级选项
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTaskSettingsResponse> showTaskSettings(
        ShowTaskSettingsRequest &request
    );
    // 查询任务检查失败日志
    //
    // 查询任务检查失败日志，不传execute_id则查询最近一次的检查日志
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTasklogResponse> showTasklog(
        ShowTasklogRequest &request
    );
    // 查询任务的已选规则集列表
    //
    // 查询任务的已选规则集列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTasksRulesetsResponse> showTasksRulesets(
        ShowTasksRulesetsRequest &request
    );
    // 终止检查任务
    //
    // 根据任务ID终止检查任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopTaskByIdResponse> stopTaskById(
        StopTaskByIdRequest &request
    );
    // 修改缺陷状态
    //
    // 修改检查出的缺陷的状态为已解决、已忽略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDefectStatusResponse> updateDefectStatus(
        UpdateDefectStatusRequest &request
    );
    // 任务配置屏蔽目录
    //
    // 任务配置屏蔽目录
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateIgnorePathResponse> updateIgnorePath(
        UpdateIgnorePathRequest &request
    );
    // 修改任务规则集
    //
    // 修改任务规则集。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateTaskRulesetResponse> updateTaskRuleset(
        UpdateTaskRulesetRequest &request
    );
    // 任务配置高级选项
    //
    // 任务配置高级选项，如自定义镜像
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateTaskSettingsResponse> updateTaskSettings(
        UpdateTaskSettingsRequest &request
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

template class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Codeartscheck::V2::CodeArtsCheckClient>;

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_CodeArtsCheckClient_H_

