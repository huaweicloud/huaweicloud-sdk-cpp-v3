
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_AppPermission_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_AppPermission_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  AppPermission
    : public ModelBase
{
public:
    AppPermission();
    virtual ~AppPermission();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AppPermission members

    /// <summary>
    /// 角色id
    /// </summary>

    std::string getDevRoleId() const;
    bool devRoleIdIsSet() const;
    void unsetdevRoleId();
    void setDevRoleId(const std::string& value);

    /// <summary>
    /// 是否具有编辑权限
    /// </summary>

    bool isCanModify() const;
    bool canModifyIsSet() const;
    void unsetcanModify();
    void setCanModify(bool value);

    /// <summary>
    /// 是否具有删除权限
    /// </summary>

    bool isCanDelete() const;
    bool canDeleteIsSet() const;
    void unsetcanDelete();
    void setCanDelete(bool value);

    /// <summary>
    /// 是否具有查看权限
    /// </summary>

    bool isCanView() const;
    bool canViewIsSet() const;
    void unsetcanView();
    void setCanView(bool value);

    /// <summary>
    /// 是否具有执行权限
    /// </summary>

    bool isCanExecute() const;
    bool canExecuteIsSet() const;
    void unsetcanExecute();
    void setCanExecute(bool value);

    /// <summary>
    /// 是否具有复制权限
    /// </summary>

    bool isCanCopy() const;
    bool canCopyIsSet() const;
    void unsetcanCopy();
    void setCanCopy(bool value);

    /// <summary>
    /// 是否具有权限管理权限
    /// </summary>

    bool isCanManage() const;
    bool canManageIsSet() const;
    void unsetcanManage();
    void setCanManage(bool value);

    /// <summary>
    /// 是否具有创建环境权限
    /// </summary>

    bool isCanCreateEnv() const;
    bool canCreateEnvIsSet() const;
    void unsetcanCreateEnv();
    void setCanCreateEnv(bool value);

    /// <summary>
    /// 是否具有禁用权限
    /// </summary>

    bool isCanDisable() const;
    bool canDisableIsSet() const;
    void unsetcanDisable();
    void setCanDisable(bool value);


protected:
    std::string devRoleId_;
    bool devRoleIdIsSet_;
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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_AppPermission_H_
