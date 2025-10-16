

#include "huaweicloud/dds/v3/model/DeleteIpRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DeleteIpRequest::DeleteIpRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteIpRequest::~DeleteIpRequest() = default;

void DeleteIpRequest::validate()
{
}

web::json::value DeleteIpRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteIpRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeleteIpRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteIpRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteIpRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteIpRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteIpRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DeleteIpRequestBody DeleteIpRequest::getBody() const
{
    return body_;
}

void DeleteIpRequest::setBody(const DeleteIpRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteIpRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteIpRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


