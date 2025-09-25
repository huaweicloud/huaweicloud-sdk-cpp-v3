
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowGroupPermissionInheritEnabledResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowGroupPermissionInheritEnabledResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ShowGroupPermissionInheritEnabledResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowGroupPermissionInheritEnabledResponse();
    virtual ~ShowGroupPermissionInheritEnabledResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowGroupPermissionInheritEnabledResponse members

    /// <summary>
    /// **参数解释：** 使用项目权限配置开关是否开启。
    /// </summary>

    bool isPermissionInheritEnabled() const;
    bool permissionInheritEnabledIsSet() const;
    void unsetpermissionInheritEnabled();
    void setPermissionInheritEnabled(bool value);


protected:
    bool permissionInheritEnabled_;
    bool permissionInheritEnabledIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowGroupPermissionInheritEnabledResponse_H_
