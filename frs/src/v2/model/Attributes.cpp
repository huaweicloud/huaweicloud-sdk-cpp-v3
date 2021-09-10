

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
    gender_ = "";
    genderIsSet_ = false;
    yawAngle_ = 0.0;
    yawAngleIsSet_ = false;
    rollAngle_ = 0.0;
    rollAngleIsSet_ = false;
    pitchAngle_ = 0.0;
    pitchAngleIsSet_ = false;
    hat_ = "";
    hatIsSet_ = false;
    headposeIsSet_ = false;
    age_ = 0;
    ageIsSet_ = false;
    smile_ = "";
    smileIsSet_ = false;
    mask_ = "";
    maskIsSet_ = false;
    beard_ = "";
    beardIsSet_ = false;
    skin_ = "";
    skinIsSet_ = false;
    ethnic_ = "";
    ethnicIsSet_ = false;
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
    if(genderIsSet_) {
        val[utility::conversions::to_string_t("gender")] = ModelBase::toJson(gender_);
    }
    if(yawAngleIsSet_) {
        val[utility::conversions::to_string_t("yaw_angle")] = ModelBase::toJson(yawAngle_);
    }
    if(rollAngleIsSet_) {
        val[utility::conversions::to_string_t("roll_angle")] = ModelBase::toJson(rollAngle_);
    }
    if(pitchAngleIsSet_) {
        val[utility::conversions::to_string_t("pitch_angle")] = ModelBase::toJson(pitchAngle_);
    }
    if(hatIsSet_) {
        val[utility::conversions::to_string_t("hat")] = ModelBase::toJson(hat_);
    }
    if(headposeIsSet_) {
        val[utility::conversions::to_string_t("headpose")] = ModelBase::toJson(headpose_);
    }
    if(ageIsSet_) {
        val[utility::conversions::to_string_t("age")] = ModelBase::toJson(age_);
    }
    if(smileIsSet_) {
        val[utility::conversions::to_string_t("smile")] = ModelBase::toJson(smile_);
    }
    if(maskIsSet_) {
        val[utility::conversions::to_string_t("mask")] = ModelBase::toJson(mask_);
    }
    if(beardIsSet_) {
        val[utility::conversions::to_string_t("beard")] = ModelBase::toJson(beard_);
    }
    if(skinIsSet_) {
        val[utility::conversions::to_string_t("skin")] = ModelBase::toJson(skin_);
    }
    if(ethnicIsSet_) {
        val[utility::conversions::to_string_t("ethnic")] = ModelBase::toJson(ethnic_);
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
    if(val.has_field(utility::conversions::to_string_t("gender"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gender"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGender(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("yaw_angle"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("yaw_angle"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setYawAngle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("roll_angle"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("roll_angle"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRollAngle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pitch_angle"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pitch_angle"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPitchAngle(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("headpose"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("headpose"));
        if(!fieldValue.is_null())
        {
            std::vector<double> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeadpose(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("smile"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smile"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSmile(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("skin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("skin"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSkin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ethnic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ethnic"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEthnic(refVal);
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

std::string Attributes::getGender() const
{
    return gender_;
}

void Attributes::setGender(const std::string& value)
{
    gender_ = value;
    genderIsSet_ = true;
}

bool Attributes::genderIsSet() const
{
    return genderIsSet_;
}

void Attributes::unsetgender()
{
    genderIsSet_ = false;
}

double Attributes::getYawAngle() const
{
    return yawAngle_;
}

void Attributes::setYawAngle(double value)
{
    yawAngle_ = value;
    yawAngleIsSet_ = true;
}

bool Attributes::yawAngleIsSet() const
{
    return yawAngleIsSet_;
}

void Attributes::unsetyawAngle()
{
    yawAngleIsSet_ = false;
}

double Attributes::getRollAngle() const
{
    return rollAngle_;
}

void Attributes::setRollAngle(double value)
{
    rollAngle_ = value;
    rollAngleIsSet_ = true;
}

bool Attributes::rollAngleIsSet() const
{
    return rollAngleIsSet_;
}

void Attributes::unsetrollAngle()
{
    rollAngleIsSet_ = false;
}

double Attributes::getPitchAngle() const
{
    return pitchAngle_;
}

void Attributes::setPitchAngle(double value)
{
    pitchAngle_ = value;
    pitchAngleIsSet_ = true;
}

bool Attributes::pitchAngleIsSet() const
{
    return pitchAngleIsSet_;
}

void Attributes::unsetpitchAngle()
{
    pitchAngleIsSet_ = false;
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

std::vector<double>& Attributes::getHeadpose()
{
    return headpose_;
}

void Attributes::setHeadpose(std::vector<double> value)
{
    headpose_ = value;
    headposeIsSet_ = true;
}

bool Attributes::headposeIsSet() const
{
    return headposeIsSet_;
}

void Attributes::unsetheadpose()
{
    headposeIsSet_ = false;
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

std::string Attributes::getSmile() const
{
    return smile_;
}

void Attributes::setSmile(const std::string& value)
{
    smile_ = value;
    smileIsSet_ = true;
}

bool Attributes::smileIsSet() const
{
    return smileIsSet_;
}

void Attributes::unsetsmile()
{
    smileIsSet_ = false;
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

std::string Attributes::getSkin() const
{
    return skin_;
}

void Attributes::setSkin(const std::string& value)
{
    skin_ = value;
    skinIsSet_ = true;
}

bool Attributes::skinIsSet() const
{
    return skinIsSet_;
}

void Attributes::unsetskin()
{
    skinIsSet_ = false;
}

std::string Attributes::getEthnic() const
{
    return ethnic_;
}

void Attributes::setEthnic(const std::string& value)
{
    ethnic_ = value;
    ethnicIsSet_ = true;
}

bool Attributes::ethnicIsSet() const
{
    return ethnicIsSet_;
}

void Attributes::unsetethnic()
{
    ethnicIsSet_ = false;
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


