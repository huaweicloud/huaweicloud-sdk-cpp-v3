

#include "huaweicloud/lts/v2/model/CreateStructTemplateResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateStructTemplateResponse::CreateStructTemplateResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

CreateStructTemplateResponse::~CreateStructTemplateResponse() = default;

void CreateStructTemplateResponse::validate()
{
}

web::json::value CreateStructTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateStructTemplateResponse::fromJson(const web::json::value& val)
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


std::string CreateStructTemplateResponse::getBody() const
{
    return body_;
}

void CreateStructTemplateResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateStructTemplateResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateStructTemplateResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


