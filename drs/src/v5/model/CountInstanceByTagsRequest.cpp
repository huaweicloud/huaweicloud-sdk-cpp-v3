

#include "huaweicloud/drs/v5/model/CountInstanceByTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CountInstanceByTagsRequest::CountInstanceByTagsRequest()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CountInstanceByTagsRequest::~CountInstanceByTagsRequest() = default;

void CountInstanceByTagsRequest::validate()
{
}

web::json::value CountInstanceByTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CountInstanceByTagsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            QueryInstanceByTagReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CountInstanceByTagsRequest::getResourceType() const
{
    return resourceType_;
}

void CountInstanceByTagsRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool CountInstanceByTagsRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void CountInstanceByTagsRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string CountInstanceByTagsRequest::getXLanguage() const
{
    return xLanguage_;
}

void CountInstanceByTagsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CountInstanceByTagsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CountInstanceByTagsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

QueryInstanceByTagReq CountInstanceByTagsRequest::getBody() const
{
    return body_;
}

void CountInstanceByTagsRequest::setBody(const QueryInstanceByTagReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CountInstanceByTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CountInstanceByTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


