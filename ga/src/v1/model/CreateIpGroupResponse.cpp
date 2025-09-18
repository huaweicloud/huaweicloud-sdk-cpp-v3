

#include "huaweicloud/ga/v1/model/CreateIpGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




CreateIpGroupResponse::CreateIpGroupResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    ipGroupIsSet_ = false;
}

CreateIpGroupResponse::~CreateIpGroupResponse() = default;

void CreateIpGroupResponse::validate()
{
}

web::json::value CreateIpGroupResponse::toJson() const
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
bool CreateIpGroupResponse::fromJson(const web::json::value& val)
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


std::string CreateIpGroupResponse::getRequestId() const
{
    return requestId_;
}

void CreateIpGroupResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool CreateIpGroupResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void CreateIpGroupResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

IpGroupDetail CreateIpGroupResponse::getIpGroup() const
{
    return ipGroup_;
}

void CreateIpGroupResponse::setIpGroup(const IpGroupDetail& value)
{
    ipGroup_ = value;
    ipGroupIsSet_ = true;
}

bool CreateIpGroupResponse::ipGroupIsSet() const
{
    return ipGroupIsSet_;
}

void CreateIpGroupResponse::unsetipGroup()
{
    ipGroupIsSet_ = false;
}

}
}
}
}
}


