

#include "huaweicloud/meeting/v1/model/BatchShowUserDetailsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




BatchShowUserDetailsResponse::BatchShowUserDetailsResponse()
{
    bodyIsSet_ = false;
}

BatchShowUserDetailsResponse::~BatchShowUserDetailsResponse() = default;

void BatchShowUserDetailsResponse::validate()
{
}

web::json::value BatchShowUserDetailsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchShowUserDetailsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<UserDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<UserDTO>& BatchShowUserDetailsResponse::getBody()
{
    return body_;
}

void BatchShowUserDetailsResponse::setBody(const std::vector<UserDTO>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchShowUserDetailsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchShowUserDetailsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


