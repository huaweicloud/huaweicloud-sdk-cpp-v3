

#include "huaweicloud/codeartsbuild/v3/model/ListTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListTemplatesResponse::ListTemplatesResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListTemplatesResponse::~ListTemplatesResponse() = default;

void ListTemplatesResponse::validate()
{
}

web::json::value ListTemplatesResponse::toJson() const
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
bool ListTemplatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryTemplatesResult> refVal;
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


std::vector<QueryTemplatesResult>& ListTemplatesResponse::getResult()
{
    return result_;
}

void ListTemplatesResponse::setResult(const std::vector<QueryTemplatesResult>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListTemplatesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListTemplatesResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListTemplatesResponse::getError() const
{
    return error_;
}

void ListTemplatesResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListTemplatesResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListTemplatesResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListTemplatesResponse::getStatus() const
{
    return status_;
}

void ListTemplatesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListTemplatesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListTemplatesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


