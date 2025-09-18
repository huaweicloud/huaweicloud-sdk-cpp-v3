

#include "huaweicloud/ga/v1/model/DeleteIpGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




DeleteIpGroupRequest::DeleteIpGroupRequest()
{
    ipGroupId_ = "";
    ipGroupIdIsSet_ = false;
}

DeleteIpGroupRequest::~DeleteIpGroupRequest() = default;

void DeleteIpGroupRequest::validate()
{
}

web::json::value DeleteIpGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipGroupIdIsSet_) {
        val[utility::conversions::to_string_t("ip_group_id")] = ModelBase::toJson(ipGroupId_);
    }

    return val;
}
bool DeleteIpGroupRequest::fromJson(const web::json::value& val)
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


std::string DeleteIpGroupRequest::getIpGroupId() const
{
    return ipGroupId_;
}

void DeleteIpGroupRequest::setIpGroupId(const std::string& value)
{
    ipGroupId_ = value;
    ipGroupIdIsSet_ = true;
}

bool DeleteIpGroupRequest::ipGroupIdIsSet() const
{
    return ipGroupIdIsSet_;
}

void DeleteIpGroupRequest::unsetipGroupId()
{
    ipGroupIdIsSet_ = false;
}

}
}
}
}
}


