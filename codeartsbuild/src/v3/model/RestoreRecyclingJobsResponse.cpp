

#include "huaweicloud/codeartsbuild/v3/model/RestoreRecyclingJobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




RestoreRecyclingJobsResponse::RestoreRecyclingJobsResponse()
{
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

RestoreRecyclingJobsResponse::~RestoreRecyclingJobsResponse() = default;

void RestoreRecyclingJobsResponse::validate()
{
}

web::json::value RestoreRecyclingJobsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool RestoreRecyclingJobsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
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
    return ok;
}


std::string RestoreRecyclingJobsResponse::getError() const
{
    return error_;
}

void RestoreRecyclingJobsResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool RestoreRecyclingJobsResponse::errorIsSet() const
{
    return errorIsSet_;
}

void RestoreRecyclingJobsResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string RestoreRecyclingJobsResponse::getStatus() const
{
    return status_;
}

void RestoreRecyclingJobsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RestoreRecyclingJobsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void RestoreRecyclingJobsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


