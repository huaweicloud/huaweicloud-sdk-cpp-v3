

#include "huaweicloud/modelarts/v1/model/BatchDeletePoolTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchDeletePoolTagsRequest::BatchDeletePoolTagsRequest()
{
    poolName_ = "";
    poolNameIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeletePoolTagsRequest::~BatchDeletePoolTagsRequest() = default;

void BatchDeletePoolTagsRequest::validate()
{
}

web::json::value BatchDeletePoolTagsRequest::toJson() const
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
bool BatchDeletePoolTagsRequest::fromJson(const web::json::value& val)
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
            DeleteTagRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeletePoolTagsRequest::getPoolName() const
{
    return poolName_;
}

void BatchDeletePoolTagsRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool BatchDeletePoolTagsRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void BatchDeletePoolTagsRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

DeleteTagRequest BatchDeletePoolTagsRequest::getBody() const
{
    return body_;
}

void BatchDeletePoolTagsRequest::setBody(const DeleteTagRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeletePoolTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeletePoolTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


