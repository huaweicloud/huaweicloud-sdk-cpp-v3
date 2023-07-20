

#include "huaweicloud/gaussdbfornosql/v3/model/UpdateClientNetworkRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




UpdateClientNetworkRequest::UpdateClientNetworkRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateClientNetworkRequest::~UpdateClientNetworkRequest() = default;

void UpdateClientNetworkRequest::validate()
{
}

web::json::value UpdateClientNetworkRequest::toJson() const
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

bool UpdateClientNetworkRequest::fromJson(const web::json::value& val)
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
            UpdateClientNetworkRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateClientNetworkRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateClientNetworkRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateClientNetworkRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateClientNetworkRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateClientNetworkRequestBody UpdateClientNetworkRequest::getBody() const
{
    return body_;
}

void UpdateClientNetworkRequest::setBody(const UpdateClientNetworkRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateClientNetworkRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateClientNetworkRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


