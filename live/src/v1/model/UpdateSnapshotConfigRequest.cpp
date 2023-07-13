

#include "huaweicloud/live/v1/model/UpdateSnapshotConfigRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




UpdateSnapshotConfigRequest::UpdateSnapshotConfigRequest()
{
    bodyIsSet_ = false;
}

UpdateSnapshotConfigRequest::~UpdateSnapshotConfigRequest() = default;

void UpdateSnapshotConfigRequest::validate()
{
}

web::json::value UpdateSnapshotConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateSnapshotConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            LiveSnapshotConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

LiveSnapshotConfig UpdateSnapshotConfigRequest::getBody() const
{
    return body_;
}

void UpdateSnapshotConfigRequest::setBody(const LiveSnapshotConfig& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateSnapshotConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateSnapshotConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


