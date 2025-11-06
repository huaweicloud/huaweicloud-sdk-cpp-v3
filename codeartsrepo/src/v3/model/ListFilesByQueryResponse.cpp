

#include "huaweicloud/codeartsrepo/v3/model/ListFilesByQueryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ListFilesByQueryResponse::ListFilesByQueryResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListFilesByQueryResponse::~ListFilesByQueryResponse() = default;

void ListFilesByQueryResponse::validate()
{
}

web::json::value ListFilesByQueryResponse::toJson() const
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
bool ListFilesByQueryResponse::fromJson(const web::json::value& val)
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
            FileContentInfo refVal;
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


Error ListFilesByQueryResponse::getError() const
{
    return error_;
}

void ListFilesByQueryResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListFilesByQueryResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListFilesByQueryResponse::unseterror()
{
    errorIsSet_ = false;
}

FileContentInfo ListFilesByQueryResponse::getResult() const
{
    return result_;
}

void ListFilesByQueryResponse::setResult(const FileContentInfo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListFilesByQueryResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListFilesByQueryResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListFilesByQueryResponse::getStatus() const
{
    return status_;
}

void ListFilesByQueryResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListFilesByQueryResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListFilesByQueryResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


