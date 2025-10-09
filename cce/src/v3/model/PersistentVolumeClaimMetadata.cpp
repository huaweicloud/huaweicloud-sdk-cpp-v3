

#include "huaweicloud/cce/v3/model/PersistentVolumeClaimMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




PersistentVolumeClaimMetadata::PersistentVolumeClaimMetadata()
{
    name_ = "";
    nameIsSet_ = false;
    labelsIsSet_ = false;
}

PersistentVolumeClaimMetadata::~PersistentVolumeClaimMetadata() = default;

void PersistentVolumeClaimMetadata::validate()
{
}

web::json::value PersistentVolumeClaimMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }

    return val;
}
bool PersistentVolumeClaimMetadata::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("labels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labels"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabels(refVal);
        }
    }
    return ok;
}


std::string PersistentVolumeClaimMetadata::getName() const
{
    return name_;
}

void PersistentVolumeClaimMetadata::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PersistentVolumeClaimMetadata::nameIsSet() const
{
    return nameIsSet_;
}

void PersistentVolumeClaimMetadata::unsetname()
{
    nameIsSet_ = false;
}

std::map<std::string, std::string>& PersistentVolumeClaimMetadata::getLabels()
{
    return labels_;
}

void PersistentVolumeClaimMetadata::setLabels(const std::map<std::string, std::string>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool PersistentVolumeClaimMetadata::labelsIsSet() const
{
    return labelsIsSet_;
}

void PersistentVolumeClaimMetadata::unsetlabels()
{
    labelsIsSet_ = false;
}

}
}
}
}
}


