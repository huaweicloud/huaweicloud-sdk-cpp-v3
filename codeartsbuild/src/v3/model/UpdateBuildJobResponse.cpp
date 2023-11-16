

#include "huaweicloud/codeartsbuild/v3/model/UpdateBuildJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




UpdateBuildJobResponse::UpdateBuildJobResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
}

UpdateBuildJobResponse::~UpdateBuildJobResponse() = default;

void UpdateBuildJobResponse::validate()
{
}

web::json::value UpdateBuildJobResponse::toJson() const
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
bool UpdateBuildJobResponse::fromJson(const web::json::value& val)
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


CreateBuildJobResponseBody_result UpdateBuildJobResponse::getResult() const
{
    return result_;
}

void UpdateBuildJobResponse::setResult(const CreateBuildJobResponseBody_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateBuildJobResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateBuildJobResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string UpdateBuildJobResponse::getStatus() const
{
    return status_;
}

void UpdateBuildJobResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateBuildJobResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateBuildJobResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateBuildJobResponse::getError() const
{
    return error_;
}

void UpdateBuildJobResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool UpdateBuildJobResponse::errorIsSet() const
{
    return errorIsSet_;
}

void UpdateBuildJobResponse::unseterror()
{
    errorIsSet_ = false;
}

}
}
}
}
}


