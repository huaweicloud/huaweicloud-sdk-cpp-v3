

#include "huaweicloud/iotda/v5/model/DeleteServerCertificateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteServerCertificateRequest::DeleteServerCertificateRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    serverCertificateId_ = "";
    serverCertificateIdIsSet_ = false;
}

DeleteServerCertificateRequest::~DeleteServerCertificateRequest() = default;

void DeleteServerCertificateRequest::validate()
{
}

web::json::value DeleteServerCertificateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(serverCertificateIdIsSet_) {
        val[utility::conversions::to_string_t("server_certificate_id")] = ModelBase::toJson(serverCertificateId_);
    }

    return val;
}
bool DeleteServerCertificateRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("server_certificate_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_certificate_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerCertificateId(refVal);
        }
    }
    return ok;
}


std::string DeleteServerCertificateRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteServerCertificateRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteServerCertificateRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteServerCertificateRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteServerCertificateRequest::getServerCertificateId() const
{
    return serverCertificateId_;
}

void DeleteServerCertificateRequest::setServerCertificateId(const std::string& value)
{
    serverCertificateId_ = value;
    serverCertificateIdIsSet_ = true;
}

bool DeleteServerCertificateRequest::serverCertificateIdIsSet() const
{
    return serverCertificateIdIsSet_;
}

void DeleteServerCertificateRequest::unsetserverCertificateId()
{
    serverCertificateIdIsSet_ = false;
}

}
}
}
}
}


