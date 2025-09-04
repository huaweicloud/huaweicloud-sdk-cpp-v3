

#include "huaweicloud/codeartsbuild/v3/model/CheckJobInternalResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




CheckJobInternalResponse::CheckJobInternalResponse()
{
    result_ = false;
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

CheckJobInternalResponse::~CheckJobInternalResponse() = default;

void CheckJobInternalResponse::validate()
{
}

web::json::value CheckJobInternalResponse::toJson() const
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
bool CheckJobInternalResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
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


bool CheckJobInternalResponse::isResult() const
{
    return result_;
}

void CheckJobInternalResponse::setResult(bool value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CheckJobInternalResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CheckJobInternalResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string CheckJobInternalResponse::getError() const
{
    return error_;
}

void CheckJobInternalResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool CheckJobInternalResponse::errorIsSet() const
{
    return errorIsSet_;
}

void CheckJobInternalResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string CheckJobInternalResponse::getStatus() const
{
    return status_;
}

void CheckJobInternalResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CheckJobInternalResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CheckJobInternalResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


