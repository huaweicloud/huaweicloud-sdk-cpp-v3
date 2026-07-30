

#include "huaweicloud/modelarts/v1/model/BatchResetPoolNodesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchResetPoolNodesRequest::BatchResetPoolNodesRequest()
{
    poolName_ = "";
    poolNameIsSet_ = false;
    bodyIsSet_ = false;
}

BatchResetPoolNodesRequest::~BatchResetPoolNodesRequest() = default;

void BatchResetPoolNodesRequest::validate()
{
}

web::json::value BatchResetPoolNodesRequest::toJson() const
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
bool BatchResetPoolNodesRequest::fromJson(const web::json::value& val)
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
            ResetNodesRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchResetPoolNodesRequest::getPoolName() const
{
    return poolName_;
}

void BatchResetPoolNodesRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool BatchResetPoolNodesRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void BatchResetPoolNodesRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

ResetNodesRequest BatchResetPoolNodesRequest::getBody() const
{
    return body_;
}

void BatchResetPoolNodesRequest::setBody(const ResetNodesRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchResetPoolNodesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchResetPoolNodesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


