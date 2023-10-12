

#include "huaweicloud/evs/v2/model/VolumeTransfer.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




VolumeTransfer::VolumeTransfer()
{
    createdAt_ = "";
    createdAtIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    linksIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    volumeId_ = "";
    volumeIdIsSet_ = false;
}

VolumeTransfer::~VolumeTransfer() = default;

void VolumeTransfer::validate()
{
}

web::json::value VolumeTransfer::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(linksIsSet_) {
        val[utility::conversions::to_string_t("links")] = ModelBase::toJson(links_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }

    return val;
}
bool VolumeTransfer::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("links"));
        if(!fieldValue.is_null())
        {
            std::vector<Link> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLinks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeId(refVal);
        }
    }
    return ok;
}


std::string VolumeTransfer::getCreatedAt() const
{
    return createdAt_;
}

void VolumeTransfer::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool VolumeTransfer::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void VolumeTransfer::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string VolumeTransfer::getId() const
{
    return id_;
}

void VolumeTransfer::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool VolumeTransfer::idIsSet() const
{
    return idIsSet_;
}

void VolumeTransfer::unsetid()
{
    idIsSet_ = false;
}

std::vector<Link>& VolumeTransfer::getLinks()
{
    return links_;
}

void VolumeTransfer::setLinks(const std::vector<Link>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool VolumeTransfer::linksIsSet() const
{
    return linksIsSet_;
}

void VolumeTransfer::unsetlinks()
{
    linksIsSet_ = false;
}

std::string VolumeTransfer::getName() const
{
    return name_;
}

void VolumeTransfer::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool VolumeTransfer::nameIsSet() const
{
    return nameIsSet_;
}

void VolumeTransfer::unsetname()
{
    nameIsSet_ = false;
}

std::string VolumeTransfer::getVolumeId() const
{
    return volumeId_;
}

void VolumeTransfer::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool VolumeTransfer::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void VolumeTransfer::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

}
}
}
}
}


