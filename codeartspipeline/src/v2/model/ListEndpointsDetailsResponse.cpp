

#include "huaweicloud/codeartspipeline/v2/model/ListEndpointsDetailsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListEndpointsDetailsResponse::ListEndpointsDetailsResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListEndpointsDetailsResponse::~ListEndpointsDetailsResponse() = default;

void ListEndpointsDetailsResponse::validate()
{
}

web::json::value ListEndpointsDetailsResponse::toJson() const
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
bool ListEndpointsDetailsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            ErrorInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            EndpointList refVal;
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


ErrorInfo ListEndpointsDetailsResponse::getError() const
{
    return error_;
}

void ListEndpointsDetailsResponse::setError(const ErrorInfo& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListEndpointsDetailsResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListEndpointsDetailsResponse::unseterror()
{
    errorIsSet_ = false;
}

EndpointList ListEndpointsDetailsResponse::getResult() const
{
    return result_;
}

void ListEndpointsDetailsResponse::setResult(const EndpointList& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListEndpointsDetailsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListEndpointsDetailsResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListEndpointsDetailsResponse::getStatus() const
{
    return status_;
}

void ListEndpointsDetailsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListEndpointsDetailsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListEndpointsDetailsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


