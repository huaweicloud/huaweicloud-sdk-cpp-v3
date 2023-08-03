

#include "huaweicloud/rds/v3/model/DBSInstanceHostInfoResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DBSInstanceHostInfoResult::DBSInstanceHostInfoResult()
{
    id_ = "";
    idIsSet_ = false;
    host_ = "";
    hostIsSet_ = false;
    hostName_ = "";
    hostNameIsSet_ = false;
}

DBSInstanceHostInfoResult::~DBSInstanceHostInfoResult() = default;

void DBSInstanceHostInfoResult::validate()
{
}

web::json::value DBSInstanceHostInfoResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(hostIsSet_) {
        val[utility::conversions::to_string_t("host")] = ModelBase::toJson(host_);
    }
    if(hostNameIsSet_) {
        val[utility::conversions::to_string_t("host_name")] = ModelBase::toJson(hostName_);
    }

    return val;
}

bool DBSInstanceHostInfoResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHost(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostName(refVal);
        }
    }
    return ok;
}

std::string DBSInstanceHostInfoResult::getId() const
{
    return id_;
}

void DBSInstanceHostInfoResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DBSInstanceHostInfoResult::idIsSet() const
{
    return idIsSet_;
}

void DBSInstanceHostInfoResult::unsetid()
{
    idIsSet_ = false;
}

std::string DBSInstanceHostInfoResult::getHost() const
{
    return host_;
}

void DBSInstanceHostInfoResult::setHost(const std::string& value)
{
    host_ = value;
    hostIsSet_ = true;
}

bool DBSInstanceHostInfoResult::hostIsSet() const
{
    return hostIsSet_;
}

void DBSInstanceHostInfoResult::unsethost()
{
    hostIsSet_ = false;
}

std::string DBSInstanceHostInfoResult::getHostName() const
{
    return hostName_;
}

void DBSInstanceHostInfoResult::setHostName(const std::string& value)
{
    hostName_ = value;
    hostNameIsSet_ = true;
}

bool DBSInstanceHostInfoResult::hostNameIsSet() const
{
    return hostNameIsSet_;
}

void DBSInstanceHostInfoResult::unsethostName()
{
    hostNameIsSet_ = false;
}

}
}
}
}
}


