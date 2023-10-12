

#include "huaweicloud/drs/v3/model/SubscriptionInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




SubscriptionInfo::SubscriptionInfo()
{
    endpointsIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
}

SubscriptionInfo::~SubscriptionInfo() = default;

void SubscriptionInfo::validate()
{
}

web::json::value SubscriptionInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointsIsSet_) {
        val[utility::conversions::to_string_t("endpoints")] = ModelBase::toJson(endpoints_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }

    return val;
}
bool SubscriptionInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("endpoints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoints"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpoints(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& SubscriptionInfo::getEndpoints()
{
    return endpoints_;
}

void SubscriptionInfo::setEndpoints(const std::vector<std::string>& value)
{
    endpoints_ = value;
    endpointsIsSet_ = true;
}

bool SubscriptionInfo::endpointsIsSet() const
{
    return endpointsIsSet_;
}

void SubscriptionInfo::unsetendpoints()
{
    endpointsIsSet_ = false;
}

std::string SubscriptionInfo::getProtocol() const
{
    return protocol_;
}

void SubscriptionInfo::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool SubscriptionInfo::protocolIsSet() const
{
    return protocolIsSet_;
}

void SubscriptionInfo::unsetprotocol()
{
    protocolIsSet_ = false;
}

}
}
}
}
}


