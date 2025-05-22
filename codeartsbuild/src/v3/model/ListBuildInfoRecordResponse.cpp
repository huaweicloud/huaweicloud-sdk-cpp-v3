

#include "huaweicloud/codeartsbuild/v3/model/ListBuildInfoRecordResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListBuildInfoRecordResponse::ListBuildInfoRecordResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListBuildInfoRecordResponse::~ListBuildInfoRecordResponse() = default;

void ListBuildInfoRecordResponse::validate()
{
}

web::json::value ListBuildInfoRecordResponse::toJson() const
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
bool ListBuildInfoRecordResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ListBuildInfoRecordBody_result refVal;
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


ListBuildInfoRecordBody_result ListBuildInfoRecordResponse::getResult() const
{
    return result_;
}

void ListBuildInfoRecordResponse::setResult(const ListBuildInfoRecordBody_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListBuildInfoRecordResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListBuildInfoRecordResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListBuildInfoRecordResponse::getError() const
{
    return error_;
}

void ListBuildInfoRecordResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListBuildInfoRecordResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListBuildInfoRecordResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListBuildInfoRecordResponse::getStatus() const
{
    return status_;
}

void ListBuildInfoRecordResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListBuildInfoRecordResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListBuildInfoRecordResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


