
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ApplicationPermissionVO_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ApplicationPermissionVO_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 角色应用权限
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  ApplicationPermissionVO
    : public ModelBase
{
public:
    ApplicationPermissionVO();
    virtual ~ApplicationPermissionVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ApplicationPermissionVO members

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
    /// 是否有执行权限
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
    /// 是否有管理权限，包含增删改查执行以及权限修改
    /// </summary>

    bool isCanManage() const;
    bool canManageIsSet() const;
    void unsetcanManage();
    void setCanManage(bool value);

    /// <summary>
    /// 是否有新建环境权限
    /// </summary>

    bool isCanCreateEnv() const;
    bool canCreateEnvIsSet() const;
    void unsetcanCreateEnv();
    void setCanCreateEnv(bool value);

    /// <summary>
    /// 是否有禁用权限
    /// </summary>

    bool isCanDisable() const;
    bool canDisableIsSet() const;
    void unsetcanDisable();
    void setCanDisable(bool value);

    /// <summary>
    /// 角色名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 局点信息
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 角色id
    /// </summary>

    std::string getRoleId() const;
    bool roleIdIsSet() const;
    void unsetroleId();
    void setRoleId(const std::string& value);

    /// <summary>
    /// 角色类型， app-creator： 应用创建者； project： 项目管理员；template-customized-inst：系统角色； template-project-customized、project-customized：自定义角色
    /// </summary>

    std::string getRoleType() const;
    bool roleTypeIsSet() const;
    void unsetroleType();
    void setRoleType(const std::string& value);


protected:
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
    std::string name_;
    bool nameIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string roleId_;
    bool roleIdIsSet_;
    std::string roleType_;
    bool roleTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ApplicationPermissionVO_H_
