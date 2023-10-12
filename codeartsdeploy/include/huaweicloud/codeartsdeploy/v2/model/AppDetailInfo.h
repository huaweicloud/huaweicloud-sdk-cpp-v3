
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_AppDetailInfo_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_AppDetailInfo_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsdeploy/v2/model/TaskV2Info.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 应用详情信息
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  AppDetailInfo
    : public ModelBase
{
public:
    AppDetailInfo();
    virtual ~AppDetailInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AppDetailInfo members

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
    /// 应用所属区域
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 创建方式
    /// </summary>

    std::string getCreateType() const;
    bool createTypeIsSet() const;
    void unsetcreateType();
    void setCreateType(const std::string& value);

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
    /// 应用所属人租户ID
    /// </summary>

    std::string getOwnerTenantId() const;
    bool ownerTenantIdIsSet() const;
    void unsetownerTenantId();
    void setOwnerTenantId(const std::string& value);

    /// <summary>
    /// 应用创建者用户名
    /// </summary>

    std::string getCreateUserId() const;
    bool createUserIdIsSet() const;
    void unsetcreateUserId();
    void setCreateUserId(const std::string& value);

    /// <summary>
    /// 应用创建人租户ID
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
    /// 权限等级
    /// </summary>

    std::string getPermissionLevel() const;
    bool permissionLevelIsSet() const;
    void unsetpermissionLevel();
    void setPermissionLevel(const std::string& value);

    /// <summary>
    /// 部署任务信息
    /// </summary>

    std::vector<TaskV2Info>& getArrangeInfos();
    bool arrangeInfosIsSet() const;
    void unsetarrangeInfos();
    void setArrangeInfos(const std::vector<TaskV2Info>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string createType_;
    bool createTypeIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
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
    std::string ownerTenantId_;
    bool ownerTenantIdIsSet_;
    std::string createUserId_;
    bool createUserIdIsSet_;
    std::string createTenantId_;
    bool createTenantIdIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::string permissionLevel_;
    bool permissionLevelIsSet_;
    std::vector<TaskV2Info> arrangeInfos_;
    bool arrangeInfosIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_AppDetailInfo_H_
