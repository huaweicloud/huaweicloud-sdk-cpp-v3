

#include "huaweicloud/cloudtest/v1/model/ListCasesStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListCasesStatusResponse::ListCasesStatusResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListCasesStatusResponse::~ListCasesStatusResponse() = default;

void ListCasesStatusResponse::validate()
{
}

web::json::value ListCasesStatusResponse::toJson() const
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
bool ListCasesStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            CommonResponseErrorOfobject refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            QueryCasesStatusResponseV2 refVal;
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


CommonResponseErrorOfobject ListCasesStatusResponse::getError() const
{
    return error_;
}

void ListCasesStatusResponse::setError(const CommonResponseErrorOfobject& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListCasesStatusResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListCasesStatusResponse::unseterror()
{
    errorIsSet_ = false;
}

QueryCasesStatusResponseV2 ListCasesStatusResponse::getResult() const
{
    return result_;
}

void ListCasesStatusResponse::setResult(const QueryCasesStatusResponseV2& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListCasesStatusResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListCasesStatusResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListCasesStatusResponse::getStatus() const
{
    return status_;
}

void ListCasesStatusResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListCasesStatusResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListCasesStatusResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


