

#include "huaweicloud/modelarts/v1/model/PatchNodePoolRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PatchNodePoolRequest::PatchNodePoolRequest()
{
    poolName_ = "";
    poolNameIsSet_ = false;
    nodepoolName_ = "";
    nodepoolNameIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

PatchNodePoolRequest::~PatchNodePoolRequest() = default;

void PatchNodePoolRequest::validate()
{
}

web::json::value PatchNodePoolRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(poolNameIsSet_) {
        val[utility::conversions::to_string_t("pool_name")] = ModelBase::toJson(poolName_);
    }
    if(nodepoolNameIsSet_) {
        val[utility::conversions::to_string_t("nodepool_name")] = ModelBase::toJson(nodepoolName_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool PatchNodePoolRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("nodepool_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodepool_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodepoolName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            PatchNodePoolRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string PatchNodePoolRequest::getPoolName() const
{
    return poolName_;
}

void PatchNodePoolRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool PatchNodePoolRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void PatchNodePoolRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

std::string PatchNodePoolRequest::getNodepoolName() const
{
    return nodepoolName_;
}

void PatchNodePoolRequest::setNodepoolName(const std::string& value)
{
    nodepoolName_ = value;
    nodepoolNameIsSet_ = true;
}

bool PatchNodePoolRequest::nodepoolNameIsSet() const
{
    return nodepoolNameIsSet_;
}

void PatchNodePoolRequest::unsetnodepoolName()
{
    nodepoolNameIsSet_ = false;
}

std::string PatchNodePoolRequest::getContentType() const
{
    return contentType_;
}

void PatchNodePoolRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool PatchNodePoolRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void PatchNodePoolRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

PatchNodePoolRequestBody PatchNodePoolRequest::getBody() const
{
    return body_;
}

void PatchNodePoolRequest::setBody(const PatchNodePoolRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool PatchNodePoolRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void PatchNodePoolRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


