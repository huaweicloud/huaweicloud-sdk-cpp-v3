

#include "huaweicloud/ga/v1/model/RemoveIpGroupIpRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




RemoveIpGroupIpRequest::RemoveIpGroupIpRequest()
{
    ipGroupId_ = "";
    ipGroupIdIsSet_ = false;
    bodyIsSet_ = false;
}

RemoveIpGroupIpRequest::~RemoveIpGroupIpRequest() = default;

void RemoveIpGroupIpRequest::validate()
{
}

web::json::value RemoveIpGroupIpRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipGroupIdIsSet_) {
        val[utility::conversions::to_string_t("ip_group_id")] = ModelBase::toJson(ipGroupId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool RemoveIpGroupIpRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RemoveIpGroupIpRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RemoveIpGroupIpRequest::getIpGroupId() const
{
    return ipGroupId_;
}

void RemoveIpGroupIpRequest::setIpGroupId(const std::string& value)
{
    ipGroupId_ = value;
    ipGroupIdIsSet_ = true;
}

bool RemoveIpGroupIpRequest::ipGroupIdIsSet() const
{
    return ipGroupIdIsSet_;
}

void RemoveIpGroupIpRequest::unsetipGroupId()
{
    ipGroupIdIsSet_ = false;
}

RemoveIpGroupIpRequestBody RemoveIpGroupIpRequest::getBody() const
{
    return body_;
}

void RemoveIpGroupIpRequest::setBody(const RemoveIpGroupIpRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RemoveIpGroupIpRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RemoveIpGroupIpRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


