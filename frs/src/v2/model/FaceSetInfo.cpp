

#include "huaweicloud/frs/v2/model/FaceSetInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




FaceSetInfo::FaceSetInfo()
{
    faceNumber_ = 0;
    faceNumberIsSet_ = false;
    externalFieldsIsSet_ = false;
    faceSetId_ = "";
    faceSetIdIsSet_ = false;
    faceSetName_ = "";
    faceSetNameIsSet_ = false;
    createDate_ = "";
    createDateIsSet_ = false;
    faceSetCapacity_ = 0;
    faceSetCapacityIsSet_ = false;
}

FaceSetInfo::~FaceSetInfo() = default;

void FaceSetInfo::validate()
{
}

web::json::value FaceSetInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(faceNumberIsSet_) {
        val[utility::conversions::to_string_t("face_number")] = ModelBase::toJson(faceNumber_);
    }
    if(externalFieldsIsSet_) {
        val[utility::conversions::to_string_t("external_fields")] = ModelBase::toJson(externalFields_);
    }
    if(faceSetIdIsSet_) {
        val[utility::conversions::to_string_t("face_set_id")] = ModelBase::toJson(faceSetId_);
    }
    if(faceSetNameIsSet_) {
        val[utility::conversions::to_string_t("face_set_name")] = ModelBase::toJson(faceSetName_);
    }
    if(createDateIsSet_) {
        val[utility::conversions::to_string_t("create_date")] = ModelBase::toJson(createDate_);
    }
    if(faceSetCapacityIsSet_) {
        val[utility::conversions::to_string_t("face_set_capacity")] = ModelBase::toJson(faceSetCapacity_);
    }

    return val;
}

bool FaceSetInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("external_fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("external_fields"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExternalFields(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("face_set_capacity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("face_set_capacity"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaceSetCapacity(refVal);
        }
    }
    return ok;
}


int32_t FaceSetInfo::getFaceNumber() const
{
    return faceNumber_;
}

void FaceSetInfo::setFaceNumber(int32_t value)
{
    faceNumber_ = value;
    faceNumberIsSet_ = true;
}

bool FaceSetInfo::faceNumberIsSet() const
{
    return faceNumberIsSet_;
}

void FaceSetInfo::unsetfaceNumber()
{
    faceNumberIsSet_ = false;
}

Object FaceSetInfo::getExternalFields() const
{
    return externalFields_;
}

void FaceSetInfo::setExternalFields(const Object& value)
{
    externalFields_ = value;
    externalFieldsIsSet_ = true;
}

bool FaceSetInfo::externalFieldsIsSet() const
{
    return externalFieldsIsSet_;
}

void FaceSetInfo::unsetexternalFields()
{
    externalFieldsIsSet_ = false;
}

std::string FaceSetInfo::getFaceSetId() const
{
    return faceSetId_;
}

void FaceSetInfo::setFaceSetId(const std::string& value)
{
    faceSetId_ = value;
    faceSetIdIsSet_ = true;
}

bool FaceSetInfo::faceSetIdIsSet() const
{
    return faceSetIdIsSet_;
}

void FaceSetInfo::unsetfaceSetId()
{
    faceSetIdIsSet_ = false;
}

std::string FaceSetInfo::getFaceSetName() const
{
    return faceSetName_;
}

void FaceSetInfo::setFaceSetName(const std::string& value)
{
    faceSetName_ = value;
    faceSetNameIsSet_ = true;
}

bool FaceSetInfo::faceSetNameIsSet() const
{
    return faceSetNameIsSet_;
}

void FaceSetInfo::unsetfaceSetName()
{
    faceSetNameIsSet_ = false;
}

std::string FaceSetInfo::getCreateDate() const
{
    return createDate_;
}

void FaceSetInfo::setCreateDate(const std::string& value)
{
    createDate_ = value;
    createDateIsSet_ = true;
}

bool FaceSetInfo::createDateIsSet() const
{
    return createDateIsSet_;
}

void FaceSetInfo::unsetcreateDate()
{
    createDateIsSet_ = false;
}

int32_t FaceSetInfo::getFaceSetCapacity() const
{
    return faceSetCapacity_;
}

void FaceSetInfo::setFaceSetCapacity(int32_t value)
{
    faceSetCapacity_ = value;
    faceSetCapacityIsSet_ = true;
}

bool FaceSetInfo::faceSetCapacityIsSet() const
{
    return faceSetCapacityIsSet_;
}

void FaceSetInfo::unsetfaceSetCapacity()
{
    faceSetCapacityIsSet_ = false;
}

}
}
}
}
}


