

#include "huaweicloud/meeting/v1/model/ResetVisionActiveCodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ResetVisionActiveCodeResponse::ResetVisionActiveCodeResponse()
{
    activeCode_ = "";
    activeCodeIsSet_ = false;
}

ResetVisionActiveCodeResponse::~ResetVisionActiveCodeResponse() = default;

void ResetVisionActiveCodeResponse::validate()
{
}

web::json::value ResetVisionActiveCodeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(activeCodeIsSet_) {
        val[utility::conversions::to_string_t("activeCode")] = ModelBase::toJson(activeCode_);
    }

    return val;
}
bool ResetVisionActiveCodeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("activeCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("activeCode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveCode(refVal);
        }
    }
    return ok;
}


std::string ResetVisionActiveCodeResponse::getActiveCode() const
{
    return activeCode_;
}

void ResetVisionActiveCodeResponse::setActiveCode(const std::string& value)
{
    activeCode_ = value;
    activeCodeIsSet_ = true;
}

bool ResetVisionActiveCodeResponse::activeCodeIsSet() const
{
    return activeCodeIsSet_;
}

void ResetVisionActiveCodeResponse::unsetactiveCode()
{
    activeCodeIsSet_ = false;
}

}
}
}
}
}


