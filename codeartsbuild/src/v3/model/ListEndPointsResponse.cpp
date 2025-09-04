

#include "huaweicloud/codeartsbuild/v3/model/ListEndPointsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListEndPointsResponse::ListEndPointsResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListEndPointsResponse::~ListEndPointsResponse() = default;

void ListEndPointsResponse::validate()
{
}

web::json::value ListEndPointsResponse::toJson() const
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
bool ListEndPointsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ListEndPointsResultResponseBody_result refVal;
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


ListEndPointsResultResponseBody_result ListEndPointsResponse::getResult() const
{
    return result_;
}

void ListEndPointsResponse::setResult(const ListEndPointsResultResponseBody_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListEndPointsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListEndPointsResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListEndPointsResponse::getError() const
{
    return error_;
}

void ListEndPointsResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListEndPointsResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListEndPointsResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListEndPointsResponse::getStatus() const
{
    return status_;
}

void ListEndPointsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListEndPointsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListEndPointsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


