

#include "huaweicloud/frs/v2/model/UpdateFaceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




UpdateFaceRequest::UpdateFaceRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    faceSetName_ = "";
    faceSetNameIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateFaceRequest::~UpdateFaceRequest() = default;

void UpdateFaceRequest::validate()
{
}

web::json::value UpdateFaceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("Enterprise-Project-Id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(faceSetNameIsSet_) {
        val[utility::conversions::to_string_t("face_set_name")] = ModelBase::toJson(faceSetName_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateFaceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Enterprise-Project-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Enterprise-Project-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("face_set_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("face_set_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaceSetName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateFaceReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateFaceRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateFaceRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateFaceRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateFaceRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string UpdateFaceRequest::getFaceSetName() const
{
    return faceSetName_;
}

void UpdateFaceRequest::setFaceSetName(const std::string& value)
{
    faceSetName_ = value;
    faceSetNameIsSet_ = true;
}

bool UpdateFaceRequest::faceSetNameIsSet() const
{
    return faceSetNameIsSet_;
}

void UpdateFaceRequest::unsetfaceSetName()
{
    faceSetNameIsSet_ = false;
}

UpdateFaceReq UpdateFaceRequest::getBody() const
{
    return body_;
}

void UpdateFaceRequest::setBody(const UpdateFaceReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateFaceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateFaceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


