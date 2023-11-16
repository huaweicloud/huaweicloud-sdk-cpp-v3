

#include "huaweicloud/codeartsbuild/v3/model/ListNoticeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListNoticeResponse::ListNoticeResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListNoticeResponse::~ListNoticeResponse() = default;

void ListNoticeResponse::validate()
{
}

web::json::value ListNoticeResponse::toJson() const
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
bool ListNoticeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryJobNoticeItems> refVal;
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


std::vector<QueryJobNoticeItems>& ListNoticeResponse::getResult()
{
    return result_;
}

void ListNoticeResponse::setResult(const std::vector<QueryJobNoticeItems>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListNoticeResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListNoticeResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListNoticeResponse::getError() const
{
    return error_;
}

void ListNoticeResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListNoticeResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListNoticeResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListNoticeResponse::getStatus() const
{
    return status_;
}

void ListNoticeResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListNoticeResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListNoticeResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


