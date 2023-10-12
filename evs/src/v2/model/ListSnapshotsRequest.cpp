

#include "huaweicloud/evs/v2/model/ListSnapshotsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ListSnapshotsRequest::ListSnapshotsRequest()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    volumeId_ = "";
    volumeIdIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    dedicatedStorageName_ = "";
    dedicatedStorageNameIsSet_ = false;
    dedicatedStorageId_ = "";
    dedicatedStorageIdIsSet_ = false;
    serviceType_ = "";
    serviceTypeIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

ListSnapshotsRequest::~ListSnapshotsRequest() = default;

void ListSnapshotsRequest::validate()
{
}

web::json::value ListSnapshotsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(dedicatedStorageNameIsSet_) {
        val[utility::conversions::to_string_t("dedicated_storage_name")] = ModelBase::toJson(dedicatedStorageName_);
    }
    if(dedicatedStorageIdIsSet_) {
        val[utility::conversions::to_string_t("dedicated_storage_id")] = ModelBase::toJson(dedicatedStorageId_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool ListSnapshotsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dedicated_storage_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dedicated_storage_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDedicatedStorageName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dedicated_storage_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dedicated_storage_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDedicatedStorageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
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
    return ok;
}


int32_t ListSnapshotsRequest::getOffset() const
{
    return offset_;
}

void ListSnapshotsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSnapshotsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSnapshotsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListSnapshotsRequest::getLimit() const
{
    return limit_;
}

void ListSnapshotsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSnapshotsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSnapshotsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListSnapshotsRequest::getName() const
{
    return name_;
}

void ListSnapshotsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListSnapshotsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListSnapshotsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListSnapshotsRequest::getStatus() const
{
    return status_;
}

void ListSnapshotsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListSnapshotsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListSnapshotsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListSnapshotsRequest::getVolumeId() const
{
    return volumeId_;
}

void ListSnapshotsRequest::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool ListSnapshotsRequest::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void ListSnapshotsRequest::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

std::string ListSnapshotsRequest::getAvailabilityZone() const
{
    return availabilityZone_;
}

void ListSnapshotsRequest::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool ListSnapshotsRequest::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void ListSnapshotsRequest::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string ListSnapshotsRequest::getId() const
{
    return id_;
}

void ListSnapshotsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListSnapshotsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListSnapshotsRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListSnapshotsRequest::getDedicatedStorageName() const
{
    return dedicatedStorageName_;
}

void ListSnapshotsRequest::setDedicatedStorageName(const std::string& value)
{
    dedicatedStorageName_ = value;
    dedicatedStorageNameIsSet_ = true;
}

bool ListSnapshotsRequest::dedicatedStorageNameIsSet() const
{
    return dedicatedStorageNameIsSet_;
}

void ListSnapshotsRequest::unsetdedicatedStorageName()
{
    dedicatedStorageNameIsSet_ = false;
}

std::string ListSnapshotsRequest::getDedicatedStorageId() const
{
    return dedicatedStorageId_;
}

void ListSnapshotsRequest::setDedicatedStorageId(const std::string& value)
{
    dedicatedStorageId_ = value;
    dedicatedStorageIdIsSet_ = true;
}

bool ListSnapshotsRequest::dedicatedStorageIdIsSet() const
{
    return dedicatedStorageIdIsSet_;
}

void ListSnapshotsRequest::unsetdedicatedStorageId()
{
    dedicatedStorageIdIsSet_ = false;
}

std::string ListSnapshotsRequest::getServiceType() const
{
    return serviceType_;
}

void ListSnapshotsRequest::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool ListSnapshotsRequest::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void ListSnapshotsRequest::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::string ListSnapshotsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListSnapshotsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListSnapshotsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListSnapshotsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


