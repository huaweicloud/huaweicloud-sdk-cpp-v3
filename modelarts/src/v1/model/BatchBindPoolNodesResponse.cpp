

#include "huaweicloud/modelarts/v1/model/BatchBindPoolNodesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchBindPoolNodesResponse::BatchBindPoolNodesResponse()
{
    bodyIsSet_ = false;
}

BatchBindPoolNodesResponse::~BatchBindPoolNodesResponse() = default;

void BatchBindPoolNodesResponse::validate()
{
}

web::json::value BatchBindPoolNodesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchBindPoolNodesResponse::fromJson(const web::json::value& val)
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


Object BatchBindPoolNodesResponse::getBody() const
{
    return body_;
}

void BatchBindPoolNodesResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchBindPoolNodesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchBindPoolNodesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


