

#include "huaweicloud/drs/v5/model/BatchCreateTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




BatchCreateTagsRequest::BatchCreateTagsRequest()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchCreateTagsRequest::~BatchCreateTagsRequest() = default;

void BatchCreateTagsRequest::validate()
{
}

web::json::value BatchCreateTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchCreateTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchAddTagReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchCreateTagsRequest::getResourceType() const
{
    return resourceType_;
}

void BatchCreateTagsRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool BatchCreateTagsRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void BatchCreateTagsRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string BatchCreateTagsRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchCreateTagsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchCreateTagsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchCreateTagsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string BatchCreateTagsRequest::getResourceId() const
{
    return resourceId_;
}

void BatchCreateTagsRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool BatchCreateTagsRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void BatchCreateTagsRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

BatchAddTagReq BatchCreateTagsRequest::getBody() const
{
    return body_;
}

void BatchCreateTagsRequest::setBody(const BatchAddTagReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


