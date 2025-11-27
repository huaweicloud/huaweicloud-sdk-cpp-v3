

#include "huaweicloud/rds/v3/model/BatchModifyPublicationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




BatchModifyPublicationRequest::BatchModifyPublicationRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchModifyPublicationRequest::~BatchModifyPublicationRequest() = default;

void BatchModifyPublicationRequest::validate()
{
}

web::json::value BatchModifyPublicationRequest::toJson() const
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
bool BatchModifyPublicationRequest::fromJson(const web::json::value& val)
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
            BatchModifyPublicationsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchModifyPublicationRequest::getInstanceId() const
{
    return instanceId_;
}

void BatchModifyPublicationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool BatchModifyPublicationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void BatchModifyPublicationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

BatchModifyPublicationsRequestBody BatchModifyPublicationRequest::getBody() const
{
    return body_;
}

void BatchModifyPublicationRequest::setBody(const BatchModifyPublicationsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchModifyPublicationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchModifyPublicationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


