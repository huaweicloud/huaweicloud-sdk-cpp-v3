

#include "huaweicloud/modelarts/v1/model/BatchDeletePoolNodesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchDeletePoolNodesRequest::BatchDeletePoolNodesRequest()
{
    poolName_ = "";
    poolNameIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeletePoolNodesRequest::~BatchDeletePoolNodesRequest() = default;

void BatchDeletePoolNodesRequest::validate()
{
}

web::json::value BatchDeletePoolNodesRequest::toJson() const
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
bool BatchDeletePoolNodesRequest::fromJson(const web::json::value& val)
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
            NodesDeletionRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeletePoolNodesRequest::getPoolName() const
{
    return poolName_;
}

void BatchDeletePoolNodesRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool BatchDeletePoolNodesRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void BatchDeletePoolNodesRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

NodesDeletionRequest BatchDeletePoolNodesRequest::getBody() const
{
    return body_;
}

void BatchDeletePoolNodesRequest::setBody(const NodesDeletionRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeletePoolNodesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeletePoolNodesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


