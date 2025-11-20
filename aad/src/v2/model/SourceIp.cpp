

#include "huaweicloud/aad/v2/model/SourceIp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




SourceIp::SourceIp()
{
    dataCenter_ = "";
    dataCenterIsSet_ = false;
    isp_ = "";
    ispIsSet_ = false;
    ipIsSet_ = false;
}

SourceIp::~SourceIp() = default;

void SourceIp::validate()
{
}

web::json::value SourceIp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataCenterIsSet_) {
        val[utility::conversions::to_string_t("data_center")] = ModelBase::toJson(dataCenter_);
    }
    if(ispIsSet_) {
        val[utility::conversions::to_string_t("isp")] = ModelBase::toJson(isp_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }

    return val;
}
bool SourceIp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data_center"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_center"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataCenter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
        }
    }
    return ok;
}


std::string SourceIp::getDataCenter() const
{
    return dataCenter_;
}

void SourceIp::setDataCenter(const std::string& value)
{
    dataCenter_ = value;
    dataCenterIsSet_ = true;
}

bool SourceIp::dataCenterIsSet() const
{
    return dataCenterIsSet_;
}

void SourceIp::unsetdataCenter()
{
    dataCenterIsSet_ = false;
}

std::string SourceIp::getIsp() const
{
    return isp_;
}

void SourceIp::setIsp(const std::string& value)
{
    isp_ = value;
    ispIsSet_ = true;
}

bool SourceIp::ispIsSet() const
{
    return ispIsSet_;
}

void SourceIp::unsetisp()
{
    ispIsSet_ = false;
}

std::vector<std::string>& SourceIp::getIp()
{
    return ip_;
}

void SourceIp::setIp(const std::vector<std::string>& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool SourceIp::ipIsSet() const
{
    return ipIsSet_;
}

void SourceIp::unsetip()
{
    ipIsSet_ = false;
}

}
}
}
}
}


