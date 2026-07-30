

#include "huaweicloud/modelarts/v1/model/BatchUnlockPoolNodesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchUnlockPoolNodesRequest::BatchUnlockPoolNodesRequest()
{
    poolName_ = "";
    poolNameIsSet_ = false;
    bodyIsSet_ = false;
}

BatchUnlockPoolNodesRequest::~BatchUnlockPoolNodesRequest() = default;

void BatchUnlockPoolNodesRequest::validate()
{
}

web::json::value BatchUnlockPoolNodesRequest::toJson() const
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
bool BatchUnlockPoolNodesRequest::fromJson(const web::json::value& val)
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


std::string BatchUnlockPoolNodesRequest::getPoolName() const
{
    return poolName_;
}

void BatchUnlockPoolNodesRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool BatchUnlockPoolNodesRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void BatchUnlockPoolNodesRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

BatchLockPoolNodesRequestBody BatchUnlockPoolNodesRequest::getBody() const
{
    return body_;
}

void BatchUnlockPoolNodesRequest::setBody(const BatchLockPoolNodesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUnlockPoolNodesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUnlockPoolNodesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


