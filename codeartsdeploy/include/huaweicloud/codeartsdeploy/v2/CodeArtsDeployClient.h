#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_CodeArtsDeployClient_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_CodeArtsDeployClient_H_

#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/codeartsdeploy/v2/model/CreateDeployTaskByTemplateRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/CreateDeployTaskByTemplateResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeleteDeployTaskRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeleteDeployTaskResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/EnvExecutionBody.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListDeployTaskHistoryByDateRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListDeployTaskHistoryByDateResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListDeployTasksRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListDeployTasksResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/ShowDeployTaskDetailRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ShowDeployTaskDetailResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/StartDeployTaskRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/StartDeployTaskResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/TemplateTaskRequestBody.h>
#include <string>

#include <huaweicloud/codeartsdeploy/v2/model/CreateDeploymentHostRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/CreateDeploymentHostResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeleteDeploymentHostRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeleteDeploymentHostResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeploymentHost.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeploymentHostRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListHostsRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListHostsResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/ShowDeploymentHostDetailRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ShowDeploymentHostDetailResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/UpdateDeploymentHostRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/UpdateDeploymentHostResponse.h>
#include <string>

#include <huaweicloud/codeartsdeploy/v2/model/CreateDeploymentGroupRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/CreateDeploymentGroupResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeleteDeploymentGroupRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeleteDeploymentGroupResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeploymentGroup.h>
#include <huaweicloud/codeartsdeploy/v2/model/DeploymentGroupUpdateRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListHostGroupsRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListHostGroupsResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/ShowDeploymentGroupDetailRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ShowDeploymentGroupDetailResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/UpdateDeploymentGroupRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/UpdateDeploymentGroupResponse.h>
#include <string>

#include <huaweicloud/codeartsdeploy/v2/model/ListTaskSuccessRateRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ListTaskSuccessRateResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/ShowProjectSuccessRateRequest.h>
#include <huaweicloud/codeartsdeploy/v2/model/ShowProjectSuccessRateResponse.h>
#include <huaweicloud/codeartsdeploy/v2/model/TasksSuccessRateQuery.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Codeartsdeploy::V2::Model;

class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  CodeArtsDeployClient : public Client
{
public:

    CodeArtsDeployClient();

    virtual ~CodeArtsDeployClient();

    static ClientBuilder<CodeArtsDeployClient> newBuilder();

    // 通过模板新建应用
    //
    // 通过模板新建应用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDeployTaskByTemplateResponse> createDeployTaskByTemplate(
        CreateDeployTaskByTemplateRequest &request
    );
    // 删除应用
    //
    // 根据部署任务id删除应用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDeployTaskResponse> deleteDeployTask(
        DeleteDeployTaskRequest &request
    );
    // 根据开始时间和结束时间查询项目下指定应用的历史部署记录列表
    //
    // 根据开始时间和结束时间查询项目下指定应用的历史部署记录列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDeployTaskHistoryByDateResponse> listDeployTaskHistoryByDate(
        ListDeployTaskHistoryByDateRequest &request
    );
    // 获取应用列表
    //
    // 查询项目下应用列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDeployTasksResponse> listDeployTasks(
        ListDeployTasksRequest &request
    );
    // 获取应用详情
    //
    // 根据部署任务id获取应用详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDeployTaskDetailResponse> showDeployTaskDetail(
        ShowDeployTaskDetailRequest &request
    );
    // 部署应用
    //
    // 根据部署任务id部署应用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartDeployTaskResponse> startDeployTask(
        StartDeployTaskRequest &request
    );

    // 新建主机
    //
    // 在指定主机集群下新建主机。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDeploymentHostResponse> createDeploymentHost(
        CreateDeploymentHostRequest &request
    );
    // 删除主机
    //
    // 根据主机id删除主机。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDeploymentHostResponse> deleteDeploymentHost(
        DeleteDeploymentHostRequest &request
    );
    // 查询主机列表
    //
    // 根据主机集群id查询指定主机集群下的主机列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListHostsResponse> listHosts(
        ListHostsRequest &request
    );
    // 查询主机详情
    //
    // 根据主机id查询主机详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDeploymentHostDetailResponse> showDeploymentHostDetail(
        ShowDeploymentHostDetailRequest &request
    );
    // 修改主机
    //
    // 根据主机id修改主机信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDeploymentHostResponse> updateDeploymentHost(
        UpdateDeploymentHostRequest &request
    );

    // 新建主机集群
    //
    // 在项目下新建主机集群。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDeploymentGroupResponse> createDeploymentGroup(
        CreateDeploymentGroupRequest &request
    );
    // 删除主机集群
    //
    // 根据主机集群id删除主机集群。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDeploymentGroupResponse> deleteDeploymentGroup(
        DeleteDeploymentGroupRequest &request
    );
    // 查询主机集群列表
    //
    // 按条件查询主机集群列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListHostGroupsResponse> listHostGroups(
        ListHostGroupsRequest &request
    );
    // 查询主机集群
    //
    // 根据主机集群id查询主机集群详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDeploymentGroupDetailResponse> showDeploymentGroupDetail(
        ShowDeploymentGroupDetailRequest &request
    );
    // 修改主机集群
    //
    // 根据主机集群id修改主机集群信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDeploymentGroupResponse> updateDeploymentGroup(
        UpdateDeploymentGroupRequest &request
    );

    // 获取指定应用的应用部署成功率
    //
    // 获取指定应用的应用部署成功率
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTaskSuccessRateResponse> listTaskSuccessRate(
        ListTaskSuccessRateRequest &request
    );
    // 获取指定项目的应用部署成功率
    //
    // 获取指定项目的应用部署成功率
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProjectSuccessRateResponse> showProjectSuccessRate(
        ShowProjectSuccessRateRequest &request
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

template class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Codeartsdeploy::V2::CodeArtsDeployClient>;

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_CodeArtsDeployClient_H_

