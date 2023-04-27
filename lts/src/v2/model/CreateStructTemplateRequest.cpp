

#include "huaweicloud/lts/v2/model/CreateStructTemplateRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateStructTemplateRequest::CreateStructTemplateRequest()
{
    bodyIsSet_ = false;
}

CreateStructTemplateRequest::~CreateStructTemplateRequest() = default;

void CreateStructTemplateRequest::validate()
{
}

web::json::value CreateStructTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateStructTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            LtsStructTemplateInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


LtsStructTemplateInfo CreateStructTemplateRequest::getBody() const
{
    return body_;
}

void CreateStructTemplateRequest::setBody(const LtsStructTemplateInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateStructTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateStructTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


