

#include "huaweicloud/rds/v3/model/CreatePostgresqlExtensionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreatePostgresqlExtensionResponse::CreatePostgresqlExtensionResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

CreatePostgresqlExtensionResponse::~CreatePostgresqlExtensionResponse() = default;

void CreatePostgresqlExtensionResponse::validate()
{
}

web::json::value CreatePostgresqlExtensionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreatePostgresqlExtensionResponse::fromJson(const web::json::value& val)
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


std::string CreatePostgresqlExtensionResponse::getBody() const
{
    return body_;
}

void CreatePostgresqlExtensionResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePostgresqlExtensionResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePostgresqlExtensionResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


