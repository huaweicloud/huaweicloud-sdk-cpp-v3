

#include "huaweicloud/iotda/v5/model/ShowOtaPackageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowOtaPackageResponse::ShowOtaPackageResponse()
{
    packageId_ = "";
    packageIdIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    packageType_ = "";
    packageTypeIsSet_ = false;
    productId_ = "";
    productIdIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    supportSourceVersionsIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    customInfo_ = "";
    customInfoIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    fileLocationIsSet_ = false;
}

ShowOtaPackageResponse::~ShowOtaPackageResponse() = default;

void ShowOtaPackageResponse::validate()
{
}

web::json::value ShowOtaPackageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(packageIdIsSet_) {
        val[utility::conversions::to_string_t("package_id")] = ModelBase::toJson(packageId_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(packageTypeIsSet_) {
        val[utility::conversions::to_string_t("package_type")] = ModelBase::toJson(packageType_);
    }
    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
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
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(fileLocationIsSet_) {
        val[utility::conversions::to_string_t("file_location")] = ModelBase::toJson(fileLocation_);
    }

    return val;
}
bool ShowOtaPackageResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("package_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageId(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
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


std::string ShowOtaPackageResponse::getPackageId() const
{
    return packageId_;
}

void ShowOtaPackageResponse::setPackageId(const std::string& value)
{
    packageId_ = value;
    packageIdIsSet_ = true;
}

bool ShowOtaPackageResponse::packageIdIsSet() const
{
    return packageIdIsSet_;
}

void ShowOtaPackageResponse::unsetpackageId()
{
    packageIdIsSet_ = false;
}

std::string ShowOtaPackageResponse::getAppId() const
{
    return appId_;
}

void ShowOtaPackageResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ShowOtaPackageResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void ShowOtaPackageResponse::unsetappId()
{
    appIdIsSet_ = false;
}

std::string ShowOtaPackageResponse::getPackageType() const
{
    return packageType_;
}

void ShowOtaPackageResponse::setPackageType(const std::string& value)
{
    packageType_ = value;
    packageTypeIsSet_ = true;
}

bool ShowOtaPackageResponse::packageTypeIsSet() const
{
    return packageTypeIsSet_;
}

void ShowOtaPackageResponse::unsetpackageType()
{
    packageTypeIsSet_ = false;
}

std::string ShowOtaPackageResponse::getProductId() const
{
    return productId_;
}

void ShowOtaPackageResponse::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool ShowOtaPackageResponse::productIdIsSet() const
{
    return productIdIsSet_;
}

void ShowOtaPackageResponse::unsetproductId()
{
    productIdIsSet_ = false;
}

std::string ShowOtaPackageResponse::getVersion() const
{
    return version_;
}

void ShowOtaPackageResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ShowOtaPackageResponse::versionIsSet() const
{
    return versionIsSet_;
}

void ShowOtaPackageResponse::unsetversion()
{
    versionIsSet_ = false;
}

std::vector<std::string>& ShowOtaPackageResponse::getSupportSourceVersions()
{
    return supportSourceVersions_;
}

void ShowOtaPackageResponse::setSupportSourceVersions(const std::vector<std::string>& value)
{
    supportSourceVersions_ = value;
    supportSourceVersionsIsSet_ = true;
}

bool ShowOtaPackageResponse::supportSourceVersionsIsSet() const
{
    return supportSourceVersionsIsSet_;
}

void ShowOtaPackageResponse::unsetsupportSourceVersions()
{
    supportSourceVersionsIsSet_ = false;
}

std::string ShowOtaPackageResponse::getDescription() const
{
    return description_;
}

void ShowOtaPackageResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowOtaPackageResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowOtaPackageResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowOtaPackageResponse::getCustomInfo() const
{
    return customInfo_;
}

void ShowOtaPackageResponse::setCustomInfo(const std::string& value)
{
    customInfo_ = value;
    customInfoIsSet_ = true;
}

bool ShowOtaPackageResponse::customInfoIsSet() const
{
    return customInfoIsSet_;
}

void ShowOtaPackageResponse::unsetcustomInfo()
{
    customInfoIsSet_ = false;
}

std::string ShowOtaPackageResponse::getCreateTime() const
{
    return createTime_;
}

void ShowOtaPackageResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowOtaPackageResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowOtaPackageResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

FileLocation ShowOtaPackageResponse::getFileLocation() const
{
    return fileLocation_;
}

void ShowOtaPackageResponse::setFileLocation(const FileLocation& value)
{
    fileLocation_ = value;
    fileLocationIsSet_ = true;
}

bool ShowOtaPackageResponse::fileLocationIsSet() const
{
    return fileLocationIsSet_;
}

void ShowOtaPackageResponse::unsetfileLocation()
{
    fileLocationIsSet_ = false;
}

}
}
}
}
}


