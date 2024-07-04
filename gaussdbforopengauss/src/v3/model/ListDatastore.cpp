

#include "huaweicloud/gaussdbforopengauss/v3/model/ListDatastore.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListDatastore::ListDatastore()
{
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    completeVersion_ = "";
    completeVersionIsSet_ = false;
    hotfixVersions_ = "";
    hotfixVersionsIsSet_ = false;
    targetVersion_ = "";
    targetVersionIsSet_ = false;
    hotfixFinishedTimesIsSet_ = false;
}

ListDatastore::~ListDatastore() = default;

void ListDatastore::validate()
{
}

web::json::value ListDatastore::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(completeVersionIsSet_) {
        val[utility::conversions::to_string_t("complete_version")] = ModelBase::toJson(completeVersion_);
    }
    if(hotfixVersionsIsSet_) {
        val[utility::conversions::to_string_t("hotfix_versions")] = ModelBase::toJson(hotfixVersions_);
    }
    if(targetVersionIsSet_) {
        val[utility::conversions::to_string_t("target_version")] = ModelBase::toJson(targetVersion_);
    }
    if(hotfixFinishedTimesIsSet_) {
        val[utility::conversions::to_string_t("hotfix_finished_times")] = ModelBase::toJson(hotfixFinishedTimes_);
    }

    return val;
}
bool ListDatastore::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("complete_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("complete_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompleteVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hotfix_versions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hotfix_versions"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHotfixVersions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hotfix_finished_times"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hotfix_finished_times"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHotfixFinishedTimes(refVal);
        }
    }
    return ok;
}


std::string ListDatastore::getType() const
{
    return type_;
}

void ListDatastore::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListDatastore::typeIsSet() const
{
    return typeIsSet_;
}

void ListDatastore::unsettype()
{
    typeIsSet_ = false;
}

std::string ListDatastore::getVersion() const
{
    return version_;
}

void ListDatastore::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ListDatastore::versionIsSet() const
{
    return versionIsSet_;
}

void ListDatastore::unsetversion()
{
    versionIsSet_ = false;
}

std::string ListDatastore::getCompleteVersion() const
{
    return completeVersion_;
}

void ListDatastore::setCompleteVersion(const std::string& value)
{
    completeVersion_ = value;
    completeVersionIsSet_ = true;
}

bool ListDatastore::completeVersionIsSet() const
{
    return completeVersionIsSet_;
}

void ListDatastore::unsetcompleteVersion()
{
    completeVersionIsSet_ = false;
}

std::string ListDatastore::getHotfixVersions() const
{
    return hotfixVersions_;
}

void ListDatastore::setHotfixVersions(const std::string& value)
{
    hotfixVersions_ = value;
    hotfixVersionsIsSet_ = true;
}

bool ListDatastore::hotfixVersionsIsSet() const
{
    return hotfixVersionsIsSet_;
}

void ListDatastore::unsethotfixVersions()
{
    hotfixVersionsIsSet_ = false;
}

std::string ListDatastore::getTargetVersion() const
{
    return targetVersion_;
}

void ListDatastore::setTargetVersion(const std::string& value)
{
    targetVersion_ = value;
    targetVersionIsSet_ = true;
}

bool ListDatastore::targetVersionIsSet() const
{
    return targetVersionIsSet_;
}

void ListDatastore::unsettargetVersion()
{
    targetVersionIsSet_ = false;
}

std::vector<std::string>& ListDatastore::getHotfixFinishedTimes()
{
    return hotfixFinishedTimes_;
}

void ListDatastore::setHotfixFinishedTimes(const std::vector<std::string>& value)
{
    hotfixFinishedTimes_ = value;
    hotfixFinishedTimesIsSet_ = true;
}

bool ListDatastore::hotfixFinishedTimesIsSet() const
{
    return hotfixFinishedTimesIsSet_;
}

void ListDatastore::unsethotfixFinishedTimes()
{
    hotfixFinishedTimesIsSet_ = false;
}

}
}
}
}
}


