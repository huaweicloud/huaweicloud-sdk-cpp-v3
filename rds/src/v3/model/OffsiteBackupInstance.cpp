

#include "huaweicloud/rds/v3/model/OffsiteBackupInstance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




OffsiteBackupInstance::OffsiteBackupInstance()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    sourceRegion_ = "";
    sourceRegionIsSet_ = false;
    sourceProjectId_ = "";
    sourceProjectIdIsSet_ = false;
    datastoreIsSet_ = false;
    destinationRegion_ = "";
    destinationRegionIsSet_ = false;
    destinationProjectId_ = "";
    destinationProjectIdIsSet_ = false;
    keepDays_ = 0L;
    keepDaysIsSet_ = false;
}

OffsiteBackupInstance::~OffsiteBackupInstance() = default;

void OffsiteBackupInstance::validate()
{
}

web::json::value OffsiteBackupInstance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sourceRegionIsSet_) {
        val[utility::conversions::to_string_t("source_region")] = ModelBase::toJson(sourceRegion_);
    }
    if(sourceProjectIdIsSet_) {
        val[utility::conversions::to_string_t("source_project_id")] = ModelBase::toJson(sourceProjectId_);
    }
    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
    }
    if(destinationRegionIsSet_) {
        val[utility::conversions::to_string_t("destination_region")] = ModelBase::toJson(destinationRegion_);
    }
    if(destinationProjectIdIsSet_) {
        val[utility::conversions::to_string_t("destination_project_id")] = ModelBase::toJson(destinationProjectId_);
    }
    if(keepDaysIsSet_) {
        val[utility::conversions::to_string_t("keep_days")] = ModelBase::toJson(keepDays_);
    }

    return val;
}
bool OffsiteBackupInstance::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("source_region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datastore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore"));
        if(!fieldValue.is_null())
        {
            ParaGroupDatastore refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination_region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keep_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keep_days"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeepDays(refVal);
        }
    }
    return ok;
}


std::string OffsiteBackupInstance::getId() const
{
    return id_;
}

void OffsiteBackupInstance::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool OffsiteBackupInstance::idIsSet() const
{
    return idIsSet_;
}

void OffsiteBackupInstance::unsetid()
{
    idIsSet_ = false;
}

std::string OffsiteBackupInstance::getName() const
{
    return name_;
}

void OffsiteBackupInstance::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool OffsiteBackupInstance::nameIsSet() const
{
    return nameIsSet_;
}

void OffsiteBackupInstance::unsetname()
{
    nameIsSet_ = false;
}

std::string OffsiteBackupInstance::getSourceRegion() const
{
    return sourceRegion_;
}

void OffsiteBackupInstance::setSourceRegion(const std::string& value)
{
    sourceRegion_ = value;
    sourceRegionIsSet_ = true;
}

bool OffsiteBackupInstance::sourceRegionIsSet() const
{
    return sourceRegionIsSet_;
}

void OffsiteBackupInstance::unsetsourceRegion()
{
    sourceRegionIsSet_ = false;
}

std::string OffsiteBackupInstance::getSourceProjectId() const
{
    return sourceProjectId_;
}

void OffsiteBackupInstance::setSourceProjectId(const std::string& value)
{
    sourceProjectId_ = value;
    sourceProjectIdIsSet_ = true;
}

bool OffsiteBackupInstance::sourceProjectIdIsSet() const
{
    return sourceProjectIdIsSet_;
}

void OffsiteBackupInstance::unsetsourceProjectId()
{
    sourceProjectIdIsSet_ = false;
}

ParaGroupDatastore OffsiteBackupInstance::getDatastore() const
{
    return datastore_;
}

void OffsiteBackupInstance::setDatastore(const ParaGroupDatastore& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool OffsiteBackupInstance::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void OffsiteBackupInstance::unsetdatastore()
{
    datastoreIsSet_ = false;
}

std::string OffsiteBackupInstance::getDestinationRegion() const
{
    return destinationRegion_;
}

void OffsiteBackupInstance::setDestinationRegion(const std::string& value)
{
    destinationRegion_ = value;
    destinationRegionIsSet_ = true;
}

bool OffsiteBackupInstance::destinationRegionIsSet() const
{
    return destinationRegionIsSet_;
}

void OffsiteBackupInstance::unsetdestinationRegion()
{
    destinationRegionIsSet_ = false;
}

std::string OffsiteBackupInstance::getDestinationProjectId() const
{
    return destinationProjectId_;
}

void OffsiteBackupInstance::setDestinationProjectId(const std::string& value)
{
    destinationProjectId_ = value;
    destinationProjectIdIsSet_ = true;
}

bool OffsiteBackupInstance::destinationProjectIdIsSet() const
{
    return destinationProjectIdIsSet_;
}

void OffsiteBackupInstance::unsetdestinationProjectId()
{
    destinationProjectIdIsSet_ = false;
}

int64_t OffsiteBackupInstance::getKeepDays() const
{
    return keepDays_;
}

void OffsiteBackupInstance::setKeepDays(int64_t value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool OffsiteBackupInstance::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void OffsiteBackupInstance::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

}
}
}
}
}


