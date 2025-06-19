

#include "huaweicloud/codeartsbuild/v3/model/ClearRecyclingJobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ClearRecyclingJobsResponse::ClearRecyclingJobsResponse()
{
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ClearRecyclingJobsResponse::~ClearRecyclingJobsResponse() = default;

void ClearRecyclingJobsResponse::validate()
{
}

web::json::value ClearRecyclingJobsResponse::toJson() const
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
bool ClearRecyclingJobsResponse::fromJson(const web::json::value& val)
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


std::string ClearRecyclingJobsResponse::getError() const
{
    return error_;
}

void ClearRecyclingJobsResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ClearRecyclingJobsResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ClearRecyclingJobsResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ClearRecyclingJobsResponse::getStatus() const
{
    return status_;
}

void ClearRecyclingJobsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ClearRecyclingJobsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ClearRecyclingJobsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


