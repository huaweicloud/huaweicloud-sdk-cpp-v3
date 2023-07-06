

#include "huaweicloud/frs/v2/model/AddFacesByBase64Request.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




AddFacesByBase64Request::AddFacesByBase64Request()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    faceSetName_ = "";
    faceSetNameIsSet_ = false;
    bodyIsSet_ = false;
}

AddFacesByBase64Request::~AddFacesByBase64Request() = default;

void AddFacesByBase64Request::validate()
{
}

web::json::value AddFacesByBase64Request::toJson() const
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

bool AddFacesByBase64Request::fromJson(const web::json::value& val)
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
            AddFacesBase64Req refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string AddFacesByBase64Request::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void AddFacesByBase64Request::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool AddFacesByBase64Request::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void AddFacesByBase64Request::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string AddFacesByBase64Request::getFaceSetName() const
{
    return faceSetName_;
}

void AddFacesByBase64Request::setFaceSetName(const std::string& value)
{
    faceSetName_ = value;
    faceSetNameIsSet_ = true;
}

bool AddFacesByBase64Request::faceSetNameIsSet() const
{
    return faceSetNameIsSet_;
}

void AddFacesByBase64Request::unsetfaceSetName()
{
    faceSetNameIsSet_ = false;
}

AddFacesBase64Req AddFacesByBase64Request::getBody() const
{
    return body_;
}

void AddFacesByBase64Request::setBody(const AddFacesBase64Req& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddFacesByBase64Request::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddFacesByBase64Request::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


