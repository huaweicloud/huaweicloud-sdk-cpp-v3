

#include "huaweicloud/cce/v3/model/ReleaseReqBodyParams.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ReleaseReqBodyParams::ReleaseReqBodyParams()
{
    dryRun_ = false;
    dryRunIsSet_ = false;
    nameTemplate_ = "";
    nameTemplateIsSet_ = false;
    noHooks_ = false;
    noHooksIsSet_ = false;
    replace_ = false;
    replaceIsSet_ = false;
    recreate_ = false;
    recreateIsSet_ = false;
    resetValues_ = false;
    resetValuesIsSet_ = false;
    releaseVersion_ = 0;
    releaseVersionIsSet_ = false;
    includeHooks_ = false;
    includeHooksIsSet_ = false;
}

ReleaseReqBodyParams::~ReleaseReqBodyParams() = default;

void ReleaseReqBodyParams::validate()
{
}

web::json::value ReleaseReqBodyParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dryRunIsSet_) {
        val[utility::conversions::to_string_t("dry_run")] = ModelBase::toJson(dryRun_);
    }
    if(nameTemplateIsSet_) {
        val[utility::conversions::to_string_t("name_template")] = ModelBase::toJson(nameTemplate_);
    }
    if(noHooksIsSet_) {
        val[utility::conversions::to_string_t("no_hooks")] = ModelBase::toJson(noHooks_);
    }
    if(replaceIsSet_) {
        val[utility::conversions::to_string_t("replace")] = ModelBase::toJson(replace_);
    }
    if(recreateIsSet_) {
        val[utility::conversions::to_string_t("recreate")] = ModelBase::toJson(recreate_);
    }
    if(resetValuesIsSet_) {
        val[utility::conversions::to_string_t("reset_values")] = ModelBase::toJson(resetValues_);
    }
    if(releaseVersionIsSet_) {
        val[utility::conversions::to_string_t("release_version")] = ModelBase::toJson(releaseVersion_);
    }
    if(includeHooksIsSet_) {
        val[utility::conversions::to_string_t("include_hooks")] = ModelBase::toJson(includeHooks_);
    }

    return val;
}
bool ReleaseReqBodyParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dry_run"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dry_run"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDryRun(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name_template"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_template"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameTemplate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("no_hooks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("no_hooks"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNoHooks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replace"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recreate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recreate"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecreate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reset_values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reset_values"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResetValues(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("release_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("release_version"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReleaseVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("include_hooks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("include_hooks"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludeHooks(refVal);
        }
    }
    return ok;
}


bool ReleaseReqBodyParams::isDryRun() const
{
    return dryRun_;
}

void ReleaseReqBodyParams::setDryRun(bool value)
{
    dryRun_ = value;
    dryRunIsSet_ = true;
}

bool ReleaseReqBodyParams::dryRunIsSet() const
{
    return dryRunIsSet_;
}

void ReleaseReqBodyParams::unsetdryRun()
{
    dryRunIsSet_ = false;
}

std::string ReleaseReqBodyParams::getNameTemplate() const
{
    return nameTemplate_;
}

void ReleaseReqBodyParams::setNameTemplate(const std::string& value)
{
    nameTemplate_ = value;
    nameTemplateIsSet_ = true;
}

bool ReleaseReqBodyParams::nameTemplateIsSet() const
{
    return nameTemplateIsSet_;
}

void ReleaseReqBodyParams::unsetnameTemplate()
{
    nameTemplateIsSet_ = false;
}

bool ReleaseReqBodyParams::isNoHooks() const
{
    return noHooks_;
}

void ReleaseReqBodyParams::setNoHooks(bool value)
{
    noHooks_ = value;
    noHooksIsSet_ = true;
}

bool ReleaseReqBodyParams::noHooksIsSet() const
{
    return noHooksIsSet_;
}

void ReleaseReqBodyParams::unsetnoHooks()
{
    noHooksIsSet_ = false;
}

bool ReleaseReqBodyParams::isReplace() const
{
    return replace_;
}

void ReleaseReqBodyParams::setReplace(bool value)
{
    replace_ = value;
    replaceIsSet_ = true;
}

bool ReleaseReqBodyParams::replaceIsSet() const
{
    return replaceIsSet_;
}

void ReleaseReqBodyParams::unsetreplace()
{
    replaceIsSet_ = false;
}

bool ReleaseReqBodyParams::isRecreate() const
{
    return recreate_;
}

void ReleaseReqBodyParams::setRecreate(bool value)
{
    recreate_ = value;
    recreateIsSet_ = true;
}

bool ReleaseReqBodyParams::recreateIsSet() const
{
    return recreateIsSet_;
}

void ReleaseReqBodyParams::unsetrecreate()
{
    recreateIsSet_ = false;
}

bool ReleaseReqBodyParams::isResetValues() const
{
    return resetValues_;
}

void ReleaseReqBodyParams::setResetValues(bool value)
{
    resetValues_ = value;
    resetValuesIsSet_ = true;
}

bool ReleaseReqBodyParams::resetValuesIsSet() const
{
    return resetValuesIsSet_;
}

void ReleaseReqBodyParams::unsetresetValues()
{
    resetValuesIsSet_ = false;
}

int32_t ReleaseReqBodyParams::getReleaseVersion() const
{
    return releaseVersion_;
}

void ReleaseReqBodyParams::setReleaseVersion(int32_t value)
{
    releaseVersion_ = value;
    releaseVersionIsSet_ = true;
}

bool ReleaseReqBodyParams::releaseVersionIsSet() const
{
    return releaseVersionIsSet_;
}

void ReleaseReqBodyParams::unsetreleaseVersion()
{
    releaseVersionIsSet_ = false;
}

bool ReleaseReqBodyParams::isIncludeHooks() const
{
    return includeHooks_;
}

void ReleaseReqBodyParams::setIncludeHooks(bool value)
{
    includeHooks_ = value;
    includeHooksIsSet_ = true;
}

bool ReleaseReqBodyParams::includeHooksIsSet() const
{
    return includeHooksIsSet_;
}

void ReleaseReqBodyParams::unsetincludeHooks()
{
    includeHooksIsSet_ = false;
}

}
}
}
}
}


