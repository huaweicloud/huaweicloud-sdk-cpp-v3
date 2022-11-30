

#include "huaweicloud/frs/v2/model/BatchDeleteFacesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




BatchDeleteFacesResponse::BatchDeleteFacesResponse()
{
    faceNumber_ = 0;
    faceNumberIsSet_ = false;
    faceSetId_ = "";
    faceSetIdIsSet_ = false;
    faceSetName_ = "";
    faceSetNameIsSet_ = false;
}

BatchDeleteFacesResponse::~BatchDeleteFacesResponse() = default;

void BatchDeleteFacesResponse::validate()
{
}

web::json::value BatchDeleteFacesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(faceNumberIsSet_) {
        val[utility::conversions::to_string_t("face_number")] = ModelBase::toJson(faceNumber_);
    }
    if(faceSetIdIsSet_) {
        val[utility::conversions::to_string_t("face_set_id")] = ModelBase::toJson(faceSetId_);
    }
    if(faceSetNameIsSet_) {
        val[utility::conversions::to_string_t("face_set_name")] = ModelBase::toJson(faceSetName_);
    }

    return val;
}

bool BatchDeleteFacesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("face_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("face_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaceNumber(refVal);
        }
    }
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
    return ok;
}


int32_t BatchDeleteFacesResponse::getFaceNumber() const
{
    return faceNumber_;
}

void BatchDeleteFacesResponse::setFaceNumber(int32_t value)
{
    faceNumber_ = value;
    faceNumberIsSet_ = true;
}

bool BatchDeleteFacesResponse::faceNumberIsSet() const
{
    return faceNumberIsSet_;
}

void BatchDeleteFacesResponse::unsetfaceNumber()
{
    faceNumberIsSet_ = false;
}

std::string BatchDeleteFacesResponse::getFaceSetId() const
{
    return faceSetId_;
}

void BatchDeleteFacesResponse::setFaceSetId(const std::string& value)
{
    faceSetId_ = value;
    faceSetIdIsSet_ = true;
}

bool BatchDeleteFacesResponse::faceSetIdIsSet() const
{
    return faceSetIdIsSet_;
}

void BatchDeleteFacesResponse::unsetfaceSetId()
{
    faceSetIdIsSet_ = false;
}

std::string BatchDeleteFacesResponse::getFaceSetName() const
{
    return faceSetName_;
}

void BatchDeleteFacesResponse::setFaceSetName(const std::string& value)
{
    faceSetName_ = value;
    faceSetNameIsSet_ = true;
}

bool BatchDeleteFacesResponse::faceSetNameIsSet() const
{
    return faceSetNameIsSet_;
}

void BatchDeleteFacesResponse::unsetfaceSetName()
{
    faceSetNameIsSet_ = false;
}

}
}
}
}
}


