

#include "huaweicloud/cce/v3/model/UpgradeVersionInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradeVersionInfo::UpgradeVersionInfo()
{
    release_ = "";
    releaseIsSet_ = false;
    patch_ = "";
    patchIsSet_ = false;
    suggestPatch_ = "";
    suggestPatchIsSet_ = false;
    targetVersionsIsSet_ = false;
}

UpgradeVersionInfo::~UpgradeVersionInfo() = default;

void UpgradeVersionInfo::validate()
{
}

web::json::value UpgradeVersionInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(releaseIsSet_) {
        val[utility::conversions::to_string_t("release")] = ModelBase::toJson(release_);
    }
    if(patchIsSet_) {
        val[utility::conversions::to_string_t("patch")] = ModelBase::toJson(patch_);
    }
    if(suggestPatchIsSet_) {
        val[utility::conversions::to_string_t("suggestPatch")] = ModelBase::toJson(suggestPatch_);
    }
    if(targetVersionsIsSet_) {
        val[utility::conversions::to_string_t("targetVersions")] = ModelBase::toJson(targetVersions_);
    }

    return val;
}
bool UpgradeVersionInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("release"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("release"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelease(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("patch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("patch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPatch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("suggestPatch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("suggestPatch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuggestPatch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("targetVersions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("targetVersions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetVersions(refVal);
        }
    }
    return ok;
}


std::string UpgradeVersionInfo::getRelease() const
{
    return release_;
}

void UpgradeVersionInfo::setRelease(const std::string& value)
{
    release_ = value;
    releaseIsSet_ = true;
}

bool UpgradeVersionInfo::releaseIsSet() const
{
    return releaseIsSet_;
}

void UpgradeVersionInfo::unsetrelease()
{
    releaseIsSet_ = false;
}

std::string UpgradeVersionInfo::getPatch() const
{
    return patch_;
}

void UpgradeVersionInfo::setPatch(const std::string& value)
{
    patch_ = value;
    patchIsSet_ = true;
}

bool UpgradeVersionInfo::patchIsSet() const
{
    return patchIsSet_;
}

void UpgradeVersionInfo::unsetpatch()
{
    patchIsSet_ = false;
}

std::string UpgradeVersionInfo::getSuggestPatch() const
{
    return suggestPatch_;
}

void UpgradeVersionInfo::setSuggestPatch(const std::string& value)
{
    suggestPatch_ = value;
    suggestPatchIsSet_ = true;
}

bool UpgradeVersionInfo::suggestPatchIsSet() const
{
    return suggestPatchIsSet_;
}

void UpgradeVersionInfo::unsetsuggestPatch()
{
    suggestPatchIsSet_ = false;
}

std::vector<std::string>& UpgradeVersionInfo::getTargetVersions()
{
    return targetVersions_;
}

void UpgradeVersionInfo::setTargetVersions(const std::vector<std::string>& value)
{
    targetVersions_ = value;
    targetVersionsIsSet_ = true;
}

bool UpgradeVersionInfo::targetVersionsIsSet() const
{
    return targetVersionsIsSet_;
}

void UpgradeVersionInfo::unsettargetVersions()
{
    targetVersionsIsSet_ = false;
}

}
}
}
}
}


