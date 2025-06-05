

#include "huaweicloud/codeartsbuild/v3/model/ListRelatedProjectInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListRelatedProjectInfoResponse::ListRelatedProjectInfoResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListRelatedProjectInfoResponse::~ListRelatedProjectInfoResponse() = default;

void ListRelatedProjectInfoResponse::validate()
{
}

web::json::value ListRelatedProjectInfoResponse::toJson() const
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
bool ListRelatedProjectInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ListRelatedProjectInfo_result refVal;
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


ListRelatedProjectInfo_result ListRelatedProjectInfoResponse::getResult() const
{
    return result_;
}

void ListRelatedProjectInfoResponse::setResult(const ListRelatedProjectInfo_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListRelatedProjectInfoResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListRelatedProjectInfoResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListRelatedProjectInfoResponse::getError() const
{
    return error_;
}

void ListRelatedProjectInfoResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListRelatedProjectInfoResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListRelatedProjectInfoResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListRelatedProjectInfoResponse::getStatus() const
{
    return status_;
}

void ListRelatedProjectInfoResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListRelatedProjectInfoResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListRelatedProjectInfoResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


