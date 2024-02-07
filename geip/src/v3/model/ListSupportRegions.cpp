

#include "huaweicloud/geip/v3/model/ListSupportRegions.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListSupportRegions::ListSupportRegions()
{
    id_ = "";
    idIsSet_ = false;
    instanceType_ = "";
    instanceTypeIsSet_ = false;
    accessSite_ = "";
    accessSiteIsSet_ = false;
    regionId_ = "";
    regionIdIsSet_ = false;
    publicBorderGroup_ = "";
    publicBorderGroupIsSet_ = false;
    remoteEndpoint_ = "";
    remoteEndpointIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
}

ListSupportRegions::~ListSupportRegions() = default;

void ListSupportRegions::validate()
{
}

web::json::value ListSupportRegions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(instanceTypeIsSet_) {
        val[utility::conversions::to_string_t("instance_type")] = ModelBase::toJson(instanceType_);
    }
    if(accessSiteIsSet_) {
        val[utility::conversions::to_string_t("access_site")] = ModelBase::toJson(accessSite_);
    }
    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }
    if(publicBorderGroupIsSet_) {
        val[utility::conversions::to_string_t("public_border_group")] = ModelBase::toJson(publicBorderGroup_);
    }
    if(remoteEndpointIsSet_) {
        val[utility::conversions::to_string_t("remote_endpoint")] = ModelBase::toJson(remoteEndpoint_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool ListSupportRegions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_site"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_site"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessSite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_border_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_border_group"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicBorderGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remote_endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remote_endpoint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoteEndpoint(refVal);
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
    return ok;
}


std::string ListSupportRegions::getId() const
{
    return id_;
}

void ListSupportRegions::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListSupportRegions::idIsSet() const
{
    return idIsSet_;
}

void ListSupportRegions::unsetid()
{
    idIsSet_ = false;
}

std::string ListSupportRegions::getInstanceType() const
{
    return instanceType_;
}

void ListSupportRegions::setInstanceType(const std::string& value)
{
    instanceType_ = value;
    instanceTypeIsSet_ = true;
}

bool ListSupportRegions::instanceTypeIsSet() const
{
    return instanceTypeIsSet_;
}

void ListSupportRegions::unsetinstanceType()
{
    instanceTypeIsSet_ = false;
}

std::string ListSupportRegions::getAccessSite() const
{
    return accessSite_;
}

void ListSupportRegions::setAccessSite(const std::string& value)
{
    accessSite_ = value;
    accessSiteIsSet_ = true;
}

bool ListSupportRegions::accessSiteIsSet() const
{
    return accessSiteIsSet_;
}

void ListSupportRegions::unsetaccessSite()
{
    accessSiteIsSet_ = false;
}

std::string ListSupportRegions::getRegionId() const
{
    return regionId_;
}

void ListSupportRegions::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool ListSupportRegions::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void ListSupportRegions::unsetregionId()
{
    regionIdIsSet_ = false;
}

std::string ListSupportRegions::getPublicBorderGroup() const
{
    return publicBorderGroup_;
}

void ListSupportRegions::setPublicBorderGroup(const std::string& value)
{
    publicBorderGroup_ = value;
    publicBorderGroupIsSet_ = true;
}

bool ListSupportRegions::publicBorderGroupIsSet() const
{
    return publicBorderGroupIsSet_;
}

void ListSupportRegions::unsetpublicBorderGroup()
{
    publicBorderGroupIsSet_ = false;
}

std::string ListSupportRegions::getRemoteEndpoint() const
{
    return remoteEndpoint_;
}

void ListSupportRegions::setRemoteEndpoint(const std::string& value)
{
    remoteEndpoint_ = value;
    remoteEndpointIsSet_ = true;
}

bool ListSupportRegions::remoteEndpointIsSet() const
{
    return remoteEndpointIsSet_;
}

void ListSupportRegions::unsetremoteEndpoint()
{
    remoteEndpointIsSet_ = false;
}

std::string ListSupportRegions::getStatus() const
{
    return status_;
}

void ListSupportRegions::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListSupportRegions::statusIsSet() const
{
    return statusIsSet_;
}

void ListSupportRegions::unsetstatus()
{
    statusIsSet_ = false;
}

utility::datetime ListSupportRegions::getCreatedAt() const
{
    return createdAt_;
}

void ListSupportRegions::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ListSupportRegions::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ListSupportRegions::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime ListSupportRegions::getUpdatedAt() const
{
    return updatedAt_;
}

void ListSupportRegions::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ListSupportRegions::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ListSupportRegions::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


