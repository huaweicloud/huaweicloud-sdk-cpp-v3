

#include "huaweicloud/modelarts/v1/model/BatchDevServersActionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchDevServersActionRequest::BatchDevServersActionRequest()
{
    bodyIsSet_ = false;
}

BatchDevServersActionRequest::~BatchDevServersActionRequest() = default;

void BatchDevServersActionRequest::validate()
{
}

web::json::value BatchDevServersActionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchDevServersActionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DevServerBatchRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


DevServerBatchRequest BatchDevServersActionRequest::getBody() const
{
    return body_;
}

void BatchDevServersActionRequest::setBody(const DevServerBatchRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDevServersActionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDevServersActionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


