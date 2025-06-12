

#include "huaweicloud/codeartsbuild/v3/model/ListKeystoreSearchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListKeystoreSearchResponse::ListKeystoreSearchResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListKeystoreSearchResponse::~ListKeystoreSearchResponse() = default;

void ListKeystoreSearchResponse::validate()
{
}

web::json::value ListKeystoreSearchResponse::toJson() const
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
bool ListKeystoreSearchResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ListKeystoreSearchResponseBody_result refVal;
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


ListKeystoreSearchResponseBody_result ListKeystoreSearchResponse::getResult() const
{
    return result_;
}

void ListKeystoreSearchResponse::setResult(const ListKeystoreSearchResponseBody_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListKeystoreSearchResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListKeystoreSearchResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListKeystoreSearchResponse::getError() const
{
    return error_;
}

void ListKeystoreSearchResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListKeystoreSearchResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListKeystoreSearchResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListKeystoreSearchResponse::getStatus() const
{
    return status_;
}

void ListKeystoreSearchResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListKeystoreSearchResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListKeystoreSearchResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


