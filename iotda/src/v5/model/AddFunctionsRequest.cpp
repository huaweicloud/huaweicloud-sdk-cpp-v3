

#include "huaweicloud/iotda/v5/model/AddFunctionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AddFunctionsRequest::AddFunctionsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddFunctionsRequest::~AddFunctionsRequest() = default;

void AddFunctionsRequest::validate()
{
}

web::json::value AddFunctionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AddFunctionsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            FunctionRequestDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddFunctionsRequest::getInstanceId() const
{
    return instanceId_;
}

void AddFunctionsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AddFunctionsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AddFunctionsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

FunctionRequestDTO AddFunctionsRequest::getBody() const
{
    return body_;
}

void AddFunctionsRequest::setBody(const FunctionRequestDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddFunctionsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddFunctionsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


