

#include "huaweicloud/codeartsbuild/v3/model/CreateNewJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




CreateNewJobResponse::CreateNewJobResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
}

CreateNewJobResponse::~CreateNewJobResponse() = default;

void CreateNewJobResponse::validate()
{
}

web::json::value CreateNewJobResponse::toJson() const
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
bool CreateNewJobResponse::fromJson(const web::json::value& val)
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


CreateBuildJobResponseBody_result CreateNewJobResponse::getResult() const
{
    return result_;
}

void CreateNewJobResponse::setResult(const CreateBuildJobResponseBody_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateNewJobResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateNewJobResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string CreateNewJobResponse::getStatus() const
{
    return status_;
}

void CreateNewJobResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateNewJobResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateNewJobResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateNewJobResponse::getError() const
{
    return error_;
}

void CreateNewJobResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool CreateNewJobResponse::errorIsSet() const
{
    return errorIsSet_;
}

void CreateNewJobResponse::unseterror()
{
    errorIsSet_ = false;
}

}
}
}
}
}


