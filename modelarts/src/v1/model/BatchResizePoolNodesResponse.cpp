

#include "huaweicloud/modelarts/v1/model/BatchResizePoolNodesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchResizePoolNodesResponse::BatchResizePoolNodesResponse()
{
    bodyIsSet_ = false;
}

BatchResizePoolNodesResponse::~BatchResizePoolNodesResponse() = default;

void BatchResizePoolNodesResponse::validate()
{
}

web::json::value BatchResizePoolNodesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchResizePoolNodesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


Object BatchResizePoolNodesResponse::getBody() const
{
    return body_;
}

void BatchResizePoolNodesResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchResizePoolNodesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchResizePoolNodesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


