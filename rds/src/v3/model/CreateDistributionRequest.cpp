

#include "huaweicloud/rds/v3/model/CreateDistributionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateDistributionRequest::CreateDistributionRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateDistributionRequest::~CreateDistributionRequest() = default;

void CreateDistributionRequest::validate()
{
}

web::json::value CreateDistributionRequest::toJson() const
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
bool CreateDistributionRequest::fromJson(const web::json::value& val)
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
            CreateDistributionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateDistributionRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateDistributionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateDistributionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateDistributionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreateDistributionRequestBody CreateDistributionRequest::getBody() const
{
    return body_;
}

void CreateDistributionRequest::setBody(const CreateDistributionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDistributionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDistributionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


