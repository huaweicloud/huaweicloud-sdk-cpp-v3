

#include "huaweicloud/ga/v1/model/RemoveIpGroupIpRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




RemoveIpGroupIpRequestBody::RemoveIpGroupIpRequestBody()
{
    ipListIsSet_ = false;
}

RemoveIpGroupIpRequestBody::~RemoveIpGroupIpRequestBody() = default;

void RemoveIpGroupIpRequestBody::validate()
{
}

web::json::value RemoveIpGroupIpRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipListIsSet_) {
        val[utility::conversions::to_string_t("ip_list")] = ModelBase::toJson(ipList_);
    }

    return val;
}
bool RemoveIpGroupIpRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ip_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpList(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& RemoveIpGroupIpRequestBody::getIpList()
{
    return ipList_;
}

void RemoveIpGroupIpRequestBody::setIpList(const std::vector<std::string>& value)
{
    ipList_ = value;
    ipListIsSet_ = true;
}

bool RemoveIpGroupIpRequestBody::ipListIsSet() const
{
    return ipListIsSet_;
}

void RemoveIpGroupIpRequestBody::unsetipList()
{
    ipListIsSet_ = false;
}

}
}
}
}
}


