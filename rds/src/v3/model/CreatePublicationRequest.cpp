

#include "huaweicloud/rds/v3/model/CreatePublicationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreatePublicationRequest::CreatePublicationRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreatePublicationRequest::~CreatePublicationRequest() = default;

void CreatePublicationRequest::validate()
{
}

web::json::value CreatePublicationRequest::toJson() const
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
bool CreatePublicationRequest::fromJson(const web::json::value& val)
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
            CreatePublicationsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreatePublicationRequest::getInstanceId() const
{
    return instanceId_;
}

void CreatePublicationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreatePublicationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreatePublicationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreatePublicationsRequestBody CreatePublicationRequest::getBody() const
{
    return body_;
}

void CreatePublicationRequest::setBody(const CreatePublicationsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePublicationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePublicationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


