

#include "huaweicloud/codeartsbuild/v3/model/UpdateJobGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




UpdateJobGroupResponse::UpdateJobGroupResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

UpdateJobGroupResponse::~UpdateJobGroupResponse() = default;

void UpdateJobGroupResponse::validate()
{
}

web::json::value UpdateJobGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool UpdateJobGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<JobGroupResponseBody_result> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
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


std::vector<JobGroupResponseBody_result>& UpdateJobGroupResponse::getResult()
{
    return result_;
}

void UpdateJobGroupResponse::setResult(const std::vector<JobGroupResponseBody_result>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateJobGroupResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateJobGroupResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string UpdateJobGroupResponse::getError() const
{
    return error_;
}

void UpdateJobGroupResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool UpdateJobGroupResponse::errorIsSet() const
{
    return errorIsSet_;
}

void UpdateJobGroupResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string UpdateJobGroupResponse::getStatus() const
{
    return status_;
}

void UpdateJobGroupResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateJobGroupResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateJobGroupResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


