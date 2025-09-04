

#include "huaweicloud/codeartsbuild/v3/model/CreateJobGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




CreateJobGroupResponse::CreateJobGroupResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

CreateJobGroupResponse::~CreateJobGroupResponse() = default;

void CreateJobGroupResponse::validate()
{
}

web::json::value CreateJobGroupResponse::toJson() const
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
bool CreateJobGroupResponse::fromJson(const web::json::value& val)
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


std::vector<JobGroupResponseBody_result>& CreateJobGroupResponse::getResult()
{
    return result_;
}

void CreateJobGroupResponse::setResult(const std::vector<JobGroupResponseBody_result>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateJobGroupResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateJobGroupResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string CreateJobGroupResponse::getError() const
{
    return error_;
}

void CreateJobGroupResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool CreateJobGroupResponse::errorIsSet() const
{
    return errorIsSet_;
}

void CreateJobGroupResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string CreateJobGroupResponse::getStatus() const
{
    return status_;
}

void CreateJobGroupResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateJobGroupResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateJobGroupResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


