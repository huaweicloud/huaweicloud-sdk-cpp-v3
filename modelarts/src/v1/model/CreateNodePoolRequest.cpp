

#include "huaweicloud/modelarts/v1/model/CreateNodePoolRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateNodePoolRequest::CreateNodePoolRequest()
{
    poolName_ = "";
    poolNameIsSet_ = false;
    bodyIsSet_ = false;
}

CreateNodePoolRequest::~CreateNodePoolRequest() = default;

void CreateNodePoolRequest::validate()
{
}

web::json::value CreateNodePoolRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(poolNameIsSet_) {
        val[utility::conversions::to_string_t("pool_name")] = ModelBase::toJson(poolName_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateNodePoolRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pool_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateNodePoolRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateNodePoolRequest::getPoolName() const
{
    return poolName_;
}

void CreateNodePoolRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool CreateNodePoolRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void CreateNodePoolRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

CreateNodePoolRequestBody CreateNodePoolRequest::getBody() const
{
    return body_;
}

void CreateNodePoolRequest::setBody(const CreateNodePoolRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateNodePoolRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateNodePoolRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


