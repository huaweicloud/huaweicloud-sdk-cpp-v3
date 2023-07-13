

#include "huaweicloud/mpc/v1/model/CreateTransTemplateRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateTransTemplateRequest::CreateTransTemplateRequest()
{
    bodyIsSet_ = false;
}

CreateTransTemplateRequest::~CreateTransTemplateRequest() = default;

void CreateTransTemplateRequest::validate()
{
}

web::json::value CreateTransTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateTransTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            TransTemplate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

TransTemplate CreateTransTemplateRequest::getBody() const
{
    return body_;
}

void CreateTransTemplateRequest::setBody(const TransTemplate& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTransTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTransTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


