

#include "huaweicloud/frs/v2/model/Attributes.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




Attributes::Attributes()
{
    dressIsSet_ = false;
    glass_ = "";
    glassIsSet_ = false;
    hat_ = "";
    hatIsSet_ = false;
    age_ = 0;
    ageIsSet_ = false;
    mask_ = "";
    maskIsSet_ = false;
    beard_ = "";
    beardIsSet_ = false;
    phototype_ = "";
    phototypeIsSet_ = false;
    qualityIsSet_ = false;
    hair_ = "";
    hairIsSet_ = false;
    expressionIsSet_ = false;
    faceAngle_ = 0;
    faceAngleIsSet_ = false;
}

Attributes::~Attributes() = default;

void Attributes::validate()
{
}

web::json::value Attributes::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dressIsSet_) {
        val[utility::conversions::to_string_t("dress")] = ModelBase::toJson(dress_);
    }
    if(glassIsSet_) {
        val[utility::conversions::to_string_t("glass")] = ModelBase::toJson(glass_);
    }
    if(hatIsSet_) {
        val[utility::conversions::to_string_t("hat")] = ModelBase::toJson(hat_);
    }
    if(ageIsSet_) {
        val[utility::conversions::to_string_t("age")] = ModelBase::toJson(age_);
    }
    if(maskIsSet_) {
        val[utility::conversions::to_string_t("mask")] = ModelBase::toJson(mask_);
    }
    if(beardIsSet_) {
        val[utility::conversions::to_string_t("beard")] = ModelBase::toJson(beard_);
    }
    if(phototypeIsSet_) {
        val[utility::conversions::to_string_t("phototype")] = ModelBase::toJson(phototype_);
    }
    if(qualityIsSet_) {
        val[utility::conversions::to_string_t("quality")] = ModelBase::toJson(quality_);
    }
    if(hairIsSet_) {
        val[utility::conversions::to_string_t("hair")] = ModelBase::toJson(hair_);
    }
    if(expressionIsSet_) {
        val[utility::conversions::to_string_t("expression")] = ModelBase::toJson(expression_);
    }
    if(faceAngleIsSet_) {
        val[utility::conversions::to_string_t("face_angle")] = ModelBase::toJson(faceAngle_);
    }

    return val;
}

bool Attributes::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dress"));
        if(!fieldValue.is_null())
        {
            Dress refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("glass"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("glass"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlass(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hat"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hat"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("age"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("age"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAge(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mask"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mask"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMask(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("beard"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("beard"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeard(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("phototype"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phototype"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhototype(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quality"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quality"));
        if(!fieldValue.is_null())
        {
            FaceQuality refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuality(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hair"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hair"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHair(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expression"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expression"));
        if(!fieldValue.is_null())
        {
            Attributes_expression refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpression(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("face_angle"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("face_angle"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaceAngle(refVal);
        }
    }
    return ok;
}


Dress Attributes::getDress() const
{
    return dress_;
}

void Attributes::setDress(const Dress& value)
{
    dress_ = value;
    dressIsSet_ = true;
}

bool Attributes::dressIsSet() const
{
    return dressIsSet_;
}

void Attributes::unsetdress()
{
    dressIsSet_ = false;
}

std::string Attributes::getGlass() const
{
    return glass_;
}

void Attributes::setGlass(const std::string& value)
{
    glass_ = value;
    glassIsSet_ = true;
}

bool Attributes::glassIsSet() const
{
    return glassIsSet_;
}

void Attributes::unsetglass()
{
    glassIsSet_ = false;
}

std::string Attributes::getHat() const
{
    return hat_;
}

void Attributes::setHat(const std::string& value)
{
    hat_ = value;
    hatIsSet_ = true;
}

bool Attributes::hatIsSet() const
{
    return hatIsSet_;
}

void Attributes::unsethat()
{
    hatIsSet_ = false;
}

int32_t Attributes::getAge() const
{
    return age_;
}

void Attributes::setAge(int32_t value)
{
    age_ = value;
    ageIsSet_ = true;
}

bool Attributes::ageIsSet() const
{
    return ageIsSet_;
}

void Attributes::unsetage()
{
    ageIsSet_ = false;
}

std::string Attributes::getMask() const
{
    return mask_;
}

void Attributes::setMask(const std::string& value)
{
    mask_ = value;
    maskIsSet_ = true;
}

bool Attributes::maskIsSet() const
{
    return maskIsSet_;
}

void Attributes::unsetmask()
{
    maskIsSet_ = false;
}

std::string Attributes::getBeard() const
{
    return beard_;
}

void Attributes::setBeard(const std::string& value)
{
    beard_ = value;
    beardIsSet_ = true;
}

bool Attributes::beardIsSet() const
{
    return beardIsSet_;
}

void Attributes::unsetbeard()
{
    beardIsSet_ = false;
}

std::string Attributes::getPhototype() const
{
    return phototype_;
}

void Attributes::setPhototype(const std::string& value)
{
    phototype_ = value;
    phototypeIsSet_ = true;
}

bool Attributes::phototypeIsSet() const
{
    return phototypeIsSet_;
}

void Attributes::unsetphototype()
{
    phototypeIsSet_ = false;
}

FaceQuality Attributes::getQuality() const
{
    return quality_;
}

void Attributes::setQuality(const FaceQuality& value)
{
    quality_ = value;
    qualityIsSet_ = true;
}

bool Attributes::qualityIsSet() const
{
    return qualityIsSet_;
}

void Attributes::unsetquality()
{
    qualityIsSet_ = false;
}

std::string Attributes::getHair() const
{
    return hair_;
}

void Attributes::setHair(const std::string& value)
{
    hair_ = value;
    hairIsSet_ = true;
}

bool Attributes::hairIsSet() const
{
    return hairIsSet_;
}

void Attributes::unsethair()
{
    hairIsSet_ = false;
}

Attributes_expression Attributes::getExpression() const
{
    return expression_;
}

void Attributes::setExpression(const Attributes_expression& value)
{
    expression_ = value;
    expressionIsSet_ = true;
}

bool Attributes::expressionIsSet() const
{
    return expressionIsSet_;
}

void Attributes::unsetexpression()
{
    expressionIsSet_ = false;
}

int32_t Attributes::getFaceAngle() const
{
    return faceAngle_;
}

void Attributes::setFaceAngle(int32_t value)
{
    faceAngle_ = value;
    faceAngleIsSet_ = true;
}

bool Attributes::faceAngleIsSet() const
{
    return faceAngleIsSet_;
}

void Attributes::unsetfaceAngle()
{
    faceAngleIsSet_ = false;
}

}
}
}
}
}


