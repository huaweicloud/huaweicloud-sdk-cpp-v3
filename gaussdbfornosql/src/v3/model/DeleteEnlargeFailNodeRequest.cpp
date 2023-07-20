

#include "huaweicloud/gaussdbfornosql/v3/model/DeleteEnlargeFailNodeRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




DeleteEnlargeFailNodeRequest::DeleteEnlargeFailNodeRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteEnlargeFailNodeRequest::~DeleteEnlargeFailNodeRequest() = default;

void DeleteEnlargeFailNodeRequest::validate()
{
}

web::json::value DeleteEnlargeFailNodeRequest::toJson() const
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

bool DeleteEnlargeFailNodeRequest::fromJson(const web::json::value& val)
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
            DeleteEnlargeFailNodeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string DeleteEnlargeFailNodeRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteEnlargeFailNodeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteEnlargeFailNodeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteEnlargeFailNodeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DeleteEnlargeFailNodeRequestBody DeleteEnlargeFailNodeRequest::getBody() const
{
    return body_;
}

void DeleteEnlargeFailNodeRequest::setBody(const DeleteEnlargeFailNodeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteEnlargeFailNodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteEnlargeFailNodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


