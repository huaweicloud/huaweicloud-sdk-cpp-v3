

#include "huaweicloud/modelarts/v1/model/BatchBindPoolNodesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchBindPoolNodesRequest::BatchBindPoolNodesRequest()
{
    poolName_ = "";
    poolNameIsSet_ = false;
    bodyIsSet_ = false;
}

BatchBindPoolNodesRequest::~BatchBindPoolNodesRequest() = default;

void BatchBindPoolNodesRequest::validate()
{
}

web::json::value BatchBindPoolNodesRequest::toJson() const
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
bool BatchBindPoolNodesRequest::fromJson(const web::json::value& val)
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
            BatchBindPoolNodesReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchBindPoolNodesRequest::getPoolName() const
{
    return poolName_;
}

void BatchBindPoolNodesRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool BatchBindPoolNodesRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void BatchBindPoolNodesRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

BatchBindPoolNodesReq BatchBindPoolNodesRequest::getBody() const
{
    return body_;
}

void BatchBindPoolNodesRequest::setBody(const BatchBindPoolNodesReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchBindPoolNodesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchBindPoolNodesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


