

#include "huaweicloud/rgc/v1/model/ShowLandingZoneConfigurationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ShowLandingZoneConfigurationResponse::ShowLandingZoneConfigurationResponse()
{
    commonConfigurationIsSet_ = false;
    loggingConfigurationIsSet_ = false;
    organizationStructureIsSet_ = false;
    regionsIsSet_ = false;
}

ShowLandingZoneConfigurationResponse::~ShowLandingZoneConfigurationResponse() = default;

void ShowLandingZoneConfigurationResponse::validate()
{
}

web::json::value ShowLandingZoneConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commonConfigurationIsSet_) {
        val[utility::conversions::to_string_t("common_configuration")] = ModelBase::toJson(commonConfiguration_);
    }
    if(loggingConfigurationIsSet_) {
        val[utility::conversions::to_string_t("logging_configuration")] = ModelBase::toJson(loggingConfiguration_);
    }
    if(organizationStructureIsSet_) {
        val[utility::conversions::to_string_t("organization_structure")] = ModelBase::toJson(organizationStructure_);
    }
    if(regionsIsSet_) {
        val[utility::conversions::to_string_t("regions")] = ModelBase::toJson(regions_);
    }

    return val;
}
bool ShowLandingZoneConfigurationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("common_configuration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("common_configuration"));
        if(!fieldValue.is_null())
        {
            CommonConfiguration refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommonConfiguration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("logging_configuration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logging_configuration"));
        if(!fieldValue.is_null())
        {
            LoggingConfiguration refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLoggingConfiguration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("organization_structure"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("organization_structure"));
        if(!fieldValue.is_null())
        {
            std::vector<OrganizationStructureBaseLineRsp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrganizationStructure(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("regions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("regions"));
        if(!fieldValue.is_null())
        {
            std::vector<RegionConfigurationList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegions(refVal);
        }
    }
    return ok;
}


CommonConfiguration ShowLandingZoneConfigurationResponse::getCommonConfiguration() const
{
    return commonConfiguration_;
}

void ShowLandingZoneConfigurationResponse::setCommonConfiguration(const CommonConfiguration& value)
{
    commonConfiguration_ = value;
    commonConfigurationIsSet_ = true;
}

bool ShowLandingZoneConfigurationResponse::commonConfigurationIsSet() const
{
    return commonConfigurationIsSet_;
}

void ShowLandingZoneConfigurationResponse::unsetcommonConfiguration()
{
    commonConfigurationIsSet_ = false;
}

LoggingConfiguration ShowLandingZoneConfigurationResponse::getLoggingConfiguration() const
{
    return loggingConfiguration_;
}

void ShowLandingZoneConfigurationResponse::setLoggingConfiguration(const LoggingConfiguration& value)
{
    loggingConfiguration_ = value;
    loggingConfigurationIsSet_ = true;
}

bool ShowLandingZoneConfigurationResponse::loggingConfigurationIsSet() const
{
    return loggingConfigurationIsSet_;
}

void ShowLandingZoneConfigurationResponse::unsetloggingConfiguration()
{
    loggingConfigurationIsSet_ = false;
}

std::vector<OrganizationStructureBaseLineRsp>& ShowLandingZoneConfigurationResponse::getOrganizationStructure()
{
    return organizationStructure_;
}

void ShowLandingZoneConfigurationResponse::setOrganizationStructure(const std::vector<OrganizationStructureBaseLineRsp>& value)
{
    organizationStructure_ = value;
    organizationStructureIsSet_ = true;
}

bool ShowLandingZoneConfigurationResponse::organizationStructureIsSet() const
{
    return organizationStructureIsSet_;
}

void ShowLandingZoneConfigurationResponse::unsetorganizationStructure()
{
    organizationStructureIsSet_ = false;
}

std::vector<RegionConfigurationList>& ShowLandingZoneConfigurationResponse::getRegions()
{
    return regions_;
}

void ShowLandingZoneConfigurationResponse::setRegions(const std::vector<RegionConfigurationList>& value)
{
    regions_ = value;
    regionsIsSet_ = true;
}

bool ShowLandingZoneConfigurationResponse::regionsIsSet() const
{
    return regionsIsSet_;
}

void ShowLandingZoneConfigurationResponse::unsetregions()
{
    regionsIsSet_ = false;
}

}
}
}
}
}


