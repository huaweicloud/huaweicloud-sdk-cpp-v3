
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_EnvironmentPermissionDetail_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_EnvironmentPermissionDetail_H_

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
/// 环境权限详情
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  EnvironmentPermissionDetail
    : public ModelBase
{
public:
    EnvironmentPermissionDetail();
    virtual ~EnvironmentPermissionDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// EnvironmentPermissionDetail members

    /// <summary>
    /// 是否有删除环境权限
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
    /// 是否有编辑环境权限
    /// </summary>

    bool isCanEdit() const;
    bool canEditIsSet() const;
    void unsetcanEdit();
    void setCanEdit(bool value);

    /// <summary>
    /// 是否有编辑环境权限矩阵的权限
    /// </summary>

    bool isCanManage() const;
    bool canManageIsSet() const;
    void unsetcanManage();
    void setCanManage(bool value);

    /// <summary>
    /// 是否有环境的查看权限
    /// </summary>

    bool isCanView() const;
    bool canViewIsSet() const;
    void unsetcanView();
    void setCanView(bool value);


protected:
    bool canDelete_;
    bool canDeleteIsSet_;
    bool canDeploy_;
    bool canDeployIsSet_;
    bool canEdit_;
    bool canEditIsSet_;
    bool canManage_;
    bool canManageIsSet_;
    bool canView_;
    bool canViewIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_EnvironmentPermissionDetail_H_
