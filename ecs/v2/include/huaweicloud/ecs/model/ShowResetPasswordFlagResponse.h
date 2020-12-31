
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowResetPasswordFlagResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowResetPasswordFlagResponse_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ECS_EXPORT  ShowResetPasswordFlagResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowResetPasswordFlagResponse();
    virtual ~ShowResetPasswordFlagResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowResetPasswordFlagResponse members

    /// <summary>
    /// 是否支持重置密码。  - True：支持一键重置密码。  - False：不支持一键重置密码。
    /// </summary>

    std::string getResetpwdFlag() const;
    bool resetpwdFlagIsSet() const;
    void unsetresetpwdFlag();
    void setResetpwdFlag(const std::string& value);


protected:
    std::string resetpwdFlag_;
    bool resetpwdFlagIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowResetPasswordFlagResponse_H_
