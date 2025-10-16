

#include "huaweicloud/iotda/v5/model/CreateOtaModuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateOtaModuleRequest::CreateOtaModuleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateOtaModuleRequest::~CreateOtaModuleRequest() = default;

void CreateOtaModuleRequest::validate()
{
}

web::json::value CreateOtaModuleRequest::toJson() const
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
bool CreateOtaModuleRequest::fromJson(const web::json::value& val)
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
            CreateOtaModule refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateOtaModuleRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateOtaModuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateOtaModuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateOtaModuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreateOtaModule CreateOtaModuleRequest::getBody() const
{
    return body_;
}

void CreateOtaModuleRequest::setBody(const CreateOtaModule& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateOtaModuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateOtaModuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


