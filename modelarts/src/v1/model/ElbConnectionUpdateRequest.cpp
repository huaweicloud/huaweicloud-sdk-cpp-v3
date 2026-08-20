

#include "huaweicloud/modelarts/v1/model/ElbConnectionUpdateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ElbConnectionUpdateRequest::ElbConnectionUpdateRequest()
{
    elbId_ = "";
    elbIdIsSet_ = false;
    mTls_ = false;
    mTlsIsSet_ = false;
    caCertId_ = "";
    caCertIdIsSet_ = false;
    serverCertId_ = "";
    serverCertIdIsSet_ = false;
    sniCertIdsIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
}

ElbConnectionUpdateRequest::~ElbConnectionUpdateRequest() = default;

void ElbConnectionUpdateRequest::validate()
{
}

web::json::value ElbConnectionUpdateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(elbIdIsSet_) {
        val[utility::conversions::to_string_t("elb_id")] = ModelBase::toJson(elbId_);
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
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }

    return val;
}
bool ElbConnectionUpdateRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    return ok;
}


std::string ElbConnectionUpdateRequest::getElbId() const
{
    return elbId_;
}

void ElbConnectionUpdateRequest::setElbId(const std::string& value)
{
    elbId_ = value;
    elbIdIsSet_ = true;
}

bool ElbConnectionUpdateRequest::elbIdIsSet() const
{
    return elbIdIsSet_;
}

void ElbConnectionUpdateRequest::unsetelbId()
{
    elbIdIsSet_ = false;
}

bool ElbConnectionUpdateRequest::isMTls() const
{
    return mTls_;
}

void ElbConnectionUpdateRequest::setMTls(bool value)
{
    mTls_ = value;
    mTlsIsSet_ = true;
}

bool ElbConnectionUpdateRequest::mTlsIsSet() const
{
    return mTlsIsSet_;
}

void ElbConnectionUpdateRequest::unsetmTls()
{
    mTlsIsSet_ = false;
}

std::string ElbConnectionUpdateRequest::getCaCertId() const
{
    return caCertId_;
}

void ElbConnectionUpdateRequest::setCaCertId(const std::string& value)
{
    caCertId_ = value;
    caCertIdIsSet_ = true;
}

bool ElbConnectionUpdateRequest::caCertIdIsSet() const
{
    return caCertIdIsSet_;
}

void ElbConnectionUpdateRequest::unsetcaCertId()
{
    caCertIdIsSet_ = false;
}

std::string ElbConnectionUpdateRequest::getServerCertId() const
{
    return serverCertId_;
}

void ElbConnectionUpdateRequest::setServerCertId(const std::string& value)
{
    serverCertId_ = value;
    serverCertIdIsSet_ = true;
}

bool ElbConnectionUpdateRequest::serverCertIdIsSet() const
{
    return serverCertIdIsSet_;
}

void ElbConnectionUpdateRequest::unsetserverCertId()
{
    serverCertIdIsSet_ = false;
}

std::vector<std::string>& ElbConnectionUpdateRequest::getSniCertIds()
{
    return sniCertIds_;
}

void ElbConnectionUpdateRequest::setSniCertIds(const std::vector<std::string>& value)
{
    sniCertIds_ = value;
    sniCertIdsIsSet_ = true;
}

bool ElbConnectionUpdateRequest::sniCertIdsIsSet() const
{
    return sniCertIdsIsSet_;
}

void ElbConnectionUpdateRequest::unsetsniCertIds()
{
    sniCertIdsIsSet_ = false;
}

std::string ElbConnectionUpdateRequest::getAction() const
{
    return action_;
}

void ElbConnectionUpdateRequest::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ElbConnectionUpdateRequest::actionIsSet() const
{
    return actionIsSet_;
}

void ElbConnectionUpdateRequest::unsetaction()
{
    actionIsSet_ = false;
}

}
}
}
}
}


