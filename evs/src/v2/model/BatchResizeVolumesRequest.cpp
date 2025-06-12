

#include "huaweicloud/evs/v2/model/BatchResizeVolumesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




BatchResizeVolumesRequest::BatchResizeVolumesRequest()
{
    bodyIsSet_ = false;
}

BatchResizeVolumesRequest::~BatchResizeVolumesRequest() = default;

void BatchResizeVolumesRequest::validate()
{
}

web::json::value BatchResizeVolumesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchResizeVolumesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchResizeVolumeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BatchResizeVolumeRequestBody BatchResizeVolumesRequest::getBody() const
{
    return body_;
}

void BatchResizeVolumesRequest::setBody(const BatchResizeVolumeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchResizeVolumesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchResizeVolumesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


