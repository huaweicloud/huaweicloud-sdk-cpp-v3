

#include "huaweicloud/frs/v2/model/SearchFaceByFaceIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




SearchFaceByFaceIdRequest::SearchFaceByFaceIdRequest()
{
    faceSetName_ = "";
    faceSetNameIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

SearchFaceByFaceIdRequest::~SearchFaceByFaceIdRequest() = default;

void SearchFaceByFaceIdRequest::validate()
{
}

web::json::value SearchFaceByFaceIdRequest::toJson() const
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
bool SearchFaceByFaceIdRequest::fromJson(const web::json::value& val)
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
            FaceSearchFaceIdReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SearchFaceByFaceIdRequest::getFaceSetName() const
{
    return faceSetName_;
}

void SearchFaceByFaceIdRequest::setFaceSetName(const std::string& value)
{
    faceSetName_ = value;
    faceSetNameIsSet_ = true;
}

bool SearchFaceByFaceIdRequest::faceSetNameIsSet() const
{
    return faceSetNameIsSet_;
}

void SearchFaceByFaceIdRequest::unsetfaceSetName()
{
    faceSetNameIsSet_ = false;
}

std::string SearchFaceByFaceIdRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void SearchFaceByFaceIdRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool SearchFaceByFaceIdRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void SearchFaceByFaceIdRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

FaceSearchFaceIdReq SearchFaceByFaceIdRequest::getBody() const
{
    return body_;
}

void SearchFaceByFaceIdRequest::setBody(const FaceSearchFaceIdReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SearchFaceByFaceIdRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SearchFaceByFaceIdRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


