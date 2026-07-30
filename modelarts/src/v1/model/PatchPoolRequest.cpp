

#include "huaweicloud/modelarts/v1/model/PatchPoolRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PatchPoolRequest::PatchPoolRequest()
{
    poolName_ = "";
    poolNameIsSet_ = false;
    xModelArtsUserID_ = "";
    xModelArtsUserIDIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

PatchPoolRequest::~PatchPoolRequest() = default;

void PatchPoolRequest::validate()
{
}

web::json::value PatchPoolRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(poolNameIsSet_) {
        val[utility::conversions::to_string_t("pool_name")] = ModelBase::toJson(poolName_);
    }
    if(xModelArtsUserIDIsSet_) {
        val[utility::conversions::to_string_t("X-ModelArts-User-ID")] = ModelBase::toJson(xModelArtsUserID_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool PatchPoolRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-ModelArts-User-ID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-ModelArts-User-ID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXModelArtsUserID(refVal);
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
            PoolUpdateRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string PatchPoolRequest::getPoolName() const
{
    return poolName_;
}

void PatchPoolRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool PatchPoolRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void PatchPoolRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

std::string PatchPoolRequest::getXModelArtsUserID() const
{
    return xModelArtsUserID_;
}

void PatchPoolRequest::setXModelArtsUserID(const std::string& value)
{
    xModelArtsUserID_ = value;
    xModelArtsUserIDIsSet_ = true;
}

bool PatchPoolRequest::xModelArtsUserIDIsSet() const
{
    return xModelArtsUserIDIsSet_;
}

void PatchPoolRequest::unsetxModelArtsUserID()
{
    xModelArtsUserIDIsSet_ = false;
}

std::string PatchPoolRequest::getContentType() const
{
    return contentType_;
}

void PatchPoolRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool PatchPoolRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void PatchPoolRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

PoolUpdateRequest PatchPoolRequest::getBody() const
{
    return body_;
}

void PatchPoolRequest::setBody(const PoolUpdateRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool PatchPoolRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void PatchPoolRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


