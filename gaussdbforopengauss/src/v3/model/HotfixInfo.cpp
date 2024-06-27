

#include "huaweicloud/gaussdbforopengauss/v3/model/HotfixInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




HotfixInfo::HotfixInfo()
{
    version_ = "";
    versionIsSet_ = false;
    commonPatch_ = "";
    commonPatchIsSet_ = false;
    backupSensitive_ = false;
    backupSensitiveIsSet_ = false;
    descripition_ = "";
    descripitionIsSet_ = false;
}

HotfixInfo::~HotfixInfo() = default;

void HotfixInfo::validate()
{
}

web::json::value HotfixInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(commonPatchIsSet_) {
        val[utility::conversions::to_string_t("common_patch")] = ModelBase::toJson(commonPatch_);
    }
    if(backupSensitiveIsSet_) {
        val[utility::conversions::to_string_t("backup_sensitive")] = ModelBase::toJson(backupSensitive_);
    }
    if(descripitionIsSet_) {
        val[utility::conversions::to_string_t("descripition")] = ModelBase::toJson(descripition_);
    }

    return val;
}
bool HotfixInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("common_patch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("common_patch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommonPatch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_sensitive"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_sensitive"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupSensitive(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("descripition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("descripition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescripition(refVal);
        }
    }
    return ok;
}


std::string HotfixInfo::getVersion() const
{
    return version_;
}

void HotfixInfo::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool HotfixInfo::versionIsSet() const
{
    return versionIsSet_;
}

void HotfixInfo::unsetversion()
{
    versionIsSet_ = false;
}

std::string HotfixInfo::getCommonPatch() const
{
    return commonPatch_;
}

void HotfixInfo::setCommonPatch(const std::string& value)
{
    commonPatch_ = value;
    commonPatchIsSet_ = true;
}

bool HotfixInfo::commonPatchIsSet() const
{
    return commonPatchIsSet_;
}

void HotfixInfo::unsetcommonPatch()
{
    commonPatchIsSet_ = false;
}

bool HotfixInfo::isBackupSensitive() const
{
    return backupSensitive_;
}

void HotfixInfo::setBackupSensitive(bool value)
{
    backupSensitive_ = value;
    backupSensitiveIsSet_ = true;
}

bool HotfixInfo::backupSensitiveIsSet() const
{
    return backupSensitiveIsSet_;
}

void HotfixInfo::unsetbackupSensitive()
{
    backupSensitiveIsSet_ = false;
}

std::string HotfixInfo::getDescripition() const
{
    return descripition_;
}

void HotfixInfo::setDescripition(const std::string& value)
{
    descripition_ = value;
    descripitionIsSet_ = true;
}

bool HotfixInfo::descripitionIsSet() const
{
    return descripitionIsSet_;
}

void HotfixInfo::unsetdescripition()
{
    descripitionIsSet_ = false;
}

}
}
}
}
}


