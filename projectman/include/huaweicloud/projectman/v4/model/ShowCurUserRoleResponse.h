
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowCurUserRoleResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowCurUserRoleResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ShowCurUserRoleResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowCurUserRoleResponse();
    virtual ~ShowCurUserRoleResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowCurUserRoleResponse members

    /// <summary>
    /// 用户角色id 成员角色, -1 项目创建者, 3 项目经理, 4 开发人员, 5 测试经理, 6 测试人员, 7 参与者, 8 浏览者, 9 运维经理
    /// </summary>

    int32_t getUserRole() const;
    bool userRoleIsSet() const;
    void unsetuserRole();
    void setUserRole(int32_t value);


protected:
    int32_t userRole_;
    bool userRoleIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowCurUserRoleResponse_H_
