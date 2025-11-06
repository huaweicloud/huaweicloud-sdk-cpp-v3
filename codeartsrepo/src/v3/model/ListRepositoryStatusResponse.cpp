

#include "huaweicloud/codeartsrepo/v3/model/ListRepositoryStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ListRepositoryStatusResponse::ListRepositoryStatusResponse()
{
    errorIsSet_ = false;
    result_ = 0;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListRepositoryStatusResponse::~ListRepositoryStatusResponse() = default;

void ListRepositoryStatusResponse::validate()
{
}

web::json::value ListRepositoryStatusResponse::toJson() const
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
bool ListRepositoryStatusResponse::fromJson(const web::json::value& val)
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
            int32_t refVal;
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


Error ListRepositoryStatusResponse::getError() const
{
    return error_;
}

void ListRepositoryStatusResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListRepositoryStatusResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListRepositoryStatusResponse::unseterror()
{
    errorIsSet_ = false;
}

int32_t ListRepositoryStatusResponse::getResult() const
{
    return result_;
}

void ListRepositoryStatusResponse::setResult(int32_t value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListRepositoryStatusResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListRepositoryStatusResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListRepositoryStatusResponse::getStatus() const
{
    return status_;
}

void ListRepositoryStatusResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListRepositoryStatusResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListRepositoryStatusResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


