

#include "huaweicloud/gaussdbfornosql/v3/model/ShrinkInstanceNodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShrinkInstanceNodeRequest::ShrinkInstanceNodeRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShrinkInstanceNodeRequest::~ShrinkInstanceNodeRequest() = default;

void ShrinkInstanceNodeRequest::validate()
{
}

web::json::value ShrinkInstanceNodeRequest::toJson() const
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
bool ShrinkInstanceNodeRequest::fromJson(const web::json::value& val)
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
            ShrinkInstanceNodeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShrinkInstanceNodeRequest::getInstanceId() const
{
    return instanceId_;
}

void ShrinkInstanceNodeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShrinkInstanceNodeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShrinkInstanceNodeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ShrinkInstanceNodeRequestBody ShrinkInstanceNodeRequest::getBody() const
{
    return body_;
}

void ShrinkInstanceNodeRequest::setBody(const ShrinkInstanceNodeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShrinkInstanceNodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShrinkInstanceNodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


