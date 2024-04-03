

#include "huaweicloud/geip/v3/model/BatchCreateGlobalEipJob.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchCreateGlobalEipJob::BatchCreateGlobalEipJob()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

BatchCreateGlobalEipJob::~BatchCreateGlobalEipJob() = default;

void BatchCreateGlobalEipJob::validate()
{
}

web::json::value BatchCreateGlobalEipJob::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool BatchCreateGlobalEipJob::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    return ok;
}


std::string BatchCreateGlobalEipJob::getId() const
{
    return id_;
}

void BatchCreateGlobalEipJob::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BatchCreateGlobalEipJob::idIsSet() const
{
    return idIsSet_;
}

void BatchCreateGlobalEipJob::unsetid()
{
    idIsSet_ = false;
}

std::string BatchCreateGlobalEipJob::getName() const
{
    return name_;
}

void BatchCreateGlobalEipJob::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BatchCreateGlobalEipJob::nameIsSet() const
{
    return nameIsSet_;
}

void BatchCreateGlobalEipJob::unsetname()
{
    nameIsSet_ = false;
}

std::string BatchCreateGlobalEipJob::getJobId() const
{
    return jobId_;
}

void BatchCreateGlobalEipJob::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool BatchCreateGlobalEipJob::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void BatchCreateGlobalEipJob::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


