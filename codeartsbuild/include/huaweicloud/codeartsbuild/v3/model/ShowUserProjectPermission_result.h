
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowUserProjectPermission_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowUserProjectPermission_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 结果
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowUserProjectPermission_result
    : public ModelBase
{
public:
    ShowUserProjectPermission_result();
    virtual ~ShowUserProjectPermission_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowUserProjectPermission_result members

    /// <summary>
    /// 工程编号
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 用户是否有创建权限
    /// </summary>

    bool isCreatePermission() const;
    bool createPermissionIsSet() const;
    void unsetcreatePermission();
    void setCreatePermission(bool value);

    /// <summary>
    /// 用户是否有修改权限
    /// </summary>

    bool isModifyPermission() const;
    bool modifyPermissionIsSet() const;
    void unsetmodifyPermission();
    void setModifyPermission(bool value);

    /// <summary>
    /// 用户是否有分类权限
    /// </summary>

    bool isGroupPermission() const;
    bool groupPermissionIsSet() const;
    void unsetgroupPermission();
    void setGroupPermission(bool value);

    /// <summary>
    /// 角色ID
    /// </summary>

    std::string getRoleId() const;
    bool roleIdIsSet() const;
    void unsetroleId();
    void setRoleId(const std::string& value);

    /// <summary>
    /// 角色名
    /// </summary>

    std::string getRoleName() const;
    bool roleNameIsSet() const;
    void unsetroleName();
    void setRoleName(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    bool createPermission_;
    bool createPermissionIsSet_;
    bool modifyPermission_;
    bool modifyPermissionIsSet_;
    bool groupPermission_;
    bool groupPermissionIsSet_;
    std::string roleId_;
    bool roleIdIsSet_;
    std::string roleName_;
    bool roleNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowUserProjectPermission_result_H_
