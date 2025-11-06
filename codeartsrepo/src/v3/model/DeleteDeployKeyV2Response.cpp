

#include "huaweicloud/codeartsrepo/v3/model/DeleteDeployKeyV2Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




DeleteDeployKeyV2Response::DeleteDeployKeyV2Response()
{
    errorIsSet_ = false;
    result_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

DeleteDeployKeyV2Response::~DeleteDeployKeyV2Response() = default;

void DeleteDeployKeyV2Response::validate()
{
}

web::json::value DeleteDeployKeyV2Response::toJson() const
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
bool DeleteDeployKeyV2Response::fromJson(const web::json::value& val)
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
            bool refVal;
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


Error DeleteDeployKeyV2Response::getError() const
{
    return error_;
}

void DeleteDeployKeyV2Response::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool DeleteDeployKeyV2Response::errorIsSet() const
{
    return errorIsSet_;
}

void DeleteDeployKeyV2Response::unseterror()
{
    errorIsSet_ = false;
}

bool DeleteDeployKeyV2Response::isResult() const
{
    return result_;
}

void DeleteDeployKeyV2Response::setResult(bool value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteDeployKeyV2Response::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteDeployKeyV2Response::unsetresult()
{
    resultIsSet_ = false;
}

std::string DeleteDeployKeyV2Response::getStatus() const
{
    return status_;
}

void DeleteDeployKeyV2Response::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteDeployKeyV2Response::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteDeployKeyV2Response::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


