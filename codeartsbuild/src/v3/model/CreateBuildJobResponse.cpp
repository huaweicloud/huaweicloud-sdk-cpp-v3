

#include "huaweicloud/codeartsbuild/v3/model/CreateBuildJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




CreateBuildJobResponse::CreateBuildJobResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
}

CreateBuildJobResponse::~CreateBuildJobResponse() = default;

void CreateBuildJobResponse::validate()
{
}

web::json::value CreateBuildJobResponse::toJson() const
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
bool CreateBuildJobResponse::fromJson(const web::json::value& val)
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


CreateBuildJobResponseBody_result CreateBuildJobResponse::getResult() const
{
    return result_;
}

void CreateBuildJobResponse::setResult(const CreateBuildJobResponseBody_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateBuildJobResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateBuildJobResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string CreateBuildJobResponse::getStatus() const
{
    return status_;
}

void CreateBuildJobResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateBuildJobResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateBuildJobResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateBuildJobResponse::getError() const
{
    return error_;
}

void CreateBuildJobResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool CreateBuildJobResponse::errorIsSet() const
{
    return errorIsSet_;
}

void CreateBuildJobResponse::unseterror()
{
    errorIsSet_ = false;
}

}
}
}
}
}


