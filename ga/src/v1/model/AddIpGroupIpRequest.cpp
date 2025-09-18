

#include "huaweicloud/ga/v1/model/AddIpGroupIpRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




AddIpGroupIpRequest::AddIpGroupIpRequest()
{
    ipGroupId_ = "";
    ipGroupIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddIpGroupIpRequest::~AddIpGroupIpRequest() = default;

void AddIpGroupIpRequest::validate()
{
}

web::json::value AddIpGroupIpRequest::toJson() const
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
bool AddIpGroupIpRequest::fromJson(const web::json::value& val)
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
            AddIpGroupIpRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddIpGroupIpRequest::getIpGroupId() const
{
    return ipGroupId_;
}

void AddIpGroupIpRequest::setIpGroupId(const std::string& value)
{
    ipGroupId_ = value;
    ipGroupIdIsSet_ = true;
}

bool AddIpGroupIpRequest::ipGroupIdIsSet() const
{
    return ipGroupIdIsSet_;
}

void AddIpGroupIpRequest::unsetipGroupId()
{
    ipGroupIdIsSet_ = false;
}

AddIpGroupIpRequestBody AddIpGroupIpRequest::getBody() const
{
    return body_;
}

void AddIpGroupIpRequest::setBody(const AddIpGroupIpRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddIpGroupIpRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddIpGroupIpRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


