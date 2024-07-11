
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_UpdateHostGroupPermissionsResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_UpdateHostGroupPermissionsResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  UpdateHostGroupPermissionsResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateHostGroupPermissionsResponse();
    virtual ~UpdateHostGroupPermissionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateHostGroupPermissionsResponse members

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
    /// 角色id列表
    /// </summary>

    std::vector<std::string>& getDevucRoleIdList();
    bool devucRoleIdListIsSet() const;
    void unsetdevucRoleIdList();
    void setDevucRoleIdList(const std::vector<std::string>& value);

    /// <summary>
    /// 角色名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 主机集群id
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

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
    /// 是否有添加主机权限
    /// </summary>

    bool isCanAddHost() const;
    bool canAddHostIsSet() const;
    void unsetcanAddHost();
    void setCanAddHost(bool value);

    /// <summary>
    /// 是否有权限管理权限
    /// </summary>

    bool isCanManage() const;
    bool canManageIsSet() const;
    void unsetcanManage();
    void setCanManage(bool value);

    /// <summary>
    /// 是否有拷贝权限
    /// </summary>

    bool isCanCopy() const;
    bool canCopyIsSet() const;
    void unsetcanCopy();
    void setCanCopy(bool value);

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

    /// <summary>
    /// 角色类型，project-customized：自定义角色；template-project-customized：系统自定义角色； template-customized-inst：系统角色；cluster-creator：集群创建者；project_admin：项目创建者
    /// </summary>

    std::string getRoleType() const;
    bool roleTypeIsSet() const;
    void unsetroleType();
    void setRoleType(const std::string& value);


protected:
    std::string region_;
    bool regionIsSet_;
    std::string roleId_;
    bool roleIdIsSet_;
    std::vector<std::string> devucRoleIdList_;
    bool devucRoleIdListIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string groupId_;
    bool groupIdIsSet_;
    bool canView_;
    bool canViewIsSet_;
    bool canEdit_;
    bool canEditIsSet_;
    bool canDelete_;
    bool canDeleteIsSet_;
    bool canAddHost_;
    bool canAddHostIsSet_;
    bool canManage_;
    bool canManageIsSet_;
    bool canCopy_;
    bool canCopyIsSet_;
    utility::datetime createTime_;
    bool createTimeIsSet_;
    utility::datetime updateTime_;
    bool updateTimeIsSet_;
    std::string roleType_;
    bool roleTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_UpdateHostGroupPermissionsResponse_H_
