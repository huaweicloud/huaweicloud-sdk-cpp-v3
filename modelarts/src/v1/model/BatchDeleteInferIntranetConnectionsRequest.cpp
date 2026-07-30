

#include "huaweicloud/modelarts/v1/model/BatchDeleteInferIntranetConnectionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchDeleteInferIntranetConnectionsRequest::BatchDeleteInferIntranetConnectionsRequest()
{
    bodyIsSet_ = false;
}

BatchDeleteInferIntranetConnectionsRequest::~BatchDeleteInferIntranetConnectionsRequest() = default;

void BatchDeleteInferIntranetConnectionsRequest::validate()
{
}

web::json::value BatchDeleteInferIntranetConnectionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchDeleteInferIntranetConnectionsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            IntranetConnectionDeleteRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


IntranetConnectionDeleteRequest BatchDeleteInferIntranetConnectionsRequest::getBody() const
{
    return body_;
}

void BatchDeleteInferIntranetConnectionsRequest::setBody(const IntranetConnectionDeleteRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteInferIntranetConnectionsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteInferIntranetConnectionsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


