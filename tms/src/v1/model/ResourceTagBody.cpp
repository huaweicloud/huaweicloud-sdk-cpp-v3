

#include "huaweicloud/tms/v1/model/ResourceTagBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ResourceTagBody::ResourceTagBody()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
}

ResourceTagBody::~ResourceTagBody() = default;

void ResourceTagBody::validate()
{
}

web::json::value ResourceTagBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }

    return val;
}
bool ResourceTagBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    return ok;
}


std::string ResourceTagBody::getResourceId() const
{
    return resourceId_;
}

void ResourceTagBody::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ResourceTagBody::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ResourceTagBody::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string ResourceTagBody::getResourceType() const
{
    return resourceType_;
}

void ResourceTagBody::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ResourceTagBody::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ResourceTagBody::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

}
}
}
}
}


