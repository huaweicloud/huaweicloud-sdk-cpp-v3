

#include "huaweicloud/frs/v2/model/BatchDeleteFacesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




BatchDeleteFacesRequest::BatchDeleteFacesRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    faceSetName_ = "";
    faceSetNameIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteFacesRequest::~BatchDeleteFacesRequest() = default;

void BatchDeleteFacesRequest::validate()
{
}

web::json::value BatchDeleteFacesRequest::toJson() const
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
bool BatchDeleteFacesRequest::fromJson(const web::json::value& val)
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
            DeleteFacesBatchReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteFacesRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void BatchDeleteFacesRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool BatchDeleteFacesRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void BatchDeleteFacesRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string BatchDeleteFacesRequest::getFaceSetName() const
{
    return faceSetName_;
}

void BatchDeleteFacesRequest::setFaceSetName(const std::string& value)
{
    faceSetName_ = value;
    faceSetNameIsSet_ = true;
}

bool BatchDeleteFacesRequest::faceSetNameIsSet() const
{
    return faceSetNameIsSet_;
}

void BatchDeleteFacesRequest::unsetfaceSetName()
{
    faceSetNameIsSet_ = false;
}

DeleteFacesBatchReq BatchDeleteFacesRequest::getBody() const
{
    return body_;
}

void BatchDeleteFacesRequest::setBody(const DeleteFacesBatchReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteFacesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteFacesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


