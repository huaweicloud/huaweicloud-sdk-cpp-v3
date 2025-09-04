
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobRolePermission_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobRolePermission_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  JobRolePermission
    : public ModelBase
{
public:
    JobRolePermission();
    virtual ~JobRolePermission();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobRolePermission members

    /// <summary>
    /// 主键ID
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 角色ID
    /// </summary>

    int32_t getRoleId() const;
    bool roleIdIsSet() const;
    void unsetroleId();
    void setRoleId(int32_t value);

    /// <summary>
    /// devuc的角色ID
    /// </summary>

    std::string getDevucRoleId() const;
    bool devucRoleIdIsSet() const;
    void unsetdevucRoleId();
    void setDevucRoleId(const std::string& value);

    /// <summary>
    /// 角色名称
    /// </summary>

    std::string getRoleName() const;
    bool roleNameIsSet() const;
    void unsetroleName();
    void setRoleName(const std::string& value);

    /// <summary>
    /// 修改权限
    /// </summary>

    bool isIsModify() const;
    bool isModifyIsSet() const;
    void unsetisModify();
    void setIsModify(bool value);

    /// <summary>
    /// 删除权限
    /// </summary>

    bool isIsDelete() const;
    bool isDeleteIsSet() const;
    void unsetisDelete();
    void setIsDelete(bool value);

    /// <summary>
    /// 查看权限
    /// </summary>

    bool isIsView() const;
    bool isViewIsSet() const;
    void unsetisView();
    void setIsView(bool value);

    /// <summary>
    /// 执行权限
    /// </summary>

    bool isIsExecute() const;
    bool isExecuteIsSet() const;
    void unsetisExecute();
    void setIsExecute(bool value);

    /// <summary>
    /// 复制权限
    /// </summary>

    bool isIsCopy() const;
    bool isCopyIsSet() const;
    void unsetisCopy();
    void setIsCopy(bool value);

    /// <summary>
    /// 禁用权限
    /// </summary>

    bool isIsForbidden() const;
    bool isForbiddenIsSet() const;
    void unsetisForbidden();
    void setIsForbidden(bool value);

    /// <summary>
    /// 管理权限
    /// </summary>

    bool isIsManager() const;
    bool isManagerIsSet() const;
    void unsetisManager();
    void setIsManager(bool value);

    /// <summary>
    /// 数量
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    int32_t id_;
    bool idIsSet_;
    int32_t roleId_;
    bool roleIdIsSet_;
    std::string devucRoleId_;
    bool devucRoleIdIsSet_;
    std::string roleName_;
    bool roleNameIsSet_;
    bool isModify_;
    bool isModifyIsSet_;
    bool isDelete_;
    bool isDeleteIsSet_;
    bool isView_;
    bool isViewIsSet_;
    bool isExecute_;
    bool isExecuteIsSet_;
    bool isCopy_;
    bool isCopyIsSet_;
    bool isForbidden_;
    bool isForbiddenIsSet_;
    bool isManager_;
    bool isManagerIsSet_;
    int32_t count_;
    bool countIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobRolePermission_H_
