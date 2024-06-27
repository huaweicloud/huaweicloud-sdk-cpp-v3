

#include "huaweicloud/gaussdb/v3/model/ChInstancesInfoRsponse_instance_port_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ChInstancesInfoRsponse_instance_port_info::ChInstancesInfoRsponse_instance_port_info()
{
    tepPort_ = 0;
    tepPortIsSet_ = false;
    httpPort_ = 0;
    httpPortIsSet_ = false;
    mysqlPort_ = 0;
    mysqlPortIsSet_ = false;
    httpsPort_ = 0;
    httpsPortIsSet_ = false;
    tepSecurePort_ = 0;
    tepSecurePortIsSet_ = false;
}

ChInstancesInfoRsponse_instance_port_info::~ChInstancesInfoRsponse_instance_port_info() = default;

void ChInstancesInfoRsponse_instance_port_info::validate()
{
}

web::json::value ChInstancesInfoRsponse_instance_port_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tepPortIsSet_) {
        val[utility::conversions::to_string_t("tep_port")] = ModelBase::toJson(tepPort_);
    }
    if(httpPortIsSet_) {
        val[utility::conversions::to_string_t("http_port")] = ModelBase::toJson(httpPort_);
    }
    if(mysqlPortIsSet_) {
        val[utility::conversions::to_string_t("mysql_port")] = ModelBase::toJson(mysqlPort_);
    }
    if(httpsPortIsSet_) {
        val[utility::conversions::to_string_t("https_port")] = ModelBase::toJson(httpsPort_);
    }
    if(tepSecurePortIsSet_) {
        val[utility::conversions::to_string_t("tep_secure_port")] = ModelBase::toJson(tepSecurePort_);
    }

    return val;
}
bool ChInstancesInfoRsponse_instance_port_info::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tep_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tep_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTepPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("http_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mysql_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mysql_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMysqlPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("https_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("https_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpsPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tep_secure_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tep_secure_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTepSecurePort(refVal);
        }
    }
    return ok;
}


int32_t ChInstancesInfoRsponse_instance_port_info::getTepPort() const
{
    return tepPort_;
}

void ChInstancesInfoRsponse_instance_port_info::setTepPort(int32_t value)
{
    tepPort_ = value;
    tepPortIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance_port_info::tepPortIsSet() const
{
    return tepPortIsSet_;
}

void ChInstancesInfoRsponse_instance_port_info::unsettepPort()
{
    tepPortIsSet_ = false;
}

int32_t ChInstancesInfoRsponse_instance_port_info::getHttpPort() const
{
    return httpPort_;
}

void ChInstancesInfoRsponse_instance_port_info::setHttpPort(int32_t value)
{
    httpPort_ = value;
    httpPortIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance_port_info::httpPortIsSet() const
{
    return httpPortIsSet_;
}

void ChInstancesInfoRsponse_instance_port_info::unsethttpPort()
{
    httpPortIsSet_ = false;
}

int32_t ChInstancesInfoRsponse_instance_port_info::getMysqlPort() const
{
    return mysqlPort_;
}

void ChInstancesInfoRsponse_instance_port_info::setMysqlPort(int32_t value)
{
    mysqlPort_ = value;
    mysqlPortIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance_port_info::mysqlPortIsSet() const
{
    return mysqlPortIsSet_;
}

void ChInstancesInfoRsponse_instance_port_info::unsetmysqlPort()
{
    mysqlPortIsSet_ = false;
}

int32_t ChInstancesInfoRsponse_instance_port_info::getHttpsPort() const
{
    return httpsPort_;
}

void ChInstancesInfoRsponse_instance_port_info::setHttpsPort(int32_t value)
{
    httpsPort_ = value;
    httpsPortIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance_port_info::httpsPortIsSet() const
{
    return httpsPortIsSet_;
}

void ChInstancesInfoRsponse_instance_port_info::unsethttpsPort()
{
    httpsPortIsSet_ = false;
}

int32_t ChInstancesInfoRsponse_instance_port_info::getTepSecurePort() const
{
    return tepSecurePort_;
}

void ChInstancesInfoRsponse_instance_port_info::setTepSecurePort(int32_t value)
{
    tepSecurePort_ = value;
    tepSecurePortIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance_port_info::tepSecurePortIsSet() const
{
    return tepSecurePortIsSet_;
}

void ChInstancesInfoRsponse_instance_port_info::unsettepSecurePort()
{
    tepSecurePortIsSet_ = false;
}

}
}
}
}
}


