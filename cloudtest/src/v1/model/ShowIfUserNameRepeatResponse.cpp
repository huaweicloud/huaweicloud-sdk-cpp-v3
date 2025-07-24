

#include "huaweicloud/cloudtest/v1/model/ShowIfUserNameRepeatResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowIfUserNameRepeatResponse::ShowIfUserNameRepeatResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

ShowIfUserNameRepeatResponse::~ShowIfUserNameRepeatResponse() = default;

void ShowIfUserNameRepeatResponse::validate()
{
}

web::json::value ShowIfUserNameRepeatResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowIfUserNameRepeatResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowIfUserNameRepeatResponse::getBody() const
{
    return body_;
}

void ShowIfUserNameRepeatResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowIfUserNameRepeatResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowIfUserNameRepeatResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


