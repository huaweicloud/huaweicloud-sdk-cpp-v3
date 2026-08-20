

#include "huaweicloud/modelarts/v1/model/ElbConnectionCreateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ElbConnectionCreateRequest::ElbConnectionCreateRequest()
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
}

ElbConnectionCreateRequest::~ElbConnectionCreateRequest() = default;

void ElbConnectionCreateRequest::validate()
{
}

web::json::value ElbConnectionCreateRequest::toJson() const
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

    return val;
}
bool ElbConnectionCreateRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ElbConnectionCreateRequest::getElbId() const
{
    return elbId_;
}

void ElbConnectionCreateRequest::setElbId(const std::string& value)
{
    elbId_ = value;
    elbIdIsSet_ = true;
}

bool ElbConnectionCreateRequest::elbIdIsSet() const
{
    return elbIdIsSet_;
}

void ElbConnectionCreateRequest::unsetelbId()
{
    elbIdIsSet_ = false;
}

bool ElbConnectionCreateRequest::isMTls() const
{
    return mTls_;
}

void ElbConnectionCreateRequest::setMTls(bool value)
{
    mTls_ = value;
    mTlsIsSet_ = true;
}

bool ElbConnectionCreateRequest::mTlsIsSet() const
{
    return mTlsIsSet_;
}

void ElbConnectionCreateRequest::unsetmTls()
{
    mTlsIsSet_ = false;
}

std::string ElbConnectionCreateRequest::getCaCertId() const
{
    return caCertId_;
}

void ElbConnectionCreateRequest::setCaCertId(const std::string& value)
{
    caCertId_ = value;
    caCertIdIsSet_ = true;
}

bool ElbConnectionCreateRequest::caCertIdIsSet() const
{
    return caCertIdIsSet_;
}

void ElbConnectionCreateRequest::unsetcaCertId()
{
    caCertIdIsSet_ = false;
}

std::string ElbConnectionCreateRequest::getServerCertId() const
{
    return serverCertId_;
}

void ElbConnectionCreateRequest::setServerCertId(const std::string& value)
{
    serverCertId_ = value;
    serverCertIdIsSet_ = true;
}

bool ElbConnectionCreateRequest::serverCertIdIsSet() const
{
    return serverCertIdIsSet_;
}

void ElbConnectionCreateRequest::unsetserverCertId()
{
    serverCertIdIsSet_ = false;
}

std::vector<std::string>& ElbConnectionCreateRequest::getSniCertIds()
{
    return sniCertIds_;
}

void ElbConnectionCreateRequest::setSniCertIds(const std::vector<std::string>& value)
{
    sniCertIds_ = value;
    sniCertIdsIsSet_ = true;
}

bool ElbConnectionCreateRequest::sniCertIdsIsSet() const
{
    return sniCertIdsIsSet_;
}

void ElbConnectionCreateRequest::unsetsniCertIds()
{
    sniCertIdsIsSet_ = false;
}

}
}
}
}
}


