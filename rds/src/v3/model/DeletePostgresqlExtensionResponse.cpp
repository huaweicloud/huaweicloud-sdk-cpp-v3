

#include "huaweicloud/rds/v3/model/DeletePostgresqlExtensionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeletePostgresqlExtensionResponse::DeletePostgresqlExtensionResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeletePostgresqlExtensionResponse::~DeletePostgresqlExtensionResponse() = default;

void DeletePostgresqlExtensionResponse::validate()
{
}

web::json::value DeletePostgresqlExtensionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeletePostgresqlExtensionResponse::fromJson(const web::json::value& val)
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


std::string DeletePostgresqlExtensionResponse::getBody() const
{
    return body_;
}

void DeletePostgresqlExtensionResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeletePostgresqlExtensionResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeletePostgresqlExtensionResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


