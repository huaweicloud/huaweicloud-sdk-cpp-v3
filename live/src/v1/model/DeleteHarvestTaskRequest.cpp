

#include "huaweicloud/live/v1/model/DeleteHarvestTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




DeleteHarvestTaskRequest::DeleteHarvestTaskRequest()
{
    accessControlAllowInternal_ = "";
    accessControlAllowInternalIsSet_ = false;
    accessControlAllowExternal_ = "";
    accessControlAllowExternalIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteHarvestTaskRequest::~DeleteHarvestTaskRequest() = default;

void DeleteHarvestTaskRequest::validate()
{
}

web::json::value DeleteHarvestTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessControlAllowInternalIsSet_) {
        val[utility::conversions::to_string_t("Access-Control-Allow-Internal")] = ModelBase::toJson(accessControlAllowInternal_);
    }
    if(accessControlAllowExternalIsSet_) {
        val[utility::conversions::to_string_t("Access-Control-Allow-External")] = ModelBase::toJson(accessControlAllowExternal_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteHarvestTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Access-Control-Allow-Internal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Access-Control-Allow-Internal"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessControlAllowInternal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Access-Control-Allow-External"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Access-Control-Allow-External"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessControlAllowExternal(refVal);
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


std::string DeleteHarvestTaskRequest::getAccessControlAllowInternal() const
{
    return accessControlAllowInternal_;
}

void DeleteHarvestTaskRequest::setAccessControlAllowInternal(const std::string& value)
{
    accessControlAllowInternal_ = value;
    accessControlAllowInternalIsSet_ = true;
}

bool DeleteHarvestTaskRequest::accessControlAllowInternalIsSet() const
{
    return accessControlAllowInternalIsSet_;
}

void DeleteHarvestTaskRequest::unsetaccessControlAllowInternal()
{
    accessControlAllowInternalIsSet_ = false;
}

std::string DeleteHarvestTaskRequest::getAccessControlAllowExternal() const
{
    return accessControlAllowExternal_;
}

void DeleteHarvestTaskRequest::setAccessControlAllowExternal(const std::string& value)
{
    accessControlAllowExternal_ = value;
    accessControlAllowExternalIsSet_ = true;
}

bool DeleteHarvestTaskRequest::accessControlAllowExternalIsSet() const
{
    return accessControlAllowExternalIsSet_;
}

void DeleteHarvestTaskRequest::unsetaccessControlAllowExternal()
{
    accessControlAllowExternalIsSet_ = false;
}

std::string DeleteHarvestTaskRequest::getJobId() const
{
    return jobId_;
}

void DeleteHarvestTaskRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteHarvestTaskRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteHarvestTaskRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


