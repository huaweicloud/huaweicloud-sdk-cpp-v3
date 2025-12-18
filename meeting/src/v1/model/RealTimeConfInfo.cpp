

#include "huaweicloud/meeting/v1/model/RealTimeConfInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RealTimeConfInfo::RealTimeConfInfo()
{
    chairID_ = "";
    chairIDIsSet_ = false;
    coHostsIsSet_ = false;
}

RealTimeConfInfo::~RealTimeConfInfo() = default;

void RealTimeConfInfo::validate()
{
}

web::json::value RealTimeConfInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chairIDIsSet_) {
        val[utility::conversions::to_string_t("chairID")] = ModelBase::toJson(chairID_);
    }
    if(coHostsIsSet_) {
        val[utility::conversions::to_string_t("coHosts")] = ModelBase::toJson(coHosts_);
    }

    return val;
}
bool RealTimeConfInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("chairID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chairID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChairID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("coHosts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("coHosts"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCoHosts(refVal);
        }
    }
    return ok;
}


std::string RealTimeConfInfo::getChairID() const
{
    return chairID_;
}

void RealTimeConfInfo::setChairID(const std::string& value)
{
    chairID_ = value;
    chairIDIsSet_ = true;
}

bool RealTimeConfInfo::chairIDIsSet() const
{
    return chairIDIsSet_;
}

void RealTimeConfInfo::unsetchairID()
{
    chairIDIsSet_ = false;
}

std::vector<std::string>& RealTimeConfInfo::getCoHosts()
{
    return coHosts_;
}

void RealTimeConfInfo::setCoHosts(const std::vector<std::string>& value)
{
    coHosts_ = value;
    coHostsIsSet_ = true;
}

bool RealTimeConfInfo::coHostsIsSet() const
{
    return coHostsIsSet_;
}

void RealTimeConfInfo::unsetcoHosts()
{
    coHostsIsSet_ = false;
}

}
}
}
}
}


