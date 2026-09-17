

#include "huaweicloud/cloudtest/v1/model/DeleteTaskInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DeleteTaskInfo::DeleteTaskInfo()
{
    versionUri_ = "";
    versionUriIsSet_ = false;
    taskUrisIsSet_ = false;
}

DeleteTaskInfo::~DeleteTaskInfo() = default;

void DeleteTaskInfo::validate()
{
}

web::json::value DeleteTaskInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }
    if(taskUrisIsSet_) {
        val[utility::conversions::to_string_t("task_uris")] = ModelBase::toJson(taskUris_);
    }

    return val;
}
bool DeleteTaskInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_uris"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_uris"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskUris(refVal);
        }
    }
    return ok;
}


std::string DeleteTaskInfo::getVersionUri() const
{
    return versionUri_;
}

void DeleteTaskInfo::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool DeleteTaskInfo::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void DeleteTaskInfo::unsetversionUri()
{
    versionUriIsSet_ = false;
}

std::vector<std::string>& DeleteTaskInfo::getTaskUris()
{
    return taskUris_;
}

void DeleteTaskInfo::setTaskUris(const std::vector<std::string>& value)
{
    taskUris_ = value;
    taskUrisIsSet_ = true;
}

bool DeleteTaskInfo::taskUrisIsSet() const
{
    return taskUrisIsSet_;
}

void DeleteTaskInfo::unsettaskUris()
{
    taskUrisIsSet_ = false;
}

}
}
}
}
}


