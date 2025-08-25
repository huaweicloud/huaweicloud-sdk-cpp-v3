

#include "huaweicloud/cpcs/v1/model/CreateClusterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




CreateClusterRequest::CreateClusterRequest()
{
    bodyIsSet_ = false;
}

CreateClusterRequest::~CreateClusterRequest() = default;

void CreateClusterRequest::validate()
{
}

web::json::value CreateClusterRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateClusterRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateClusterRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateClusterRequestBody CreateClusterRequest::getBody() const
{
    return body_;
}

void CreateClusterRequest::setBody(const CreateClusterRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateClusterRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateClusterRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


