

#include "huaweicloud/codeartsbuild/v3/model/BatchDeleteBuildJobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




BatchDeleteBuildJobsResponse::BatchDeleteBuildJobsResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
}

BatchDeleteBuildJobsResponse::~BatchDeleteBuildJobsResponse() = default;

void BatchDeleteBuildJobsResponse::validate()
{
}

web::json::value BatchDeleteBuildJobsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }

    return val;
}
bool BatchDeleteBuildJobsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            DeleteTheJobResponseBody_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    return ok;
}


DeleteTheJobResponseBody_result BatchDeleteBuildJobsResponse::getResult() const
{
    return result_;
}

void BatchDeleteBuildJobsResponse::setResult(const DeleteTheJobResponseBody_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool BatchDeleteBuildJobsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void BatchDeleteBuildJobsResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string BatchDeleteBuildJobsResponse::getStatus() const
{
    return status_;
}

void BatchDeleteBuildJobsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchDeleteBuildJobsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void BatchDeleteBuildJobsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string BatchDeleteBuildJobsResponse::getError() const
{
    return error_;
}

void BatchDeleteBuildJobsResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool BatchDeleteBuildJobsResponse::errorIsSet() const
{
    return errorIsSet_;
}

void BatchDeleteBuildJobsResponse::unseterror()
{
    errorIsSet_ = false;
}

}
}
}
}
}


