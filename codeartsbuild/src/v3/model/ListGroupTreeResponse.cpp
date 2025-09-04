

#include "huaweicloud/codeartsbuild/v3/model/ListGroupTreeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListGroupTreeResponse::ListGroupTreeResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListGroupTreeResponse::~ListGroupTreeResponse() = default;

void ListGroupTreeResponse::validate()
{
}

web::json::value ListGroupTreeResponse::toJson() const
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
bool ListGroupTreeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<JobGroupTreeResponseBody> refVal;
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


std::vector<JobGroupTreeResponseBody>& ListGroupTreeResponse::getResult()
{
    return result_;
}

void ListGroupTreeResponse::setResult(const std::vector<JobGroupTreeResponseBody>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListGroupTreeResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListGroupTreeResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListGroupTreeResponse::getError() const
{
    return error_;
}

void ListGroupTreeResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListGroupTreeResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListGroupTreeResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListGroupTreeResponse::getStatus() const
{
    return status_;
}

void ListGroupTreeResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListGroupTreeResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListGroupTreeResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


