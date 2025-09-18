

#include "huaweicloud/ga/v1/model/UpdateIpGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




UpdateIpGroupRequest::UpdateIpGroupRequest()
{
    ipGroupId_ = "";
    ipGroupIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateIpGroupRequest::~UpdateIpGroupRequest() = default;

void UpdateIpGroupRequest::validate()
{
}

web::json::value UpdateIpGroupRequest::toJson() const
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
bool UpdateIpGroupRequest::fromJson(const web::json::value& val)
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
            UpdateIpGroupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateIpGroupRequest::getIpGroupId() const
{
    return ipGroupId_;
}

void UpdateIpGroupRequest::setIpGroupId(const std::string& value)
{
    ipGroupId_ = value;
    ipGroupIdIsSet_ = true;
}

bool UpdateIpGroupRequest::ipGroupIdIsSet() const
{
    return ipGroupIdIsSet_;
}

void UpdateIpGroupRequest::unsetipGroupId()
{
    ipGroupIdIsSet_ = false;
}

UpdateIpGroupRequestBody UpdateIpGroupRequest::getBody() const
{
    return body_;
}

void UpdateIpGroupRequest::setBody(const UpdateIpGroupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateIpGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateIpGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


