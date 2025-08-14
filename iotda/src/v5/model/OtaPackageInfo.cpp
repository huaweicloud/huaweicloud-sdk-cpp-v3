

#include "huaweicloud/iotda/v5/model/OtaPackageInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




OtaPackageInfo::OtaPackageInfo()
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
}

OtaPackageInfo::~OtaPackageInfo() = default;

void OtaPackageInfo::validate()
{
}

web::json::value OtaPackageInfo::toJson() const
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

    return val;
}
bool OtaPackageInfo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string OtaPackageInfo::getPackageId() const
{
    return packageId_;
}

void OtaPackageInfo::setPackageId(const std::string& value)
{
    packageId_ = value;
    packageIdIsSet_ = true;
}

bool OtaPackageInfo::packageIdIsSet() const
{
    return packageIdIsSet_;
}

void OtaPackageInfo::unsetpackageId()
{
    packageIdIsSet_ = false;
}

std::string OtaPackageInfo::getAppId() const
{
    return appId_;
}

void OtaPackageInfo::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool OtaPackageInfo::appIdIsSet() const
{
    return appIdIsSet_;
}

void OtaPackageInfo::unsetappId()
{
    appIdIsSet_ = false;
}

std::string OtaPackageInfo::getPackageType() const
{
    return packageType_;
}

void OtaPackageInfo::setPackageType(const std::string& value)
{
    packageType_ = value;
    packageTypeIsSet_ = true;
}

bool OtaPackageInfo::packageTypeIsSet() const
{
    return packageTypeIsSet_;
}

void OtaPackageInfo::unsetpackageType()
{
    packageTypeIsSet_ = false;
}

std::string OtaPackageInfo::getProductId() const
{
    return productId_;
}

void OtaPackageInfo::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool OtaPackageInfo::productIdIsSet() const
{
    return productIdIsSet_;
}

void OtaPackageInfo::unsetproductId()
{
    productIdIsSet_ = false;
}

std::string OtaPackageInfo::getVersion() const
{
    return version_;
}

void OtaPackageInfo::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool OtaPackageInfo::versionIsSet() const
{
    return versionIsSet_;
}

void OtaPackageInfo::unsetversion()
{
    versionIsSet_ = false;
}

std::vector<std::string>& OtaPackageInfo::getSupportSourceVersions()
{
    return supportSourceVersions_;
}

void OtaPackageInfo::setSupportSourceVersions(const std::vector<std::string>& value)
{
    supportSourceVersions_ = value;
    supportSourceVersionsIsSet_ = true;
}

bool OtaPackageInfo::supportSourceVersionsIsSet() const
{
    return supportSourceVersionsIsSet_;
}

void OtaPackageInfo::unsetsupportSourceVersions()
{
    supportSourceVersionsIsSet_ = false;
}

std::string OtaPackageInfo::getDescription() const
{
    return description_;
}

void OtaPackageInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool OtaPackageInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void OtaPackageInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string OtaPackageInfo::getCustomInfo() const
{
    return customInfo_;
}

void OtaPackageInfo::setCustomInfo(const std::string& value)
{
    customInfo_ = value;
    customInfoIsSet_ = true;
}

bool OtaPackageInfo::customInfoIsSet() const
{
    return customInfoIsSet_;
}

void OtaPackageInfo::unsetcustomInfo()
{
    customInfoIsSet_ = false;
}

std::string OtaPackageInfo::getCreateTime() const
{
    return createTime_;
}

void OtaPackageInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool OtaPackageInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void OtaPackageInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

}
}
}
}
}


