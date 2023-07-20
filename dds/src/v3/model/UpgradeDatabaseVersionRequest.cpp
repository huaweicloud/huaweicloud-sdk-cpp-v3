

#include "huaweicloud/dds/v3/model/UpgradeDatabaseVersionRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




UpgradeDatabaseVersionRequest::UpgradeDatabaseVersionRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpgradeDatabaseVersionRequest::~UpgradeDatabaseVersionRequest() = default;

void UpgradeDatabaseVersionRequest::validate()
{
}

web::json::value UpgradeDatabaseVersionRequest::toJson() const
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

bool UpgradeDatabaseVersionRequest::fromJson(const web::json::value& val)
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
            UpgradeDatabaseVersionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpgradeDatabaseVersionRequest::getInstanceId() const
{
    return instanceId_;
}

void UpgradeDatabaseVersionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpgradeDatabaseVersionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpgradeDatabaseVersionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpgradeDatabaseVersionRequestBody UpgradeDatabaseVersionRequest::getBody() const
{
    return body_;
}

void UpgradeDatabaseVersionRequest::setBody(const UpgradeDatabaseVersionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpgradeDatabaseVersionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpgradeDatabaseVersionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


