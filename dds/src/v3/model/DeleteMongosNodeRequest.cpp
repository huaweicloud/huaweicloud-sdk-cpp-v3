

#include "huaweicloud/dds/v3/model/DeleteMongosNodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DeleteMongosNodeRequest::DeleteMongosNodeRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteMongosNodeRequest::~DeleteMongosNodeRequest() = default;

void DeleteMongosNodeRequest::validate()
{
}

web::json::value DeleteMongosNodeRequest::toJson() const
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
bool DeleteMongosNodeRequest::fromJson(const web::json::value& val)
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
            DeleteMongosNodeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteMongosNodeRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteMongosNodeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteMongosNodeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteMongosNodeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DeleteMongosNodeRequestBody DeleteMongosNodeRequest::getBody() const
{
    return body_;
}

void DeleteMongosNodeRequest::setBody(const DeleteMongosNodeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteMongosNodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteMongosNodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


