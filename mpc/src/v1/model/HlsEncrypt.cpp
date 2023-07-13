

#include "huaweicloud/mpc/v1/model/HlsEncrypt.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




HlsEncrypt::HlsEncrypt()
{
    key_ = "";
    keyIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    iv_ = "";
    ivIsSet_ = false;
    algorithm_ = "";
    algorithmIsSet_ = false;
}

HlsEncrypt::~HlsEncrypt() = default;

void HlsEncrypt::validate()
{
}

web::json::value HlsEncrypt::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(ivIsSet_) {
        val[utility::conversions::to_string_t("iv")] = ModelBase::toJson(iv_);
    }
    if(algorithmIsSet_) {
        val[utility::conversions::to_string_t("algorithm")] = ModelBase::toJson(algorithm_);
    }

    return val;
}

bool HlsEncrypt::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iv"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iv"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIv(refVal);
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
    return ok;
}

std::string HlsEncrypt::getKey() const
{
    return key_;
}

void HlsEncrypt::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool HlsEncrypt::keyIsSet() const
{
    return keyIsSet_;
}

void HlsEncrypt::unsetkey()
{
    keyIsSet_ = false;
}

std::string HlsEncrypt::getUrl() const
{
    return url_;
}

void HlsEncrypt::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool HlsEncrypt::urlIsSet() const
{
    return urlIsSet_;
}

void HlsEncrypt::unseturl()
{
    urlIsSet_ = false;
}

std::string HlsEncrypt::getIv() const
{
    return iv_;
}

void HlsEncrypt::setIv(const std::string& value)
{
    iv_ = value;
    ivIsSet_ = true;
}

bool HlsEncrypt::ivIsSet() const
{
    return ivIsSet_;
}

void HlsEncrypt::unsetiv()
{
    ivIsSet_ = false;
}

std::string HlsEncrypt::getAlgorithm() const
{
    return algorithm_;
}

void HlsEncrypt::setAlgorithm(const std::string& value)
{
    algorithm_ = value;
    algorithmIsSet_ = true;
}

bool HlsEncrypt::algorithmIsSet() const
{
    return algorithmIsSet_;
}

void HlsEncrypt::unsetalgorithm()
{
    algorithmIsSet_ = false;
}

}
}
}
}
}


