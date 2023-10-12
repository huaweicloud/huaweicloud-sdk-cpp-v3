

#include "huaweicloud/lts/v2/model/DeleteStructTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




DeleteStructTemplateRequest::DeleteStructTemplateRequest()
{
    bodyIsSet_ = false;
}

DeleteStructTemplateRequest::~DeleteStructTemplateRequest() = default;

void DeleteStructTemplateRequest::validate()
{
}

web::json::value DeleteStructTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteStructTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeleteStructTemplateReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


DeleteStructTemplateReqBody DeleteStructTemplateRequest::getBody() const
{
    return body_;
}

void DeleteStructTemplateRequest::setBody(const DeleteStructTemplateReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteStructTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteStructTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


