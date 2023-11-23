

#include "huaweicloud/rds/v3/model/UpgradeDbMajorVersionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpgradeDbMajorVersionRequest::UpgradeDbMajorVersionRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpgradeDbMajorVersionRequest::~UpgradeDbMajorVersionRequest() = default;

void UpgradeDbMajorVersionRequest::validate()
{
}

web::json::value UpgradeDbMajorVersionRequest::toJson() const
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
bool UpgradeDbMajorVersionRequest::fromJson(const web::json::value& val)
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
            UpgradePgMajorVersion refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpgradeDbMajorVersionRequest::getInstanceId() const
{
    return instanceId_;
}

void UpgradeDbMajorVersionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpgradeDbMajorVersionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpgradeDbMajorVersionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpgradePgMajorVersion UpgradeDbMajorVersionRequest::getBody() const
{
    return body_;
}

void UpgradeDbMajorVersionRequest::setBody(const UpgradePgMajorVersion& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpgradeDbMajorVersionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpgradeDbMajorVersionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


