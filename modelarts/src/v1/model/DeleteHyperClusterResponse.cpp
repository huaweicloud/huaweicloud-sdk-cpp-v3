

#include "huaweicloud/modelarts/v1/model/DeleteHyperClusterResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteHyperClusterResponse::DeleteHyperClusterResponse()
{
    bodyIsSet_ = false;
}

DeleteHyperClusterResponse::~DeleteHyperClusterResponse() = default;

void DeleteHyperClusterResponse::validate()
{
}

web::json::value DeleteHyperClusterResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteHyperClusterResponse::fromJson(const web::json::value& val)
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


Object DeleteHyperClusterResponse::getBody() const
{
    return body_;
}

void DeleteHyperClusterResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteHyperClusterResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteHyperClusterResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


