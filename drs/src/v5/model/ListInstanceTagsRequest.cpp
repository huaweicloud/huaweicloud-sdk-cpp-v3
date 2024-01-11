

#include "huaweicloud/drs/v5/model/ListInstanceTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListInstanceTagsRequest::ListInstanceTagsRequest()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
}

ListInstanceTagsRequest::~ListInstanceTagsRequest() = default;

void ListInstanceTagsRequest::validate()
{
}

web::json::value ListInstanceTagsRequest::toJson() const
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

    return val;
}
bool ListInstanceTagsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListInstanceTagsRequest::getResourceType() const
{
    return resourceType_;
}

void ListInstanceTagsRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ListInstanceTagsRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ListInstanceTagsRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string ListInstanceTagsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListInstanceTagsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListInstanceTagsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListInstanceTagsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListInstanceTagsRequest::getResourceId() const
{
    return resourceId_;
}

void ListInstanceTagsRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ListInstanceTagsRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ListInstanceTagsRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

}
}
}
}
}


