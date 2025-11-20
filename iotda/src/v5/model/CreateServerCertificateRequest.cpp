

#include "huaweicloud/iotda/v5/model/CreateServerCertificateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateServerCertificateRequest::CreateServerCertificateRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateServerCertificateRequest::~CreateServerCertificateRequest() = default;

void CreateServerCertificateRequest::validate()
{
}

web::json::value CreateServerCertificateRequest::toJson() const
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
bool CreateServerCertificateRequest::fromJson(const web::json::value& val)
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
            CreateServerCertificateDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateServerCertificateRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateServerCertificateRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateServerCertificateRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateServerCertificateRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreateServerCertificateDTO CreateServerCertificateRequest::getBody() const
{
    return body_;
}

void CreateServerCertificateRequest::setBody(const CreateServerCertificateDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateServerCertificateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateServerCertificateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


