
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_PermissionGroupDetail_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_PermissionGroupDetail_H_

#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 主机集群相关权限详情类
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  PermissionGroupDetail
    : public ModelBase
{
public:
    PermissionGroupDetail();
    virtual ~PermissionGroupDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PermissionGroupDetail members

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
    /// 是否有管理权限
    /// </summary>

    bool isCanManage() const;
    bool canManageIsSet() const;
    void unsetcanManage();
    void setCanManage(bool value);


protected:
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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_PermissionGroupDetail_H_
