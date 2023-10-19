

#include "huaweicloud/frs/v2/model/AddFacesByUrlResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




AddFacesByUrlResponse::AddFacesByUrlResponse()
{
    faceSetId_ = "";
    faceSetIdIsSet_ = false;
    faceSetName_ = "";
    faceSetNameIsSet_ = false;
    facesIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

AddFacesByUrlResponse::~AddFacesByUrlResponse() = default;

void AddFacesByUrlResponse::validate()
{
}

web::json::value AddFacesByUrlResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(faceSetIdIsSet_) {
        val[utility::conversions::to_string_t("face_set_id")] = ModelBase::toJson(faceSetId_);
    }
    if(faceSetNameIsSet_) {
        val[utility::conversions::to_string_t("face_set_name")] = ModelBase::toJson(faceSetName_);
    }
    if(facesIsSet_) {
        val[utility::conversions::to_string_t("faces")] = ModelBase::toJson(faces_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool AddFacesByUrlResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("face_set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("face_set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaceSetId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("faces"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("faces"));
        if(!fieldValue.is_null())
        {
            std::vector<FaceSetFace> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaces(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string AddFacesByUrlResponse::getFaceSetId() const
{
    return faceSetId_;
}

void AddFacesByUrlResponse::setFaceSetId(const std::string& value)
{
    faceSetId_ = value;
    faceSetIdIsSet_ = true;
}

bool AddFacesByUrlResponse::faceSetIdIsSet() const
{
    return faceSetIdIsSet_;
}

void AddFacesByUrlResponse::unsetfaceSetId()
{
    faceSetIdIsSet_ = false;
}

std::string AddFacesByUrlResponse::getFaceSetName() const
{
    return faceSetName_;
}

void AddFacesByUrlResponse::setFaceSetName(const std::string& value)
{
    faceSetName_ = value;
    faceSetNameIsSet_ = true;
}

bool AddFacesByUrlResponse::faceSetNameIsSet() const
{
    return faceSetNameIsSet_;
}

void AddFacesByUrlResponse::unsetfaceSetName()
{
    faceSetNameIsSet_ = false;
}

std::vector<FaceSetFace>& AddFacesByUrlResponse::getFaces()
{
    return faces_;
}

void AddFacesByUrlResponse::setFaces(const std::vector<FaceSetFace>& value)
{
    faces_ = value;
    facesIsSet_ = true;
}

bool AddFacesByUrlResponse::facesIsSet() const
{
    return facesIsSet_;
}

void AddFacesByUrlResponse::unsetfaces()
{
    facesIsSet_ = false;
}

std::string AddFacesByUrlResponse::getXRequestId() const
{
    return xRequestId_;
}

void AddFacesByUrlResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool AddFacesByUrlResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void AddFacesByUrlResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


