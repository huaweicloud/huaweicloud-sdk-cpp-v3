

#include "huaweicloud/identitycenter/v1/model/ApplicationProviderDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ApplicationProviderDto::ApplicationProviderDto()
{
    applicationProviderUrn_ = "";
    applicationProviderUrnIsSet_ = false;
    displayDataIsSet_ = false;
    federationProtocol_ = "";
    federationProtocolIsSet_ = false;
    applicationProviderId_ = "";
    applicationProviderIdIsSet_ = false;
}

ApplicationProviderDto::~ApplicationProviderDto() = default;

void ApplicationProviderDto::validate()
{
}

web::json::value ApplicationProviderDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationProviderUrnIsSet_) {
        val[utility::conversions::to_string_t("application_provider_urn")] = ModelBase::toJson(applicationProviderUrn_);
    }
    if(displayDataIsSet_) {
        val[utility::conversions::to_string_t("display_data")] = ModelBase::toJson(displayData_);
    }
    if(federationProtocolIsSet_) {
        val[utility::conversions::to_string_t("federation_protocol")] = ModelBase::toJson(federationProtocol_);
    }
    if(applicationProviderIdIsSet_) {
        val[utility::conversions::to_string_t("application_provider_id")] = ModelBase::toJson(applicationProviderId_);
    }

    return val;
}
bool ApplicationProviderDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("application_provider_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_provider_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationProviderUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_data"));
        if(!fieldValue.is_null())
        {
            DisplayDataDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("federation_protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("federation_protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFederationProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("application_provider_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_provider_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationProviderId(refVal);
        }
    }
    return ok;
}


std::string ApplicationProviderDto::getApplicationProviderUrn() const
{
    return applicationProviderUrn_;
}

void ApplicationProviderDto::setApplicationProviderUrn(const std::string& value)
{
    applicationProviderUrn_ = value;
    applicationProviderUrnIsSet_ = true;
}

bool ApplicationProviderDto::applicationProviderUrnIsSet() const
{
    return applicationProviderUrnIsSet_;
}

void ApplicationProviderDto::unsetapplicationProviderUrn()
{
    applicationProviderUrnIsSet_ = false;
}

DisplayDataDto ApplicationProviderDto::getDisplayData() const
{
    return displayData_;
}

void ApplicationProviderDto::setDisplayData(const DisplayDataDto& value)
{
    displayData_ = value;
    displayDataIsSet_ = true;
}

bool ApplicationProviderDto::displayDataIsSet() const
{
    return displayDataIsSet_;
}

void ApplicationProviderDto::unsetdisplayData()
{
    displayDataIsSet_ = false;
}

std::string ApplicationProviderDto::getFederationProtocol() const
{
    return federationProtocol_;
}

void ApplicationProviderDto::setFederationProtocol(const std::string& value)
{
    federationProtocol_ = value;
    federationProtocolIsSet_ = true;
}

bool ApplicationProviderDto::federationProtocolIsSet() const
{
    return federationProtocolIsSet_;
}

void ApplicationProviderDto::unsetfederationProtocol()
{
    federationProtocolIsSet_ = false;
}

std::string ApplicationProviderDto::getApplicationProviderId() const
{
    return applicationProviderId_;
}

void ApplicationProviderDto::setApplicationProviderId(const std::string& value)
{
    applicationProviderId_ = value;
    applicationProviderIdIsSet_ = true;
}

bool ApplicationProviderDto::applicationProviderIdIsSet() const
{
    return applicationProviderIdIsSet_;
}

void ApplicationProviderDto::unsetapplicationProviderId()
{
    applicationProviderIdIsSet_ = false;
}

}
}
}
}
}


