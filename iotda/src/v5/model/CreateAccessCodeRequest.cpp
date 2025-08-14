

#include "huaweicloud/iotda/v5/model/CreateAccessCodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateAccessCodeRequest::CreateAccessCodeRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateAccessCodeRequest::~CreateAccessCodeRequest() = default;

void CreateAccessCodeRequest::validate()
{
}

web::json::value CreateAccessCodeRequest::toJson() const
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
bool CreateAccessCodeRequest::fromJson(const web::json::value& val)
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
            CreateAccessCodeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateAccessCodeRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateAccessCodeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateAccessCodeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateAccessCodeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreateAccessCodeRequestBody CreateAccessCodeRequest::getBody() const
{
    return body_;
}

void CreateAccessCodeRequest::setBody(const CreateAccessCodeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAccessCodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAccessCodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


