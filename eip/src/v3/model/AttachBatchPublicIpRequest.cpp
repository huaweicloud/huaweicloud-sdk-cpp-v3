

#include "huaweicloud/eip/v3/model/AttachBatchPublicIpRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




AttachBatchPublicIpRequest::AttachBatchPublicIpRequest()
{
    bodyIsSet_ = false;
}

AttachBatchPublicIpRequest::~AttachBatchPublicIpRequest() = default;

void AttachBatchPublicIpRequest::validate()
{
}

web::json::value AttachBatchPublicIpRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool AttachBatchPublicIpRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchAttachSharebwReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

BatchAttachSharebwReq AttachBatchPublicIpRequest::getBody() const
{
    return body_;
}

void AttachBatchPublicIpRequest::setBody(const BatchAttachSharebwReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AttachBatchPublicIpRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AttachBatchPublicIpRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


