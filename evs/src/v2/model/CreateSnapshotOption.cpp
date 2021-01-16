

#include "huaweicloud/evs/v2/model/CreateSnapshotOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CreateSnapshotOption::CreateSnapshotOption()
{
    volumeId_ = "";
    volumeIdIsSet_ = false;
    force_ = false;
    forceIsSet_ = false;
    metadataIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

CreateSnapshotOption::~CreateSnapshotOption() = default;

void CreateSnapshotOption::validate()
{
}

web::json::value CreateSnapshotOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }
    if(forceIsSet_) {
        val[utility::conversions::to_string_t("force")] = ModelBase::toJson(force_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}

bool CreateSnapshotOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("volume_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("force"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("force"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForce(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    return ok;
}


std::string CreateSnapshotOption::getVolumeId() const
{
    return volumeId_;
}

void CreateSnapshotOption::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool CreateSnapshotOption::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void CreateSnapshotOption::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

bool CreateSnapshotOption::isForce() const
{
    return force_;
}

void CreateSnapshotOption::setForce(bool value)
{
    force_ = value;
    forceIsSet_ = true;
}

bool CreateSnapshotOption::forceIsSet() const
{
    return forceIsSet_;
}

void CreateSnapshotOption::unsetforce()
{
    forceIsSet_ = false;
}

std::map<std::string, std::string>& CreateSnapshotOption::getMetadata()
{
    return metadata_;
}

void CreateSnapshotOption::setMetadata(const std::map<std::string, std::string>& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool CreateSnapshotOption::metadataIsSet() const
{
    return metadataIsSet_;
}

void CreateSnapshotOption::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::string CreateSnapshotOption::getDescription() const
{
    return description_;
}

void CreateSnapshotOption::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateSnapshotOption::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateSnapshotOption::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateSnapshotOption::getName() const
{
    return name_;
}

void CreateSnapshotOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateSnapshotOption::nameIsSet() const
{
    return nameIsSet_;
}

void CreateSnapshotOption::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


