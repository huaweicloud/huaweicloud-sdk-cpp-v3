

#include "huaweicloud/codeartsbuild/v3/model/DeleteTheJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DeleteTheJobResponse::DeleteTheJobResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
}

DeleteTheJobResponse::~DeleteTheJobResponse() = default;

void DeleteTheJobResponse::validate()
{
}

web::json::value DeleteTheJobResponse::toJson() const
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
bool DeleteTheJobResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            DeleteTheJobResponseBody_result refVal;
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


DeleteTheJobResponseBody_result DeleteTheJobResponse::getResult() const
{
    return result_;
}

void DeleteTheJobResponse::setResult(const DeleteTheJobResponseBody_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteTheJobResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteTheJobResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string DeleteTheJobResponse::getStatus() const
{
    return status_;
}

void DeleteTheJobResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteTheJobResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteTheJobResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DeleteTheJobResponse::getError() const
{
    return error_;
}

void DeleteTheJobResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool DeleteTheJobResponse::errorIsSet() const
{
    return errorIsSet_;
}

void DeleteTheJobResponse::unseterror()
{
    errorIsSet_ = false;
}

}
}
}
}
}


