

#include "huaweicloud/sdrs/v1/model/CreateProtectionGroupRequestParams.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




CreateProtectionGroupRequestParams::CreateProtectionGroupRequestParams()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    sourceAvailabilityZone_ = "";
    sourceAvailabilityZoneIsSet_ = false;
    targetAvailabilityZone_ = "";
    targetAvailabilityZoneIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    sourceVpcId_ = "";
    sourceVpcIdIsSet_ = false;
    drType_ = "";
    drTypeIsSet_ = false;
}

CreateProtectionGroupRequestParams::~CreateProtectionGroupRequestParams() = default;

void CreateProtectionGroupRequestParams::validate()
{
}

web::json::value CreateProtectionGroupRequestParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(sourceAvailabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("source_availability_zone")] = ModelBase::toJson(sourceAvailabilityZone_);
    }
    if(targetAvailabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("target_availability_zone")] = ModelBase::toJson(targetAvailabilityZone_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(sourceVpcIdIsSet_) {
        val[utility::conversions::to_string_t("source_vpc_id")] = ModelBase::toJson(sourceVpcId_);
    }
    if(drTypeIsSet_) {
        val[utility::conversions::to_string_t("dr_type")] = ModelBase::toJson(drType_);
    }

    return val;
}

bool CreateProtectionGroupRequestParams::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dr_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dr_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDrType(refVal);
        }
    }
    return ok;
}


std::string CreateProtectionGroupRequestParams::getName() const
{
    return name_;
}

void CreateProtectionGroupRequestParams::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateProtectionGroupRequestParams::nameIsSet() const
{
    return nameIsSet_;
}

void CreateProtectionGroupRequestParams::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateProtectionGroupRequestParams::getDescription() const
{
    return description_;
}

void CreateProtectionGroupRequestParams::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateProtectionGroupRequestParams::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateProtectionGroupRequestParams::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateProtectionGroupRequestParams::getSourceAvailabilityZone() const
{
    return sourceAvailabilityZone_;
}

void CreateProtectionGroupRequestParams::setSourceAvailabilityZone(const std::string& value)
{
    sourceAvailabilityZone_ = value;
    sourceAvailabilityZoneIsSet_ = true;
}

bool CreateProtectionGroupRequestParams::sourceAvailabilityZoneIsSet() const
{
    return sourceAvailabilityZoneIsSet_;
}

void CreateProtectionGroupRequestParams::unsetsourceAvailabilityZone()
{
    sourceAvailabilityZoneIsSet_ = false;
}

std::string CreateProtectionGroupRequestParams::getTargetAvailabilityZone() const
{
    return targetAvailabilityZone_;
}

void CreateProtectionGroupRequestParams::setTargetAvailabilityZone(const std::string& value)
{
    targetAvailabilityZone_ = value;
    targetAvailabilityZoneIsSet_ = true;
}

bool CreateProtectionGroupRequestParams::targetAvailabilityZoneIsSet() const
{
    return targetAvailabilityZoneIsSet_;
}

void CreateProtectionGroupRequestParams::unsettargetAvailabilityZone()
{
    targetAvailabilityZoneIsSet_ = false;
}

std::string CreateProtectionGroupRequestParams::getDomainId() const
{
    return domainId_;
}

void CreateProtectionGroupRequestParams::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool CreateProtectionGroupRequestParams::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void CreateProtectionGroupRequestParams::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string CreateProtectionGroupRequestParams::getSourceVpcId() const
{
    return sourceVpcId_;
}

void CreateProtectionGroupRequestParams::setSourceVpcId(const std::string& value)
{
    sourceVpcId_ = value;
    sourceVpcIdIsSet_ = true;
}

bool CreateProtectionGroupRequestParams::sourceVpcIdIsSet() const
{
    return sourceVpcIdIsSet_;
}

void CreateProtectionGroupRequestParams::unsetsourceVpcId()
{
    sourceVpcIdIsSet_ = false;
}

std::string CreateProtectionGroupRequestParams::getDrType() const
{
    return drType_;
}

void CreateProtectionGroupRequestParams::setDrType(const std::string& value)
{
    drType_ = value;
    drTypeIsSet_ = true;
}

bool CreateProtectionGroupRequestParams::drTypeIsSet() const
{
    return drTypeIsSet_;
}

void CreateProtectionGroupRequestParams::unsetdrType()
{
    drTypeIsSet_ = false;
}

}
}
}
}
}


