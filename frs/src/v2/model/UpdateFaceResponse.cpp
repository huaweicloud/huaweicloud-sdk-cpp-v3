

#include "huaweicloud/frs/v2/model/UpdateFaceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




UpdateFaceResponse::UpdateFaceResponse()
{
    faceNumber_ = 0;
    faceNumberIsSet_ = false;
    faceSetId_ = "";
    faceSetIdIsSet_ = false;
    faceSetName_ = "";
    faceSetNameIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateFaceResponse::~UpdateFaceResponse() = default;

void UpdateFaceResponse::validate()
{
}

web::json::value UpdateFaceResponse::toJson() const
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateFaceResponse::fromJson(const web::json::value& val)
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


int32_t UpdateFaceResponse::getFaceNumber() const
{
    return faceNumber_;
}

void UpdateFaceResponse::setFaceNumber(int32_t value)
{
    faceNumber_ = value;
    faceNumberIsSet_ = true;
}

bool UpdateFaceResponse::faceNumberIsSet() const
{
    return faceNumberIsSet_;
}

void UpdateFaceResponse::unsetfaceNumber()
{
    faceNumberIsSet_ = false;
}

std::string UpdateFaceResponse::getFaceSetId() const
{
    return faceSetId_;
}

void UpdateFaceResponse::setFaceSetId(const std::string& value)
{
    faceSetId_ = value;
    faceSetIdIsSet_ = true;
}

bool UpdateFaceResponse::faceSetIdIsSet() const
{
    return faceSetIdIsSet_;
}

void UpdateFaceResponse::unsetfaceSetId()
{
    faceSetIdIsSet_ = false;
}

std::string UpdateFaceResponse::getFaceSetName() const
{
    return faceSetName_;
}

void UpdateFaceResponse::setFaceSetName(const std::string& value)
{
    faceSetName_ = value;
    faceSetNameIsSet_ = true;
}

bool UpdateFaceResponse::faceSetNameIsSet() const
{
    return faceSetNameIsSet_;
}

void UpdateFaceResponse::unsetfaceSetName()
{
    faceSetNameIsSet_ = false;
}

std::string UpdateFaceResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateFaceResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateFaceResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateFaceResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


