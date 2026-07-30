

#include "huaweicloud/modelarts/v1/model/BatchLockPoolNodesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchLockPoolNodesRequest::BatchLockPoolNodesRequest()
{
    poolName_ = "";
    poolNameIsSet_ = false;
    bodyIsSet_ = false;
}

BatchLockPoolNodesRequest::~BatchLockPoolNodesRequest() = default;

void BatchLockPoolNodesRequest::validate()
{
}

web::json::value BatchLockPoolNodesRequest::toJson() const
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
bool BatchLockPoolNodesRequest::fromJson(const web::json::value& val)
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
            BatchLockPoolNodesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchLockPoolNodesRequest::getPoolName() const
{
    return poolName_;
}

void BatchLockPoolNodesRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool BatchLockPoolNodesRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void BatchLockPoolNodesRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

BatchLockPoolNodesRequestBody BatchLockPoolNodesRequest::getBody() const
{
    return body_;
}

void BatchLockPoolNodesRequest::setBody(const BatchLockPoolNodesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchLockPoolNodesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchLockPoolNodesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


