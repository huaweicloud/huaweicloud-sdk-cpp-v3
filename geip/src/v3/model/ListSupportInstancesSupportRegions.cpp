

#include "huaweicloud/geip/v3/model/ListSupportInstancesSupportRegions.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListSupportInstancesSupportRegions::ListSupportInstancesSupportRegions()
{
    id_ = "";
    idIsSet_ = false;
    instanceType_ = "";
    instanceTypeIsSet_ = false;
    publicBorderGroup_ = "";
    publicBorderGroupIsSet_ = false;
    regionId_ = "";
    regionIdIsSet_ = false;
    accessSite_ = "";
    accessSiteIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
}

ListSupportInstancesSupportRegions::~ListSupportInstancesSupportRegions() = default;

void ListSupportInstancesSupportRegions::validate()
{
}

web::json::value ListSupportInstancesSupportRegions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(instanceTypeIsSet_) {
        val[utility::conversions::to_string_t("instance_type")] = ModelBase::toJson(instanceType_);
    }
    if(publicBorderGroupIsSet_) {
        val[utility::conversions::to_string_t("public_border_group")] = ModelBase::toJson(publicBorderGroup_);
    }
    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }
    if(accessSiteIsSet_) {
        val[utility::conversions::to_string_t("access_site")] = ModelBase::toJson(accessSite_);
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
bool ListSupportInstancesSupportRegions::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("public_border_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_border_group"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicBorderGroup(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("access_site"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_site"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessSite(refVal);
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


std::string ListSupportInstancesSupportRegions::getId() const
{
    return id_;
}

void ListSupportInstancesSupportRegions::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListSupportInstancesSupportRegions::idIsSet() const
{
    return idIsSet_;
}

void ListSupportInstancesSupportRegions::unsetid()
{
    idIsSet_ = false;
}

std::string ListSupportInstancesSupportRegions::getInstanceType() const
{
    return instanceType_;
}

void ListSupportInstancesSupportRegions::setInstanceType(const std::string& value)
{
    instanceType_ = value;
    instanceTypeIsSet_ = true;
}

bool ListSupportInstancesSupportRegions::instanceTypeIsSet() const
{
    return instanceTypeIsSet_;
}

void ListSupportInstancesSupportRegions::unsetinstanceType()
{
    instanceTypeIsSet_ = false;
}

std::string ListSupportInstancesSupportRegions::getPublicBorderGroup() const
{
    return publicBorderGroup_;
}

void ListSupportInstancesSupportRegions::setPublicBorderGroup(const std::string& value)
{
    publicBorderGroup_ = value;
    publicBorderGroupIsSet_ = true;
}

bool ListSupportInstancesSupportRegions::publicBorderGroupIsSet() const
{
    return publicBorderGroupIsSet_;
}

void ListSupportInstancesSupportRegions::unsetpublicBorderGroup()
{
    publicBorderGroupIsSet_ = false;
}

std::string ListSupportInstancesSupportRegions::getRegionId() const
{
    return regionId_;
}

void ListSupportInstancesSupportRegions::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool ListSupportInstancesSupportRegions::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void ListSupportInstancesSupportRegions::unsetregionId()
{
    regionIdIsSet_ = false;
}

std::string ListSupportInstancesSupportRegions::getAccessSite() const
{
    return accessSite_;
}

void ListSupportInstancesSupportRegions::setAccessSite(const std::string& value)
{
    accessSite_ = value;
    accessSiteIsSet_ = true;
}

bool ListSupportInstancesSupportRegions::accessSiteIsSet() const
{
    return accessSiteIsSet_;
}

void ListSupportInstancesSupportRegions::unsetaccessSite()
{
    accessSiteIsSet_ = false;
}

std::string ListSupportInstancesSupportRegions::getStatus() const
{
    return status_;
}

void ListSupportInstancesSupportRegions::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListSupportInstancesSupportRegions::statusIsSet() const
{
    return statusIsSet_;
}

void ListSupportInstancesSupportRegions::unsetstatus()
{
    statusIsSet_ = false;
}

utility::datetime ListSupportInstancesSupportRegions::getCreatedAt() const
{
    return createdAt_;
}

void ListSupportInstancesSupportRegions::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ListSupportInstancesSupportRegions::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ListSupportInstancesSupportRegions::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime ListSupportInstancesSupportRegions::getUpdatedAt() const
{
    return updatedAt_;
}

void ListSupportInstancesSupportRegions::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ListSupportInstancesSupportRegions::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ListSupportInstancesSupportRegions::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


