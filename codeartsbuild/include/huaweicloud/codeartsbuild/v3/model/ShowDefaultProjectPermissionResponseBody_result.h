
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowDefaultProjectPermissionResponseBody_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowDefaultProjectPermissionResponseBody_result_H_


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
/// 权限信息
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowDefaultProjectPermissionResponseBody_result
    : public ModelBase
{
public:
    ShowDefaultProjectPermissionResponseBody_result();
    virtual ~ShowDefaultProjectPermissionResponseBody_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDefaultProjectPermissionResponseBody_result members

    /// <summary>
    /// 角色ID
    /// </summary>

    int32_t getRoleId() const;
    bool roleIdIsSet() const;
    void unsetroleId();
    void setRoleId(int32_t value);

    /// <summary>
    /// 角色名
    /// </summary>

    std::string getRoleName() const;
    bool roleNameIsSet() const;
    void unsetroleName();
    void setRoleName(const std::string& value);

    /// <summary>
    /// 是否有复制任务权限
    /// </summary>

    bool isIsCopy() const;
    bool isCopyIsSet() const;
    void unsetisCopy();
    void setIsCopy(bool value);

    /// <summary>
    /// 是否有删除任务权限
    /// </summary>

    bool isIsDelete() const;
    bool isDeleteIsSet() const;
    void unsetisDelete();
    void setIsDelete(bool value);

    /// <summary>
    /// 是否有执行任务权限
    /// </summary>

    bool isIsExecute() const;
    bool isExecuteIsSet() const;
    void unsetisExecute();
    void setIsExecute(bool value);

    /// <summary>
    /// 是否有禁用任务权限
    /// </summary>

    bool isIsForbidden() const;
    bool isForbiddenIsSet() const;
    void unsetisForbidden();
    void setIsForbidden(bool value);

    /// <summary>
    /// 是否有管理任务权限
    /// </summary>

    bool isIsManager() const;
    bool isManagerIsSet() const;
    void unsetisManager();
    void setIsManager(bool value);

    /// <summary>
    /// 是否有修改任务权限
    /// </summary>

    bool isIsModify() const;
    bool isModifyIsSet() const;
    void unsetisModify();
    void setIsModify(bool value);

    /// <summary>
    /// 是否有查看任务权限
    /// </summary>

    bool isIsView() const;
    bool isViewIsSet() const;
    void unsetisView();
    void setIsView(bool value);


protected:
    int32_t roleId_;
    bool roleIdIsSet_;
    std::string roleName_;
    bool roleNameIsSet_;
    bool isCopy_;
    bool isCopyIsSet_;
    bool isDelete_;
    bool isDeleteIsSet_;
    bool isExecute_;
    bool isExecuteIsSet_;
    bool isForbidden_;
    bool isForbiddenIsSet_;
    bool isManager_;
    bool isManagerIsSet_;
    bool isModify_;
    bool isModifyIsSet_;
    bool isView_;
    bool isViewIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowDefaultProjectPermissionResponseBody_result_H_
