

#include "huaweicloud/evs/v2/model/CountSnapshotChainsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CountSnapshotChainsRequest::CountSnapshotChainsRequest()
{
    volumeId_ = "";
    volumeIdIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

CountSnapshotChainsRequest::~CountSnapshotChainsRequest() = default;

void CountSnapshotChainsRequest::validate()
{
}

web::json::value CountSnapshotChainsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool CountSnapshotChainsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
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
    return ok;
}


std::string CountSnapshotChainsRequest::getVolumeId() const
{
    return volumeId_;
}

void CountSnapshotChainsRequest::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool CountSnapshotChainsRequest::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void CountSnapshotChainsRequest::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

std::string CountSnapshotChainsRequest::getAvailabilityZone() const
{
    return availabilityZone_;
}

void CountSnapshotChainsRequest::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool CountSnapshotChainsRequest::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void CountSnapshotChainsRequest::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string CountSnapshotChainsRequest::getCategory() const
{
    return category_;
}

void CountSnapshotChainsRequest::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool CountSnapshotChainsRequest::categoryIsSet() const
{
    return categoryIsSet_;
}

void CountSnapshotChainsRequest::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string CountSnapshotChainsRequest::getId() const
{
    return id_;
}

void CountSnapshotChainsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CountSnapshotChainsRequest::idIsSet() const
{
    return idIsSet_;
}

void CountSnapshotChainsRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


