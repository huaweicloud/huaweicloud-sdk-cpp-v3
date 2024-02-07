

#include "huaweicloud/eip/v3/model/InstancevirtualListResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




InstancevirtualListResp::InstancevirtualListResp()
{
    id_ = "";
    idIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
    location_ = "";
    locationIsSet_ = false;
    forwardMode_ = "";
    forwardModeIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
    hashMode_ = "";
    hashModeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    vni_ = 0;
    vniIsSet_ = false;
    nexthopsIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
}

InstancevirtualListResp::~InstancevirtualListResp() = default;

void InstancevirtualListResp::validate()
{
}

web::json::value InstancevirtualListResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }
    if(forwardModeIsSet_) {
        val[utility::conversions::to_string_t("forward_mode")] = ModelBase::toJson(forwardMode_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(hashModeIsSet_) {
        val[utility::conversions::to_string_t("hash_mode")] = ModelBase::toJson(hashMode_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(vniIsSet_) {
        val[utility::conversions::to_string_t("vni")] = ModelBase::toJson(vni_);
    }
    if(nexthopsIsSet_) {
        val[utility::conversions::to_string_t("nexthops")] = ModelBase::toJson(nexthops_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool InstancevirtualListResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("forward_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("forward_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForwardMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hash_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hash_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHashMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vni"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vni"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVni(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nexthops"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nexthops"));
        if(!fieldValue.is_null())
        {
            std::vector<NexthopDict> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNexthops(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    return ok;
}


std::string InstancevirtualListResp::getId() const
{
    return id_;
}

void InstancevirtualListResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool InstancevirtualListResp::idIsSet() const
{
    return idIsSet_;
}

void InstancevirtualListResp::unsetid()
{
    idIsSet_ = false;
}

std::string InstancevirtualListResp::getOwner() const
{
    return owner_;
}

void InstancevirtualListResp::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool InstancevirtualListResp::ownerIsSet() const
{
    return ownerIsSet_;
}

void InstancevirtualListResp::unsetowner()
{
    ownerIsSet_ = false;
}

std::string InstancevirtualListResp::getLocation() const
{
    return location_;
}

void InstancevirtualListResp::setLocation(const std::string& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool InstancevirtualListResp::locationIsSet() const
{
    return locationIsSet_;
}

void InstancevirtualListResp::unsetlocation()
{
    locationIsSet_ = false;
}

std::string InstancevirtualListResp::getForwardMode() const
{
    return forwardMode_;
}

void InstancevirtualListResp::setForwardMode(const std::string& value)
{
    forwardMode_ = value;
    forwardModeIsSet_ = true;
}

bool InstancevirtualListResp::forwardModeIsSet() const
{
    return forwardModeIsSet_;
}

void InstancevirtualListResp::unsetforwardMode()
{
    forwardModeIsSet_ = false;
}

std::string InstancevirtualListResp::getClusterId() const
{
    return clusterId_;
}

void InstancevirtualListResp::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool InstancevirtualListResp::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void InstancevirtualListResp::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string InstancevirtualListResp::getHashMode() const
{
    return hashMode_;
}

void InstancevirtualListResp::setHashMode(const std::string& value)
{
    hashMode_ = value;
    hashModeIsSet_ = true;
}

bool InstancevirtualListResp::hashModeIsSet() const
{
    return hashModeIsSet_;
}

void InstancevirtualListResp::unsethashMode()
{
    hashModeIsSet_ = false;
}

std::string InstancevirtualListResp::getType() const
{
    return type_;
}

void InstancevirtualListResp::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool InstancevirtualListResp::typeIsSet() const
{
    return typeIsSet_;
}

void InstancevirtualListResp::unsettype()
{
    typeIsSet_ = false;
}

int32_t InstancevirtualListResp::getVni() const
{
    return vni_;
}

void InstancevirtualListResp::setVni(int32_t value)
{
    vni_ = value;
    vniIsSet_ = true;
}

bool InstancevirtualListResp::vniIsSet() const
{
    return vniIsSet_;
}

void InstancevirtualListResp::unsetvni()
{
    vniIsSet_ = false;
}

std::vector<NexthopDict>& InstancevirtualListResp::getNexthops()
{
    return nexthops_;
}

void InstancevirtualListResp::setNexthops(const std::vector<NexthopDict>& value)
{
    nexthops_ = value;
    nexthopsIsSet_ = true;
}

bool InstancevirtualListResp::nexthopsIsSet() const
{
    return nexthopsIsSet_;
}

void InstancevirtualListResp::unsetnexthops()
{
    nexthopsIsSet_ = false;
}

std::string InstancevirtualListResp::getCreatedAt() const
{
    return createdAt_;
}

void InstancevirtualListResp::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool InstancevirtualListResp::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void InstancevirtualListResp::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string InstancevirtualListResp::getUpdatedAt() const
{
    return updatedAt_;
}

void InstancevirtualListResp::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool InstancevirtualListResp::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void InstancevirtualListResp::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


