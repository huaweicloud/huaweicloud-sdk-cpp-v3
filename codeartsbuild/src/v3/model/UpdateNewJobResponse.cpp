

#include "huaweicloud/codeartsbuild/v3/model/UpdateNewJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




UpdateNewJobResponse::UpdateNewJobResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
}

UpdateNewJobResponse::~UpdateNewJobResponse() = default;

void UpdateNewJobResponse::validate()
{
}

web::json::value UpdateNewJobResponse::toJson() const
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
bool UpdateNewJobResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            CreateBuildJobResponseBody_result refVal;
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


CreateBuildJobResponseBody_result UpdateNewJobResponse::getResult() const
{
    return result_;
}

void UpdateNewJobResponse::setResult(const CreateBuildJobResponseBody_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateNewJobResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateNewJobResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string UpdateNewJobResponse::getStatus() const
{
    return status_;
}

void UpdateNewJobResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateNewJobResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateNewJobResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateNewJobResponse::getError() const
{
    return error_;
}

void UpdateNewJobResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool UpdateNewJobResponse::errorIsSet() const
{
    return errorIsSet_;
}

void UpdateNewJobResponse::unseterror()
{
    errorIsSet_ = false;
}

}
}
}
}
}


