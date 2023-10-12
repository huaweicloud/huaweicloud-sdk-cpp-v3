

#include "huaweicloud/dds/v3/model/AddShardingNodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




AddShardingNodeRequest::AddShardingNodeRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddShardingNodeRequest::~AddShardingNodeRequest() = default;

void AddShardingNodeRequest::validate()
{
}

web::json::value AddShardingNodeRequest::toJson() const
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
bool AddShardingNodeRequest::fromJson(const web::json::value& val)
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
            EnlargeInstanceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddShardingNodeRequest::getInstanceId() const
{
    return instanceId_;
}

void AddShardingNodeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AddShardingNodeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AddShardingNodeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

EnlargeInstanceRequestBody AddShardingNodeRequest::getBody() const
{
    return body_;
}

void AddShardingNodeRequest::setBody(const EnlargeInstanceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddShardingNodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddShardingNodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


