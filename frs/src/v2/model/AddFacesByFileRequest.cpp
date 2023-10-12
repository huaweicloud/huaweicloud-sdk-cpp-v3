

#include "huaweicloud/frs/v2/model/AddFacesByFileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




AddFacesByFileRequest::AddFacesByFileRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    faceSetName_ = "";
    faceSetNameIsSet_ = false;
    bodyIsSet_ = false;
}

AddFacesByFileRequest::~AddFacesByFileRequest() = default;

void AddFacesByFileRequest::validate()
{
}

web::json::value AddFacesByFileRequest::toJson() const
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
bool AddFacesByFileRequest::fromJson(const web::json::value& val)
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
            AddFacesByFileRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddFacesByFileRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void AddFacesByFileRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool AddFacesByFileRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void AddFacesByFileRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string AddFacesByFileRequest::getFaceSetName() const
{
    return faceSetName_;
}

void AddFacesByFileRequest::setFaceSetName(const std::string& value)
{
    faceSetName_ = value;
    faceSetNameIsSet_ = true;
}

bool AddFacesByFileRequest::faceSetNameIsSet() const
{
    return faceSetNameIsSet_;
}

void AddFacesByFileRequest::unsetfaceSetName()
{
    faceSetNameIsSet_ = false;
}

AddFacesByFileRequestBody AddFacesByFileRequest::getBody() const
{
    return body_;
}

void AddFacesByFileRequest::setBody(const AddFacesByFileRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddFacesByFileRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddFacesByFileRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


