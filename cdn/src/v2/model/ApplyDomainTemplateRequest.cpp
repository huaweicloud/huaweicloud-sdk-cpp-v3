

#include "huaweicloud/cdn/v2/model/ApplyDomainTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ApplyDomainTemplateRequest::ApplyDomainTemplateRequest()
{
    tmlId_ = "";
    tmlIdIsSet_ = false;
    bodyIsSet_ = false;
}

ApplyDomainTemplateRequest::~ApplyDomainTemplateRequest() = default;

void ApplyDomainTemplateRequest::validate()
{
}

web::json::value ApplyDomainTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tmlIdIsSet_) {
        val[utility::conversions::to_string_t("tml_id")] = ModelBase::toJson(tmlId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ApplyDomainTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tml_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tml_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTmlId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            TemplateApplyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ApplyDomainTemplateRequest::getTmlId() const
{
    return tmlId_;
}

void ApplyDomainTemplateRequest::setTmlId(const std::string& value)
{
    tmlId_ = value;
    tmlIdIsSet_ = true;
}

bool ApplyDomainTemplateRequest::tmlIdIsSet() const
{
    return tmlIdIsSet_;
}

void ApplyDomainTemplateRequest::unsettmlId()
{
    tmlIdIsSet_ = false;
}

TemplateApplyRequestBody ApplyDomainTemplateRequest::getBody() const
{
    return body_;
}

void ApplyDomainTemplateRequest::setBody(const TemplateApplyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ApplyDomainTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ApplyDomainTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


