

#include "huaweicloud/gaussdb/v3/model/ShowDedicatedResourceInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowDedicatedResourceInfoResponse::ShowDedicatedResourceInfoResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    engineName_ = "";
    engineNameIsSet_ = false;
    availabilityZoneIdsIsSet_ = false;
    architecture_ = "";
    architectureIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    dedicatedComputeInfoIsSet_ = false;
    dedicatedStorageInfoIsSet_ = false;
}

ShowDedicatedResourceInfoResponse::~ShowDedicatedResourceInfoResponse() = default;

void ShowDedicatedResourceInfoResponse::validate()
{
}

web::json::value ShowDedicatedResourceInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(engineNameIsSet_) {
        val[utility::conversions::to_string_t("engine_name")] = ModelBase::toJson(engineName_);
    }
    if(availabilityZoneIdsIsSet_) {
        val[utility::conversions::to_string_t("availability_zone_ids")] = ModelBase::toJson(availabilityZoneIds_);
    }
    if(architectureIsSet_) {
        val[utility::conversions::to_string_t("architecture")] = ModelBase::toJson(architecture_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(dedicatedComputeInfoIsSet_) {
        val[utility::conversions::to_string_t("dedicated_compute_info")] = ModelBase::toJson(dedicatedComputeInfo_);
    }
    if(dedicatedStorageInfoIsSet_) {
        val[utility::conversions::to_string_t("dedicated_storage_info")] = ModelBase::toJson(dedicatedStorageInfo_);
    }

    return val;
}
bool ShowDedicatedResourceInfoResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("engine_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZoneIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("architecture"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("architecture"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArchitecture(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("dedicated_compute_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dedicated_compute_info"));
        if(!fieldValue.is_null())
        {
            DedicatedComputeInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDedicatedComputeInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dedicated_storage_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dedicated_storage_info"));
        if(!fieldValue.is_null())
        {
            DedicatedStorageInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDedicatedStorageInfo(refVal);
        }
    }
    return ok;
}


std::string ShowDedicatedResourceInfoResponse::getId() const
{
    return id_;
}

void ShowDedicatedResourceInfoResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowDedicatedResourceInfoResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowDedicatedResourceInfoResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowDedicatedResourceInfoResponse::getName() const
{
    return name_;
}

void ShowDedicatedResourceInfoResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowDedicatedResourceInfoResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowDedicatedResourceInfoResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowDedicatedResourceInfoResponse::getEngineName() const
{
    return engineName_;
}

void ShowDedicatedResourceInfoResponse::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool ShowDedicatedResourceInfoResponse::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void ShowDedicatedResourceInfoResponse::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::vector<std::string>& ShowDedicatedResourceInfoResponse::getAvailabilityZoneIds()
{
    return availabilityZoneIds_;
}

void ShowDedicatedResourceInfoResponse::setAvailabilityZoneIds(const std::vector<std::string>& value)
{
    availabilityZoneIds_ = value;
    availabilityZoneIdsIsSet_ = true;
}

bool ShowDedicatedResourceInfoResponse::availabilityZoneIdsIsSet() const
{
    return availabilityZoneIdsIsSet_;
}

void ShowDedicatedResourceInfoResponse::unsetavailabilityZoneIds()
{
    availabilityZoneIdsIsSet_ = false;
}

std::string ShowDedicatedResourceInfoResponse::getArchitecture() const
{
    return architecture_;
}

void ShowDedicatedResourceInfoResponse::setArchitecture(const std::string& value)
{
    architecture_ = value;
    architectureIsSet_ = true;
}

bool ShowDedicatedResourceInfoResponse::architectureIsSet() const
{
    return architectureIsSet_;
}

void ShowDedicatedResourceInfoResponse::unsetarchitecture()
{
    architectureIsSet_ = false;
}

std::string ShowDedicatedResourceInfoResponse::getStatus() const
{
    return status_;
}

void ShowDedicatedResourceInfoResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowDedicatedResourceInfoResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowDedicatedResourceInfoResponse::unsetstatus()
{
    statusIsSet_ = false;
}

DedicatedComputeInfo ShowDedicatedResourceInfoResponse::getDedicatedComputeInfo() const
{
    return dedicatedComputeInfo_;
}

void ShowDedicatedResourceInfoResponse::setDedicatedComputeInfo(const DedicatedComputeInfo& value)
{
    dedicatedComputeInfo_ = value;
    dedicatedComputeInfoIsSet_ = true;
}

bool ShowDedicatedResourceInfoResponse::dedicatedComputeInfoIsSet() const
{
    return dedicatedComputeInfoIsSet_;
}

void ShowDedicatedResourceInfoResponse::unsetdedicatedComputeInfo()
{
    dedicatedComputeInfoIsSet_ = false;
}

DedicatedStorageInfo ShowDedicatedResourceInfoResponse::getDedicatedStorageInfo() const
{
    return dedicatedStorageInfo_;
}

void ShowDedicatedResourceInfoResponse::setDedicatedStorageInfo(const DedicatedStorageInfo& value)
{
    dedicatedStorageInfo_ = value;
    dedicatedStorageInfoIsSet_ = true;
}

bool ShowDedicatedResourceInfoResponse::dedicatedStorageInfoIsSet() const
{
    return dedicatedStorageInfoIsSet_;
}

void ShowDedicatedResourceInfoResponse::unsetdedicatedStorageInfo()
{
    dedicatedStorageInfoIsSet_ = false;
}

}
}
}
}
}


