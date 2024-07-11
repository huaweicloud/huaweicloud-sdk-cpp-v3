
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_PermissionUpdateV2Body_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_PermissionUpdateV2Body_H_


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
/// 主机相关修改权限请求体
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  PermissionUpdateV2Body
    : public ModelBase
{
public:
    PermissionUpdateV2Body();
    virtual ~PermissionUpdateV2Body();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PermissionUpdateV2Body members

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 角色id
    /// </summary>

    std::string getRoleId() const;
    bool roleIdIsSet() const;
    void unsetroleId();
    void setRoleId(const std::string& value);

    /// <summary>
    /// 权限名称，can_view：查看权限；can_edit：编辑权限；can_delete：删除权限；can_add_host：添加主机权限；can_manage：权限管理权限；can_copy：复制主机权限
    /// </summary>

    std::string getPermissionName() const;
    bool permissionNameIsSet() const;
    void unsetpermissionName();
    void setPermissionName(const std::string& value);

    /// <summary>
    /// true 有权限，false 无权限
    /// </summary>

    bool isPermissionValue() const;
    bool permissionValueIsSet() const;
    void unsetpermissionValue();
    void setPermissionValue(bool value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string roleId_;
    bool roleIdIsSet_;
    std::string permissionName_;
    bool permissionNameIsSet_;
    bool permissionValue_;
    bool permissionValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_PermissionUpdateV2Body_H_
