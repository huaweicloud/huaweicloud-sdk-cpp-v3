

#include "huaweicloud/modelarts/v1/model/ElbConnectionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ElbConnectionResponse::ElbConnectionResponse()
{
    elbId_ = "";
    elbIdIsSet_ = false;
    listenerId_ = "";
    listenerIdIsSet_ = false;
    mTls_ = false;
    mTlsIsSet_ = false;
    caCertId_ = "";
    caCertIdIsSet_ = false;
    serverCertId_ = "";
    serverCertIdIsSet_ = false;
    sniCertIdsIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    residualResourcesIsSet_ = false;
}

ElbConnectionResponse::~ElbConnectionResponse() = default;

void ElbConnectionResponse::validate()
{
}

web::json::value ElbConnectionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(elbIdIsSet_) {
        val[utility::conversions::to_string_t("elb_id")] = ModelBase::toJson(elbId_);
    }
    if(listenerIdIsSet_) {
        val[utility::conversions::to_string_t("listener_id")] = ModelBase::toJson(listenerId_);
    }
    if(mTlsIsSet_) {
        val[utility::conversions::to_string_t("m_tls")] = ModelBase::toJson(mTls_);
    }
    if(caCertIdIsSet_) {
        val[utility::conversions::to_string_t("ca_cert_id")] = ModelBase::toJson(caCertId_);
    }
    if(serverCertIdIsSet_) {
        val[utility::conversions::to_string_t("server_cert_id")] = ModelBase::toJson(serverCertId_);
    }
    if(sniCertIdsIsSet_) {
        val[utility::conversions::to_string_t("sni_cert_ids")] = ModelBase::toJson(sniCertIds_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(residualResourcesIsSet_) {
        val[utility::conversions::to_string_t("residual_resources")] = ModelBase::toJson(residualResources_);
    }

    return val;
}
bool ElbConnectionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("elb_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("elb_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setElbId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("listener_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("listener_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setListenerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("m_tls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("m_tls"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMTls(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ca_cert_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ca_cert_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaCertId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_cert_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_cert_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerCertId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sni_cert_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sni_cert_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSniCertIds(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("residual_resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("residual_resources"));
        if(!fieldValue.is_null())
        {
            ResidualResources refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResidualResources(refVal);
        }
    }
    return ok;
}


std::string ElbConnectionResponse::getElbId() const
{
    return elbId_;
}

void ElbConnectionResponse::setElbId(const std::string& value)
{
    elbId_ = value;
    elbIdIsSet_ = true;
}

bool ElbConnectionResponse::elbIdIsSet() const
{
    return elbIdIsSet_;
}

void ElbConnectionResponse::unsetelbId()
{
    elbIdIsSet_ = false;
}

std::string ElbConnectionResponse::getListenerId() const
{
    return listenerId_;
}

void ElbConnectionResponse::setListenerId(const std::string& value)
{
    listenerId_ = value;
    listenerIdIsSet_ = true;
}

bool ElbConnectionResponse::listenerIdIsSet() const
{
    return listenerIdIsSet_;
}

void ElbConnectionResponse::unsetlistenerId()
{
    listenerIdIsSet_ = false;
}

bool ElbConnectionResponse::isMTls() const
{
    return mTls_;
}

void ElbConnectionResponse::setMTls(bool value)
{
    mTls_ = value;
    mTlsIsSet_ = true;
}

bool ElbConnectionResponse::mTlsIsSet() const
{
    return mTlsIsSet_;
}

void ElbConnectionResponse::unsetmTls()
{
    mTlsIsSet_ = false;
}

std::string ElbConnectionResponse::getCaCertId() const
{
    return caCertId_;
}

void ElbConnectionResponse::setCaCertId(const std::string& value)
{
    caCertId_ = value;
    caCertIdIsSet_ = true;
}

bool ElbConnectionResponse::caCertIdIsSet() const
{
    return caCertIdIsSet_;
}

void ElbConnectionResponse::unsetcaCertId()
{
    caCertIdIsSet_ = false;
}

std::string ElbConnectionResponse::getServerCertId() const
{
    return serverCertId_;
}

void ElbConnectionResponse::setServerCertId(const std::string& value)
{
    serverCertId_ = value;
    serverCertIdIsSet_ = true;
}

bool ElbConnectionResponse::serverCertIdIsSet() const
{
    return serverCertIdIsSet_;
}

void ElbConnectionResponse::unsetserverCertId()
{
    serverCertIdIsSet_ = false;
}

std::vector<std::string>& ElbConnectionResponse::getSniCertIds()
{
    return sniCertIds_;
}

void ElbConnectionResponse::setSniCertIds(const std::vector<std::string>& value)
{
    sniCertIds_ = value;
    sniCertIdsIsSet_ = true;
}

bool ElbConnectionResponse::sniCertIdsIsSet() const
{
    return sniCertIdsIsSet_;
}

void ElbConnectionResponse::unsetsniCertIds()
{
    sniCertIdsIsSet_ = false;
}

std::string ElbConnectionResponse::getStatus() const
{
    return status_;
}

void ElbConnectionResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ElbConnectionResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ElbConnectionResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ElbConnectionResponse::getMessage() const
{
    return message_;
}

void ElbConnectionResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ElbConnectionResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ElbConnectionResponse::unsetmessage()
{
    messageIsSet_ = false;
}

ResidualResources ElbConnectionResponse::getResidualResources() const
{
    return residualResources_;
}

void ElbConnectionResponse::setResidualResources(const ResidualResources& value)
{
    residualResources_ = value;
    residualResourcesIsSet_ = true;
}

bool ElbConnectionResponse::residualResourcesIsSet() const
{
    return residualResourcesIsSet_;
}

void ElbConnectionResponse::unsetresidualResources()
{
    residualResourcesIsSet_ = false;
}

}
}
}
}
}


