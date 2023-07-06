

#include "huaweicloud/frs/v2/model/DeleteFaceByExternalImageIdRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DeleteFaceByExternalImageIdRequest::DeleteFaceByExternalImageIdRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    faceSetName_ = "";
    faceSetNameIsSet_ = false;
    externalImageId_ = "";
    externalImageIdIsSet_ = false;
}

DeleteFaceByExternalImageIdRequest::~DeleteFaceByExternalImageIdRequest() = default;

void DeleteFaceByExternalImageIdRequest::validate()
{
}

web::json::value DeleteFaceByExternalImageIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("Enterprise-Project-Id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(faceSetNameIsSet_) {
        val[utility::conversions::to_string_t("face_set_name")] = ModelBase::toJson(faceSetName_);
    }
    if(externalImageIdIsSet_) {
        val[utility::conversions::to_string_t("external_image_id")] = ModelBase::toJson(externalImageId_);
    }

    return val;
}

bool DeleteFaceByExternalImageIdRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("external_image_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("external_image_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExternalImageId(refVal);
        }
    }
    return ok;
}

std::string DeleteFaceByExternalImageIdRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DeleteFaceByExternalImageIdRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DeleteFaceByExternalImageIdRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DeleteFaceByExternalImageIdRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string DeleteFaceByExternalImageIdRequest::getFaceSetName() const
{
    return faceSetName_;
}

void DeleteFaceByExternalImageIdRequest::setFaceSetName(const std::string& value)
{
    faceSetName_ = value;
    faceSetNameIsSet_ = true;
}

bool DeleteFaceByExternalImageIdRequest::faceSetNameIsSet() const
{
    return faceSetNameIsSet_;
}

void DeleteFaceByExternalImageIdRequest::unsetfaceSetName()
{
    faceSetNameIsSet_ = false;
}

std::string DeleteFaceByExternalImageIdRequest::getExternalImageId() const
{
    return externalImageId_;
}

void DeleteFaceByExternalImageIdRequest::setExternalImageId(const std::string& value)
{
    externalImageId_ = value;
    externalImageIdIsSet_ = true;
}

bool DeleteFaceByExternalImageIdRequest::externalImageIdIsSet() const
{
    return externalImageIdIsSet_;
}

void DeleteFaceByExternalImageIdRequest::unsetexternalImageId()
{
    externalImageIdIsSet_ = false;
}

}
}
}
}
}


