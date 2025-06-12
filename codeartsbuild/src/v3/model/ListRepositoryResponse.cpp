

#include "huaweicloud/codeartsbuild/v3/model/ListRepositoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListRepositoryResponse::ListRepositoryResponse()
{
    status_ = "";
    statusIsSet_ = false;
    errorIsSet_ = false;
    resultIsSet_ = false;
}

ListRepositoryResponse::~ListRepositoryResponse() = default;

void ListRepositoryResponse::validate()
{
}

web::json::value ListRepositoryResponse::toJson() const
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
bool ListRepositoryResponse::fromJson(const web::json::value& val)
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
            Repositories_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ListRepositoryResponse::getStatus() const
{
    return status_;
}

void ListRepositoryResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListRepositoryResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListRepositoryResponse::unsetstatus()
{
    statusIsSet_ = false;
}

Object ListRepositoryResponse::getError() const
{
    return error_;
}

void ListRepositoryResponse::setError(const Object& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListRepositoryResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListRepositoryResponse::unseterror()
{
    errorIsSet_ = false;
}

Repositories_result ListRepositoryResponse::getResult() const
{
    return result_;
}

void ListRepositoryResponse::setResult(const Repositories_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListRepositoryResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListRepositoryResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


