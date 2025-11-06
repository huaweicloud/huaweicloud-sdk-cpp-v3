

#include "huaweicloud/codeartsrepo/v3/model/AddDeployKeyV2Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




AddDeployKeyV2Response::AddDeployKeyV2Response()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

AddDeployKeyV2Response::~AddDeployKeyV2Response() = default;

void AddDeployKeyV2Response::validate()
{
}

web::json::value AddDeployKeyV2Response::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool AddDeployKeyV2Response::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            Error refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            Key refVal;
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
    return ok;
}


Error AddDeployKeyV2Response::getError() const
{
    return error_;
}

void AddDeployKeyV2Response::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool AddDeployKeyV2Response::errorIsSet() const
{
    return errorIsSet_;
}

void AddDeployKeyV2Response::unseterror()
{
    errorIsSet_ = false;
}

Key AddDeployKeyV2Response::getResult() const
{
    return result_;
}

void AddDeployKeyV2Response::setResult(const Key& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool AddDeployKeyV2Response::resultIsSet() const
{
    return resultIsSet_;
}

void AddDeployKeyV2Response::unsetresult()
{
    resultIsSet_ = false;
}

std::string AddDeployKeyV2Response::getStatus() const
{
    return status_;
}

void AddDeployKeyV2Response::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AddDeployKeyV2Response::statusIsSet() const
{
    return statusIsSet_;
}

void AddDeployKeyV2Response::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


