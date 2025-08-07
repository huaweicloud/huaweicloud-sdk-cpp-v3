

#include "huaweicloud/ram/v1/model/DistinctSharedResource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




DistinctSharedResource::DistinctSharedResource()
{
    resourceUrn_ = "";
    resourceUrnIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
}

DistinctSharedResource::~DistinctSharedResource() = default;

void DistinctSharedResource::validate()
{
}

web::json::value DistinctSharedResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceUrnIsSet_) {
        val[utility::conversions::to_string_t("resource_urn")] = ModelBase::toJson(resourceUrn_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool DistinctSharedResource::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceUrn(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    return ok;
}


std::string DistinctSharedResource::getResourceUrn() const
{
    return resourceUrn_;
}

void DistinctSharedResource::setResourceUrn(const std::string& value)
{
    resourceUrn_ = value;
    resourceUrnIsSet_ = true;
}

bool DistinctSharedResource::resourceUrnIsSet() const
{
    return resourceUrnIsSet_;
}

void DistinctSharedResource::unsetresourceUrn()
{
    resourceUrnIsSet_ = false;
}

std::string DistinctSharedResource::getResourceType() const
{
    return resourceType_;
}

void DistinctSharedResource::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool DistinctSharedResource::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void DistinctSharedResource::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

utility::datetime DistinctSharedResource::getUpdatedAt() const
{
    return updatedAt_;
}

void DistinctSharedResource::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool DistinctSharedResource::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void DistinctSharedResource::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


