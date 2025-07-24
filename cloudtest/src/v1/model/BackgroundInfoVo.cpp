

#include "huaweicloud/cloudtest/v1/model/BackgroundInfoVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BackgroundInfoVo::BackgroundInfoVo()
{
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    coverFileName_ = "";
    coverFileNameIsSet_ = false;
    backgroundFileName_ = "";
    backgroundFileNameIsSet_ = false;
    logoFileName_ = "";
    logoFileNameIsSet_ = false;
}

BackgroundInfoVo::~BackgroundInfoVo() = default;

void BackgroundInfoVo::validate()
{
}

web::json::value BackgroundInfoVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(coverFileNameIsSet_) {
        val[utility::conversions::to_string_t("cover_file_name")] = ModelBase::toJson(coverFileName_);
    }
    if(backgroundFileNameIsSet_) {
        val[utility::conversions::to_string_t("background_file_name")] = ModelBase::toJson(backgroundFileName_);
    }
    if(logoFileNameIsSet_) {
        val[utility::conversions::to_string_t("logo_file_name")] = ModelBase::toJson(logoFileName_);
    }

    return val;
}
bool BackgroundInfoVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cover_file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cover_file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCoverFileName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("background_file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("background_file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackgroundFileName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("logo_file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logo_file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogoFileName(refVal);
        }
    }
    return ok;
}


std::string BackgroundInfoVo::getProjectUuid() const
{
    return projectUuid_;
}

void BackgroundInfoVo::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool BackgroundInfoVo::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void BackgroundInfoVo::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string BackgroundInfoVo::getCoverFileName() const
{
    return coverFileName_;
}

void BackgroundInfoVo::setCoverFileName(const std::string& value)
{
    coverFileName_ = value;
    coverFileNameIsSet_ = true;
}

bool BackgroundInfoVo::coverFileNameIsSet() const
{
    return coverFileNameIsSet_;
}

void BackgroundInfoVo::unsetcoverFileName()
{
    coverFileNameIsSet_ = false;
}

std::string BackgroundInfoVo::getBackgroundFileName() const
{
    return backgroundFileName_;
}

void BackgroundInfoVo::setBackgroundFileName(const std::string& value)
{
    backgroundFileName_ = value;
    backgroundFileNameIsSet_ = true;
}

bool BackgroundInfoVo::backgroundFileNameIsSet() const
{
    return backgroundFileNameIsSet_;
}

void BackgroundInfoVo::unsetbackgroundFileName()
{
    backgroundFileNameIsSet_ = false;
}

std::string BackgroundInfoVo::getLogoFileName() const
{
    return logoFileName_;
}

void BackgroundInfoVo::setLogoFileName(const std::string& value)
{
    logoFileName_ = value;
    logoFileNameIsSet_ = true;
}

bool BackgroundInfoVo::logoFileNameIsSet() const
{
    return logoFileNameIsSet_;
}

void BackgroundInfoVo::unsetlogoFileName()
{
    logoFileNameIsSet_ = false;
}

}
}
}
}
}


