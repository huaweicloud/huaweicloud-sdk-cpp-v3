

#include "huaweicloud/gaussdbfornosql/v3/model/UpdateHighRiskCommandsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




UpdateHighRiskCommandsRequest::UpdateHighRiskCommandsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateHighRiskCommandsRequest::~UpdateHighRiskCommandsRequest() = default;

void UpdateHighRiskCommandsRequest::validate()
{
}

web::json::value UpdateHighRiskCommandsRequest::toJson() const
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
bool UpdateHighRiskCommandsRequest::fromJson(const web::json::value& val)
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
            RenameHighRiskCommandsRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateHighRiskCommandsRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateHighRiskCommandsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateHighRiskCommandsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateHighRiskCommandsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

RenameHighRiskCommandsRequest UpdateHighRiskCommandsRequest::getBody() const
{
    return body_;
}

void UpdateHighRiskCommandsRequest::setBody(const RenameHighRiskCommandsRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateHighRiskCommandsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateHighRiskCommandsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


