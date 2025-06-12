

#include "huaweicloud/codeartsbuild/v3/model/CheckJobCountIsTopLimitResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




CheckJobCountIsTopLimitResponse::CheckJobCountIsTopLimitResponse()
{
    status_ = "";
    statusIsSet_ = false;
    errorIsSet_ = false;
    result_ = false;
    resultIsSet_ = false;
}

CheckJobCountIsTopLimitResponse::~CheckJobCountIsTopLimitResponse() = default;

void CheckJobCountIsTopLimitResponse::validate()
{
}

web::json::value CheckJobCountIsTopLimitResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool CheckJobCountIsTopLimitResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string CheckJobCountIsTopLimitResponse::getStatus() const
{
    return status_;
}

void CheckJobCountIsTopLimitResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CheckJobCountIsTopLimitResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CheckJobCountIsTopLimitResponse::unsetstatus()
{
    statusIsSet_ = false;
}

Object CheckJobCountIsTopLimitResponse::getError() const
{
    return error_;
}

void CheckJobCountIsTopLimitResponse::setError(const Object& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool CheckJobCountIsTopLimitResponse::errorIsSet() const
{
    return errorIsSet_;
}

void CheckJobCountIsTopLimitResponse::unseterror()
{
    errorIsSet_ = false;
}

bool CheckJobCountIsTopLimitResponse::isResult() const
{
    return result_;
}

void CheckJobCountIsTopLimitResponse::setResult(bool value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CheckJobCountIsTopLimitResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CheckJobCountIsTopLimitResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


