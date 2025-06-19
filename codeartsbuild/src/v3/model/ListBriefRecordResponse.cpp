

#include "huaweicloud/codeartsbuild/v3/model/ListBriefRecordResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListBriefRecordResponse::ListBriefRecordResponse()
{
    resultIsSet_ = false;
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListBriefRecordResponse::~ListBriefRecordResponse() = default;

void ListBriefRecordResponse::validate()
{
}

web::json::value ListBriefRecordResponse::toJson() const
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
bool ListBriefRecordResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<ListBriefRecordResponseBody_result> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
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


std::vector<ListBriefRecordResponseBody_result>& ListBriefRecordResponse::getResult()
{
    return result_;
}

void ListBriefRecordResponse::setResult(const std::vector<ListBriefRecordResponseBody_result>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListBriefRecordResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListBriefRecordResponse::unsetresult()
{
    resultIsSet_ = false;
}

Object ListBriefRecordResponse::getError() const
{
    return error_;
}

void ListBriefRecordResponse::setError(const Object& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListBriefRecordResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListBriefRecordResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListBriefRecordResponse::getStatus() const
{
    return status_;
}

void ListBriefRecordResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListBriefRecordResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListBriefRecordResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


