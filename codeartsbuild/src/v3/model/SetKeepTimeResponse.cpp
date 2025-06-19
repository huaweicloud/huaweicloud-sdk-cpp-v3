

#include "huaweicloud/codeartsbuild/v3/model/SetKeepTimeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




SetKeepTimeResponse::SetKeepTimeResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

SetKeepTimeResponse::~SetKeepTimeResponse() = default;

void SetKeepTimeResponse::validate()
{
}

web::json::value SetKeepTimeResponse::toJson() const
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
bool SetKeepTimeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            SetKeepTime_result refVal;
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


SetKeepTime_result SetKeepTimeResponse::getResult() const
{
    return result_;
}

void SetKeepTimeResponse::setResult(const SetKeepTime_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool SetKeepTimeResponse::resultIsSet() const
{
    return resultIsSet_;
}

void SetKeepTimeResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string SetKeepTimeResponse::getError() const
{
    return error_;
}

void SetKeepTimeResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool SetKeepTimeResponse::errorIsSet() const
{
    return errorIsSet_;
}

void SetKeepTimeResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string SetKeepTimeResponse::getStatus() const
{
    return status_;
}

void SetKeepTimeResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SetKeepTimeResponse::statusIsSet() const
{
    return statusIsSet_;
}

void SetKeepTimeResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


