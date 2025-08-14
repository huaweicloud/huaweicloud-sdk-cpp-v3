

#include "huaweicloud/identitycenterstore/v1/model/UpdatePwdModeReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




UpdatePwdModeReqBody::UpdatePwdModeReqBody()
{
    mode_ = "";
    modeIsSet_ = false;
}

UpdatePwdModeReqBody::~UpdatePwdModeReqBody() = default;

void UpdatePwdModeReqBody::validate()
{
}

web::json::value UpdatePwdModeReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }

    return val;
}
bool UpdatePwdModeReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    return ok;
}


std::string UpdatePwdModeReqBody::getMode() const
{
    return mode_;
}

void UpdatePwdModeReqBody::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool UpdatePwdModeReqBody::modeIsSet() const
{
    return modeIsSet_;
}

void UpdatePwdModeReqBody::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


