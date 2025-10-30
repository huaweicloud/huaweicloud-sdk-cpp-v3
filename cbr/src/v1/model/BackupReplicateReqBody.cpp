

#include "huaweicloud/cbr/v1/model/BackupReplicateReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




BackupReplicateReqBody::BackupReplicateReqBody()
{
    description_ = "";
    descriptionIsSet_ = false;
    destinationProjectId_ = "";
    destinationProjectIdIsSet_ = false;
    destinationRegion_ = "";
    destinationRegionIsSet_ = false;
    destinationVaultId_ = "";
    destinationVaultIdIsSet_ = false;
    enableAcceleration_ = false;
    enableAccelerationIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    crossAccountUrn_ = "";
    crossAccountUrnIsSet_ = false;
}

BackupReplicateReqBody::~BackupReplicateReqBody() = default;

void BackupReplicateReqBody::validate()
{
}

web::json::value BackupReplicateReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(destinationProjectIdIsSet_) {
        val[utility::conversions::to_string_t("destination_project_id")] = ModelBase::toJson(destinationProjectId_);
    }
    if(destinationRegionIsSet_) {
        val[utility::conversions::to_string_t("destination_region")] = ModelBase::toJson(destinationRegion_);
    }
    if(destinationVaultIdIsSet_) {
        val[utility::conversions::to_string_t("destination_vault_id")] = ModelBase::toJson(destinationVaultId_);
    }
    if(enableAccelerationIsSet_) {
        val[utility::conversions::to_string_t("enable_acceleration")] = ModelBase::toJson(enableAcceleration_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(crossAccountUrnIsSet_) {
        val[utility::conversions::to_string_t("cross_account_urn")] = ModelBase::toJson(crossAccountUrn_);
    }

    return val;
}
bool BackupReplicateReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("destination_region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination_vault_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_vault_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationVaultId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_acceleration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_acceleration"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableAcceleration(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("cross_account_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cross_account_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCrossAccountUrn(refVal);
        }
    }
    return ok;
}


std::string BackupReplicateReqBody::getDescription() const
{
    return description_;
}

void BackupReplicateReqBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool BackupReplicateReqBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void BackupReplicateReqBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string BackupReplicateReqBody::getDestinationProjectId() const
{
    return destinationProjectId_;
}

void BackupReplicateReqBody::setDestinationProjectId(const std::string& value)
{
    destinationProjectId_ = value;
    destinationProjectIdIsSet_ = true;
}

bool BackupReplicateReqBody::destinationProjectIdIsSet() const
{
    return destinationProjectIdIsSet_;
}

void BackupReplicateReqBody::unsetdestinationProjectId()
{
    destinationProjectIdIsSet_ = false;
}

std::string BackupReplicateReqBody::getDestinationRegion() const
{
    return destinationRegion_;
}

void BackupReplicateReqBody::setDestinationRegion(const std::string& value)
{
    destinationRegion_ = value;
    destinationRegionIsSet_ = true;
}

bool BackupReplicateReqBody::destinationRegionIsSet() const
{
    return destinationRegionIsSet_;
}

void BackupReplicateReqBody::unsetdestinationRegion()
{
    destinationRegionIsSet_ = false;
}

std::string BackupReplicateReqBody::getDestinationVaultId() const
{
    return destinationVaultId_;
}

void BackupReplicateReqBody::setDestinationVaultId(const std::string& value)
{
    destinationVaultId_ = value;
    destinationVaultIdIsSet_ = true;
}

bool BackupReplicateReqBody::destinationVaultIdIsSet() const
{
    return destinationVaultIdIsSet_;
}

void BackupReplicateReqBody::unsetdestinationVaultId()
{
    destinationVaultIdIsSet_ = false;
}

bool BackupReplicateReqBody::isEnableAcceleration() const
{
    return enableAcceleration_;
}

void BackupReplicateReqBody::setEnableAcceleration(bool value)
{
    enableAcceleration_ = value;
    enableAccelerationIsSet_ = true;
}

bool BackupReplicateReqBody::enableAccelerationIsSet() const
{
    return enableAccelerationIsSet_;
}

void BackupReplicateReqBody::unsetenableAcceleration()
{
    enableAccelerationIsSet_ = false;
}

std::string BackupReplicateReqBody::getName() const
{
    return name_;
}

void BackupReplicateReqBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BackupReplicateReqBody::nameIsSet() const
{
    return nameIsSet_;
}

void BackupReplicateReqBody::unsetname()
{
    nameIsSet_ = false;
}

std::string BackupReplicateReqBody::getCrossAccountUrn() const
{
    return crossAccountUrn_;
}

void BackupReplicateReqBody::setCrossAccountUrn(const std::string& value)
{
    crossAccountUrn_ = value;
    crossAccountUrnIsSet_ = true;
}

bool BackupReplicateReqBody::crossAccountUrnIsSet() const
{
    return crossAccountUrnIsSet_;
}

void BackupReplicateReqBody::unsetcrossAccountUrn()
{
    crossAccountUrnIsSet_ = false;
}

}
}
}
}
}


