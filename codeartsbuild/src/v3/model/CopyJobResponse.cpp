

#include "huaweicloud/codeartsbuild/v3/model/CopyJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




CopyJobResponse::CopyJobResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
}

CopyJobResponse::~CopyJobResponse() = default;

void CopyJobResponse::validate()
{
}

web::json::value CopyJobResponse::toJson() const
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
bool CopyJobResponse::fromJson(const web::json::value& val)
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


CreateBuildJobResponseBody_result CopyJobResponse::getResult() const
{
    return result_;
}

void CopyJobResponse::setResult(const CreateBuildJobResponseBody_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CopyJobResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CopyJobResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string CopyJobResponse::getStatus() const
{
    return status_;
}

void CopyJobResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CopyJobResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CopyJobResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CopyJobResponse::getError() const
{
    return error_;
}

void CopyJobResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool CopyJobResponse::errorIsSet() const
{
    return errorIsSet_;
}

void CopyJobResponse::unseterror()
{
    errorIsSet_ = false;
}

}
}
}
}
}


