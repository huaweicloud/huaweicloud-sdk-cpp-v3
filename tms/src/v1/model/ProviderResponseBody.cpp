

#include "huaweicloud/tms/v1/model/ProviderResponseBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ProviderResponseBody::ProviderResponseBody()
{
    provider_ = "";
    providerIsSet_ = false;
    providerI18nDisplayName_ = "";
    providerI18nDisplayNameIsSet_ = false;
    resourceTypesIsSet_ = false;
}

ProviderResponseBody::~ProviderResponseBody() = default;

void ProviderResponseBody::validate()
{
}

web::json::value ProviderResponseBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(providerIsSet_) {
        val[utility::conversions::to_string_t("provider")] = ModelBase::toJson(provider_);
    }
    if(providerI18nDisplayNameIsSet_) {
        val[utility::conversions::to_string_t("provider_i18n_display_name")] = ModelBase::toJson(providerI18nDisplayName_);
    }
    if(resourceTypesIsSet_) {
        val[utility::conversions::to_string_t("resource_types")] = ModelBase::toJson(resourceTypes_);
    }

    return val;
}

bool ProviderResponseBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("provider"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("provider"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProvider(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("provider_i18n_display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("provider_i18n_display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProviderI18nDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_types"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTypeBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceTypes(refVal);
        }
    }
    return ok;
}


std::string ProviderResponseBody::getProvider() const
{
    return provider_;
}

void ProviderResponseBody::setProvider(const std::string& value)
{
    provider_ = value;
    providerIsSet_ = true;
}

bool ProviderResponseBody::providerIsSet() const
{
    return providerIsSet_;
}

void ProviderResponseBody::unsetprovider()
{
    providerIsSet_ = false;
}

std::string ProviderResponseBody::getProviderI18nDisplayName() const
{
    return providerI18nDisplayName_;
}

void ProviderResponseBody::setProviderI18nDisplayName(const std::string& value)
{
    providerI18nDisplayName_ = value;
    providerI18nDisplayNameIsSet_ = true;
}

bool ProviderResponseBody::providerI18nDisplayNameIsSet() const
{
    return providerI18nDisplayNameIsSet_;
}

void ProviderResponseBody::unsetproviderI18nDisplayName()
{
    providerI18nDisplayNameIsSet_ = false;
}

std::vector<ResourceTypeBody>& ProviderResponseBody::getResourceTypes()
{
    return resourceTypes_;
}

void ProviderResponseBody::setResourceTypes(const std::vector<ResourceTypeBody>& value)
{
    resourceTypes_ = value;
    resourceTypesIsSet_ = true;
}

bool ProviderResponseBody::resourceTypesIsSet() const
{
    return resourceTypesIsSet_;
}

void ProviderResponseBody::unsetresourceTypes()
{
    resourceTypesIsSet_ = false;
}

}
}
}
}
}


