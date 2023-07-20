

#include "huaweicloud/drs/v5/model/CloneJobReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CloneJobReq::CloneJobReq()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    taskVersion_ = "";
    taskVersionIsSet_ = false;
}

CloneJobReq::~CloneJobReq() = default;

void CloneJobReq::validate()
{
}

web::json::value CloneJobReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(taskVersionIsSet_) {
        val[utility::conversions::to_string_t("task_version")] = ModelBase::toJson(taskVersion_);
    }

    return val;
}

bool CloneJobReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("task_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskVersion(refVal);
        }
    }
    return ok;
}

std::string CloneJobReq::getJobId() const
{
    return jobId_;
}

void CloneJobReq::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CloneJobReq::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CloneJobReq::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CloneJobReq::getName() const
{
    return name_;
}

void CloneJobReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CloneJobReq::nameIsSet() const
{
    return nameIsSet_;
}

void CloneJobReq::unsetname()
{
    nameIsSet_ = false;
}

std::string CloneJobReq::getTaskVersion() const
{
    return taskVersion_;
}

void CloneJobReq::setTaskVersion(const std::string& value)
{
    taskVersion_ = value;
    taskVersionIsSet_ = true;
}

bool CloneJobReq::taskVersionIsSet() const
{
    return taskVersionIsSet_;
}

void CloneJobReq::unsettaskVersion()
{
    taskVersionIsSet_ = false;
}

}
}
}
}
}


