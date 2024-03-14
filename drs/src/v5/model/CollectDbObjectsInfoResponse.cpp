

#include "huaweicloud/drs/v5/model/CollectDbObjectsInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CollectDbObjectsInfoResponse::CollectDbObjectsInfoResponse()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

CollectDbObjectsInfoResponse::~CollectDbObjectsInfoResponse() = default;

void CollectDbObjectsInfoResponse::validate()
{
}

web::json::value CollectDbObjectsInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CollectDbObjectsInfoResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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


std::string CollectDbObjectsInfoResponse::getId() const
{
    return id_;
}

void CollectDbObjectsInfoResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CollectDbObjectsInfoResponse::idIsSet() const
{
    return idIsSet_;
}

void CollectDbObjectsInfoResponse::unsetid()
{
    idIsSet_ = false;
}

std::string CollectDbObjectsInfoResponse::getStatus() const
{
    return status_;
}

void CollectDbObjectsInfoResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CollectDbObjectsInfoResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CollectDbObjectsInfoResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CollectDbObjectsInfoResponse::getJobId() const
{
    return jobId_;
}

void CollectDbObjectsInfoResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CollectDbObjectsInfoResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CollectDbObjectsInfoResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


