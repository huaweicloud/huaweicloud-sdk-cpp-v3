

#include "huaweicloud/identitycenterstore/v1/model/CreateSpCertificateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




CreateSpCertificateResponse::CreateSpCertificateResponse()
{
    certificateId_ = "";
    certificateIdIsSet_ = false;
    x509certificate_ = "";
    x509certificateIsSet_ = false;
    algorithm_ = "";
    algorithmIsSet_ = false;
    expiryDate_ = 0L;
    expiryDateIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
}

CreateSpCertificateResponse::~CreateSpCertificateResponse() = default;

void CreateSpCertificateResponse::validate()
{
}

web::json::value CreateSpCertificateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(certificateIdIsSet_) {
        val[utility::conversions::to_string_t("certificate_id")] = ModelBase::toJson(certificateId_);
    }
    if(x509certificateIsSet_) {
        val[utility::conversions::to_string_t("x509certificate")] = ModelBase::toJson(x509certificate_);
    }
    if(algorithmIsSet_) {
        val[utility::conversions::to_string_t("algorithm")] = ModelBase::toJson(algorithm_);
    }
    if(expiryDateIsSet_) {
        val[utility::conversions::to_string_t("expiry_date")] = ModelBase::toJson(expiryDate_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }

    return val;
}
bool CreateSpCertificateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("certificate_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("x509certificate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("x509certificate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setX509certificate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("algorithm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("algorithm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlgorithm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiry_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiry_date"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiryDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    return ok;
}


std::string CreateSpCertificateResponse::getCertificateId() const
{
    return certificateId_;
}

void CreateSpCertificateResponse::setCertificateId(const std::string& value)
{
    certificateId_ = value;
    certificateIdIsSet_ = true;
}

bool CreateSpCertificateResponse::certificateIdIsSet() const
{
    return certificateIdIsSet_;
}

void CreateSpCertificateResponse::unsetcertificateId()
{
    certificateIdIsSet_ = false;
}

std::string CreateSpCertificateResponse::getX509certificate() const
{
    return x509certificate_;
}

void CreateSpCertificateResponse::setX509certificate(const std::string& value)
{
    x509certificate_ = value;
    x509certificateIsSet_ = true;
}

bool CreateSpCertificateResponse::x509certificateIsSet() const
{
    return x509certificateIsSet_;
}

void CreateSpCertificateResponse::unsetx509certificate()
{
    x509certificateIsSet_ = false;
}

std::string CreateSpCertificateResponse::getAlgorithm() const
{
    return algorithm_;
}

void CreateSpCertificateResponse::setAlgorithm(const std::string& value)
{
    algorithm_ = value;
    algorithmIsSet_ = true;
}

bool CreateSpCertificateResponse::algorithmIsSet() const
{
    return algorithmIsSet_;
}

void CreateSpCertificateResponse::unsetalgorithm()
{
    algorithmIsSet_ = false;
}

int64_t CreateSpCertificateResponse::getExpiryDate() const
{
    return expiryDate_;
}

void CreateSpCertificateResponse::setExpiryDate(int64_t value)
{
    expiryDate_ = value;
    expiryDateIsSet_ = true;
}

bool CreateSpCertificateResponse::expiryDateIsSet() const
{
    return expiryDateIsSet_;
}

void CreateSpCertificateResponse::unsetexpiryDate()
{
    expiryDateIsSet_ = false;
}

std::string CreateSpCertificateResponse::getState() const
{
    return state_;
}

void CreateSpCertificateResponse::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool CreateSpCertificateResponse::stateIsSet() const
{
    return stateIsSet_;
}

void CreateSpCertificateResponse::unsetstate()
{
    stateIsSet_ = false;
}

}
}
}
}
}


