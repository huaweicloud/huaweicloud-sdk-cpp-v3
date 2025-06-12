

#include "huaweicloud/codeartsbuild/v3/model/ListUpdateJobHistoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListUpdateJobHistoryResponse::ListUpdateJobHistoryResponse()
{
    status_ = "";
    statusIsSet_ = false;
    errorIsSet_ = false;
    resultIsSet_ = false;
}

ListUpdateJobHistoryResponse::~ListUpdateJobHistoryResponse() = default;

void ListUpdateJobHistoryResponse::validate()
{
}

web::json::value ListUpdateJobHistoryResponse::toJson() const
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
bool ListUpdateJobHistoryResponse::fromJson(const web::json::value& val)
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
            JobUpdateRecordListVo_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ListUpdateJobHistoryResponse::getStatus() const
{
    return status_;
}

void ListUpdateJobHistoryResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListUpdateJobHistoryResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListUpdateJobHistoryResponse::unsetstatus()
{
    statusIsSet_ = false;
}

Object ListUpdateJobHistoryResponse::getError() const
{
    return error_;
}

void ListUpdateJobHistoryResponse::setError(const Object& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListUpdateJobHistoryResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListUpdateJobHistoryResponse::unseterror()
{
    errorIsSet_ = false;
}

JobUpdateRecordListVo_result ListUpdateJobHistoryResponse::getResult() const
{
    return result_;
}

void ListUpdateJobHistoryResponse::setResult(const JobUpdateRecordListVo_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListUpdateJobHistoryResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListUpdateJobHistoryResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


