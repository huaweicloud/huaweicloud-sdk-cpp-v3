

#include "huaweicloud/cpcs/v1/model/ShowStatisticInterfaceResponseBody_metrics.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowStatisticInterfaceResponseBody_metrics::ShowStatisticInterfaceResponseBody_metrics()
{
    pkiDigestBusiStatistic_ = 0.0;
    pkiDigestBusiStatisticIsSet_ = false;
    pkiDecryptBusiStatistic_ = 0.0;
    pkiDecryptBusiStatisticIsSet_ = false;
    pkiGenerateKeyBusiStatistic_ = 0.0;
    pkiGenerateKeyBusiStatisticIsSet_ = false;
    pkiVerifyBusiStatistic_ = 0.0;
    pkiVerifyBusiStatisticIsSet_ = false;
    pkiEncryptBusiStatistic_ = 0.0;
    pkiEncryptBusiStatisticIsSet_ = false;
    tsaVerifyBusiStatistic_ = 0.0;
    tsaVerifyBusiStatisticIsSet_ = false;
    tsaParseBusiStatistic_ = 0.0;
    tsaParseBusiStatisticIsSet_ = false;
    svsVerifyBusiStatistic_ = 0.0;
    svsVerifyBusiStatisticIsSet_ = false;
    pkiRandomBusiStatistic_ = 0.0;
    pkiRandomBusiStatisticIsSet_ = false;
    timestamp_ = 0L;
    timestampIsSet_ = false;
    svsCertBusiStatistic_ = 0.0;
    svsCertBusiStatisticIsSet_ = false;
    svsEncodeBusiStatistic_ = 0.0;
    svsEncodeBusiStatisticIsSet_ = false;
    tsaApplyBusiStatistic_ = 0.0;
    tsaApplyBusiStatisticIsSet_ = false;
    svsSignBusiStatistic_ = 0.0;
    svsSignBusiStatisticIsSet_ = false;
    svsDecryptBusiStatistic_ = 0.0;
    svsDecryptBusiStatisticIsSet_ = false;
    kmsBusiStatistic_ = 0.0;
    kmsBusiStatisticIsSet_ = false;
    sealVerifyBusiStatistic_ = 0.0;
    sealVerifyBusiStatisticIsSet_ = false;
    pkiSignBusiStatistic_ = 0.0;
    pkiSignBusiStatisticIsSet_ = false;
    secauthBusiStatistic_ = 0.0;
    secauthBusiStatisticIsSet_ = false;
    sealSignBusiStatistic_ = 0.0;
    sealSignBusiStatisticIsSet_ = false;
    splitBusiStatistic_ = 0.0;
    splitBusiStatisticIsSet_ = false;
    svsRandomBusiStatistic_ = 0.0;
    svsRandomBusiStatisticIsSet_ = false;
    svsEncryptBusiStatistic_ = 0.0;
    svsEncryptBusiStatisticIsSet_ = false;
    smsDecBusiStatistic_ = 0.0;
    smsDecBusiStatisticIsSet_ = false;
    svsDigestBusiStatistic_ = 0.0;
    svsDigestBusiStatisticIsSet_ = false;
    svsDecodeBusiStatistic_ = 0.0;
    svsDecodeBusiStatisticIsSet_ = false;
}

ShowStatisticInterfaceResponseBody_metrics::~ShowStatisticInterfaceResponseBody_metrics() = default;

void ShowStatisticInterfaceResponseBody_metrics::validate()
{
}

web::json::value ShowStatisticInterfaceResponseBody_metrics::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pkiDigestBusiStatisticIsSet_) {
        val[utility::conversions::to_string_t("pkiDigestBusiStatistic")] = ModelBase::toJson(pkiDigestBusiStatistic_);
    }
    if(pkiDecryptBusiStatisticIsSet_) {
        val[utility::conversions::to_string_t("pkiDecryptBusiStatistic")] = ModelBase::toJson(pkiDecryptBusiStatistic_);
    }
    if(pkiGenerateKeyBusiStatisticIsSet_) {
        val[utility::conversions::to_string_t("pkiGenerateKeyBusiStatistic")] = ModelBase::toJson(pkiGenerateKeyBusiStatistic_);
    }
    if(pkiVerifyBusiStatisticIsSet_) {
        val[utility::conversions::to_string_t("pkiVerifyBusiStatistic")] = ModelBase::toJson(pkiVerifyBusiStatistic_);
    }
    if(pkiEncryptBusiStatisticIsSet_) {
        val[utility::conversions::to_string_t("pkiEncryptBusiStatistic")] = ModelBase::toJson(pkiEncryptBusiStatistic_);
    }
    if(tsaVerifyBusiStatisticIsSet_) {
        val[utility::conversions::to_string_t("tsaVerifyBusiStatistic")] = ModelBase::toJson(tsaVerifyBusiStatistic_);
    }
    if(tsaParseBusiStatisticIsSet_) {
        val[utility::conversions::to_string_t("tsaParseBusiStatistic")] = ModelBase::toJson(tsaParseBusiStatistic_);
    }
    if(svsVerifyBusiStatisticIsSet_) {
        val[utility::conversions::to_string_t("svsVerifyBusiStatistic")] = ModelBase::toJson(svsVerifyBusiStatistic_);
    }
    if(pkiRandomBusiStatisticIsSet_) {
        val[utility::conversions::to_string_t("pkiRandomBusiStatistic")] = ModelBase::toJson(pkiRandomBusiStatistic_);
    }
    if(timestampIsSet_) {
        val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(timestamp_);
    }
    if(svsCertBusiStatisticIsSet_) {
        val[utility::conversions::to_string_t("svsCertBusiStatistic")] = ModelBase::toJson(svsCertBusiStatistic_);
    }
    if(svsEncodeBusiStatisticIsSet_) {
        val[utility::conversions::to_string_t("svsEncodeBusiStatistic")] = ModelBase::toJson(svsEncodeBusiStatistic_);
    }
    if(tsaApplyBusiStatisticIsSet_) {
        val[utility::conversions::to_string_t("tsaApplyBusiStatistic")] = ModelBase::toJson(tsaApplyBusiStatistic_);
    }
    if(svsSignBusiStatisticIsSet_) {
        val[utility::conversions::to_string_t("svsSignBusiStatistic")] = ModelBase::toJson(svsSignBusiStatistic_);
    }
    if(svsDecryptBusiStatisticIsSet_) {
        val[utility::conversions::to_string_t("svsDecryptBusiStatistic")] = ModelBase::toJson(svsDecryptBusiStatistic_);
    }
    if(kmsBusiStatisticIsSet_) {
        val[utility::conversions::to_string_t("kmsBusiStatistic")] = ModelBase::toJson(kmsBusiStatistic_);
    }
    if(sealVerifyBusiStatisticIsSet_) {
        val[utility::conversions::to_string_t("sealVerifyBusiStatistic")] = ModelBase::toJson(sealVerifyBusiStatistic_);
    }
    if(pkiSignBusiStatisticIsSet_) {
        val[utility::conversions::to_string_t("pkiSignBusiStatistic")] = ModelBase::toJson(pkiSignBusiStatistic_);
    }
    if(secauthBusiStatisticIsSet_) {
        val[utility::conversions::to_string_t("secauthBusiStatistic")] = ModelBase::toJson(secauthBusiStatistic_);
    }
    if(sealSignBusiStatisticIsSet_) {
        val[utility::conversions::to_string_t("sealSignBusiStatistic")] = ModelBase::toJson(sealSignBusiStatistic_);
    }
    if(splitBusiStatisticIsSet_) {
        val[utility::conversions::to_string_t("splitBusiStatistic")] = ModelBase::toJson(splitBusiStatistic_);
    }
    if(svsRandomBusiStatisticIsSet_) {
        val[utility::conversions::to_string_t("svsRandomBusiStatistic")] = ModelBase::toJson(svsRandomBusiStatistic_);
    }
    if(svsEncryptBusiStatisticIsSet_) {
        val[utility::conversions::to_string_t("svsEncryptBusiStatistic")] = ModelBase::toJson(svsEncryptBusiStatistic_);
    }
    if(smsDecBusiStatisticIsSet_) {
        val[utility::conversions::to_string_t("smsDecBusiStatistic")] = ModelBase::toJson(smsDecBusiStatistic_);
    }
    if(svsDigestBusiStatisticIsSet_) {
        val[utility::conversions::to_string_t("svsDigestBusiStatistic")] = ModelBase::toJson(svsDigestBusiStatistic_);
    }
    if(svsDecodeBusiStatisticIsSet_) {
        val[utility::conversions::to_string_t("svsDecodeBusiStatistic")] = ModelBase::toJson(svsDecodeBusiStatistic_);
    }

    return val;
}
bool ShowStatisticInterfaceResponseBody_metrics::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pkiDigestBusiStatistic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pkiDigestBusiStatistic"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPkiDigestBusiStatistic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pkiDecryptBusiStatistic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pkiDecryptBusiStatistic"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPkiDecryptBusiStatistic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pkiGenerateKeyBusiStatistic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pkiGenerateKeyBusiStatistic"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPkiGenerateKeyBusiStatistic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pkiVerifyBusiStatistic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pkiVerifyBusiStatistic"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPkiVerifyBusiStatistic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pkiEncryptBusiStatistic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pkiEncryptBusiStatistic"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPkiEncryptBusiStatistic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tsaVerifyBusiStatistic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tsaVerifyBusiStatistic"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTsaVerifyBusiStatistic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tsaParseBusiStatistic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tsaParseBusiStatistic"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTsaParseBusiStatistic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("svsVerifyBusiStatistic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("svsVerifyBusiStatistic"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSvsVerifyBusiStatistic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pkiRandomBusiStatistic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pkiRandomBusiStatistic"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPkiRandomBusiStatistic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("svsCertBusiStatistic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("svsCertBusiStatistic"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSvsCertBusiStatistic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("svsEncodeBusiStatistic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("svsEncodeBusiStatistic"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSvsEncodeBusiStatistic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tsaApplyBusiStatistic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tsaApplyBusiStatistic"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTsaApplyBusiStatistic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("svsSignBusiStatistic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("svsSignBusiStatistic"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSvsSignBusiStatistic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("svsDecryptBusiStatistic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("svsDecryptBusiStatistic"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSvsDecryptBusiStatistic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kmsBusiStatistic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kmsBusiStatistic"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKmsBusiStatistic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sealVerifyBusiStatistic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sealVerifyBusiStatistic"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSealVerifyBusiStatistic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pkiSignBusiStatistic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pkiSignBusiStatistic"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPkiSignBusiStatistic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secauthBusiStatistic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secauthBusiStatistic"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecauthBusiStatistic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sealSignBusiStatistic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sealSignBusiStatistic"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSealSignBusiStatistic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("splitBusiStatistic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("splitBusiStatistic"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSplitBusiStatistic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("svsRandomBusiStatistic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("svsRandomBusiStatistic"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSvsRandomBusiStatistic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("svsEncryptBusiStatistic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("svsEncryptBusiStatistic"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSvsEncryptBusiStatistic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("smsDecBusiStatistic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smsDecBusiStatistic"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSmsDecBusiStatistic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("svsDigestBusiStatistic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("svsDigestBusiStatistic"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSvsDigestBusiStatistic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("svsDecodeBusiStatistic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("svsDecodeBusiStatistic"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSvsDecodeBusiStatistic(refVal);
        }
    }
    return ok;
}


double ShowStatisticInterfaceResponseBody_metrics::getPkiDigestBusiStatistic() const
{
    return pkiDigestBusiStatistic_;
}

void ShowStatisticInterfaceResponseBody_metrics::setPkiDigestBusiStatistic(double value)
{
    pkiDigestBusiStatistic_ = value;
    pkiDigestBusiStatisticIsSet_ = true;
}

bool ShowStatisticInterfaceResponseBody_metrics::pkiDigestBusiStatisticIsSet() const
{
    return pkiDigestBusiStatisticIsSet_;
}

void ShowStatisticInterfaceResponseBody_metrics::unsetpkiDigestBusiStatistic()
{
    pkiDigestBusiStatisticIsSet_ = false;
}

double ShowStatisticInterfaceResponseBody_metrics::getPkiDecryptBusiStatistic() const
{
    return pkiDecryptBusiStatistic_;
}

void ShowStatisticInterfaceResponseBody_metrics::setPkiDecryptBusiStatistic(double value)
{
    pkiDecryptBusiStatistic_ = value;
    pkiDecryptBusiStatisticIsSet_ = true;
}

bool ShowStatisticInterfaceResponseBody_metrics::pkiDecryptBusiStatisticIsSet() const
{
    return pkiDecryptBusiStatisticIsSet_;
}

void ShowStatisticInterfaceResponseBody_metrics::unsetpkiDecryptBusiStatistic()
{
    pkiDecryptBusiStatisticIsSet_ = false;
}

double ShowStatisticInterfaceResponseBody_metrics::getPkiGenerateKeyBusiStatistic() const
{
    return pkiGenerateKeyBusiStatistic_;
}

void ShowStatisticInterfaceResponseBody_metrics::setPkiGenerateKeyBusiStatistic(double value)
{
    pkiGenerateKeyBusiStatistic_ = value;
    pkiGenerateKeyBusiStatisticIsSet_ = true;
}

bool ShowStatisticInterfaceResponseBody_metrics::pkiGenerateKeyBusiStatisticIsSet() const
{
    return pkiGenerateKeyBusiStatisticIsSet_;
}

void ShowStatisticInterfaceResponseBody_metrics::unsetpkiGenerateKeyBusiStatistic()
{
    pkiGenerateKeyBusiStatisticIsSet_ = false;
}

double ShowStatisticInterfaceResponseBody_metrics::getPkiVerifyBusiStatistic() const
{
    return pkiVerifyBusiStatistic_;
}

void ShowStatisticInterfaceResponseBody_metrics::setPkiVerifyBusiStatistic(double value)
{
    pkiVerifyBusiStatistic_ = value;
    pkiVerifyBusiStatisticIsSet_ = true;
}

bool ShowStatisticInterfaceResponseBody_metrics::pkiVerifyBusiStatisticIsSet() const
{
    return pkiVerifyBusiStatisticIsSet_;
}

void ShowStatisticInterfaceResponseBody_metrics::unsetpkiVerifyBusiStatistic()
{
    pkiVerifyBusiStatisticIsSet_ = false;
}

double ShowStatisticInterfaceResponseBody_metrics::getPkiEncryptBusiStatistic() const
{
    return pkiEncryptBusiStatistic_;
}

void ShowStatisticInterfaceResponseBody_metrics::setPkiEncryptBusiStatistic(double value)
{
    pkiEncryptBusiStatistic_ = value;
    pkiEncryptBusiStatisticIsSet_ = true;
}

bool ShowStatisticInterfaceResponseBody_metrics::pkiEncryptBusiStatisticIsSet() const
{
    return pkiEncryptBusiStatisticIsSet_;
}

void ShowStatisticInterfaceResponseBody_metrics::unsetpkiEncryptBusiStatistic()
{
    pkiEncryptBusiStatisticIsSet_ = false;
}

double ShowStatisticInterfaceResponseBody_metrics::getTsaVerifyBusiStatistic() const
{
    return tsaVerifyBusiStatistic_;
}

void ShowStatisticInterfaceResponseBody_metrics::setTsaVerifyBusiStatistic(double value)
{
    tsaVerifyBusiStatistic_ = value;
    tsaVerifyBusiStatisticIsSet_ = true;
}

bool ShowStatisticInterfaceResponseBody_metrics::tsaVerifyBusiStatisticIsSet() const
{
    return tsaVerifyBusiStatisticIsSet_;
}

void ShowStatisticInterfaceResponseBody_metrics::unsettsaVerifyBusiStatistic()
{
    tsaVerifyBusiStatisticIsSet_ = false;
}

double ShowStatisticInterfaceResponseBody_metrics::getTsaParseBusiStatistic() const
{
    return tsaParseBusiStatistic_;
}

void ShowStatisticInterfaceResponseBody_metrics::setTsaParseBusiStatistic(double value)
{
    tsaParseBusiStatistic_ = value;
    tsaParseBusiStatisticIsSet_ = true;
}

bool ShowStatisticInterfaceResponseBody_metrics::tsaParseBusiStatisticIsSet() const
{
    return tsaParseBusiStatisticIsSet_;
}

void ShowStatisticInterfaceResponseBody_metrics::unsettsaParseBusiStatistic()
{
    tsaParseBusiStatisticIsSet_ = false;
}

double ShowStatisticInterfaceResponseBody_metrics::getSvsVerifyBusiStatistic() const
{
    return svsVerifyBusiStatistic_;
}

void ShowStatisticInterfaceResponseBody_metrics::setSvsVerifyBusiStatistic(double value)
{
    svsVerifyBusiStatistic_ = value;
    svsVerifyBusiStatisticIsSet_ = true;
}

bool ShowStatisticInterfaceResponseBody_metrics::svsVerifyBusiStatisticIsSet() const
{
    return svsVerifyBusiStatisticIsSet_;
}

void ShowStatisticInterfaceResponseBody_metrics::unsetsvsVerifyBusiStatistic()
{
    svsVerifyBusiStatisticIsSet_ = false;
}

double ShowStatisticInterfaceResponseBody_metrics::getPkiRandomBusiStatistic() const
{
    return pkiRandomBusiStatistic_;
}

void ShowStatisticInterfaceResponseBody_metrics::setPkiRandomBusiStatistic(double value)
{
    pkiRandomBusiStatistic_ = value;
    pkiRandomBusiStatisticIsSet_ = true;
}

bool ShowStatisticInterfaceResponseBody_metrics::pkiRandomBusiStatisticIsSet() const
{
    return pkiRandomBusiStatisticIsSet_;
}

void ShowStatisticInterfaceResponseBody_metrics::unsetpkiRandomBusiStatistic()
{
    pkiRandomBusiStatisticIsSet_ = false;
}

int64_t ShowStatisticInterfaceResponseBody_metrics::getTimestamp() const
{
    return timestamp_;
}

void ShowStatisticInterfaceResponseBody_metrics::setTimestamp(int64_t value)
{
    timestamp_ = value;
    timestampIsSet_ = true;
}

bool ShowStatisticInterfaceResponseBody_metrics::timestampIsSet() const
{
    return timestampIsSet_;
}

void ShowStatisticInterfaceResponseBody_metrics::unsettimestamp()
{
    timestampIsSet_ = false;
}

double ShowStatisticInterfaceResponseBody_metrics::getSvsCertBusiStatistic() const
{
    return svsCertBusiStatistic_;
}

void ShowStatisticInterfaceResponseBody_metrics::setSvsCertBusiStatistic(double value)
{
    svsCertBusiStatistic_ = value;
    svsCertBusiStatisticIsSet_ = true;
}

bool ShowStatisticInterfaceResponseBody_metrics::svsCertBusiStatisticIsSet() const
{
    return svsCertBusiStatisticIsSet_;
}

void ShowStatisticInterfaceResponseBody_metrics::unsetsvsCertBusiStatistic()
{
    svsCertBusiStatisticIsSet_ = false;
}

double ShowStatisticInterfaceResponseBody_metrics::getSvsEncodeBusiStatistic() const
{
    return svsEncodeBusiStatistic_;
}

void ShowStatisticInterfaceResponseBody_metrics::setSvsEncodeBusiStatistic(double value)
{
    svsEncodeBusiStatistic_ = value;
    svsEncodeBusiStatisticIsSet_ = true;
}

bool ShowStatisticInterfaceResponseBody_metrics::svsEncodeBusiStatisticIsSet() const
{
    return svsEncodeBusiStatisticIsSet_;
}

void ShowStatisticInterfaceResponseBody_metrics::unsetsvsEncodeBusiStatistic()
{
    svsEncodeBusiStatisticIsSet_ = false;
}

double ShowStatisticInterfaceResponseBody_metrics::getTsaApplyBusiStatistic() const
{
    return tsaApplyBusiStatistic_;
}

void ShowStatisticInterfaceResponseBody_metrics::setTsaApplyBusiStatistic(double value)
{
    tsaApplyBusiStatistic_ = value;
    tsaApplyBusiStatisticIsSet_ = true;
}

bool ShowStatisticInterfaceResponseBody_metrics::tsaApplyBusiStatisticIsSet() const
{
    return tsaApplyBusiStatisticIsSet_;
}

void ShowStatisticInterfaceResponseBody_metrics::unsettsaApplyBusiStatistic()
{
    tsaApplyBusiStatisticIsSet_ = false;
}

double ShowStatisticInterfaceResponseBody_metrics::getSvsSignBusiStatistic() const
{
    return svsSignBusiStatistic_;
}

void ShowStatisticInterfaceResponseBody_metrics::setSvsSignBusiStatistic(double value)
{
    svsSignBusiStatistic_ = value;
    svsSignBusiStatisticIsSet_ = true;
}

bool ShowStatisticInterfaceResponseBody_metrics::svsSignBusiStatisticIsSet() const
{
    return svsSignBusiStatisticIsSet_;
}

void ShowStatisticInterfaceResponseBody_metrics::unsetsvsSignBusiStatistic()
{
    svsSignBusiStatisticIsSet_ = false;
}

double ShowStatisticInterfaceResponseBody_metrics::getSvsDecryptBusiStatistic() const
{
    return svsDecryptBusiStatistic_;
}

void ShowStatisticInterfaceResponseBody_metrics::setSvsDecryptBusiStatistic(double value)
{
    svsDecryptBusiStatistic_ = value;
    svsDecryptBusiStatisticIsSet_ = true;
}

bool ShowStatisticInterfaceResponseBody_metrics::svsDecryptBusiStatisticIsSet() const
{
    return svsDecryptBusiStatisticIsSet_;
}

void ShowStatisticInterfaceResponseBody_metrics::unsetsvsDecryptBusiStatistic()
{
    svsDecryptBusiStatisticIsSet_ = false;
}

double ShowStatisticInterfaceResponseBody_metrics::getKmsBusiStatistic() const
{
    return kmsBusiStatistic_;
}

void ShowStatisticInterfaceResponseBody_metrics::setKmsBusiStatistic(double value)
{
    kmsBusiStatistic_ = value;
    kmsBusiStatisticIsSet_ = true;
}

bool ShowStatisticInterfaceResponseBody_metrics::kmsBusiStatisticIsSet() const
{
    return kmsBusiStatisticIsSet_;
}

void ShowStatisticInterfaceResponseBody_metrics::unsetkmsBusiStatistic()
{
    kmsBusiStatisticIsSet_ = false;
}

double ShowStatisticInterfaceResponseBody_metrics::getSealVerifyBusiStatistic() const
{
    return sealVerifyBusiStatistic_;
}

void ShowStatisticInterfaceResponseBody_metrics::setSealVerifyBusiStatistic(double value)
{
    sealVerifyBusiStatistic_ = value;
    sealVerifyBusiStatisticIsSet_ = true;
}

bool ShowStatisticInterfaceResponseBody_metrics::sealVerifyBusiStatisticIsSet() const
{
    return sealVerifyBusiStatisticIsSet_;
}

void ShowStatisticInterfaceResponseBody_metrics::unsetsealVerifyBusiStatistic()
{
    sealVerifyBusiStatisticIsSet_ = false;
}

double ShowStatisticInterfaceResponseBody_metrics::getPkiSignBusiStatistic() const
{
    return pkiSignBusiStatistic_;
}

void ShowStatisticInterfaceResponseBody_metrics::setPkiSignBusiStatistic(double value)
{
    pkiSignBusiStatistic_ = value;
    pkiSignBusiStatisticIsSet_ = true;
}

bool ShowStatisticInterfaceResponseBody_metrics::pkiSignBusiStatisticIsSet() const
{
    return pkiSignBusiStatisticIsSet_;
}

void ShowStatisticInterfaceResponseBody_metrics::unsetpkiSignBusiStatistic()
{
    pkiSignBusiStatisticIsSet_ = false;
}

double ShowStatisticInterfaceResponseBody_metrics::getSecauthBusiStatistic() const
{
    return secauthBusiStatistic_;
}

void ShowStatisticInterfaceResponseBody_metrics::setSecauthBusiStatistic(double value)
{
    secauthBusiStatistic_ = value;
    secauthBusiStatisticIsSet_ = true;
}

bool ShowStatisticInterfaceResponseBody_metrics::secauthBusiStatisticIsSet() const
{
    return secauthBusiStatisticIsSet_;
}

void ShowStatisticInterfaceResponseBody_metrics::unsetsecauthBusiStatistic()
{
    secauthBusiStatisticIsSet_ = false;
}

double ShowStatisticInterfaceResponseBody_metrics::getSealSignBusiStatistic() const
{
    return sealSignBusiStatistic_;
}

void ShowStatisticInterfaceResponseBody_metrics::setSealSignBusiStatistic(double value)
{
    sealSignBusiStatistic_ = value;
    sealSignBusiStatisticIsSet_ = true;
}

bool ShowStatisticInterfaceResponseBody_metrics::sealSignBusiStatisticIsSet() const
{
    return sealSignBusiStatisticIsSet_;
}

void ShowStatisticInterfaceResponseBody_metrics::unsetsealSignBusiStatistic()
{
    sealSignBusiStatisticIsSet_ = false;
}

double ShowStatisticInterfaceResponseBody_metrics::getSplitBusiStatistic() const
{
    return splitBusiStatistic_;
}

void ShowStatisticInterfaceResponseBody_metrics::setSplitBusiStatistic(double value)
{
    splitBusiStatistic_ = value;
    splitBusiStatisticIsSet_ = true;
}

bool ShowStatisticInterfaceResponseBody_metrics::splitBusiStatisticIsSet() const
{
    return splitBusiStatisticIsSet_;
}

void ShowStatisticInterfaceResponseBody_metrics::unsetsplitBusiStatistic()
{
    splitBusiStatisticIsSet_ = false;
}

double ShowStatisticInterfaceResponseBody_metrics::getSvsRandomBusiStatistic() const
{
    return svsRandomBusiStatistic_;
}

void ShowStatisticInterfaceResponseBody_metrics::setSvsRandomBusiStatistic(double value)
{
    svsRandomBusiStatistic_ = value;
    svsRandomBusiStatisticIsSet_ = true;
}

bool ShowStatisticInterfaceResponseBody_metrics::svsRandomBusiStatisticIsSet() const
{
    return svsRandomBusiStatisticIsSet_;
}

void ShowStatisticInterfaceResponseBody_metrics::unsetsvsRandomBusiStatistic()
{
    svsRandomBusiStatisticIsSet_ = false;
}

double ShowStatisticInterfaceResponseBody_metrics::getSvsEncryptBusiStatistic() const
{
    return svsEncryptBusiStatistic_;
}

void ShowStatisticInterfaceResponseBody_metrics::setSvsEncryptBusiStatistic(double value)
{
    svsEncryptBusiStatistic_ = value;
    svsEncryptBusiStatisticIsSet_ = true;
}

bool ShowStatisticInterfaceResponseBody_metrics::svsEncryptBusiStatisticIsSet() const
{
    return svsEncryptBusiStatisticIsSet_;
}

void ShowStatisticInterfaceResponseBody_metrics::unsetsvsEncryptBusiStatistic()
{
    svsEncryptBusiStatisticIsSet_ = false;
}

double ShowStatisticInterfaceResponseBody_metrics::getSmsDecBusiStatistic() const
{
    return smsDecBusiStatistic_;
}

void ShowStatisticInterfaceResponseBody_metrics::setSmsDecBusiStatistic(double value)
{
    smsDecBusiStatistic_ = value;
    smsDecBusiStatisticIsSet_ = true;
}

bool ShowStatisticInterfaceResponseBody_metrics::smsDecBusiStatisticIsSet() const
{
    return smsDecBusiStatisticIsSet_;
}

void ShowStatisticInterfaceResponseBody_metrics::unsetsmsDecBusiStatistic()
{
    smsDecBusiStatisticIsSet_ = false;
}

double ShowStatisticInterfaceResponseBody_metrics::getSvsDigestBusiStatistic() const
{
    return svsDigestBusiStatistic_;
}

void ShowStatisticInterfaceResponseBody_metrics::setSvsDigestBusiStatistic(double value)
{
    svsDigestBusiStatistic_ = value;
    svsDigestBusiStatisticIsSet_ = true;
}

bool ShowStatisticInterfaceResponseBody_metrics::svsDigestBusiStatisticIsSet() const
{
    return svsDigestBusiStatisticIsSet_;
}

void ShowStatisticInterfaceResponseBody_metrics::unsetsvsDigestBusiStatistic()
{
    svsDigestBusiStatisticIsSet_ = false;
}

double ShowStatisticInterfaceResponseBody_metrics::getSvsDecodeBusiStatistic() const
{
    return svsDecodeBusiStatistic_;
}

void ShowStatisticInterfaceResponseBody_metrics::setSvsDecodeBusiStatistic(double value)
{
    svsDecodeBusiStatistic_ = value;
    svsDecodeBusiStatisticIsSet_ = true;
}

bool ShowStatisticInterfaceResponseBody_metrics::svsDecodeBusiStatisticIsSet() const
{
    return svsDecodeBusiStatisticIsSet_;
}

void ShowStatisticInterfaceResponseBody_metrics::unsetsvsDecodeBusiStatistic()
{
    svsDecodeBusiStatisticIsSet_ = false;
}

}
}
}
}
}


