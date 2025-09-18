

#include "huaweicloud/ga/v1/model/ShowIpGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ShowIpGroupResponse::ShowIpGroupResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    ipGroupIsSet_ = false;
}

ShowIpGroupResponse::~ShowIpGroupResponse() = default;

void ShowIpGroupResponse::validate()
{
}

web::json::value ShowIpGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(ipGroupIsSet_) {
        val[utility::conversions::to_string_t("ip_group")] = ModelBase::toJson(ipGroup_);
    }

    return val;
}
bool ShowIpGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_group"));
        if(!fieldValue.is_null())
        {
            IpGroupDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpGroup(refVal);
        }
    }
    return ok;
}


std::string ShowIpGroupResponse::getRequestId() const
{
    return requestId_;
}

void ShowIpGroupResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowIpGroupResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowIpGroupResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

IpGroupDetail ShowIpGroupResponse::getIpGroup() const
{
    return ipGroup_;
}

void ShowIpGroupResponse::setIpGroup(const IpGroupDetail& value)
{
    ipGroup_ = value;
    ipGroupIsSet_ = true;
}

bool ShowIpGroupResponse::ipGroupIsSet() const
{
    return ipGroupIsSet_;
}

void ShowIpGroupResponse::unsetipGroup()
{
    ipGroupIsSet_ = false;
}

}
}
}
}
}


