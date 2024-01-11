

#include "huaweicloud/drs/v5/model/BatchDeleteTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




BatchDeleteTagsRequest::BatchDeleteTagsRequest()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteTagsRequest::~BatchDeleteTagsRequest() = default;

void BatchDeleteTagsRequest::validate()
{
}

web::json::value BatchDeleteTagsRequest::toJson() const
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
bool BatchDeleteTagsRequest::fromJson(const web::json::value& val)
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
            BatchDeleteTagReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteTagsRequest::getResourceType() const
{
    return resourceType_;
}

void BatchDeleteTagsRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool BatchDeleteTagsRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void BatchDeleteTagsRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string BatchDeleteTagsRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchDeleteTagsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchDeleteTagsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchDeleteTagsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string BatchDeleteTagsRequest::getResourceId() const
{
    return resourceId_;
}

void BatchDeleteTagsRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool BatchDeleteTagsRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void BatchDeleteTagsRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

BatchDeleteTagReq BatchDeleteTagsRequest::getBody() const
{
    return body_;
}

void BatchDeleteTagsRequest::setBody(const BatchDeleteTagReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


