

#include "huaweicloud/iotda/v5/model/CreateOtaPackage.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateOtaPackage::CreateOtaPackage()
{
    appId_ = "";
    appIdIsSet_ = false;
    packageType_ = "";
    packageTypeIsSet_ = false;
    productId_ = "";
    productIdIsSet_ = false;
    moduleName_ = "";
    moduleNameIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    supportSourceVersionsIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    customInfo_ = "";
    customInfoIsSet_ = false;
    fileLocationIsSet_ = false;
}

CreateOtaPackage::~CreateOtaPackage() = default;

void CreateOtaPackage::validate()
{
}

web::json::value CreateOtaPackage::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(packageTypeIsSet_) {
        val[utility::conversions::to_string_t("package_type")] = ModelBase::toJson(packageType_);
    }
    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }
    if(moduleNameIsSet_) {
        val[utility::conversions::to_string_t("module_name")] = ModelBase::toJson(moduleName_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(supportSourceVersionsIsSet_) {
        val[utility::conversions::to_string_t("support_source_versions")] = ModelBase::toJson(supportSourceVersions_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(customInfoIsSet_) {
        val[utility::conversions::to_string_t("custom_info")] = ModelBase::toJson(customInfo_);
    }
    if(fileLocationIsSet_) {
        val[utility::conversions::to_string_t("file_location")] = ModelBase::toJson(fileLocation_);
    }

    return val;
}
bool CreateOtaPackage::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("package_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("module_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_source_versions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_source_versions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportSourceVersions(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("custom_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_location"));
        if(!fieldValue.is_null())
        {
            FileLocation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileLocation(refVal);
        }
    }
    return ok;
}


std::string CreateOtaPackage::getAppId() const
{
    return appId_;
}

void CreateOtaPackage::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool CreateOtaPackage::appIdIsSet() const
{
    return appIdIsSet_;
}

void CreateOtaPackage::unsetappId()
{
    appIdIsSet_ = false;
}

std::string CreateOtaPackage::getPackageType() const
{
    return packageType_;
}

void CreateOtaPackage::setPackageType(const std::string& value)
{
    packageType_ = value;
    packageTypeIsSet_ = true;
}

bool CreateOtaPackage::packageTypeIsSet() const
{
    return packageTypeIsSet_;
}

void CreateOtaPackage::unsetpackageType()
{
    packageTypeIsSet_ = false;
}

std::string CreateOtaPackage::getProductId() const
{
    return productId_;
}

void CreateOtaPackage::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool CreateOtaPackage::productIdIsSet() const
{
    return productIdIsSet_;
}

void CreateOtaPackage::unsetproductId()
{
    productIdIsSet_ = false;
}

std::string CreateOtaPackage::getModuleName() const
{
    return moduleName_;
}

void CreateOtaPackage::setModuleName(const std::string& value)
{
    moduleName_ = value;
    moduleNameIsSet_ = true;
}

bool CreateOtaPackage::moduleNameIsSet() const
{
    return moduleNameIsSet_;
}

void CreateOtaPackage::unsetmoduleName()
{
    moduleNameIsSet_ = false;
}

std::string CreateOtaPackage::getVersion() const
{
    return version_;
}

void CreateOtaPackage::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool CreateOtaPackage::versionIsSet() const
{
    return versionIsSet_;
}

void CreateOtaPackage::unsetversion()
{
    versionIsSet_ = false;
}

std::vector<std::string>& CreateOtaPackage::getSupportSourceVersions()
{
    return supportSourceVersions_;
}

void CreateOtaPackage::setSupportSourceVersions(const std::vector<std::string>& value)
{
    supportSourceVersions_ = value;
    supportSourceVersionsIsSet_ = true;
}

bool CreateOtaPackage::supportSourceVersionsIsSet() const
{
    return supportSourceVersionsIsSet_;
}

void CreateOtaPackage::unsetsupportSourceVersions()
{
    supportSourceVersionsIsSet_ = false;
}

std::string CreateOtaPackage::getDescription() const
{
    return description_;
}

void CreateOtaPackage::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateOtaPackage::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateOtaPackage::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateOtaPackage::getCustomInfo() const
{
    return customInfo_;
}

void CreateOtaPackage::setCustomInfo(const std::string& value)
{
    customInfo_ = value;
    customInfoIsSet_ = true;
}

bool CreateOtaPackage::customInfoIsSet() const
{
    return customInfoIsSet_;
}

void CreateOtaPackage::unsetcustomInfo()
{
    customInfoIsSet_ = false;
}

FileLocation CreateOtaPackage::getFileLocation() const
{
    return fileLocation_;
}

void CreateOtaPackage::setFileLocation(const FileLocation& value)
{
    fileLocation_ = value;
    fileLocationIsSet_ = true;
}

bool CreateOtaPackage::fileLocationIsSet() const
{
    return fileLocationIsSet_;
}

void CreateOtaPackage::unsetfileLocation()
{
    fileLocationIsSet_ = false;
}

}
}
}
}
}


