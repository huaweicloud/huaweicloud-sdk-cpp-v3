

#include "huaweicloud/identitycenterstore/v1/model/SPSAMLConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




SPSAMLConfig::SPSAMLConfig()
{
    acsUrl_ = "";
    acsUrlIsSet_ = false;
    issuer_ = "";
    issuerIsSet_ = false;
    metadata_ = "";
    metadataIsSet_ = false;
}

SPSAMLConfig::~SPSAMLConfig() = default;

void SPSAMLConfig::validate()
{
}

web::json::value SPSAMLConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(acsUrlIsSet_) {
        val[utility::conversions::to_string_t("acs_url")] = ModelBase::toJson(acsUrl_);
    }
    if(issuerIsSet_) {
        val[utility::conversions::to_string_t("issuer")] = ModelBase::toJson(issuer_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }

    return val;
}
bool SPSAMLConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("acs_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("acs_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcsUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issuer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issuer"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    return ok;
}


std::string SPSAMLConfig::getAcsUrl() const
{
    return acsUrl_;
}

void SPSAMLConfig::setAcsUrl(const std::string& value)
{
    acsUrl_ = value;
    acsUrlIsSet_ = true;
}

bool SPSAMLConfig::acsUrlIsSet() const
{
    return acsUrlIsSet_;
}

void SPSAMLConfig::unsetacsUrl()
{
    acsUrlIsSet_ = false;
}

std::string SPSAMLConfig::getIssuer() const
{
    return issuer_;
}

void SPSAMLConfig::setIssuer(const std::string& value)
{
    issuer_ = value;
    issuerIsSet_ = true;
}

bool SPSAMLConfig::issuerIsSet() const
{
    return issuerIsSet_;
}

void SPSAMLConfig::unsetissuer()
{
    issuerIsSet_ = false;
}

std::string SPSAMLConfig::getMetadata() const
{
    return metadata_;
}

void SPSAMLConfig::setMetadata(const std::string& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool SPSAMLConfig::metadataIsSet() const
{
    return metadataIsSet_;
}

void SPSAMLConfig::unsetmetadata()
{
    metadataIsSet_ = false;
}

}
}
}
}
}


