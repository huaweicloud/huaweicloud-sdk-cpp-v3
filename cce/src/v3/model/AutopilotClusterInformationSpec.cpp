

#include "huaweicloud/cce/v3/model/AutopilotClusterInformationSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AutopilotClusterInformationSpec::AutopilotClusterInformationSpec()
{
    description_ = "";
    descriptionIsSet_ = false;
    customSanIsSet_ = false;
    eniNetworkIsSet_ = false;
}

AutopilotClusterInformationSpec::~AutopilotClusterInformationSpec() = default;

void AutopilotClusterInformationSpec::validate()
{
}

web::json::value AutopilotClusterInformationSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(customSanIsSet_) {
        val[utility::conversions::to_string_t("customSan")] = ModelBase::toJson(customSan_);
    }
    if(eniNetworkIsSet_) {
        val[utility::conversions::to_string_t("eniNetwork")] = ModelBase::toJson(eniNetwork_);
    }

    return val;
}
bool AutopilotClusterInformationSpec::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("customSan"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("customSan"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomSan(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eniNetwork"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eniNetwork"));
        if(!fieldValue.is_null())
        {
            AutopilotEniNetworkUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEniNetwork(refVal);
        }
    }
    return ok;
}


std::string AutopilotClusterInformationSpec::getDescription() const
{
    return description_;
}

void AutopilotClusterInformationSpec::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AutopilotClusterInformationSpec::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AutopilotClusterInformationSpec::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<std::string>& AutopilotClusterInformationSpec::getCustomSan()
{
    return customSan_;
}

void AutopilotClusterInformationSpec::setCustomSan(const std::vector<std::string>& value)
{
    customSan_ = value;
    customSanIsSet_ = true;
}

bool AutopilotClusterInformationSpec::customSanIsSet() const
{
    return customSanIsSet_;
}

void AutopilotClusterInformationSpec::unsetcustomSan()
{
    customSanIsSet_ = false;
}

AutopilotEniNetworkUpdate AutopilotClusterInformationSpec::getEniNetwork() const
{
    return eniNetwork_;
}

void AutopilotClusterInformationSpec::setEniNetwork(const AutopilotEniNetworkUpdate& value)
{
    eniNetwork_ = value;
    eniNetworkIsSet_ = true;
}

bool AutopilotClusterInformationSpec::eniNetworkIsSet() const
{
    return eniNetworkIsSet_;
}

void AutopilotClusterInformationSpec::unseteniNetwork()
{
    eniNetworkIsSet_ = false;
}

}
}
}
}
}


