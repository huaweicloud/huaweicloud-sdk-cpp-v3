

#include "huaweicloud/modelarts/v1/model/CreateHyperClusterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateHyperClusterRequest::CreateHyperClusterRequest()
{
    bodyIsSet_ = false;
}

CreateHyperClusterRequest::~CreateHyperClusterRequest() = default;

void CreateHyperClusterRequest::validate()
{
}

web::json::value CreateHyperClusterRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateHyperClusterRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            HyperClusterCreateRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


HyperClusterCreateRequest CreateHyperClusterRequest::getBody() const
{
    return body_;
}

void CreateHyperClusterRequest::setBody(const HyperClusterCreateRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateHyperClusterRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateHyperClusterRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


