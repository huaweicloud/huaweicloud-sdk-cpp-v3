

#include "huaweicloud/modelarts/v1/model/PatchNodeConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PatchNodeConfigRequest::PatchNodeConfigRequest()
{
    poolName_ = "";
    poolNameIsSet_ = false;
    bodyIsSet_ = false;
}

PatchNodeConfigRequest::~PatchNodeConfigRequest() = default;

void PatchNodeConfigRequest::validate()
{
}

web::json::value PatchNodeConfigRequest::toJson() const
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
bool PatchNodeConfigRequest::fromJson(const web::json::value& val)
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
            NodeconfigUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string PatchNodeConfigRequest::getPoolName() const
{
    return poolName_;
}

void PatchNodeConfigRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool PatchNodeConfigRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void PatchNodeConfigRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

NodeconfigUpdate PatchNodeConfigRequest::getBody() const
{
    return body_;
}

void PatchNodeConfigRequest::setBody(const NodeconfigUpdate& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool PatchNodeConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void PatchNodeConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


