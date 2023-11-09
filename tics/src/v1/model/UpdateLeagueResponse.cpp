

#include "huaweicloud/tics/v1/model/UpdateLeagueResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




UpdateLeagueResponse::UpdateLeagueResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

UpdateLeagueResponse::~UpdateLeagueResponse() = default;

void UpdateLeagueResponse::validate()
{
}

web::json::value UpdateLeagueResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateLeagueResponse::fromJson(const web::json::value& val)
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


std::string UpdateLeagueResponse::getBody() const
{
    return body_;
}

void UpdateLeagueResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateLeagueResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateLeagueResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


