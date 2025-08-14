
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowUserProjectPermission_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowUserProjectPermission_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
    /// 用户是否有删除权限。
    /// </summary>

    bool isDeletePermission() const;
    bool deletePermissionIsSet() const;
    void unsetdeletePermission();
    void setDeletePermission(bool value);

    /// <summary>
    /// 用户是否有查看权限。
    /// </summary>

    bool isViewPermission() const;
    bool viewPermissionIsSet() const;
    void unsetviewPermission();
    void setViewPermission(bool value);

    /// <summary>
    /// 用户是否有执行权限。
    /// </summary>

    bool isExecutePermission() const;
    bool executePermissionIsSet() const;
    void unsetexecutePermission();
    void setExecutePermission(bool value);

    /// <summary>
    /// 用户是否有克隆权限。
    /// </summary>

    bool isCopyPermission() const;
    bool copyPermissionIsSet() const;
    void unsetcopyPermission();
    void setCopyPermission(bool value);

    /// <summary>
    /// 用户是否有禁用权限。
    /// </summary>

    bool isForbiddenPermission() const;
    bool forbiddenPermissionIsSet() const;
    void unsetforbiddenPermission();
    void setForbiddenPermission(bool value);

    /// <summary>
    /// 用户是否有管理权限。
    /// </summary>

    bool isManagerPermission() const;
    bool managerPermissionIsSet() const;
    void unsetmanagerPermission();
    void setManagerPermission(bool value);

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

    /// <summary>
    /// 角色编码集合。
    /// </summary>

    std::vector<std::string>& getRoleIds();
    bool roleIdsIsSet() const;
    void unsetroleIds();
    void setRoleIds(const std::vector<std::string>& value);

    /// <summary>
    /// 角色名称集合。
    /// </summary>

    std::vector<std::string>& getRoleNames();
    bool roleNamesIsSet() const;
    void unsetroleNames();
    void setRoleNames(const std::vector<std::string>& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    bool createPermission_;
    bool createPermissionIsSet_;
    bool modifyPermission_;
    bool modifyPermissionIsSet_;
    bool groupPermission_;
    bool groupPermissionIsSet_;
    bool deletePermission_;
    bool deletePermissionIsSet_;
    bool viewPermission_;
    bool viewPermissionIsSet_;
    bool executePermission_;
    bool executePermissionIsSet_;
    bool copyPermission_;
    bool copyPermissionIsSet_;
    bool forbiddenPermission_;
    bool forbiddenPermissionIsSet_;
    bool managerPermission_;
    bool managerPermissionIsSet_;
    std::string roleId_;
    bool roleIdIsSet_;
    std::string roleName_;
    bool roleNameIsSet_;
    std::vector<std::string> roleIds_;
    bool roleIdsIsSet_;
    std::vector<std::string> roleNames_;
    bool roleNamesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowUserProjectPermission_result_H_
