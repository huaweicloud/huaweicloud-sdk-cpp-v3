

#include "huaweicloud/cloudtest/v1/model/SimpleIssueVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




SimpleIssueVo::SimpleIssueVo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    trackerName_ = "";
    trackerNameIsSet_ = false;
}

SimpleIssueVo::~SimpleIssueVo() = default;

void SimpleIssueVo::validate()
{
}

web::json::value SimpleIssueVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(trackerNameIsSet_) {
        val[utility::conversions::to_string_t("tracker_name")] = ModelBase::toJson(trackerName_);
    }

    return val;
}
bool SimpleIssueVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tracker_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrackerName(refVal);
        }
    }
    return ok;
}


std::string SimpleIssueVo::getId() const
{
    return id_;
}

void SimpleIssueVo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SimpleIssueVo::idIsSet() const
{
    return idIsSet_;
}

void SimpleIssueVo::unsetid()
{
    idIsSet_ = false;
}

std::string SimpleIssueVo::getName() const
{
    return name_;
}

void SimpleIssueVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SimpleIssueVo::nameIsSet() const
{
    return nameIsSet_;
}

void SimpleIssueVo::unsetname()
{
    nameIsSet_ = false;
}

std::string SimpleIssueVo::getPath() const
{
    return path_;
}

void SimpleIssueVo::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool SimpleIssueVo::pathIsSet() const
{
    return pathIsSet_;
}

void SimpleIssueVo::unsetpath()
{
    pathIsSet_ = false;
}

std::string SimpleIssueVo::getTrackerName() const
{
    return trackerName_;
}

void SimpleIssueVo::setTrackerName(const std::string& value)
{
    trackerName_ = value;
    trackerNameIsSet_ = true;
}

bool SimpleIssueVo::trackerNameIsSet() const
{
    return trackerNameIsSet_;
}

void SimpleIssueVo::unsettrackerName()
{
    trackerNameIsSet_ = false;
}

}
}
}
}
}


