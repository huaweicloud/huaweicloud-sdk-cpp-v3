

#include "huaweicloud/lts/v2/model/UpdateStructTemplateResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateStructTemplateResponse::UpdateStructTemplateResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

UpdateStructTemplateResponse::~UpdateStructTemplateResponse() = default;

void UpdateStructTemplateResponse::validate()
{
}

web::json::value UpdateStructTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateStructTemplateResponse::fromJson(const web::json::value& val)
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


std::string UpdateStructTemplateResponse::getBody() const
{
    return body_;
}

void UpdateStructTemplateResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateStructTemplateResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateStructTemplateResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


