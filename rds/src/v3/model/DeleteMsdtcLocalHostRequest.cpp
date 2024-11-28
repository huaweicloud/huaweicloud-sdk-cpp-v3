

#include "huaweicloud/rds/v3/model/DeleteMsdtcLocalHostRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteMsdtcLocalHostRequest::DeleteMsdtcLocalHostRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteMsdtcLocalHostRequest::~DeleteMsdtcLocalHostRequest() = default;

void DeleteMsdtcLocalHostRequest::validate()
{
}

web::json::value DeleteMsdtcLocalHostRequest::toJson() const
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
bool DeleteMsdtcLocalHostRequest::fromJson(const web::json::value& val)
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
            DeleteMsdtcLocalHostRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteMsdtcLocalHostRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteMsdtcLocalHostRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteMsdtcLocalHostRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteMsdtcLocalHostRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DeleteMsdtcLocalHostRequestBody DeleteMsdtcLocalHostRequest::getBody() const
{
    return body_;
}

void DeleteMsdtcLocalHostRequest::setBody(const DeleteMsdtcLocalHostRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteMsdtcLocalHostRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteMsdtcLocalHostRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


