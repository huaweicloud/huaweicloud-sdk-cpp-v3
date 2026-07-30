

#include "huaweicloud/modelarts/v1/model/BatchRebootPoolNodesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchRebootPoolNodesRequest::BatchRebootPoolNodesRequest()
{
    poolName_ = "";
    poolNameIsSet_ = false;
    bodyIsSet_ = false;
}

BatchRebootPoolNodesRequest::~BatchRebootPoolNodesRequest() = default;

void BatchRebootPoolNodesRequest::validate()
{
}

web::json::value BatchRebootPoolNodesRequest::toJson() const
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
bool BatchRebootPoolNodesRequest::fromJson(const web::json::value& val)
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
            BatchRebootPoolNodesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchRebootPoolNodesRequest::getPoolName() const
{
    return poolName_;
}

void BatchRebootPoolNodesRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool BatchRebootPoolNodesRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void BatchRebootPoolNodesRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

BatchRebootPoolNodesRequestBody BatchRebootPoolNodesRequest::getBody() const
{
    return body_;
}

void BatchRebootPoolNodesRequest::setBody(const BatchRebootPoolNodesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchRebootPoolNodesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchRebootPoolNodesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


