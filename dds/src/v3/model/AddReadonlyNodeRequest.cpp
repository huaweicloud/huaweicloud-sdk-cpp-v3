

#include "huaweicloud/dds/v3/model/AddReadonlyNodeRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




AddReadonlyNodeRequest::AddReadonlyNodeRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddReadonlyNodeRequest::~AddReadonlyNodeRequest() = default;

void AddReadonlyNodeRequest::validate()
{
}

web::json::value AddReadonlyNodeRequest::toJson() const
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

bool AddReadonlyNodeRequest::fromJson(const web::json::value& val)
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
            AddReadonlyNodeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string AddReadonlyNodeRequest::getInstanceId() const
{
    return instanceId_;
}

void AddReadonlyNodeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AddReadonlyNodeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AddReadonlyNodeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

AddReadonlyNodeRequestBody AddReadonlyNodeRequest::getBody() const
{
    return body_;
}

void AddReadonlyNodeRequest::setBody(const AddReadonlyNodeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddReadonlyNodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddReadonlyNodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


