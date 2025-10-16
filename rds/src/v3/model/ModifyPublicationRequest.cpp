

#include "huaweicloud/rds/v3/model/ModifyPublicationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ModifyPublicationRequest::ModifyPublicationRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    publicationId_ = "";
    publicationIdIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyPublicationRequest::~ModifyPublicationRequest() = default;

void ModifyPublicationRequest::validate()
{
}

web::json::value ModifyPublicationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(publicationIdIsSet_) {
        val[utility::conversions::to_string_t("publication_id")] = ModelBase::toJson(publicationId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ModifyPublicationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publication_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publication_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ModifyPublicationsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifyPublicationRequest::getXLanguage() const
{
    return xLanguage_;
}

void ModifyPublicationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ModifyPublicationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ModifyPublicationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ModifyPublicationRequest::getInstanceId() const
{
    return instanceId_;
}

void ModifyPublicationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ModifyPublicationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ModifyPublicationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ModifyPublicationRequest::getPublicationId() const
{
    return publicationId_;
}

void ModifyPublicationRequest::setPublicationId(const std::string& value)
{
    publicationId_ = value;
    publicationIdIsSet_ = true;
}

bool ModifyPublicationRequest::publicationIdIsSet() const
{
    return publicationIdIsSet_;
}

void ModifyPublicationRequest::unsetpublicationId()
{
    publicationIdIsSet_ = false;
}

ModifyPublicationsRequestBody ModifyPublicationRequest::getBody() const
{
    return body_;
}

void ModifyPublicationRequest::setBody(const ModifyPublicationsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyPublicationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyPublicationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


