

#include "huaweicloud/cpcs/v1/model/InstanceDistribution.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




InstanceDistribution::InstanceDistribution()
{
    encryptDecrypt_ = 0;
    encryptDecryptIsSet_ = false;
    signVerify_ = 0;
    signVerifyIsSet_ = false;
    kms_ = 0;
    kmsIsSet_ = false;
    timestamp_ = 0;
    timestampIsSet_ = false;
    collaSign_ = 0;
    collaSignIsSet_ = false;
    otp_ = 0;
    otpIsSet_ = false;
    dbEncrypt_ = 0;
    dbEncryptIsSet_ = false;
    fileEncrypt_ = 0;
    fileEncryptIsSet_ = false;
    digitSeal_ = 0;
    digitSealIsSet_ = false;
    sslVpn_ = 0;
    sslVpnIsSet_ = false;
}

InstanceDistribution::~InstanceDistribution() = default;

void InstanceDistribution::validate()
{
}

web::json::value InstanceDistribution::toJson() const
{
    web::json::value val = web::json::value::object();

    if(encryptDecryptIsSet_) {
        val[utility::conversions::to_string_t("encrypt_decrypt")] = ModelBase::toJson(encryptDecrypt_);
    }
    if(signVerifyIsSet_) {
        val[utility::conversions::to_string_t("sign_verify")] = ModelBase::toJson(signVerify_);
    }
    if(kmsIsSet_) {
        val[utility::conversions::to_string_t("kms")] = ModelBase::toJson(kms_);
    }
    if(timestampIsSet_) {
        val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(timestamp_);
    }
    if(collaSignIsSet_) {
        val[utility::conversions::to_string_t("colla_sign")] = ModelBase::toJson(collaSign_);
    }
    if(otpIsSet_) {
        val[utility::conversions::to_string_t("otp")] = ModelBase::toJson(otp_);
    }
    if(dbEncryptIsSet_) {
        val[utility::conversions::to_string_t("db_encrypt")] = ModelBase::toJson(dbEncrypt_);
    }
    if(fileEncryptIsSet_) {
        val[utility::conversions::to_string_t("file_encrypt")] = ModelBase::toJson(fileEncrypt_);
    }
    if(digitSealIsSet_) {
        val[utility::conversions::to_string_t("digit_seal")] = ModelBase::toJson(digitSeal_);
    }
    if(sslVpnIsSet_) {
        val[utility::conversions::to_string_t("ssl_vpn")] = ModelBase::toJson(sslVpn_);
    }

    return val;
}
bool InstanceDistribution::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("encrypt_decrypt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encrypt_decrypt"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncryptDecrypt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sign_verify"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sign_verify"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSignVerify(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kms"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kms"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKms(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timestamp"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("colla_sign"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("colla_sign"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCollaSign(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("otp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("otp"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOtp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_encrypt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_encrypt"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbEncrypt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_encrypt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_encrypt"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileEncrypt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("digit_seal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("digit_seal"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDigitSeal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ssl_vpn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ssl_vpn"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSslVpn(refVal);
        }
    }
    return ok;
}


int32_t InstanceDistribution::getEncryptDecrypt() const
{
    return encryptDecrypt_;
}

void InstanceDistribution::setEncryptDecrypt(int32_t value)
{
    encryptDecrypt_ = value;
    encryptDecryptIsSet_ = true;
}

bool InstanceDistribution::encryptDecryptIsSet() const
{
    return encryptDecryptIsSet_;
}

void InstanceDistribution::unsetencryptDecrypt()
{
    encryptDecryptIsSet_ = false;
}

int32_t InstanceDistribution::getSignVerify() const
{
    return signVerify_;
}

void InstanceDistribution::setSignVerify(int32_t value)
{
    signVerify_ = value;
    signVerifyIsSet_ = true;
}

bool InstanceDistribution::signVerifyIsSet() const
{
    return signVerifyIsSet_;
}

void InstanceDistribution::unsetsignVerify()
{
    signVerifyIsSet_ = false;
}

int32_t InstanceDistribution::getKms() const
{
    return kms_;
}

void InstanceDistribution::setKms(int32_t value)
{
    kms_ = value;
    kmsIsSet_ = true;
}

bool InstanceDistribution::kmsIsSet() const
{
    return kmsIsSet_;
}

void InstanceDistribution::unsetkms()
{
    kmsIsSet_ = false;
}

int32_t InstanceDistribution::getTimestamp() const
{
    return timestamp_;
}

void InstanceDistribution::setTimestamp(int32_t value)
{
    timestamp_ = value;
    timestampIsSet_ = true;
}

bool InstanceDistribution::timestampIsSet() const
{
    return timestampIsSet_;
}

void InstanceDistribution::unsettimestamp()
{
    timestampIsSet_ = false;
}

int32_t InstanceDistribution::getCollaSign() const
{
    return collaSign_;
}

void InstanceDistribution::setCollaSign(int32_t value)
{
    collaSign_ = value;
    collaSignIsSet_ = true;
}

bool InstanceDistribution::collaSignIsSet() const
{
    return collaSignIsSet_;
}

void InstanceDistribution::unsetcollaSign()
{
    collaSignIsSet_ = false;
}

int32_t InstanceDistribution::getOtp() const
{
    return otp_;
}

void InstanceDistribution::setOtp(int32_t value)
{
    otp_ = value;
    otpIsSet_ = true;
}

bool InstanceDistribution::otpIsSet() const
{
    return otpIsSet_;
}

void InstanceDistribution::unsetotp()
{
    otpIsSet_ = false;
}

int32_t InstanceDistribution::getDbEncrypt() const
{
    return dbEncrypt_;
}

void InstanceDistribution::setDbEncrypt(int32_t value)
{
    dbEncrypt_ = value;
    dbEncryptIsSet_ = true;
}

bool InstanceDistribution::dbEncryptIsSet() const
{
    return dbEncryptIsSet_;
}

void InstanceDistribution::unsetdbEncrypt()
{
    dbEncryptIsSet_ = false;
}

int32_t InstanceDistribution::getFileEncrypt() const
{
    return fileEncrypt_;
}

void InstanceDistribution::setFileEncrypt(int32_t value)
{
    fileEncrypt_ = value;
    fileEncryptIsSet_ = true;
}

bool InstanceDistribution::fileEncryptIsSet() const
{
    return fileEncryptIsSet_;
}

void InstanceDistribution::unsetfileEncrypt()
{
    fileEncryptIsSet_ = false;
}

int32_t InstanceDistribution::getDigitSeal() const
{
    return digitSeal_;
}

void InstanceDistribution::setDigitSeal(int32_t value)
{
    digitSeal_ = value;
    digitSealIsSet_ = true;
}

bool InstanceDistribution::digitSealIsSet() const
{
    return digitSealIsSet_;
}

void InstanceDistribution::unsetdigitSeal()
{
    digitSealIsSet_ = false;
}

int32_t InstanceDistribution::getSslVpn() const
{
    return sslVpn_;
}

void InstanceDistribution::setSslVpn(int32_t value)
{
    sslVpn_ = value;
    sslVpnIsSet_ = true;
}

bool InstanceDistribution::sslVpnIsSet() const
{
    return sslVpnIsSet_;
}

void InstanceDistribution::unsetsslVpn()
{
    sslVpnIsSet_ = false;
}

}
}
}
}
}


