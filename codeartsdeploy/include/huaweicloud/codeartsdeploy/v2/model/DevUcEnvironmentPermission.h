
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_DevUcEnvironmentPermission_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_DevUcEnvironmentPermission_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 应用环境鉴权类
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  DevUcEnvironmentPermission
    : public ModelBase
{
public:
    DevUcEnvironmentPermission();
    virtual ~DevUcEnvironmentPermission();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DevUcEnvironmentPermission members

    /// <summary>
    /// 权限id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 角色id
    /// </summary>

    std::string getRoleId() const;
    bool roleIdIsSet() const;
    void unsetroleId();
    void setRoleId(const std::string& value);

    /// <summary>
    /// 角色id列表
    /// </summary>

    std::vector<std::string>& getDevucRoleIdList();
    bool devucRoleIdListIsSet() const;
    void unsetdevucRoleIdList();
    void setDevucRoleIdList(const std::vector<std::string>& value);

    /// <summary>
    /// 角色类型， environment-creator： 环境创建者； project： 项目管理员；template-customized-inst：系统角色； template-project-customized、project-customized：自定义角色
    /// </summary>

    std::string getRoleType() const;
    bool roleTypeIsSet() const;
    void unsetroleType();
    void setRoleType(const std::string& value);

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
    /// 环境id
    /// </summary>

    std::string getEnvironmentId() const;
    bool environmentIdIsSet() const;
    void unsetenvironmentId();
    void setEnvironmentId(const std::string& value);

    /// <summary>
    /// 是否有查看权限
    /// </summary>

    bool isCanView() const;
    bool canViewIsSet() const;
    void unsetcanView();
    void setCanView(bool value);

    /// <summary>
    /// 是否有编辑权限
    /// </summary>

    bool isCanEdit() const;
    bool canEditIsSet() const;
    void unsetcanEdit();
    void setCanEdit(bool value);

    /// <summary>
    /// 是否有删除权限
    /// </summary>

    bool isCanDelete() const;
    bool canDeleteIsSet() const;
    void unsetcanDelete();
    void setCanDelete(bool value);

    /// <summary>
    /// 是否有部署权限
    /// </summary>

    bool isCanDeploy() const;
    bool canDeployIsSet() const;
    void unsetcanDeploy();
    void setCanDeploy(bool value);

    /// <summary>
    /// 是否有权限管理权限
    /// </summary>

    bool isCanManage() const;
    bool canManageIsSet() const;
    void unsetcanManage();
    void setCanManage(bool value);

    /// <summary>
    /// 创建时间
    /// </summary>

    utility::datetime getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const utility::datetime& value);

    /// <summary>
    /// 修改时间
    /// </summary>

    utility::datetime getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const utility::datetime& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string roleId_;
    bool roleIdIsSet_;
    std::vector<std::string> devucRoleIdList_;
    bool devucRoleIdListIsSet_;
    std::string roleType_;
    bool roleTypeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string environmentId_;
    bool environmentIdIsSet_;
    bool canView_;
    bool canViewIsSet_;
    bool canEdit_;
    bool canEditIsSet_;
    bool canDelete_;
    bool canDeleteIsSet_;
    bool canDeploy_;
    bool canDeployIsSet_;
    bool canManage_;
    bool canManageIsSet_;
    utility::datetime createTime_;
    bool createTimeIsSet_;
    utility::datetime updateTime_;
    bool updateTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_DevUcEnvironmentPermission_H_
