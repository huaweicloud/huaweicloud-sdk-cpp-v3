
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateRepositoryPermissionInheritEnabledResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateRepositoryPermissionInheritEnabledResponse_H_


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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  UpdateRepositoryPermissionInheritEnabledResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateRepositoryPermissionInheritEnabledResponse();
    virtual ~UpdateRepositoryPermissionInheritEnabledResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateRepositoryPermissionInheritEnabledResponse members

    /// <summary>
    /// **参数解释：** 权限继承设置。 **约束限制：** 不涉及。 **取值范围：** - true，使用上层权限配置，如果上层是代码组使用代码组权限配置，如果上层是项目使用项目权限配置。 - false，使用仓库权限配置。 
    /// </summary>

    bool isInheritParentPermission() const;
    bool inheritParentPermissionIsSet() const;
    void unsetinheritParentPermission();
    void setInheritParentPermission(bool value);


protected:
    bool inheritParentPermission_;
    bool inheritParentPermissionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateRepositoryPermissionInheritEnabledResponse_H_
