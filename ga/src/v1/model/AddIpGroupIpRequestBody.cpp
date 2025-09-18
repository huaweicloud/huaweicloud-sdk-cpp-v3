

#include "huaweicloud/ga/v1/model/AddIpGroupIpRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




AddIpGroupIpRequestBody::AddIpGroupIpRequestBody()
{
    ipListIsSet_ = false;
}

AddIpGroupIpRequestBody::~AddIpGroupIpRequestBody() = default;

void AddIpGroupIpRequestBody::validate()
{
}

web::json::value AddIpGroupIpRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipListIsSet_) {
        val[utility::conversions::to_string_t("ip_list")] = ModelBase::toJson(ipList_);
    }

    return val;
}
bool AddIpGroupIpRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ip_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_list"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateIpGroupIpOption> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpList(refVal);
        }
    }
    return ok;
}


std::vector<CreateIpGroupIpOption>& AddIpGroupIpRequestBody::getIpList()
{
    return ipList_;
}

void AddIpGroupIpRequestBody::setIpList(const std::vector<CreateIpGroupIpOption>& value)
{
    ipList_ = value;
    ipListIsSet_ = true;
}

bool AddIpGroupIpRequestBody::ipListIsSet() const
{
    return ipListIsSet_;
}

void AddIpGroupIpRequestBody::unsetipList()
{
    ipListIsSet_ = false;
}

}
}
}
}
}


