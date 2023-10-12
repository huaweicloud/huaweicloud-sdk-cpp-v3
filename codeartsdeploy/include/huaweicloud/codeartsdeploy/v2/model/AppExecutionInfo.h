
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_AppExecutionInfo_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_AppExecutionInfo_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsdeploy/v2/model/TaskBaseResponseBody.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询应用详情响应体
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  AppExecutionInfo
    : public ModelBase
{
public:
    AppExecutionInfo();
    virtual ~AppExecutionInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AppExecutionInfo members

    /// <summary>
    /// 应用id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 应用名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 部署时间
    /// </summary>

    std::string getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 项目名称
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);

    /// <summary>
    /// 当前用户是否已收藏
    /// </summary>

    bool isIsCare() const;
    bool isCareIsSet() const;
    void unsetisCare();
    void setIsCare(bool value);

    /// <summary>
    /// 是否有编辑权限
    /// </summary>

    bool isCanModify() const;
    bool canModifyIsSet() const;
    void unsetcanModify();
    void setCanModify(bool value);

    /// <summary>
    /// 是否有删除的权限
    /// </summary>

    bool isCanDelete() const;
    bool canDeleteIsSet() const;
    void unsetcanDelete();
    void setCanDelete(bool value);

    /// <summary>
    /// 是否有查看权限
    /// </summary>

    bool isCanView() const;
    bool canViewIsSet() const;
    void unsetcanView();
    void setCanView(bool value);

    /// <summary>
    /// 是否有部署权限
    /// </summary>

    bool isCanExecute() const;
    bool canExecuteIsSet() const;
    void unsetcanExecute();
    void setCanExecute(bool value);

    /// <summary>
    /// 是否有复制权限
    /// </summary>

    bool isCanCopy() const;
    bool canCopyIsSet() const;
    void unsetcanCopy();
    void setCanCopy(bool value);

    /// <summary>
    /// 是否有编辑应用权限矩阵的权限
    /// </summary>

    bool isCanManage() const;
    bool canManageIsSet() const;
    void unsetcanManage();
    void setCanManage(bool value);

    /// <summary>
    /// 是否有创建环境的权限
    /// </summary>

    bool isCanCreateEnv() const;
    bool canCreateEnvIsSet() const;
    void unsetcanCreateEnv();
    void setCanCreateEnv(bool value);

    /// <summary>
    /// 部署类型模式，包括deployTemplate、ansible、shell
    /// </summary>

    std::string getDeploySystem() const;
    bool deploySystemIsSet() const;
    void unsetdeploySystem();
    void setDeploySystem(const std::string& value);

    /// <summary>
    /// 应用创建者用户ID
    /// </summary>

    std::string getCreateUserId() const;
    bool createUserIdIsSet() const;
    void unsetcreateUserId();
    void setCreateUserId(const std::string& value);

    /// <summary>
    /// 应用创建者租户ID
    /// </summary>

    std::string getCreateTenantId() const;
    bool createTenantIdIsSet() const;
    void unsetcreateTenantId();
    void setCreateTenantId(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 修改时间
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 最后一次部署时间
    /// </summary>

    std::string getExecutionTime() const;
    bool executionTimeIsSet() const;
    void unsetexecutionTime();
    void setExecutionTime(const std::string& value);

    /// <summary>
    /// 部署结束时间
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 部署状态
    /// </summary>

    std::string getExecutionState() const;
    bool executionStateIsSet() const;
    void unsetexecutionState();
    void setExecutionState(const std::string& value);

    /// <summary>
    /// 部署记录序列号
    /// </summary>

    int32_t getReleaseId() const;
    bool releaseIdIsSet() const;
    void unsetreleaseId();
    void setReleaseId(int32_t value);

    /// <summary>
    /// 部署者id
    /// </summary>

    std::string getExecutorId() const;
    bool executorIdIsSet() const;
    void unsetexecutorId();
    void setExecutorId(const std::string& value);

    /// <summary>
    /// 部署者名称
    /// </summary>

    std::string getExecutorNickName() const;
    bool executorNickNameIsSet() const;
    void unsetexecutorNickName();
    void setExecutorNickName(const std::string& value);

    /// <summary>
    /// 部署任务信息
    /// </summary>

    std::vector<TaskBaseResponseBody>& getArrangeInfos();
    bool arrangeInfosIsSet() const;
    void unsetarrangeInfos();
    void setArrangeInfos(const std::vector<TaskBaseResponseBody>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string duration_;
    bool durationIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    bool isCare_;
    bool isCareIsSet_;
    bool canModify_;
    bool canModifyIsSet_;
    bool canDelete_;
    bool canDeleteIsSet_;
    bool canView_;
    bool canViewIsSet_;
    bool canExecute_;
    bool canExecuteIsSet_;
    bool canCopy_;
    bool canCopyIsSet_;
    bool canManage_;
    bool canManageIsSet_;
    bool canCreateEnv_;
    bool canCreateEnvIsSet_;
    std::string deploySystem_;
    bool deploySystemIsSet_;
    std::string createUserId_;
    bool createUserIdIsSet_;
    std::string createTenantId_;
    bool createTenantIdIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::string executionTime_;
    bool executionTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string executionState_;
    bool executionStateIsSet_;
    int32_t releaseId_;
    bool releaseIdIsSet_;
    std::string executorId_;
    bool executorIdIsSet_;
    std::string executorNickName_;
    bool executorNickNameIsSet_;
    std::vector<TaskBaseResponseBody> arrangeInfos_;
    bool arrangeInfosIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_AppExecutionInfo_H_
