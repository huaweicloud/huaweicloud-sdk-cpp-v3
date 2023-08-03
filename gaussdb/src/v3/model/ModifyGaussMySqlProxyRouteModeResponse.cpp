

#include "huaweicloud/gaussdb/v3/model/ModifyGaussMySqlProxyRouteModeResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ModifyGaussMySqlProxyRouteModeResponse::ModifyGaussMySqlProxyRouteModeResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ModifyGaussMySqlProxyRouteModeResponse::~ModifyGaussMySqlProxyRouteModeResponse() = default;

void ModifyGaussMySqlProxyRouteModeResponse::validate()
{
}

web::json::value ModifyGaussMySqlProxyRouteModeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool ModifyGaussMySqlProxyRouteModeResponse::fromJson(const web::json::value& val)
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
    return ok;
}

std::string ModifyGaussMySqlProxyRouteModeResponse::getJobId() const
{
    return jobId_;
}

void ModifyGaussMySqlProxyRouteModeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ModifyGaussMySqlProxyRouteModeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ModifyGaussMySqlProxyRouteModeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


