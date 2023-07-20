

#include "huaweicloud/gaussdbfornosql/v3/model/ExpandInstanceNodeRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ExpandInstanceNodeRequest::ExpandInstanceNodeRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ExpandInstanceNodeRequest::~ExpandInstanceNodeRequest() = default;

void ExpandInstanceNodeRequest::validate()
{
}

web::json::value ExpandInstanceNodeRequest::toJson() const
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

bool ExpandInstanceNodeRequest::fromJson(const web::json::value& val)
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
            ExpandInstanceNodeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ExpandInstanceNodeRequest::getInstanceId() const
{
    return instanceId_;
}

void ExpandInstanceNodeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ExpandInstanceNodeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ExpandInstanceNodeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ExpandInstanceNodeRequestBody ExpandInstanceNodeRequest::getBody() const
{
    return body_;
}

void ExpandInstanceNodeRequest::setBody(const ExpandInstanceNodeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExpandInstanceNodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExpandInstanceNodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


