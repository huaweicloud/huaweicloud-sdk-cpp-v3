
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ResetServerPasswordRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ResetServerPasswordRequestBody_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/ResetServerPasswordOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ResetServerPasswordRequestBody
    : public ModelBase
{
public:
    ResetServerPasswordRequestBody();
    virtual ~ResetServerPasswordRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ResetServerPasswordRequestBody members

    /// <summary>
    /// 
    /// </summary>

    ResetServerPasswordOption getResetPassword() const;
    bool resetPasswordIsSet() const;
    void unsetresetPassword();
    void setResetPassword(const ResetServerPasswordOption& value);


protected:
    ResetServerPasswordOption resetPassword_;
    bool resetPasswordIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ResetServerPasswordRequestBody_H_
