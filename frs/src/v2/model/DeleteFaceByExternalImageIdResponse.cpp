

#include "huaweicloud/frs/v2/model/DeleteFaceByExternalImageIdResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DeleteFaceByExternalImageIdResponse::DeleteFaceByExternalImageIdResponse()
{
    faceNumber_ = 0;
    faceNumberIsSet_ = false;
    faceSetId_ = "";
    faceSetIdIsSet_ = false;
    faceSetName_ = "";
    faceSetNameIsSet_ = false;
}

DeleteFaceByExternalImageIdResponse::~DeleteFaceByExternalImageIdResponse() = default;

void DeleteFaceByExternalImageIdResponse::validate()
{
}

web::json::value DeleteFaceByExternalImageIdResponse::toJson() const
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

bool DeleteFaceByExternalImageIdResponse::fromJson(const web::json::value& val)
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


int32_t DeleteFaceByExternalImageIdResponse::getFaceNumber() const
{
    return faceNumber_;
}

void DeleteFaceByExternalImageIdResponse::setFaceNumber(int32_t value)
{
    faceNumber_ = value;
    faceNumberIsSet_ = true;
}

bool DeleteFaceByExternalImageIdResponse::faceNumberIsSet() const
{
    return faceNumberIsSet_;
}

void DeleteFaceByExternalImageIdResponse::unsetfaceNumber()
{
    faceNumberIsSet_ = false;
}

std::string DeleteFaceByExternalImageIdResponse::getFaceSetId() const
{
    return faceSetId_;
}

void DeleteFaceByExternalImageIdResponse::setFaceSetId(const std::string& value)
{
    faceSetId_ = value;
    faceSetIdIsSet_ = true;
}

bool DeleteFaceByExternalImageIdResponse::faceSetIdIsSet() const
{
    return faceSetIdIsSet_;
}

void DeleteFaceByExternalImageIdResponse::unsetfaceSetId()
{
    faceSetIdIsSet_ = false;
}

std::string DeleteFaceByExternalImageIdResponse::getFaceSetName() const
{
    return faceSetName_;
}

void DeleteFaceByExternalImageIdResponse::setFaceSetName(const std::string& value)
{
    faceSetName_ = value;
    faceSetNameIsSet_ = true;
}

bool DeleteFaceByExternalImageIdResponse::faceSetNameIsSet() const
{
    return faceSetNameIsSet_;
}

void DeleteFaceByExternalImageIdResponse::unsetfaceSetName()
{
    faceSetNameIsSet_ = false;
}

}
}
}
}
}


