

#include "huaweicloud/gaussdbfornosql/v3/model/OfflineNodesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




OfflineNodesRequest::OfflineNodesRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

OfflineNodesRequest::~OfflineNodesRequest() = default;

void OfflineNodesRequest::validate()
{
}

web::json::value OfflineNodesRequest::toJson() const
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
bool OfflineNodesRequest::fromJson(const web::json::value& val)
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
            OfflineNodesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string OfflineNodesRequest::getInstanceId() const
{
    return instanceId_;
}

void OfflineNodesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool OfflineNodesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void OfflineNodesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

OfflineNodesRequestBody OfflineNodesRequest::getBody() const
{
    return body_;
}

void OfflineNodesRequest::setBody(const OfflineNodesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool OfflineNodesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void OfflineNodesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


