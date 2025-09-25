

#include "huaweicloud/codehub/v3/model/ListSshKeysResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ListSshKeysResponse::ListSshKeysResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListSshKeysResponse::~ListSshKeysResponse() = default;

void ListSshKeysResponse::validate()
{
}

web::json::value ListSshKeysResponse::toJson() const
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
bool ListSshKeysResponse::fromJson(const web::json::value& val)
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
            PublicKeyList refVal;
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


Error ListSshKeysResponse::getError() const
{
    return error_;
}

void ListSshKeysResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListSshKeysResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListSshKeysResponse::unseterror()
{
    errorIsSet_ = false;
}

PublicKeyList ListSshKeysResponse::getResult() const
{
    return result_;
}

void ListSshKeysResponse::setResult(const PublicKeyList& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListSshKeysResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListSshKeysResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListSshKeysResponse::getStatus() const
{
    return status_;
}

void ListSshKeysResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListSshKeysResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListSshKeysResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


