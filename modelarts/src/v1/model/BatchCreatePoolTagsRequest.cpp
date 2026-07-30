

#include "huaweicloud/modelarts/v1/model/BatchCreatePoolTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchCreatePoolTagsRequest::BatchCreatePoolTagsRequest()
{
    poolName_ = "";
    poolNameIsSet_ = false;
    bodyIsSet_ = false;
}

BatchCreatePoolTagsRequest::~BatchCreatePoolTagsRequest() = default;

void BatchCreatePoolTagsRequest::validate()
{
}

web::json::value BatchCreatePoolTagsRequest::toJson() const
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
bool BatchCreatePoolTagsRequest::fromJson(const web::json::value& val)
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
            CreateTagRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchCreatePoolTagsRequest::getPoolName() const
{
    return poolName_;
}

void BatchCreatePoolTagsRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool BatchCreatePoolTagsRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void BatchCreatePoolTagsRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

CreateTagRequest BatchCreatePoolTagsRequest::getBody() const
{
    return body_;
}

void BatchCreatePoolTagsRequest::setBody(const CreateTagRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreatePoolTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreatePoolTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


