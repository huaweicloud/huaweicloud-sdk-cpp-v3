

#include "huaweicloud/iotda/v5/model/CreateOtaPackageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateOtaPackageResponse::CreateOtaPackageResponse()
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

CreateOtaPackageResponse::~CreateOtaPackageResponse() = default;

void CreateOtaPackageResponse::validate()
{
}

web::json::value CreateOtaPackageResponse::toJson() const
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
bool CreateOtaPackageResponse::fromJson(const web::json::value& val)
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


std::string CreateOtaPackageResponse::getPackageId() const
{
    return packageId_;
}

void CreateOtaPackageResponse::setPackageId(const std::string& value)
{
    packageId_ = value;
    packageIdIsSet_ = true;
}

bool CreateOtaPackageResponse::packageIdIsSet() const
{
    return packageIdIsSet_;
}

void CreateOtaPackageResponse::unsetpackageId()
{
    packageIdIsSet_ = false;
}

std::string CreateOtaPackageResponse::getAppId() const
{
    return appId_;
}

void CreateOtaPackageResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool CreateOtaPackageResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void CreateOtaPackageResponse::unsetappId()
{
    appIdIsSet_ = false;
}

std::string CreateOtaPackageResponse::getPackageType() const
{
    return packageType_;
}

void CreateOtaPackageResponse::setPackageType(const std::string& value)
{
    packageType_ = value;
    packageTypeIsSet_ = true;
}

bool CreateOtaPackageResponse::packageTypeIsSet() const
{
    return packageTypeIsSet_;
}

void CreateOtaPackageResponse::unsetpackageType()
{
    packageTypeIsSet_ = false;
}

std::string CreateOtaPackageResponse::getProductId() const
{
    return productId_;
}

void CreateOtaPackageResponse::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool CreateOtaPackageResponse::productIdIsSet() const
{
    return productIdIsSet_;
}

void CreateOtaPackageResponse::unsetproductId()
{
    productIdIsSet_ = false;
}

std::string CreateOtaPackageResponse::getVersion() const
{
    return version_;
}

void CreateOtaPackageResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool CreateOtaPackageResponse::versionIsSet() const
{
    return versionIsSet_;
}

void CreateOtaPackageResponse::unsetversion()
{
    versionIsSet_ = false;
}

std::vector<std::string>& CreateOtaPackageResponse::getSupportSourceVersions()
{
    return supportSourceVersions_;
}

void CreateOtaPackageResponse::setSupportSourceVersions(const std::vector<std::string>& value)
{
    supportSourceVersions_ = value;
    supportSourceVersionsIsSet_ = true;
}

bool CreateOtaPackageResponse::supportSourceVersionsIsSet() const
{
    return supportSourceVersionsIsSet_;
}

void CreateOtaPackageResponse::unsetsupportSourceVersions()
{
    supportSourceVersionsIsSet_ = false;
}

std::string CreateOtaPackageResponse::getDescription() const
{
    return description_;
}

void CreateOtaPackageResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateOtaPackageResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateOtaPackageResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateOtaPackageResponse::getCustomInfo() const
{
    return customInfo_;
}

void CreateOtaPackageResponse::setCustomInfo(const std::string& value)
{
    customInfo_ = value;
    customInfoIsSet_ = true;
}

bool CreateOtaPackageResponse::customInfoIsSet() const
{
    return customInfoIsSet_;
}

void CreateOtaPackageResponse::unsetcustomInfo()
{
    customInfoIsSet_ = false;
}

std::string CreateOtaPackageResponse::getCreateTime() const
{
    return createTime_;
}

void CreateOtaPackageResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateOtaPackageResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateOtaPackageResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

FileLocation CreateOtaPackageResponse::getFileLocation() const
{
    return fileLocation_;
}

void CreateOtaPackageResponse::setFileLocation(const FileLocation& value)
{
    fileLocation_ = value;
    fileLocationIsSet_ = true;
}

bool CreateOtaPackageResponse::fileLocationIsSet() const
{
    return fileLocationIsSet_;
}

void CreateOtaPackageResponse::unsetfileLocation()
{
    fileLocationIsSet_ = false;
}

}
}
}
}
}


