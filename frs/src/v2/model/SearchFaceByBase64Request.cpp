

#include "huaweicloud/frs/v2/model/SearchFaceByBase64Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




SearchFaceByBase64Request::SearchFaceByBase64Request()
{
    faceSetName_ = "";
    faceSetNameIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

SearchFaceByBase64Request::~SearchFaceByBase64Request() = default;

void SearchFaceByBase64Request::validate()
{
}

web::json::value SearchFaceByBase64Request::toJson() const
{
    web::json::value val = web::json::value::object();

    if(faceSetNameIsSet_) {
        val[utility::conversions::to_string_t("face_set_name")] = ModelBase::toJson(faceSetName_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("Enterprise-Project-Id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SearchFaceByBase64Request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("face_set_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("face_set_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaceSetName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Enterprise-Project-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Enterprise-Project-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            FaceSearchBase64Req refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SearchFaceByBase64Request::getFaceSetName() const
{
    return faceSetName_;
}

void SearchFaceByBase64Request::setFaceSetName(const std::string& value)
{
    faceSetName_ = value;
    faceSetNameIsSet_ = true;
}

bool SearchFaceByBase64Request::faceSetNameIsSet() const
{
    return faceSetNameIsSet_;
}

void SearchFaceByBase64Request::unsetfaceSetName()
{
    faceSetNameIsSet_ = false;
}

std::string SearchFaceByBase64Request::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void SearchFaceByBase64Request::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool SearchFaceByBase64Request::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void SearchFaceByBase64Request::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

FaceSearchBase64Req SearchFaceByBase64Request::getBody() const
{
    return body_;
}

void SearchFaceByBase64Request::setBody(const FaceSearchBase64Req& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SearchFaceByBase64Request::bodyIsSet() const
{
    return bodyIsSet_;
}

void SearchFaceByBase64Request::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


