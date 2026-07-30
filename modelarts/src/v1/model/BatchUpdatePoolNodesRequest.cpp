

#include "huaweicloud/modelarts/v1/model/BatchUpdatePoolNodesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchUpdatePoolNodesRequest::BatchUpdatePoolNodesRequest()
{
    poolName_ = "";
    poolNameIsSet_ = false;
    bodyIsSet_ = false;
}

BatchUpdatePoolNodesRequest::~BatchUpdatePoolNodesRequest() = default;

void BatchUpdatePoolNodesRequest::validate()
{
}

web::json::value BatchUpdatePoolNodesRequest::toJson() const
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
bool BatchUpdatePoolNodesRequest::fromJson(const web::json::value& val)
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
            BatchUpdatePoolNodesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchUpdatePoolNodesRequest::getPoolName() const
{
    return poolName_;
}

void BatchUpdatePoolNodesRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool BatchUpdatePoolNodesRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void BatchUpdatePoolNodesRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

BatchUpdatePoolNodesRequestBody BatchUpdatePoolNodesRequest::getBody() const
{
    return body_;
}

void BatchUpdatePoolNodesRequest::setBody(const BatchUpdatePoolNodesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUpdatePoolNodesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUpdatePoolNodesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


