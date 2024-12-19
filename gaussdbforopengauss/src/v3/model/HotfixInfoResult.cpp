

#include "huaweicloud/gaussdbforopengauss/v3/model/HotfixInfoResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




HotfixInfoResult::HotfixInfoResult()
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

HotfixInfoResult::~HotfixInfoResult() = default;

void HotfixInfoResult::validate()
{
}

web::json::value HotfixInfoResult::toJson() const
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
bool HotfixInfoResult::fromJson(const web::json::value& val)
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


std::string HotfixInfoResult::getVersion() const
{
    return version_;
}

void HotfixInfoResult::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool HotfixInfoResult::versionIsSet() const
{
    return versionIsSet_;
}

void HotfixInfoResult::unsetversion()
{
    versionIsSet_ = false;
}

std::string HotfixInfoResult::getCommonPatch() const
{
    return commonPatch_;
}

void HotfixInfoResult::setCommonPatch(const std::string& value)
{
    commonPatch_ = value;
    commonPatchIsSet_ = true;
}

bool HotfixInfoResult::commonPatchIsSet() const
{
    return commonPatchIsSet_;
}

void HotfixInfoResult::unsetcommonPatch()
{
    commonPatchIsSet_ = false;
}

bool HotfixInfoResult::isBackupSensitive() const
{
    return backupSensitive_;
}

void HotfixInfoResult::setBackupSensitive(bool value)
{
    backupSensitive_ = value;
    backupSensitiveIsSet_ = true;
}

bool HotfixInfoResult::backupSensitiveIsSet() const
{
    return backupSensitiveIsSet_;
}

void HotfixInfoResult::unsetbackupSensitive()
{
    backupSensitiveIsSet_ = false;
}

std::string HotfixInfoResult::getDescripition() const
{
    return descripition_;
}

void HotfixInfoResult::setDescripition(const std::string& value)
{
    descripition_ = value;
    descripitionIsSet_ = true;
}

bool HotfixInfoResult::descripitionIsSet() const
{
    return descripitionIsSet_;
}

void HotfixInfoResult::unsetdescripition()
{
    descripitionIsSet_ = false;
}

}
}
}
}
}


