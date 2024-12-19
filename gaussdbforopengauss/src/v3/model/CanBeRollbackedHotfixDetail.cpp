

#include "huaweicloud/gaussdbforopengauss/v3/model/CanBeRollbackedHotfixDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CanBeRollbackedHotfixDetail::CanBeRollbackedHotfixDetail()
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

CanBeRollbackedHotfixDetail::~CanBeRollbackedHotfixDetail() = default;

void CanBeRollbackedHotfixDetail::validate()
{
}

web::json::value CanBeRollbackedHotfixDetail::toJson() const
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
bool CanBeRollbackedHotfixDetail::fromJson(const web::json::value& val)
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


std::string CanBeRollbackedHotfixDetail::getVersion() const
{
    return version_;
}

void CanBeRollbackedHotfixDetail::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool CanBeRollbackedHotfixDetail::versionIsSet() const
{
    return versionIsSet_;
}

void CanBeRollbackedHotfixDetail::unsetversion()
{
    versionIsSet_ = false;
}

std::string CanBeRollbackedHotfixDetail::getCommonPatch() const
{
    return commonPatch_;
}

void CanBeRollbackedHotfixDetail::setCommonPatch(const std::string& value)
{
    commonPatch_ = value;
    commonPatchIsSet_ = true;
}

bool CanBeRollbackedHotfixDetail::commonPatchIsSet() const
{
    return commonPatchIsSet_;
}

void CanBeRollbackedHotfixDetail::unsetcommonPatch()
{
    commonPatchIsSet_ = false;
}

bool CanBeRollbackedHotfixDetail::isBackupSensitive() const
{
    return backupSensitive_;
}

void CanBeRollbackedHotfixDetail::setBackupSensitive(bool value)
{
    backupSensitive_ = value;
    backupSensitiveIsSet_ = true;
}

bool CanBeRollbackedHotfixDetail::backupSensitiveIsSet() const
{
    return backupSensitiveIsSet_;
}

void CanBeRollbackedHotfixDetail::unsetbackupSensitive()
{
    backupSensitiveIsSet_ = false;
}

std::string CanBeRollbackedHotfixDetail::getDescripition() const
{
    return descripition_;
}

void CanBeRollbackedHotfixDetail::setDescripition(const std::string& value)
{
    descripition_ = value;
    descripitionIsSet_ = true;
}

bool CanBeRollbackedHotfixDetail::descripitionIsSet() const
{
    return descripitionIsSet_;
}

void CanBeRollbackedHotfixDetail::unsetdescripition()
{
    descripitionIsSet_ = false;
}

}
}
}
}
}


