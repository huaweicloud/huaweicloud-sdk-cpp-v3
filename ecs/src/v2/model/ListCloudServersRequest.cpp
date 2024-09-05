

#include "huaweicloud/ecs/v2/model/ListCloudServersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListCloudServersRequest::ListCloudServersRequest()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    inRecycleBin_ = false;
    inRecycleBinIsSet_ = false;
    spodId_ = "";
    spodIdIsSet_ = false;
    flavorName_ = "";
    flavorNameIsSet_ = false;
    imageId_ = "";
    imageIdIsSet_ = false;
    metadata_ = "";
    metadataIsSet_ = false;
    metadataKey_ = "";
    metadataKeyIsSet_ = false;
    tags_ = "";
    tagsIsSet_ = false;
    notTags_ = "";
    notTagsIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    availabilityZoneEq_ = "";
    availabilityZoneEqIsSet_ = false;
    chargingMode_ = "";
    chargingModeIsSet_ = false;
    keyName_ = "";
    keyNameIsSet_ = false;
    launchedSince_ = "";
    launchedSinceIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    expectFieldsIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListCloudServersRequest::~ListCloudServersRequest() = default;

void ListCloudServersRequest::validate()
{
}

web::json::value ListCloudServersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(inRecycleBinIsSet_) {
        val[utility::conversions::to_string_t("in_recycle_bin")] = ModelBase::toJson(inRecycleBin_);
    }
    if(spodIdIsSet_) {
        val[utility::conversions::to_string_t("spod_id")] = ModelBase::toJson(spodId_);
    }
    if(flavorNameIsSet_) {
        val[utility::conversions::to_string_t("flavor_name")] = ModelBase::toJson(flavorName_);
    }
    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(metadataKeyIsSet_) {
        val[utility::conversions::to_string_t("metadata-key")] = ModelBase::toJson(metadataKey_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(notTagsIsSet_) {
        val[utility::conversions::to_string_t("not-tags")] = ModelBase::toJson(notTags_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(availabilityZoneEqIsSet_) {
        val[utility::conversions::to_string_t("availability_zone_eq")] = ModelBase::toJson(availabilityZoneEq_);
    }
    if(chargingModeIsSet_) {
        val[utility::conversions::to_string_t("charging_mode")] = ModelBase::toJson(chargingMode_);
    }
    if(keyNameIsSet_) {
        val[utility::conversions::to_string_t("key_name")] = ModelBase::toJson(keyName_);
    }
    if(launchedSinceIsSet_) {
        val[utility::conversions::to_string_t("launched_since")] = ModelBase::toJson(launchedSince_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(expectFieldsIsSet_) {
        val[utility::conversions::to_string_t("expect-fields")] = ModelBase::toJson(expectFields_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool ListCloudServersRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("in_recycle_bin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("in_recycle_bin"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInRecycleBin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spod_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spod_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpodId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata-key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata-key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadataKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("not-tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("not-tags"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotTags(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("availability_zone_eq"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone_eq"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZoneEq(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charging_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charging_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargingMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("launched_since"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("launched_since"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLaunchedSince(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expect-fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expect-fields"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpectFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    return ok;
}


std::string ListCloudServersRequest::getId() const
{
    return id_;
}

void ListCloudServersRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListCloudServersRequest::idIsSet() const
{
    return idIsSet_;
}

void ListCloudServersRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListCloudServersRequest::getName() const
{
    return name_;
}

void ListCloudServersRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListCloudServersRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListCloudServersRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListCloudServersRequest::getStatus() const
{
    return status_;
}

void ListCloudServersRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListCloudServersRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListCloudServersRequest::unsetstatus()
{
    statusIsSet_ = false;
}

bool ListCloudServersRequest::isInRecycleBin() const
{
    return inRecycleBin_;
}

void ListCloudServersRequest::setInRecycleBin(bool value)
{
    inRecycleBin_ = value;
    inRecycleBinIsSet_ = true;
}

bool ListCloudServersRequest::inRecycleBinIsSet() const
{
    return inRecycleBinIsSet_;
}

void ListCloudServersRequest::unsetinRecycleBin()
{
    inRecycleBinIsSet_ = false;
}

std::string ListCloudServersRequest::getSpodId() const
{
    return spodId_;
}

void ListCloudServersRequest::setSpodId(const std::string& value)
{
    spodId_ = value;
    spodIdIsSet_ = true;
}

bool ListCloudServersRequest::spodIdIsSet() const
{
    return spodIdIsSet_;
}

void ListCloudServersRequest::unsetspodId()
{
    spodIdIsSet_ = false;
}

std::string ListCloudServersRequest::getFlavorName() const
{
    return flavorName_;
}

void ListCloudServersRequest::setFlavorName(const std::string& value)
{
    flavorName_ = value;
    flavorNameIsSet_ = true;
}

bool ListCloudServersRequest::flavorNameIsSet() const
{
    return flavorNameIsSet_;
}

void ListCloudServersRequest::unsetflavorName()
{
    flavorNameIsSet_ = false;
}

std::string ListCloudServersRequest::getImageId() const
{
    return imageId_;
}

void ListCloudServersRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool ListCloudServersRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void ListCloudServersRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string ListCloudServersRequest::getMetadata() const
{
    return metadata_;
}

void ListCloudServersRequest::setMetadata(const std::string& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ListCloudServersRequest::metadataIsSet() const
{
    return metadataIsSet_;
}

void ListCloudServersRequest::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::string ListCloudServersRequest::getMetadataKey() const
{
    return metadataKey_;
}

void ListCloudServersRequest::setMetadataKey(const std::string& value)
{
    metadataKey_ = value;
    metadataKeyIsSet_ = true;
}

bool ListCloudServersRequest::metadataKeyIsSet() const
{
    return metadataKeyIsSet_;
}

void ListCloudServersRequest::unsetmetadataKey()
{
    metadataKeyIsSet_ = false;
}

std::string ListCloudServersRequest::getTags() const
{
    return tags_;
}

void ListCloudServersRequest::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListCloudServersRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListCloudServersRequest::unsettags()
{
    tagsIsSet_ = false;
}

std::string ListCloudServersRequest::getNotTags() const
{
    return notTags_;
}

void ListCloudServersRequest::setNotTags(const std::string& value)
{
    notTags_ = value;
    notTagsIsSet_ = true;
}

bool ListCloudServersRequest::notTagsIsSet() const
{
    return notTagsIsSet_;
}

void ListCloudServersRequest::unsetnotTags()
{
    notTagsIsSet_ = false;
}

std::string ListCloudServersRequest::getAvailabilityZone() const
{
    return availabilityZone_;
}

void ListCloudServersRequest::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool ListCloudServersRequest::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void ListCloudServersRequest::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string ListCloudServersRequest::getAvailabilityZoneEq() const
{
    return availabilityZoneEq_;
}

void ListCloudServersRequest::setAvailabilityZoneEq(const std::string& value)
{
    availabilityZoneEq_ = value;
    availabilityZoneEqIsSet_ = true;
}

bool ListCloudServersRequest::availabilityZoneEqIsSet() const
{
    return availabilityZoneEqIsSet_;
}

void ListCloudServersRequest::unsetavailabilityZoneEq()
{
    availabilityZoneEqIsSet_ = false;
}

std::string ListCloudServersRequest::getChargingMode() const
{
    return chargingMode_;
}

void ListCloudServersRequest::setChargingMode(const std::string& value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool ListCloudServersRequest::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void ListCloudServersRequest::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

std::string ListCloudServersRequest::getKeyName() const
{
    return keyName_;
}

void ListCloudServersRequest::setKeyName(const std::string& value)
{
    keyName_ = value;
    keyNameIsSet_ = true;
}

bool ListCloudServersRequest::keyNameIsSet() const
{
    return keyNameIsSet_;
}

void ListCloudServersRequest::unsetkeyName()
{
    keyNameIsSet_ = false;
}

std::string ListCloudServersRequest::getLaunchedSince() const
{
    return launchedSince_;
}

void ListCloudServersRequest::setLaunchedSince(const std::string& value)
{
    launchedSince_ = value;
    launchedSinceIsSet_ = true;
}

bool ListCloudServersRequest::launchedSinceIsSet() const
{
    return launchedSinceIsSet_;
}

void ListCloudServersRequest::unsetlaunchedSince()
{
    launchedSinceIsSet_ = false;
}

std::string ListCloudServersRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListCloudServersRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListCloudServersRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListCloudServersRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<std::string>& ListCloudServersRequest::getExpectFields()
{
    return expectFields_;
}

void ListCloudServersRequest::setExpectFields(const std::vector<std::string>& value)
{
    expectFields_ = value;
    expectFieldsIsSet_ = true;
}

bool ListCloudServersRequest::expectFieldsIsSet() const
{
    return expectFieldsIsSet_;
}

void ListCloudServersRequest::unsetexpectFields()
{
    expectFieldsIsSet_ = false;
}

int32_t ListCloudServersRequest::getLimit() const
{
    return limit_;
}

void ListCloudServersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListCloudServersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListCloudServersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListCloudServersRequest::getMarker() const
{
    return marker_;
}

void ListCloudServersRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListCloudServersRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListCloudServersRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


