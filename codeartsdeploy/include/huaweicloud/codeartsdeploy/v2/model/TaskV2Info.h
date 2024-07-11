
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_TaskV2Info_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_TaskV2Info_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsdeploy/v2/model/Step.h>
#include <huaweicloud/codeartsdeploy/v2/model/AppComponentDao.h>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 部署任务详情信息
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  TaskV2Info
    : public ModelBase
{
public:
    TaskV2Info();
    virtual ~TaskV2Info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskV2Info members

    /// <summary>
    /// 部署任务id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 部署任务名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 部署任务状态
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 部署任务所属人
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// 部署步骤
    /// </summary>

    std::map<std::string, Step>& getSteps();
    bool stepsIsSet() const;
    void unsetsteps();
    void setSteps(const std::map<std::string, Step>& value);

    /// <summary>
    /// 项目id
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
    /// 部署类型模式，包括deployTemplate、ansible、shell
    /// </summary>

    std::string getDeploySystem() const;
    bool deploySystemIsSet() const;
    void unsetdeploySystem();
    void setDeploySystem(const std::string& value);

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
    /// 角色id
    /// </summary>

    int32_t getRoleId() const;
    bool roleIdIsSet() const;
    void unsetroleId();
    void setRoleId(int32_t value);

    /// <summary>
    /// 是否为默认角色
    /// </summary>

    bool isIsDefautPermission() const;
    bool isDefautPermissionIsSet() const;
    void unsetisDefautPermission();
    void setIsDefautPermission(bool value);

    /// <summary>
    /// 模板id
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);

    /// <summary>
    /// 应用创建者昵称
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);

    /// <summary>
    /// 应用创建者用户id
    /// </summary>

    std::string getOwnerId() const;
    bool ownerIdIsSet() const;
    void unsetownerId();
    void setOwnerId(const std::string& value);

    /// <summary>
    /// 应用创建者租户id
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 应用创建者租户名
    /// </summary>

    std::string getTenantName() const;
    bool tenantNameIsSet() const;
    void unsettenantName();
    void setTenantName(const std::string& value);

    /// <summary>
    /// slave集群id，默认为null时使用默认slave集群，用户自定义slave时为slave集群id
    /// </summary>

    std::string getSlaveClusterId() const;
    bool slaveClusterIdIsSet() const;
    void unsetslaveClusterId();
    void setSlaveClusterId(const std::string& value);

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
    /// 是否有禁用应用的权限
    /// </summary>

    bool isCanDisable() const;
    bool canDisableIsSet() const;
    void unsetcanDisable();
    void setCanDisable(bool value);

    /// <summary>
    /// 应用组件列表
    /// </summary>

    std::vector<AppComponentDao>& getAppComponentList();
    bool appComponentListIsSet() const;
    void unsetappComponentList();
    void setAppComponentList(const std::vector<AppComponentDao>& value);

    /// <summary>
    /// 部署记录序列号
    /// </summary>

    int32_t getReleaseId() const;
    bool releaseIdIsSet() const;
    void unsetreleaseId();
    void setReleaseId(int32_t value);

    /// <summary>
    /// 部署任务所属应用id
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// 当前应用是否被禁用
    /// </summary>

    bool isIsDisable() const;
    bool isDisableIsSet() const;
    void unsetisDisable();
    void setIsDisable(bool value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string owner_;
    bool ownerIsSet_;
    std::map<std::string, Step> steps_;
    bool stepsIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    std::string deploySystem_;
    bool deploySystemIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    int32_t roleId_;
    bool roleIdIsSet_;
    bool isDefautPermission_;
    bool isDefautPermissionIsSet_;
    std::string templateId_;
    bool templateIdIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;
    std::string ownerId_;
    bool ownerIdIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string tenantName_;
    bool tenantNameIsSet_;
    std::string slaveClusterId_;
    bool slaveClusterIdIsSet_;
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
    bool canDisable_;
    bool canDisableIsSet_;
    std::vector<AppComponentDao> appComponentList_;
    bool appComponentListIsSet_;
    int32_t releaseId_;
    bool releaseIdIsSet_;
    std::string appId_;
    bool appIdIsSet_;
    bool isDisable_;
    bool isDisableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_TaskV2Info_H_
