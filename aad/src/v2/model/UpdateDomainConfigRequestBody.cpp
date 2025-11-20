

#include "huaweicloud/aad/v2/model/UpdateDomainConfigRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




UpdateDomainConfigRequestBody::UpdateDomainConfigRequestBody()
{
    realServerType_ = 0;
    realServerTypeIsSet_ = false;
    realServer_ = "";
    realServerIsSet_ = false;
    portHttpIsSet_ = false;
    portHttpsIsSet_ = false;
    overseasType_ = "";
    overseasTypeIsSet_ = false;
    certName_ = "";
    certNameIsSet_ = false;
}

UpdateDomainConfigRequestBody::~UpdateDomainConfigRequestBody() = default;

void UpdateDomainConfigRequestBody::validate()
{
}

web::json::value UpdateDomainConfigRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(realServerTypeIsSet_) {
        val[utility::conversions::to_string_t("real_server_type")] = ModelBase::toJson(realServerType_);
    }
    if(realServerIsSet_) {
        val[utility::conversions::to_string_t("real_server")] = ModelBase::toJson(realServer_);
    }
    if(portHttpIsSet_) {
        val[utility::conversions::to_string_t("port_http")] = ModelBase::toJson(portHttp_);
    }
    if(portHttpsIsSet_) {
        val[utility::conversions::to_string_t("port_https")] = ModelBase::toJson(portHttps_);
    }
    if(overseasTypeIsSet_) {
        val[utility::conversions::to_string_t("overseas_type")] = ModelBase::toJson(overseasType_);
    }
    if(certNameIsSet_) {
        val[utility::conversions::to_string_t("cert_name")] = ModelBase::toJson(certName_);
    }

    return val;
}
bool UpdateDomainConfigRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("real_server_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("real_server_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRealServerType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("real_server"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("real_server"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRealServer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_http"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_http"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortHttp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_https"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_https"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortHttps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("overseas_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("overseas_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOverseasType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cert_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cert_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertName(refVal);
        }
    }
    return ok;
}


int32_t UpdateDomainConfigRequestBody::getRealServerType() const
{
    return realServerType_;
}

void UpdateDomainConfigRequestBody::setRealServerType(int32_t value)
{
    realServerType_ = value;
    realServerTypeIsSet_ = true;
}

bool UpdateDomainConfigRequestBody::realServerTypeIsSet() const
{
    return realServerTypeIsSet_;
}

void UpdateDomainConfigRequestBody::unsetrealServerType()
{
    realServerTypeIsSet_ = false;
}

std::string UpdateDomainConfigRequestBody::getRealServer() const
{
    return realServer_;
}

void UpdateDomainConfigRequestBody::setRealServer(const std::string& value)
{
    realServer_ = value;
    realServerIsSet_ = true;
}

bool UpdateDomainConfigRequestBody::realServerIsSet() const
{
    return realServerIsSet_;
}

void UpdateDomainConfigRequestBody::unsetrealServer()
{
    realServerIsSet_ = false;
}

std::vector<int32_t>& UpdateDomainConfigRequestBody::getPortHttp()
{
    return portHttp_;
}

void UpdateDomainConfigRequestBody::setPortHttp(std::vector<int32_t> value)
{
    portHttp_ = value;
    portHttpIsSet_ = true;
}

bool UpdateDomainConfigRequestBody::portHttpIsSet() const
{
    return portHttpIsSet_;
}

void UpdateDomainConfigRequestBody::unsetportHttp()
{
    portHttpIsSet_ = false;
}

std::vector<int32_t>& UpdateDomainConfigRequestBody::getPortHttps()
{
    return portHttps_;
}

void UpdateDomainConfigRequestBody::setPortHttps(std::vector<int32_t> value)
{
    portHttps_ = value;
    portHttpsIsSet_ = true;
}

bool UpdateDomainConfigRequestBody::portHttpsIsSet() const
{
    return portHttpsIsSet_;
}

void UpdateDomainConfigRequestBody::unsetportHttps()
{
    portHttpsIsSet_ = false;
}

std::string UpdateDomainConfigRequestBody::getOverseasType() const
{
    return overseasType_;
}

void UpdateDomainConfigRequestBody::setOverseasType(const std::string& value)
{
    overseasType_ = value;
    overseasTypeIsSet_ = true;
}

bool UpdateDomainConfigRequestBody::overseasTypeIsSet() const
{
    return overseasTypeIsSet_;
}

void UpdateDomainConfigRequestBody::unsetoverseasType()
{
    overseasTypeIsSet_ = false;
}

std::string UpdateDomainConfigRequestBody::getCertName() const
{
    return certName_;
}

void UpdateDomainConfigRequestBody::setCertName(const std::string& value)
{
    certName_ = value;
    certNameIsSet_ = true;
}

bool UpdateDomainConfigRequestBody::certNameIsSet() const
{
    return certNameIsSet_;
}

void UpdateDomainConfigRequestBody::unsetcertName()
{
    certNameIsSet_ = false;
}

}
}
}
}
}


