

#include "huaweicloud/functiongraph/v2/model/CancelAsyncInvocationRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




CancelAsyncInvocationRequestBody::CancelAsyncInvocationRequestBody()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

CancelAsyncInvocationRequestBody::~CancelAsyncInvocationRequestBody() = default;

void CancelAsyncInvocationRequestBody::validate()
{
}

web::json::value CancelAsyncInvocationRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool CancelAsyncInvocationRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string CancelAsyncInvocationRequestBody::getRequestId() const
{
    return requestId_;
}

void CancelAsyncInvocationRequestBody::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool CancelAsyncInvocationRequestBody::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void CancelAsyncInvocationRequestBody::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string CancelAsyncInvocationRequestBody::getType() const
{
    return type_;
}

void CancelAsyncInvocationRequestBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CancelAsyncInvocationRequestBody::typeIsSet() const
{
    return typeIsSet_;
}

void CancelAsyncInvocationRequestBody::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


