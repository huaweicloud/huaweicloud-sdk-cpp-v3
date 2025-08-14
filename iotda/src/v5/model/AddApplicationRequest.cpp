

#include "huaweicloud/iotda/v5/model/AddApplicationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AddApplicationRequest::AddApplicationRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddApplicationRequest::~AddApplicationRequest() = default;

void AddApplicationRequest::validate()
{
}

web::json::value AddApplicationRequest::toJson() const
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
bool AddApplicationRequest::fromJson(const web::json::value& val)
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
            AddApplication refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddApplicationRequest::getInstanceId() const
{
    return instanceId_;
}

void AddApplicationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AddApplicationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AddApplicationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

AddApplication AddApplicationRequest::getBody() const
{
    return body_;
}

void AddApplicationRequest::setBody(const AddApplication& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddApplicationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddApplicationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


