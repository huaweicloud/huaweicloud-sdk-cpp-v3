

#include "huaweicloud/modelarts/v1/model/BatchResizePoolNodesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchResizePoolNodesRequest::BatchResizePoolNodesRequest()
{
    poolName_ = "";
    poolNameIsSet_ = false;
    bodyIsSet_ = false;
}

BatchResizePoolNodesRequest::~BatchResizePoolNodesRequest() = default;

void BatchResizePoolNodesRequest::validate()
{
}

web::json::value BatchResizePoolNodesRequest::toJson() const
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
bool BatchResizePoolNodesRequest::fromJson(const web::json::value& val)
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
            BatchResizeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchResizePoolNodesRequest::getPoolName() const
{
    return poolName_;
}

void BatchResizePoolNodesRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool BatchResizePoolNodesRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void BatchResizePoolNodesRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

BatchResizeRequestBody BatchResizePoolNodesRequest::getBody() const
{
    return body_;
}

void BatchResizePoolNodesRequest::setBody(const BatchResizeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchResizePoolNodesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchResizePoolNodesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


