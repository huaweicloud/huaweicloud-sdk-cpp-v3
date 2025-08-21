

#include "huaweicloud/cdn/v2/model/UpdateDomainTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




UpdateDomainTemplateRequest::UpdateDomainTemplateRequest()
{
    tmlId_ = "";
    tmlIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDomainTemplateRequest::~UpdateDomainTemplateRequest() = default;

void UpdateDomainTemplateRequest::validate()
{
}

web::json::value UpdateDomainTemplateRequest::toJson() const
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
bool UpdateDomainTemplateRequest::fromJson(const web::json::value& val)
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
            CreateTemplateRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDomainTemplateRequest::getTmlId() const
{
    return tmlId_;
}

void UpdateDomainTemplateRequest::setTmlId(const std::string& value)
{
    tmlId_ = value;
    tmlIdIsSet_ = true;
}

bool UpdateDomainTemplateRequest::tmlIdIsSet() const
{
    return tmlIdIsSet_;
}

void UpdateDomainTemplateRequest::unsettmlId()
{
    tmlIdIsSet_ = false;
}

CreateTemplateRequestBody UpdateDomainTemplateRequest::getBody() const
{
    return body_;
}

void UpdateDomainTemplateRequest::setBody(const CreateTemplateRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDomainTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDomainTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


