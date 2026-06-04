

#include "huaweicloud/cdn/v2/model/HttpsTlsVersion.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




HttpsTlsVersion::HttpsTlsVersion()
{
    tlsVersion_ = "";
    tlsVersionIsSet_ = false;
    cipherSuiteGroup_ = "";
    cipherSuiteGroupIsSet_ = false;
    cipherSuite_ = "";
    cipherSuiteIsSet_ = false;
}

HttpsTlsVersion::~HttpsTlsVersion() = default;

void HttpsTlsVersion::validate()
{
}

web::json::value HttpsTlsVersion::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tlsVersionIsSet_) {
        val[utility::conversions::to_string_t("tls_version")] = ModelBase::toJson(tlsVersion_);
    }
    if(cipherSuiteGroupIsSet_) {
        val[utility::conversions::to_string_t("cipher_suite_group")] = ModelBase::toJson(cipherSuiteGroup_);
    }
    if(cipherSuiteIsSet_) {
        val[utility::conversions::to_string_t("cipher_suite")] = ModelBase::toJson(cipherSuite_);
    }

    return val;
}
bool HttpsTlsVersion::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tls_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tls_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTlsVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cipher_suite_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cipher_suite_group"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCipherSuiteGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cipher_suite"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cipher_suite"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCipherSuite(refVal);
        }
    }
    return ok;
}


std::string HttpsTlsVersion::getTlsVersion() const
{
    return tlsVersion_;
}

void HttpsTlsVersion::setTlsVersion(const std::string& value)
{
    tlsVersion_ = value;
    tlsVersionIsSet_ = true;
}

bool HttpsTlsVersion::tlsVersionIsSet() const
{
    return tlsVersionIsSet_;
}

void HttpsTlsVersion::unsettlsVersion()
{
    tlsVersionIsSet_ = false;
}

std::string HttpsTlsVersion::getCipherSuiteGroup() const
{
    return cipherSuiteGroup_;
}

void HttpsTlsVersion::setCipherSuiteGroup(const std::string& value)
{
    cipherSuiteGroup_ = value;
    cipherSuiteGroupIsSet_ = true;
}

bool HttpsTlsVersion::cipherSuiteGroupIsSet() const
{
    return cipherSuiteGroupIsSet_;
}

void HttpsTlsVersion::unsetcipherSuiteGroup()
{
    cipherSuiteGroupIsSet_ = false;
}

std::string HttpsTlsVersion::getCipherSuite() const
{
    return cipherSuite_;
}

void HttpsTlsVersion::setCipherSuite(const std::string& value)
{
    cipherSuite_ = value;
    cipherSuiteIsSet_ = true;
}

bool HttpsTlsVersion::cipherSuiteIsSet() const
{
    return cipherSuiteIsSet_;
}

void HttpsTlsVersion::unsetcipherSuite()
{
    cipherSuiteIsSet_ = false;
}

}
}
}
}
}


