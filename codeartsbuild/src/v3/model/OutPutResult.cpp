

#include "huaweicloud/codeartsbuild/v3/model/OutPutResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




OutPutResult::OutPutResult()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    packageType_ = "";
    packageTypeIsSet_ = false;
    uri_ = "";
    uriIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    dailyBuildNumber_ = "";
    dailyBuildNumberIsSet_ = false;
}

OutPutResult::~OutPutResult() = default;

void OutPutResult::validate()
{
}

web::json::value OutPutResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(packageTypeIsSet_) {
        val[utility::conversions::to_string_t("package_type")] = ModelBase::toJson(packageType_);
    }
    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(dailyBuildNumberIsSet_) {
        val[utility::conversions::to_string_t("daily_build_number")] = ModelBase::toJson(dailyBuildNumber_);
    }

    return val;
}
bool OutPutResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("package_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("daily_build_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("daily_build_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDailyBuildNumber(refVal);
        }
    }
    return ok;
}


std::string OutPutResult::getProjectId() const
{
    return projectId_;
}

void OutPutResult::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool OutPutResult::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void OutPutResult::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string OutPutResult::getName() const
{
    return name_;
}

void OutPutResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool OutPutResult::nameIsSet() const
{
    return nameIsSet_;
}

void OutPutResult::unsetname()
{
    nameIsSet_ = false;
}

std::string OutPutResult::getVersion() const
{
    return version_;
}

void OutPutResult::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool OutPutResult::versionIsSet() const
{
    return versionIsSet_;
}

void OutPutResult::unsetversion()
{
    versionIsSet_ = false;
}

std::string OutPutResult::getPackageType() const
{
    return packageType_;
}

void OutPutResult::setPackageType(const std::string& value)
{
    packageType_ = value;
    packageTypeIsSet_ = true;
}

bool OutPutResult::packageTypeIsSet() const
{
    return packageTypeIsSet_;
}

void OutPutResult::unsetpackageType()
{
    packageTypeIsSet_ = false;
}

std::string OutPutResult::getUri() const
{
    return uri_;
}

void OutPutResult::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool OutPutResult::uriIsSet() const
{
    return uriIsSet_;
}

void OutPutResult::unseturi()
{
    uriIsSet_ = false;
}

std::string OutPutResult::getType() const
{
    return type_;
}

void OutPutResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool OutPutResult::typeIsSet() const
{
    return typeIsSet_;
}

void OutPutResult::unsettype()
{
    typeIsSet_ = false;
}

std::string OutPutResult::getDailyBuildNumber() const
{
    return dailyBuildNumber_;
}

void OutPutResult::setDailyBuildNumber(const std::string& value)
{
    dailyBuildNumber_ = value;
    dailyBuildNumberIsSet_ = true;
}

bool OutPutResult::dailyBuildNumberIsSet() const
{
    return dailyBuildNumberIsSet_;
}

void OutPutResult::unsetdailyBuildNumber()
{
    dailyBuildNumberIsSet_ = false;
}

}
}
}
}
}


