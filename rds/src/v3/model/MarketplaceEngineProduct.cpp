

#include "huaweicloud/rds/v3/model/MarketplaceEngineProduct.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




MarketplaceEngineProduct::MarketplaceEngineProduct()
{
    engineId_ = "";
    engineIdIsSet_ = false;
    engineVersion_ = "";
    engineVersionIsSet_ = false;
    specCode_ = "";
    specCodeIsSet_ = false;
    productId_ = "";
    productIdIsSet_ = false;
    bpName_ = "";
    bpNameIsSet_ = false;
    bpDomainId_ = "";
    bpDomainIdIsSet_ = false;
    instanceMode_ = "";
    instanceModeIsSet_ = false;
    imageId_ = "";
    imageIdIsSet_ = false;
    userLicenseAgreement_ = "";
    userLicenseAgreementIsSet_ = false;
    agreementsIsSet_ = false;
}

MarketplaceEngineProduct::~MarketplaceEngineProduct() = default;

void MarketplaceEngineProduct::validate()
{
}

web::json::value MarketplaceEngineProduct::toJson() const
{
    web::json::value val = web::json::value::object();

    if(engineIdIsSet_) {
        val[utility::conversions::to_string_t("engine_id")] = ModelBase::toJson(engineId_);
    }
    if(engineVersionIsSet_) {
        val[utility::conversions::to_string_t("engine_version")] = ModelBase::toJson(engineVersion_);
    }
    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }
    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }
    if(bpNameIsSet_) {
        val[utility::conversions::to_string_t("bp_name")] = ModelBase::toJson(bpName_);
    }
    if(bpDomainIdIsSet_) {
        val[utility::conversions::to_string_t("bp_domain_id")] = ModelBase::toJson(bpDomainId_);
    }
    if(instanceModeIsSet_) {
        val[utility::conversions::to_string_t("instance_mode")] = ModelBase::toJson(instanceMode_);
    }
    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(userLicenseAgreementIsSet_) {
        val[utility::conversions::to_string_t("user_license_agreement")] = ModelBase::toJson(userLicenseAgreement_);
    }
    if(agreementsIsSet_) {
        val[utility::conversions::to_string_t("agreements")] = ModelBase::toJson(agreements_);
    }

    return val;
}
bool MarketplaceEngineProduct::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("engine_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("product_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bp_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bp_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBpName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bp_domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bp_domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBpDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_license_agreement"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_license_agreement"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserLicenseAgreement(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agreements"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agreements"));
        if(!fieldValue.is_null())
        {
            std::vector<Agreement> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgreements(refVal);
        }
    }
    return ok;
}


std::string MarketplaceEngineProduct::getEngineId() const
{
    return engineId_;
}

void MarketplaceEngineProduct::setEngineId(const std::string& value)
{
    engineId_ = value;
    engineIdIsSet_ = true;
}

bool MarketplaceEngineProduct::engineIdIsSet() const
{
    return engineIdIsSet_;
}

void MarketplaceEngineProduct::unsetengineId()
{
    engineIdIsSet_ = false;
}

std::string MarketplaceEngineProduct::getEngineVersion() const
{
    return engineVersion_;
}

void MarketplaceEngineProduct::setEngineVersion(const std::string& value)
{
    engineVersion_ = value;
    engineVersionIsSet_ = true;
}

bool MarketplaceEngineProduct::engineVersionIsSet() const
{
    return engineVersionIsSet_;
}

void MarketplaceEngineProduct::unsetengineVersion()
{
    engineVersionIsSet_ = false;
}

std::string MarketplaceEngineProduct::getSpecCode() const
{
    return specCode_;
}

void MarketplaceEngineProduct::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool MarketplaceEngineProduct::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void MarketplaceEngineProduct::unsetspecCode()
{
    specCodeIsSet_ = false;
}

std::string MarketplaceEngineProduct::getProductId() const
{
    return productId_;
}

void MarketplaceEngineProduct::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool MarketplaceEngineProduct::productIdIsSet() const
{
    return productIdIsSet_;
}

void MarketplaceEngineProduct::unsetproductId()
{
    productIdIsSet_ = false;
}

std::string MarketplaceEngineProduct::getBpName() const
{
    return bpName_;
}

void MarketplaceEngineProduct::setBpName(const std::string& value)
{
    bpName_ = value;
    bpNameIsSet_ = true;
}

bool MarketplaceEngineProduct::bpNameIsSet() const
{
    return bpNameIsSet_;
}

void MarketplaceEngineProduct::unsetbpName()
{
    bpNameIsSet_ = false;
}

std::string MarketplaceEngineProduct::getBpDomainId() const
{
    return bpDomainId_;
}

void MarketplaceEngineProduct::setBpDomainId(const std::string& value)
{
    bpDomainId_ = value;
    bpDomainIdIsSet_ = true;
}

bool MarketplaceEngineProduct::bpDomainIdIsSet() const
{
    return bpDomainIdIsSet_;
}

void MarketplaceEngineProduct::unsetbpDomainId()
{
    bpDomainIdIsSet_ = false;
}

std::string MarketplaceEngineProduct::getInstanceMode() const
{
    return instanceMode_;
}

void MarketplaceEngineProduct::setInstanceMode(const std::string& value)
{
    instanceMode_ = value;
    instanceModeIsSet_ = true;
}

bool MarketplaceEngineProduct::instanceModeIsSet() const
{
    return instanceModeIsSet_;
}

void MarketplaceEngineProduct::unsetinstanceMode()
{
    instanceModeIsSet_ = false;
}

std::string MarketplaceEngineProduct::getImageId() const
{
    return imageId_;
}

void MarketplaceEngineProduct::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool MarketplaceEngineProduct::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void MarketplaceEngineProduct::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string MarketplaceEngineProduct::getUserLicenseAgreement() const
{
    return userLicenseAgreement_;
}

void MarketplaceEngineProduct::setUserLicenseAgreement(const std::string& value)
{
    userLicenseAgreement_ = value;
    userLicenseAgreementIsSet_ = true;
}

bool MarketplaceEngineProduct::userLicenseAgreementIsSet() const
{
    return userLicenseAgreementIsSet_;
}

void MarketplaceEngineProduct::unsetuserLicenseAgreement()
{
    userLicenseAgreementIsSet_ = false;
}

std::vector<Agreement>& MarketplaceEngineProduct::getAgreements()
{
    return agreements_;
}

void MarketplaceEngineProduct::setAgreements(const std::vector<Agreement>& value)
{
    agreements_ = value;
    agreementsIsSet_ = true;
}

bool MarketplaceEngineProduct::agreementsIsSet() const
{
    return agreementsIsSet_;
}

void MarketplaceEngineProduct::unsetagreements()
{
    agreementsIsSet_ = false;
}

}
}
}
}
}


