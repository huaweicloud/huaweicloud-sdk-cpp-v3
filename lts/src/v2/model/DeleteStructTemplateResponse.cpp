

#include "huaweicloud/lts/v2/model/DeleteStructTemplateResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




DeleteStructTemplateResponse::DeleteStructTemplateResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteStructTemplateResponse::~DeleteStructTemplateResponse() = default;

void DeleteStructTemplateResponse::validate()
{
}

web::json::value DeleteStructTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool DeleteStructTemplateResponse::fromJson(const web::json::value& val)
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

std::string DeleteStructTemplateResponse::getBody() const
{
    return body_;
}

void DeleteStructTemplateResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteStructTemplateResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteStructTemplateResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


