

#include "huaweicloud/frs/v2/model/SearchFaceByFileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




SearchFaceByFileRequest::SearchFaceByFileRequest()
{
    faceSetName_ = "";
    faceSetNameIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

SearchFaceByFileRequest::~SearchFaceByFileRequest() = default;

void SearchFaceByFileRequest::validate()
{
}

web::json::value SearchFaceByFileRequest::toJson() const
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
bool SearchFaceByFileRequest::fromJson(const web::json::value& val)
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
            SearchFaceByFileRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SearchFaceByFileRequest::getFaceSetName() const
{
    return faceSetName_;
}

void SearchFaceByFileRequest::setFaceSetName(const std::string& value)
{
    faceSetName_ = value;
    faceSetNameIsSet_ = true;
}

bool SearchFaceByFileRequest::faceSetNameIsSet() const
{
    return faceSetNameIsSet_;
}

void SearchFaceByFileRequest::unsetfaceSetName()
{
    faceSetNameIsSet_ = false;
}

std::string SearchFaceByFileRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void SearchFaceByFileRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool SearchFaceByFileRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void SearchFaceByFileRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

SearchFaceByFileRequestBody SearchFaceByFileRequest::getBody() const
{
    return body_;
}

void SearchFaceByFileRequest::setBody(const SearchFaceByFileRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SearchFaceByFileRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SearchFaceByFileRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


