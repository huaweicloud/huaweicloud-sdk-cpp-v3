

#include "huaweicloud/evs/v2/model/ListVolumesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ListVolumesRequest::ListVolumesRequest()
{
    marker_ = "";
    markerIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    metadata_ = "";
    metadataIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    multiattach_ = false;
    multiattachIsSet_ = false;
    serviceType_ = "";
    serviceTypeIsSet_ = false;
    dedicatedStorageId_ = "";
    dedicatedStorageIdIsSet_ = false;
    dedicatedStorageName_ = "";
    dedicatedStorageNameIsSet_ = false;
    volumeTypeId_ = "";
    volumeTypeIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    ids_ = "";
    idsIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    serverId_ = "";
    serverIdIsSet_ = false;
}

ListVolumesRequest::~ListVolumesRequest() = default;

void ListVolumesRequest::validate()
{
}

web::json::value ListVolumesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(multiattachIsSet_) {
        val[utility::conversions::to_string_t("multiattach")] = ModelBase::toJson(multiattach_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(dedicatedStorageIdIsSet_) {
        val[utility::conversions::to_string_t("dedicated_storage_id")] = ModelBase::toJson(dedicatedStorageId_);
    }
    if(dedicatedStorageNameIsSet_) {
        val[utility::conversions::to_string_t("dedicated_storage_name")] = ModelBase::toJson(dedicatedStorageName_);
    }
    if(volumeTypeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_type_id")] = ModelBase::toJson(volumeTypeId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(idsIsSet_) {
        val[utility::conversions::to_string_t("ids")] = ModelBase::toJson(ids_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }

    return val;
}
bool ListVolumesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("multiattach"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("multiattach"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMultiattach(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("dedicated_storage_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dedicated_storage_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDedicatedStorageId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("volume_type_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_type_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeTypeId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIds(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerId(refVal);
        }
    }
    return ok;
}


std::string ListVolumesRequest::getMarker() const
{
    return marker_;
}

void ListVolumesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListVolumesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListVolumesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListVolumesRequest::getName() const
{
    return name_;
}

void ListVolumesRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListVolumesRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListVolumesRequest::unsetname()
{
    nameIsSet_ = false;
}

int32_t ListVolumesRequest::getLimit() const
{
    return limit_;
}

void ListVolumesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListVolumesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListVolumesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListVolumesRequest::getSortKey() const
{
    return sortKey_;
}

void ListVolumesRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListVolumesRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListVolumesRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

int32_t ListVolumesRequest::getOffset() const
{
    return offset_;
}

void ListVolumesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListVolumesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListVolumesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListVolumesRequest::getSortDir() const
{
    return sortDir_;
}

void ListVolumesRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListVolumesRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListVolumesRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ListVolumesRequest::getStatus() const
{
    return status_;
}

void ListVolumesRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListVolumesRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListVolumesRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListVolumesRequest::getMetadata() const
{
    return metadata_;
}

void ListVolumesRequest::setMetadata(const std::string& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ListVolumesRequest::metadataIsSet() const
{
    return metadataIsSet_;
}

void ListVolumesRequest::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::string ListVolumesRequest::getAvailabilityZone() const
{
    return availabilityZone_;
}

void ListVolumesRequest::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool ListVolumesRequest::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void ListVolumesRequest::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

bool ListVolumesRequest::isMultiattach() const
{
    return multiattach_;
}

void ListVolumesRequest::setMultiattach(bool value)
{
    multiattach_ = value;
    multiattachIsSet_ = true;
}

bool ListVolumesRequest::multiattachIsSet() const
{
    return multiattachIsSet_;
}

void ListVolumesRequest::unsetmultiattach()
{
    multiattachIsSet_ = false;
}

std::string ListVolumesRequest::getServiceType() const
{
    return serviceType_;
}

void ListVolumesRequest::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool ListVolumesRequest::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void ListVolumesRequest::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::string ListVolumesRequest::getDedicatedStorageId() const
{
    return dedicatedStorageId_;
}

void ListVolumesRequest::setDedicatedStorageId(const std::string& value)
{
    dedicatedStorageId_ = value;
    dedicatedStorageIdIsSet_ = true;
}

bool ListVolumesRequest::dedicatedStorageIdIsSet() const
{
    return dedicatedStorageIdIsSet_;
}

void ListVolumesRequest::unsetdedicatedStorageId()
{
    dedicatedStorageIdIsSet_ = false;
}

std::string ListVolumesRequest::getDedicatedStorageName() const
{
    return dedicatedStorageName_;
}

void ListVolumesRequest::setDedicatedStorageName(const std::string& value)
{
    dedicatedStorageName_ = value;
    dedicatedStorageNameIsSet_ = true;
}

bool ListVolumesRequest::dedicatedStorageNameIsSet() const
{
    return dedicatedStorageNameIsSet_;
}

void ListVolumesRequest::unsetdedicatedStorageName()
{
    dedicatedStorageNameIsSet_ = false;
}

std::string ListVolumesRequest::getVolumeTypeId() const
{
    return volumeTypeId_;
}

void ListVolumesRequest::setVolumeTypeId(const std::string& value)
{
    volumeTypeId_ = value;
    volumeTypeIdIsSet_ = true;
}

bool ListVolumesRequest::volumeTypeIdIsSet() const
{
    return volumeTypeIdIsSet_;
}

void ListVolumesRequest::unsetvolumeTypeId()
{
    volumeTypeIdIsSet_ = false;
}

std::string ListVolumesRequest::getId() const
{
    return id_;
}

void ListVolumesRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListVolumesRequest::idIsSet() const
{
    return idIsSet_;
}

void ListVolumesRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListVolumesRequest::getIds() const
{
    return ids_;
}

void ListVolumesRequest::setIds(const std::string& value)
{
    ids_ = value;
    idsIsSet_ = true;
}

bool ListVolumesRequest::idsIsSet() const
{
    return idsIsSet_;
}

void ListVolumesRequest::unsetids()
{
    idsIsSet_ = false;
}

std::string ListVolumesRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListVolumesRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListVolumesRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListVolumesRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListVolumesRequest::getServerId() const
{
    return serverId_;
}

void ListVolumesRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ListVolumesRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ListVolumesRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

}
}
}
}
}


