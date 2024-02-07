

#include "huaweicloud/rds/v3/model/UpdatePostgresqlExtensionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdatePostgresqlExtensionResponse::UpdatePostgresqlExtensionResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

UpdatePostgresqlExtensionResponse::~UpdatePostgresqlExtensionResponse() = default;

void UpdatePostgresqlExtensionResponse::validate()
{
}

web::json::value UpdatePostgresqlExtensionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdatePostgresqlExtensionResponse::fromJson(const web::json::value& val)
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


std::string UpdatePostgresqlExtensionResponse::getBody() const
{
    return body_;
}

void UpdatePostgresqlExtensionResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePostgresqlExtensionResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePostgresqlExtensionResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


