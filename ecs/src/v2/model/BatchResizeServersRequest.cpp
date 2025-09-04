

#include "huaweicloud/ecs/v2/model/BatchResizeServersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchResizeServersRequest::BatchResizeServersRequest()
{
    bodyIsSet_ = false;
}

BatchResizeServersRequest::~BatchResizeServersRequest() = default;

void BatchResizeServersRequest::validate()
{
}

web::json::value BatchResizeServersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchResizeServersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchResizeServersReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BatchResizeServersReq BatchResizeServersRequest::getBody() const
{
    return body_;
}

void BatchResizeServersRequest::setBody(const BatchResizeServersReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchResizeServersRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchResizeServersRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


