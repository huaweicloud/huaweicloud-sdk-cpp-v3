

#include "huaweicloud/codeartspipeline/v2/model/PackageInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PackageInfo::PackageInfo()
{
    name_ = "";
    nameIsSet_ = false;
    packageType_ = "";
    packageTypeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    downloadUrl_ = "";
    downloadUrlIsSet_ = false;
}

PackageInfo::~PackageInfo() = default;

void PackageInfo::validate()
{
}

web::json::value PackageInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(packageTypeIsSet_) {
        val[utility::conversions::to_string_t("packageType")] = ModelBase::toJson(packageType_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(downloadUrlIsSet_) {
        val[utility::conversions::to_string_t("downloadUrl")] = ModelBase::toJson(downloadUrl_);
    }

    return val;
}
bool PackageInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("packageType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("packageType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("downloadUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("downloadUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDownloadUrl(refVal);
        }
    }
    return ok;
}


std::string PackageInfo::getName() const
{
    return name_;
}

void PackageInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PackageInfo::nameIsSet() const
{
    return nameIsSet_;
}

void PackageInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string PackageInfo::getPackageType() const
{
    return packageType_;
}

void PackageInfo::setPackageType(const std::string& value)
{
    packageType_ = value;
    packageTypeIsSet_ = true;
}

bool PackageInfo::packageTypeIsSet() const
{
    return packageTypeIsSet_;
}

void PackageInfo::unsetpackageType()
{
    packageTypeIsSet_ = false;
}

std::string PackageInfo::getVersion() const
{
    return version_;
}

void PackageInfo::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool PackageInfo::versionIsSet() const
{
    return versionIsSet_;
}

void PackageInfo::unsetversion()
{
    versionIsSet_ = false;
}

std::string PackageInfo::getDownloadUrl() const
{
    return downloadUrl_;
}

void PackageInfo::setDownloadUrl(const std::string& value)
{
    downloadUrl_ = value;
    downloadUrlIsSet_ = true;
}

bool PackageInfo::downloadUrlIsSet() const
{
    return downloadUrlIsSet_;
}

void PackageInfo::unsetdownloadUrl()
{
    downloadUrlIsSet_ = false;
}

}
}
}
}
}


