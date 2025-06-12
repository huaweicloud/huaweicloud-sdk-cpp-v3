

#include "huaweicloud/codeartsbuild/v3/model/ListBuildParameterResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListBuildParameterResponse::ListBuildParameterResponse()
{
    status_ = "";
    statusIsSet_ = false;
    errorIsSet_ = false;
    resultIsSet_ = false;
}

ListBuildParameterResponse::~ListBuildParameterResponse() = default;

void ListBuildParameterResponse::validate()
{
}

web::json::value ListBuildParameterResponse::toJson() const
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
bool ListBuildParameterResponse::fromJson(const web::json::value& val)
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
            std::vector<BuildParameter> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ListBuildParameterResponse::getStatus() const
{
    return status_;
}

void ListBuildParameterResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListBuildParameterResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListBuildParameterResponse::unsetstatus()
{
    statusIsSet_ = false;
}

Object ListBuildParameterResponse::getError() const
{
    return error_;
}

void ListBuildParameterResponse::setError(const Object& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListBuildParameterResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListBuildParameterResponse::unseterror()
{
    errorIsSet_ = false;
}

std::vector<BuildParameter>& ListBuildParameterResponse::getResult()
{
    return result_;
}

void ListBuildParameterResponse::setResult(const std::vector<BuildParameter>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListBuildParameterResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListBuildParameterResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


