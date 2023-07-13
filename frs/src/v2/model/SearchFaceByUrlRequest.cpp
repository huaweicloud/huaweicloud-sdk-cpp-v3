

#include "huaweicloud/frs/v2/model/SearchFaceByUrlRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




SearchFaceByUrlRequest::SearchFaceByUrlRequest()
{
    faceSetName_ = "";
    faceSetNameIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

SearchFaceByUrlRequest::~SearchFaceByUrlRequest() = default;

void SearchFaceByUrlRequest::validate()
{
}

web::json::value SearchFaceByUrlRequest::toJson() const
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

bool SearchFaceByUrlRequest::fromJson(const web::json::value& val)
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
            FaceSearchUrlReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string SearchFaceByUrlRequest::getFaceSetName() const
{
    return faceSetName_;
}

void SearchFaceByUrlRequest::setFaceSetName(const std::string& value)
{
    faceSetName_ = value;
    faceSetNameIsSet_ = true;
}

bool SearchFaceByUrlRequest::faceSetNameIsSet() const
{
    return faceSetNameIsSet_;
}

void SearchFaceByUrlRequest::unsetfaceSetName()
{
    faceSetNameIsSet_ = false;
}

std::string SearchFaceByUrlRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void SearchFaceByUrlRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool SearchFaceByUrlRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void SearchFaceByUrlRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

FaceSearchUrlReq SearchFaceByUrlRequest::getBody() const
{
    return body_;
}

void SearchFaceByUrlRequest::setBody(const FaceSearchUrlReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SearchFaceByUrlRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SearchFaceByUrlRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


