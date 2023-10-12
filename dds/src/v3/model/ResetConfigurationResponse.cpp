

#include "huaweicloud/dds/v3/model/ResetConfigurationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ResetConfigurationResponse::ResetConfigurationResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

ResetConfigurationResponse::~ResetConfigurationResponse() = default;

void ResetConfigurationResponse::validate()
{
}

web::json::value ResetConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ResetConfigurationResponse::fromJson(const web::json::value& val)
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


std::string ResetConfigurationResponse::getBody() const
{
    return body_;
}

void ResetConfigurationResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResetConfigurationResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResetConfigurationResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


