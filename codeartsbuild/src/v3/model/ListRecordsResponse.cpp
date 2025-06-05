

#include "huaweicloud/codeartsbuild/v3/model/ListRecordsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListRecordsResponse::ListRecordsResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListRecordsResponse::~ListRecordsResponse() = default;

void ListRecordsResponse::validate()
{
}

web::json::value ListRecordsResponse::toJson() const
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
bool ListRecordsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ListRecords_result refVal;
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


ListRecords_result ListRecordsResponse::getResult() const
{
    return result_;
}

void ListRecordsResponse::setResult(const ListRecords_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListRecordsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListRecordsResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListRecordsResponse::getError() const
{
    return error_;
}

void ListRecordsResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListRecordsResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListRecordsResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListRecordsResponse::getStatus() const
{
    return status_;
}

void ListRecordsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListRecordsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListRecordsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


