

#include "huaweicloud/aad/v1/model/BlackWhiteIpListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




BlackWhiteIpListRequest::BlackWhiteIpListRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    ipsIsSet_ = false;
}

BlackWhiteIpListRequest::~BlackWhiteIpListRequest() = default;

void BlackWhiteIpListRequest::validate()
{
}

web::json::value BlackWhiteIpListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(ipsIsSet_) {
        val[utility::conversions::to_string_t("ips")] = ModelBase::toJson(ips_);
    }

    return val;
}
bool BlackWhiteIpListRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIps(refVal);
        }
    }
    return ok;
}


std::string BlackWhiteIpListRequest::getInstanceId() const
{
    return instanceId_;
}

void BlackWhiteIpListRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool BlackWhiteIpListRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void BlackWhiteIpListRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string BlackWhiteIpListRequest::getType() const
{
    return type_;
}

void BlackWhiteIpListRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool BlackWhiteIpListRequest::typeIsSet() const
{
    return typeIsSet_;
}

void BlackWhiteIpListRequest::unsettype()
{
    typeIsSet_ = false;
}

std::vector<std::string>& BlackWhiteIpListRequest::getIps()
{
    return ips_;
}

void BlackWhiteIpListRequest::setIps(const std::vector<std::string>& value)
{
    ips_ = value;
    ipsIsSet_ = true;
}

bool BlackWhiteIpListRequest::ipsIsSet() const
{
    return ipsIsSet_;
}

void BlackWhiteIpListRequest::unsetips()
{
    ipsIsSet_ = false;
}

}
}
}
}
}


