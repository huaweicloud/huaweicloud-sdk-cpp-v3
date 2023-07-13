

#include "huaweicloud/live/v1/model/CreateSnapshotConfigRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CreateSnapshotConfigRequest::CreateSnapshotConfigRequest()
{
    bodyIsSet_ = false;
}

CreateSnapshotConfigRequest::~CreateSnapshotConfigRequest() = default;

void CreateSnapshotConfigRequest::validate()
{
}

web::json::value CreateSnapshotConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateSnapshotConfigRequest::fromJson(const web::json::value& val)
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

LiveSnapshotConfig CreateSnapshotConfigRequest::getBody() const
{
    return body_;
}

void CreateSnapshotConfigRequest::setBody(const LiveSnapshotConfig& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateSnapshotConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateSnapshotConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


