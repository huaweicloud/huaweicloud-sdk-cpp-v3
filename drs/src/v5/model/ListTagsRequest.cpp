

#include "huaweicloud/drs/v5/model/ListTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListTagsRequest::ListTagsRequest()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListTagsRequest::~ListTagsRequest() = default;

void ListTagsRequest::validate()
{
}

web::json::value ListTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ListTagsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListTagsRequest::getResourceType() const
{
    return resourceType_;
}

void ListTagsRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ListTagsRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ListTagsRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string ListTagsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListTagsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListTagsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListTagsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


