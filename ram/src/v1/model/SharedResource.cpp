

#include "huaweicloud/ram/v1/model/SharedResource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




SharedResource::SharedResource()
{
    resourceUrn_ = "";
    resourceUrnIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceShareId_ = "";
    resourceShareIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

SharedResource::~SharedResource() = default;

void SharedResource::validate()
{
}

web::json::value SharedResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceUrnIsSet_) {
        val[utility::conversions::to_string_t("resource_urn")] = ModelBase::toJson(resourceUrn_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(resourceShareIdIsSet_) {
        val[utility::conversions::to_string_t("resource_share_id")] = ModelBase::toJson(resourceShareId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool SharedResource::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_share_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_share_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceShareId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string SharedResource::getResourceUrn() const
{
    return resourceUrn_;
}

void SharedResource::setResourceUrn(const std::string& value)
{
    resourceUrn_ = value;
    resourceUrnIsSet_ = true;
}

bool SharedResource::resourceUrnIsSet() const
{
    return resourceUrnIsSet_;
}

void SharedResource::unsetresourceUrn()
{
    resourceUrnIsSet_ = false;
}

utility::datetime SharedResource::getCreatedAt() const
{
    return createdAt_;
}

void SharedResource::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool SharedResource::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void SharedResource::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime SharedResource::getUpdatedAt() const
{
    return updatedAt_;
}

void SharedResource::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool SharedResource::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void SharedResource::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string SharedResource::getResourceType() const
{
    return resourceType_;
}

void SharedResource::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool SharedResource::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void SharedResource::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string SharedResource::getResourceShareId() const
{
    return resourceShareId_;
}

void SharedResource::setResourceShareId(const std::string& value)
{
    resourceShareId_ = value;
    resourceShareIdIsSet_ = true;
}

bool SharedResource::resourceShareIdIsSet() const
{
    return resourceShareIdIsSet_;
}

void SharedResource::unsetresourceShareId()
{
    resourceShareIdIsSet_ = false;
}

std::string SharedResource::getStatus() const
{
    return status_;
}

void SharedResource::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SharedResource::statusIsSet() const
{
    return statusIsSet_;
}

void SharedResource::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


