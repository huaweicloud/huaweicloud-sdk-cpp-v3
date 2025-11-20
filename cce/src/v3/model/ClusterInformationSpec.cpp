

#include "huaweicloud/cce/v3/model/ClusterInformationSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ClusterInformationSpec::ClusterInformationSpec()
{
    agencyName_ = "";
    agencyNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    customSanIsSet_ = false;
    containerNetworkIsSet_ = false;
    eniNetworkIsSet_ = false;
    hostNetworkIsSet_ = false;
    deletionProtection_ = false;
    deletionProtectionIsSet_ = false;
    enableAutoResizing_ = false;
    enableAutoResizingIsSet_ = false;
}

ClusterInformationSpec::~ClusterInformationSpec() = default;

void ClusterInformationSpec::validate()
{
}

web::json::value ClusterInformationSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agencyNameIsSet_) {
        val[utility::conversions::to_string_t("agencyName")] = ModelBase::toJson(agencyName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(customSanIsSet_) {
        val[utility::conversions::to_string_t("customSan")] = ModelBase::toJson(customSan_);
    }
    if(containerNetworkIsSet_) {
        val[utility::conversions::to_string_t("containerNetwork")] = ModelBase::toJson(containerNetwork_);
    }
    if(eniNetworkIsSet_) {
        val[utility::conversions::to_string_t("eniNetwork")] = ModelBase::toJson(eniNetwork_);
    }
    if(hostNetworkIsSet_) {
        val[utility::conversions::to_string_t("hostNetwork")] = ModelBase::toJson(hostNetwork_);
    }
    if(deletionProtectionIsSet_) {
        val[utility::conversions::to_string_t("deletionProtection")] = ModelBase::toJson(deletionProtection_);
    }
    if(enableAutoResizingIsSet_) {
        val[utility::conversions::to_string_t("enableAutoResizing")] = ModelBase::toJson(enableAutoResizing_);
    }

    return val;
}
bool ClusterInformationSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("agencyName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agencyName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("customSan"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("customSan"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomSan(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("containerNetwork"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("containerNetwork"));
        if(!fieldValue.is_null())
        {
            ContainerNetworkUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContainerNetwork(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eniNetwork"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eniNetwork"));
        if(!fieldValue.is_null())
        {
            EniNetworkUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEniNetwork(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hostNetwork"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hostNetwork"));
        if(!fieldValue.is_null())
        {
            ClusterInformationSpec_hostNetwork refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostNetwork(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deletionProtection"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deletionProtection"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeletionProtection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enableAutoResizing"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enableAutoResizing"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableAutoResizing(refVal);
        }
    }
    return ok;
}


std::string ClusterInformationSpec::getAgencyName() const
{
    return agencyName_;
}

void ClusterInformationSpec::setAgencyName(const std::string& value)
{
    agencyName_ = value;
    agencyNameIsSet_ = true;
}

bool ClusterInformationSpec::agencyNameIsSet() const
{
    return agencyNameIsSet_;
}

void ClusterInformationSpec::unsetagencyName()
{
    agencyNameIsSet_ = false;
}

std::string ClusterInformationSpec::getDescription() const
{
    return description_;
}

void ClusterInformationSpec::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ClusterInformationSpec::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ClusterInformationSpec::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<std::string>& ClusterInformationSpec::getCustomSan()
{
    return customSan_;
}

void ClusterInformationSpec::setCustomSan(const std::vector<std::string>& value)
{
    customSan_ = value;
    customSanIsSet_ = true;
}

bool ClusterInformationSpec::customSanIsSet() const
{
    return customSanIsSet_;
}

void ClusterInformationSpec::unsetcustomSan()
{
    customSanIsSet_ = false;
}

ContainerNetworkUpdate ClusterInformationSpec::getContainerNetwork() const
{
    return containerNetwork_;
}

void ClusterInformationSpec::setContainerNetwork(const ContainerNetworkUpdate& value)
{
    containerNetwork_ = value;
    containerNetworkIsSet_ = true;
}

bool ClusterInformationSpec::containerNetworkIsSet() const
{
    return containerNetworkIsSet_;
}

void ClusterInformationSpec::unsetcontainerNetwork()
{
    containerNetworkIsSet_ = false;
}

EniNetworkUpdate ClusterInformationSpec::getEniNetwork() const
{
    return eniNetwork_;
}

void ClusterInformationSpec::setEniNetwork(const EniNetworkUpdate& value)
{
    eniNetwork_ = value;
    eniNetworkIsSet_ = true;
}

bool ClusterInformationSpec::eniNetworkIsSet() const
{
    return eniNetworkIsSet_;
}

void ClusterInformationSpec::unseteniNetwork()
{
    eniNetworkIsSet_ = false;
}

ClusterInformationSpec_hostNetwork ClusterInformationSpec::getHostNetwork() const
{
    return hostNetwork_;
}

void ClusterInformationSpec::setHostNetwork(const ClusterInformationSpec_hostNetwork& value)
{
    hostNetwork_ = value;
    hostNetworkIsSet_ = true;
}

bool ClusterInformationSpec::hostNetworkIsSet() const
{
    return hostNetworkIsSet_;
}

void ClusterInformationSpec::unsethostNetwork()
{
    hostNetworkIsSet_ = false;
}

bool ClusterInformationSpec::isDeletionProtection() const
{
    return deletionProtection_;
}

void ClusterInformationSpec::setDeletionProtection(bool value)
{
    deletionProtection_ = value;
    deletionProtectionIsSet_ = true;
}

bool ClusterInformationSpec::deletionProtectionIsSet() const
{
    return deletionProtectionIsSet_;
}

void ClusterInformationSpec::unsetdeletionProtection()
{
    deletionProtectionIsSet_ = false;
}

bool ClusterInformationSpec::isEnableAutoResizing() const
{
    return enableAutoResizing_;
}

void ClusterInformationSpec::setEnableAutoResizing(bool value)
{
    enableAutoResizing_ = value;
    enableAutoResizingIsSet_ = true;
}

bool ClusterInformationSpec::enableAutoResizingIsSet() const
{
    return enableAutoResizingIsSet_;
}

void ClusterInformationSpec::unsetenableAutoResizing()
{
    enableAutoResizingIsSet_ = false;
}

}
}
}
}
}


