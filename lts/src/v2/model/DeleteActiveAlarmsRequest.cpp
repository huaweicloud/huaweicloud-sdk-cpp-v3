

#include "huaweicloud/lts/v2/model/DeleteActiveAlarmsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




DeleteActiveAlarmsRequest::DeleteActiveAlarmsRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteActiveAlarmsRequest::~DeleteActiveAlarmsRequest() = default;

void DeleteActiveAlarmsRequest::validate()
{
}

web::json::value DeleteActiveAlarmsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool DeleteActiveAlarmsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeleteActiveAlarmsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteActiveAlarmsRequest::getDomainId() const
{
    return domainId_;
}

void DeleteActiveAlarmsRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool DeleteActiveAlarmsRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void DeleteActiveAlarmsRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string DeleteActiveAlarmsRequest::getContentType() const
{
    return contentType_;
}

void DeleteActiveAlarmsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool DeleteActiveAlarmsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void DeleteActiveAlarmsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

DeleteActiveAlarmsRequestBody DeleteActiveAlarmsRequest::getBody() const
{
    return body_;
}

void DeleteActiveAlarmsRequest::setBody(const DeleteActiveAlarmsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteActiveAlarmsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteActiveAlarmsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


