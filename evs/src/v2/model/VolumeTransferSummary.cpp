

#include "huaweicloud/evs/v2/model/VolumeTransferSummary.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




VolumeTransferSummary::VolumeTransferSummary()
{
    id_ = "";
    idIsSet_ = false;
    linksIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    volumeId_ = "";
    volumeIdIsSet_ = false;
}

VolumeTransferSummary::~VolumeTransferSummary() = default;

void VolumeTransferSummary::validate()
{
}

web::json::value VolumeTransferSummary::toJson() const
{
    web::json::value val = web::json::value::object();

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

bool VolumeTransferSummary::fromJson(const web::json::value& val)
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

std::string VolumeTransferSummary::getId() const
{
    return id_;
}

void VolumeTransferSummary::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool VolumeTransferSummary::idIsSet() const
{
    return idIsSet_;
}

void VolumeTransferSummary::unsetid()
{
    idIsSet_ = false;
}

std::vector<Link>& VolumeTransferSummary::getLinks()
{
    return links_;
}

void VolumeTransferSummary::setLinks(const std::vector<Link>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool VolumeTransferSummary::linksIsSet() const
{
    return linksIsSet_;
}

void VolumeTransferSummary::unsetlinks()
{
    linksIsSet_ = false;
}

std::string VolumeTransferSummary::getName() const
{
    return name_;
}

void VolumeTransferSummary::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool VolumeTransferSummary::nameIsSet() const
{
    return nameIsSet_;
}

void VolumeTransferSummary::unsetname()
{
    nameIsSet_ = false;
}

std::string VolumeTransferSummary::getVolumeId() const
{
    return volumeId_;
}

void VolumeTransferSummary::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool VolumeTransferSummary::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void VolumeTransferSummary::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

}
}
}
}
}


