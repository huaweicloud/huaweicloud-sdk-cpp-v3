

#include "huaweicloud/ga/v1/model/ShowIpGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ShowIpGroupRequest::ShowIpGroupRequest()
{
    ipGroupId_ = "";
    ipGroupIdIsSet_ = false;
}

ShowIpGroupRequest::~ShowIpGroupRequest() = default;

void ShowIpGroupRequest::validate()
{
}

web::json::value ShowIpGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipGroupIdIsSet_) {
        val[utility::conversions::to_string_t("ip_group_id")] = ModelBase::toJson(ipGroupId_);
    }

    return val;
}
bool ShowIpGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ip_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpGroupId(refVal);
        }
    }
    return ok;
}


std::string ShowIpGroupRequest::getIpGroupId() const
{
    return ipGroupId_;
}

void ShowIpGroupRequest::setIpGroupId(const std::string& value)
{
    ipGroupId_ = value;
    ipGroupIdIsSet_ = true;
}

bool ShowIpGroupRequest::ipGroupIdIsSet() const
{
    return ipGroupIdIsSet_;
}

void ShowIpGroupRequest::unsetipGroupId()
{
    ipGroupIdIsSet_ = false;
}

}
}
}
}
}


