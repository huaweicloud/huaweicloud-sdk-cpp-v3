

#include "huaweicloud/ecs/v2/model/ShowResetPasswordFlagResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowResetPasswordFlagResponse::ShowResetPasswordFlagResponse()
{
    resetpwdFlag_ = "";
    resetpwdFlagIsSet_ = false;
}

ShowResetPasswordFlagResponse::~ShowResetPasswordFlagResponse() = default;

void ShowResetPasswordFlagResponse::validate()
{
}

web::json::value ShowResetPasswordFlagResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resetpwdFlagIsSet_) {
        val[utility::conversions::to_string_t("resetpwd_flag")] = ModelBase::toJson(resetpwdFlag_);
    }

    return val;
}

bool ShowResetPasswordFlagResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resetpwd_flag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resetpwd_flag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResetpwdFlag(refVal);
        }
    }
    return ok;
}


std::string ShowResetPasswordFlagResponse::getResetpwdFlag() const
{
    return resetpwdFlag_;
}

void ShowResetPasswordFlagResponse::setResetpwdFlag(const std::string& value)
{
    resetpwdFlag_ = value;
    resetpwdFlagIsSet_ = true;
}

bool ShowResetPasswordFlagResponse::resetpwdFlagIsSet() const
{
    return resetpwdFlagIsSet_;
}

void ShowResetPasswordFlagResponse::unsetresetpwdFlag()
{
    resetpwdFlagIsSet_ = false;
}

}
}
}
}
}


