

#include "huaweicloud/cce/v3/model/NodePoolUpdateExtendParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodePoolUpdateExtendParam::NodePoolUpdateExtendParam()
{
    agencyName_ = "";
    agencyNameIsSet_ = false;
    alphaCcePreInstall_ = "";
    alphaCcePreInstallIsSet_ = false;
    alphaCcePostInstall_ = "";
    alphaCcePostInstallIsSet_ = false;
    spotPrice_ = "";
    spotPriceIsSet_ = false;
    securityReinforcementType_ = "";
    securityReinforcementTypeIsSet_ = false;
}

NodePoolUpdateExtendParam::~NodePoolUpdateExtendParam() = default;

void NodePoolUpdateExtendParam::validate()
{
}

web::json::value NodePoolUpdateExtendParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agencyNameIsSet_) {
        val[utility::conversions::to_string_t("agency_name")] = ModelBase::toJson(agencyName_);
    }
    if(alphaCcePreInstallIsSet_) {
        val[utility::conversions::to_string_t("alpha.cce/preInstall")] = ModelBase::toJson(alphaCcePreInstall_);
    }
    if(alphaCcePostInstallIsSet_) {
        val[utility::conversions::to_string_t("alpha.cce/postInstall")] = ModelBase::toJson(alphaCcePostInstall_);
    }
    if(spotPriceIsSet_) {
        val[utility::conversions::to_string_t("spotPrice")] = ModelBase::toJson(spotPrice_);
    }
    if(securityReinforcementTypeIsSet_) {
        val[utility::conversions::to_string_t("securityReinforcementType")] = ModelBase::toJson(securityReinforcementType_);
    }

    return val;
}
bool NodePoolUpdateExtendParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("agency_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agency_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alpha.cce/preInstall"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alpha.cce/preInstall"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlphaCcePreInstall(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alpha.cce/postInstall"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alpha.cce/postInstall"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlphaCcePostInstall(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spotPrice"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spotPrice"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpotPrice(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("securityReinforcementType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("securityReinforcementType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityReinforcementType(refVal);
        }
    }
    return ok;
}


std::string NodePoolUpdateExtendParam::getAgencyName() const
{
    return agencyName_;
}

void NodePoolUpdateExtendParam::setAgencyName(const std::string& value)
{
    agencyName_ = value;
    agencyNameIsSet_ = true;
}

bool NodePoolUpdateExtendParam::agencyNameIsSet() const
{
    return agencyNameIsSet_;
}

void NodePoolUpdateExtendParam::unsetagencyName()
{
    agencyNameIsSet_ = false;
}

std::string NodePoolUpdateExtendParam::getAlphaCcePreInstall() const
{
    return alphaCcePreInstall_;
}

void NodePoolUpdateExtendParam::setAlphaCcePreInstall(const std::string& value)
{
    alphaCcePreInstall_ = value;
    alphaCcePreInstallIsSet_ = true;
}

bool NodePoolUpdateExtendParam::alphaCcePreInstallIsSet() const
{
    return alphaCcePreInstallIsSet_;
}

void NodePoolUpdateExtendParam::unsetalphaCcePreInstall()
{
    alphaCcePreInstallIsSet_ = false;
}

std::string NodePoolUpdateExtendParam::getAlphaCcePostInstall() const
{
    return alphaCcePostInstall_;
}

void NodePoolUpdateExtendParam::setAlphaCcePostInstall(const std::string& value)
{
    alphaCcePostInstall_ = value;
    alphaCcePostInstallIsSet_ = true;
}

bool NodePoolUpdateExtendParam::alphaCcePostInstallIsSet() const
{
    return alphaCcePostInstallIsSet_;
}

void NodePoolUpdateExtendParam::unsetalphaCcePostInstall()
{
    alphaCcePostInstallIsSet_ = false;
}

std::string NodePoolUpdateExtendParam::getSpotPrice() const
{
    return spotPrice_;
}

void NodePoolUpdateExtendParam::setSpotPrice(const std::string& value)
{
    spotPrice_ = value;
    spotPriceIsSet_ = true;
}

bool NodePoolUpdateExtendParam::spotPriceIsSet() const
{
    return spotPriceIsSet_;
}

void NodePoolUpdateExtendParam::unsetspotPrice()
{
    spotPriceIsSet_ = false;
}

std::string NodePoolUpdateExtendParam::getSecurityReinforcementType() const
{
    return securityReinforcementType_;
}

void NodePoolUpdateExtendParam::setSecurityReinforcementType(const std::string& value)
{
    securityReinforcementType_ = value;
    securityReinforcementTypeIsSet_ = true;
}

bool NodePoolUpdateExtendParam::securityReinforcementTypeIsSet() const
{
    return securityReinforcementTypeIsSet_;
}

void NodePoolUpdateExtendParam::unsetsecurityReinforcementType()
{
    securityReinforcementTypeIsSet_ = false;
}

}
}
}
}
}


