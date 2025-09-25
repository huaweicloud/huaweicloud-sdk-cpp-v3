

#include "huaweicloud/codehub/v3/model/ListSubfilesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ListSubfilesResponse::ListSubfilesResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListSubfilesResponse::~ListSubfilesResponse() = default;

void ListSubfilesResponse::validate()
{
}

web::json::value ListSubfilesResponse::toJson() const
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
bool ListSubfilesResponse::fromJson(const web::json::value& val)
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
            LogsTreeList refVal;
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


Error ListSubfilesResponse::getError() const
{
    return error_;
}

void ListSubfilesResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListSubfilesResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListSubfilesResponse::unseterror()
{
    errorIsSet_ = false;
}

LogsTreeList ListSubfilesResponse::getResult() const
{
    return result_;
}

void ListSubfilesResponse::setResult(const LogsTreeList& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListSubfilesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListSubfilesResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListSubfilesResponse::getStatus() const
{
    return status_;
}

void ListSubfilesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListSubfilesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListSubfilesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


