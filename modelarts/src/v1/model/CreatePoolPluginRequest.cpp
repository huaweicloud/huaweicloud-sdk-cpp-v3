

#include "huaweicloud/modelarts/v1/model/CreatePoolPluginRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreatePoolPluginRequest::CreatePoolPluginRequest()
{
    poolName_ = "";
    poolNameIsSet_ = false;
    bodyIsSet_ = false;
}

CreatePoolPluginRequest::~CreatePoolPluginRequest() = default;

void CreatePoolPluginRequest::validate()
{
}

web::json::value CreatePoolPluginRequest::toJson() const
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
bool CreatePoolPluginRequest::fromJson(const web::json::value& val)
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
            CreatePluginRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreatePoolPluginRequest::getPoolName() const
{
    return poolName_;
}

void CreatePoolPluginRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool CreatePoolPluginRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void CreatePoolPluginRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

CreatePluginRequestBody CreatePoolPluginRequest::getBody() const
{
    return body_;
}

void CreatePoolPluginRequest::setBody(const CreatePluginRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePoolPluginRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePoolPluginRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


