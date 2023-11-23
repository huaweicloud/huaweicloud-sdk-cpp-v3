

#include "huaweicloud/dds/v3/model/DeleteReadonlyNodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DeleteReadonlyNodeRequest::DeleteReadonlyNodeRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteReadonlyNodeRequest::~DeleteReadonlyNodeRequest() = default;

void DeleteReadonlyNodeRequest::validate()
{
}

web::json::value DeleteReadonlyNodeRequest::toJson() const
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
bool DeleteReadonlyNodeRequest::fromJson(const web::json::value& val)
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
            DeleteReadonlyNodeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteReadonlyNodeRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteReadonlyNodeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteReadonlyNodeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteReadonlyNodeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DeleteReadonlyNodeRequestBody DeleteReadonlyNodeRequest::getBody() const
{
    return body_;
}

void DeleteReadonlyNodeRequest::setBody(const DeleteReadonlyNodeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteReadonlyNodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteReadonlyNodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


