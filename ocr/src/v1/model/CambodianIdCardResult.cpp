

#include "huaweicloud/ocr/v1/model/CambodianIdCardResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




CambodianIdCardResult::CambodianIdCardResult()
{
    idNumber_ = "";
    idNumberIsSet_ = false;
    nameKh_ = "";
    nameKhIsSet_ = false;
    nameEn_ = "";
    nameEnIsSet_ = false;
    birthDate_ = "";
    birthDateIsSet_ = false;
    sex_ = "";
    sexIsSet_ = false;
    height_ = "";
    heightIsSet_ = false;
    birthPlace_ = "";
    birthPlaceIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    issueDate_ = "";
    issueDateIsSet_ = false;
    expiryDate_ = "";
    expiryDateIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    machineCode1_ = "";
    machineCode1IsSet_ = false;
    machineCode2_ = "";
    machineCode2IsSet_ = false;
    machineCode3_ = "";
    machineCode3IsSet_ = false;
    portraitImage_ = "";
    portraitImageIsSet_ = false;
    portraitLocationIsSet_ = false;
    idcardType_ = "";
    idcardTypeIsSet_ = false;
    adjustedImage_ = "";
    adjustedImageIsSet_ = false;
    detectBorderIntegrityResult_ = false;
    detectBorderIntegrityResultIsSet_ = false;
    detectBlockingWithinBorderResult_ = false;
    detectBlockingWithinBorderResultIsSet_ = false;
    detectBlurResult_ = false;
    detectBlurResultIsSet_ = false;
    detectGlareResult_ = false;
    detectGlareResultIsSet_ = false;
    detectTamperingResult_ = false;
    detectTamperingResultIsSet_ = false;
    scoreInfoIsSet_ = false;
    confidenceIsSet_ = false;
}

CambodianIdCardResult::~CambodianIdCardResult() = default;

void CambodianIdCardResult::validate()
{
}

web::json::value CambodianIdCardResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idNumberIsSet_) {
        val[utility::conversions::to_string_t("id_number")] = ModelBase::toJson(idNumber_);
    }
    if(nameKhIsSet_) {
        val[utility::conversions::to_string_t("name_kh")] = ModelBase::toJson(nameKh_);
    }
    if(nameEnIsSet_) {
        val[utility::conversions::to_string_t("name_en")] = ModelBase::toJson(nameEn_);
    }
    if(birthDateIsSet_) {
        val[utility::conversions::to_string_t("birth_date")] = ModelBase::toJson(birthDate_);
    }
    if(sexIsSet_) {
        val[utility::conversions::to_string_t("sex")] = ModelBase::toJson(sex_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(birthPlaceIsSet_) {
        val[utility::conversions::to_string_t("birth_place")] = ModelBase::toJson(birthPlace_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(issueDateIsSet_) {
        val[utility::conversions::to_string_t("issue_date")] = ModelBase::toJson(issueDate_);
    }
    if(expiryDateIsSet_) {
        val[utility::conversions::to_string_t("expiry_date")] = ModelBase::toJson(expiryDate_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(machineCode1IsSet_) {
        val[utility::conversions::to_string_t("machine_code1")] = ModelBase::toJson(machineCode1_);
    }
    if(machineCode2IsSet_) {
        val[utility::conversions::to_string_t("machine_code2")] = ModelBase::toJson(machineCode2_);
    }
    if(machineCode3IsSet_) {
        val[utility::conversions::to_string_t("machine_code3")] = ModelBase::toJson(machineCode3_);
    }
    if(portraitImageIsSet_) {
        val[utility::conversions::to_string_t("portrait_image")] = ModelBase::toJson(portraitImage_);
    }
    if(portraitLocationIsSet_) {
        val[utility::conversions::to_string_t("portrait_location")] = ModelBase::toJson(portraitLocation_);
    }
    if(idcardTypeIsSet_) {
        val[utility::conversions::to_string_t("idcard_type")] = ModelBase::toJson(idcardType_);
    }
    if(adjustedImageIsSet_) {
        val[utility::conversions::to_string_t("adjusted_image")] = ModelBase::toJson(adjustedImage_);
    }
    if(detectBorderIntegrityResultIsSet_) {
        val[utility::conversions::to_string_t("detect_border_integrity_result")] = ModelBase::toJson(detectBorderIntegrityResult_);
    }
    if(detectBlockingWithinBorderResultIsSet_) {
        val[utility::conversions::to_string_t("detect_blocking_within_border_result")] = ModelBase::toJson(detectBlockingWithinBorderResult_);
    }
    if(detectBlurResultIsSet_) {
        val[utility::conversions::to_string_t("detect_blur_result")] = ModelBase::toJson(detectBlurResult_);
    }
    if(detectGlareResultIsSet_) {
        val[utility::conversions::to_string_t("detect_glare_result")] = ModelBase::toJson(detectGlareResult_);
    }
    if(detectTamperingResultIsSet_) {
        val[utility::conversions::to_string_t("detect_tampering_result")] = ModelBase::toJson(detectTamperingResult_);
    }
    if(scoreInfoIsSet_) {
        val[utility::conversions::to_string_t("score_info")] = ModelBase::toJson(scoreInfo_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }

    return val;
}
bool CambodianIdCardResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name_kh"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_kh"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameKh(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("birth_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("birth_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBirthDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("height"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("height"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("birth_place"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("birth_place"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBirthPlace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiry_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiry_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiryDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("machine_code1"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("machine_code1"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMachineCode1(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("machine_code2"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("machine_code2"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMachineCode2(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("machine_code3"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("machine_code3"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMachineCode3(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("portrait_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("portrait_image"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortraitImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("portrait_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("portrait_location"));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<int32_t>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortraitLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("idcard_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("idcard_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdcardType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("adjusted_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("adjusted_image"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdjustedImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detect_border_integrity_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_border_integrity_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectBorderIntegrityResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detect_blocking_within_border_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_blocking_within_border_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectBlockingWithinBorderResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detect_blur_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_blur_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectBlurResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detect_glare_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_glare_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectGlareResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detect_tampering_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_tampering_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectTamperingResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("score_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("score_info"));
        if(!fieldValue.is_null())
        {
            CambodianIdCardScoreInformationResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScoreInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidence"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfidence(refVal);
        }
    }
    return ok;
}


std::string CambodianIdCardResult::getIdNumber() const
{
    return idNumber_;
}

void CambodianIdCardResult::setIdNumber(const std::string& value)
{
    idNumber_ = value;
    idNumberIsSet_ = true;
}

bool CambodianIdCardResult::idNumberIsSet() const
{
    return idNumberIsSet_;
}

void CambodianIdCardResult::unsetidNumber()
{
    idNumberIsSet_ = false;
}

std::string CambodianIdCardResult::getNameKh() const
{
    return nameKh_;
}

void CambodianIdCardResult::setNameKh(const std::string& value)
{
    nameKh_ = value;
    nameKhIsSet_ = true;
}

bool CambodianIdCardResult::nameKhIsSet() const
{
    return nameKhIsSet_;
}

void CambodianIdCardResult::unsetnameKh()
{
    nameKhIsSet_ = false;
}

std::string CambodianIdCardResult::getNameEn() const
{
    return nameEn_;
}

void CambodianIdCardResult::setNameEn(const std::string& value)
{
    nameEn_ = value;
    nameEnIsSet_ = true;
}

bool CambodianIdCardResult::nameEnIsSet() const
{
    return nameEnIsSet_;
}

void CambodianIdCardResult::unsetnameEn()
{
    nameEnIsSet_ = false;
}

std::string CambodianIdCardResult::getBirthDate() const
{
    return birthDate_;
}

void CambodianIdCardResult::setBirthDate(const std::string& value)
{
    birthDate_ = value;
    birthDateIsSet_ = true;
}

bool CambodianIdCardResult::birthDateIsSet() const
{
    return birthDateIsSet_;
}

void CambodianIdCardResult::unsetbirthDate()
{
    birthDateIsSet_ = false;
}

std::string CambodianIdCardResult::getSex() const
{
    return sex_;
}

void CambodianIdCardResult::setSex(const std::string& value)
{
    sex_ = value;
    sexIsSet_ = true;
}

bool CambodianIdCardResult::sexIsSet() const
{
    return sexIsSet_;
}

void CambodianIdCardResult::unsetsex()
{
    sexIsSet_ = false;
}

std::string CambodianIdCardResult::getHeight() const
{
    return height_;
}

void CambodianIdCardResult::setHeight(const std::string& value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool CambodianIdCardResult::heightIsSet() const
{
    return heightIsSet_;
}

void CambodianIdCardResult::unsetheight()
{
    heightIsSet_ = false;
}

std::string CambodianIdCardResult::getBirthPlace() const
{
    return birthPlace_;
}

void CambodianIdCardResult::setBirthPlace(const std::string& value)
{
    birthPlace_ = value;
    birthPlaceIsSet_ = true;
}

bool CambodianIdCardResult::birthPlaceIsSet() const
{
    return birthPlaceIsSet_;
}

void CambodianIdCardResult::unsetbirthPlace()
{
    birthPlaceIsSet_ = false;
}

std::string CambodianIdCardResult::getAddress() const
{
    return address_;
}

void CambodianIdCardResult::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool CambodianIdCardResult::addressIsSet() const
{
    return addressIsSet_;
}

void CambodianIdCardResult::unsetaddress()
{
    addressIsSet_ = false;
}

std::string CambodianIdCardResult::getIssueDate() const
{
    return issueDate_;
}

void CambodianIdCardResult::setIssueDate(const std::string& value)
{
    issueDate_ = value;
    issueDateIsSet_ = true;
}

bool CambodianIdCardResult::issueDateIsSet() const
{
    return issueDateIsSet_;
}

void CambodianIdCardResult::unsetissueDate()
{
    issueDateIsSet_ = false;
}

std::string CambodianIdCardResult::getExpiryDate() const
{
    return expiryDate_;
}

void CambodianIdCardResult::setExpiryDate(const std::string& value)
{
    expiryDate_ = value;
    expiryDateIsSet_ = true;
}

bool CambodianIdCardResult::expiryDateIsSet() const
{
    return expiryDateIsSet_;
}

void CambodianIdCardResult::unsetexpiryDate()
{
    expiryDateIsSet_ = false;
}

std::string CambodianIdCardResult::getDescription() const
{
    return description_;
}

void CambodianIdCardResult::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CambodianIdCardResult::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CambodianIdCardResult::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CambodianIdCardResult::getMachineCode1() const
{
    return machineCode1_;
}

void CambodianIdCardResult::setMachineCode1(const std::string& value)
{
    machineCode1_ = value;
    machineCode1IsSet_ = true;
}

bool CambodianIdCardResult::machineCode1IsSet() const
{
    return machineCode1IsSet_;
}

void CambodianIdCardResult::unsetmachineCode1()
{
    machineCode1IsSet_ = false;
}

std::string CambodianIdCardResult::getMachineCode2() const
{
    return machineCode2_;
}

void CambodianIdCardResult::setMachineCode2(const std::string& value)
{
    machineCode2_ = value;
    machineCode2IsSet_ = true;
}

bool CambodianIdCardResult::machineCode2IsSet() const
{
    return machineCode2IsSet_;
}

void CambodianIdCardResult::unsetmachineCode2()
{
    machineCode2IsSet_ = false;
}

std::string CambodianIdCardResult::getMachineCode3() const
{
    return machineCode3_;
}

void CambodianIdCardResult::setMachineCode3(const std::string& value)
{
    machineCode3_ = value;
    machineCode3IsSet_ = true;
}

bool CambodianIdCardResult::machineCode3IsSet() const
{
    return machineCode3IsSet_;
}

void CambodianIdCardResult::unsetmachineCode3()
{
    machineCode3IsSet_ = false;
}

std::string CambodianIdCardResult::getPortraitImage() const
{
    return portraitImage_;
}

void CambodianIdCardResult::setPortraitImage(const std::string& value)
{
    portraitImage_ = value;
    portraitImageIsSet_ = true;
}

bool CambodianIdCardResult::portraitImageIsSet() const
{
    return portraitImageIsSet_;
}

void CambodianIdCardResult::unsetportraitImage()
{
    portraitImageIsSet_ = false;
}

std::vector<std::vector<int32_t>>& CambodianIdCardResult::getPortraitLocation()
{
    return portraitLocation_;
}

void CambodianIdCardResult::setPortraitLocation(const std::vector<std::vector<int32_t>>& value)
{
    portraitLocation_ = value;
    portraitLocationIsSet_ = true;
}

bool CambodianIdCardResult::portraitLocationIsSet() const
{
    return portraitLocationIsSet_;
}

void CambodianIdCardResult::unsetportraitLocation()
{
    portraitLocationIsSet_ = false;
}

std::string CambodianIdCardResult::getIdcardType() const
{
    return idcardType_;
}

void CambodianIdCardResult::setIdcardType(const std::string& value)
{
    idcardType_ = value;
    idcardTypeIsSet_ = true;
}

bool CambodianIdCardResult::idcardTypeIsSet() const
{
    return idcardTypeIsSet_;
}

void CambodianIdCardResult::unsetidcardType()
{
    idcardTypeIsSet_ = false;
}

std::string CambodianIdCardResult::getAdjustedImage() const
{
    return adjustedImage_;
}

void CambodianIdCardResult::setAdjustedImage(const std::string& value)
{
    adjustedImage_ = value;
    adjustedImageIsSet_ = true;
}

bool CambodianIdCardResult::adjustedImageIsSet() const
{
    return adjustedImageIsSet_;
}

void CambodianIdCardResult::unsetadjustedImage()
{
    adjustedImageIsSet_ = false;
}

bool CambodianIdCardResult::isDetectBorderIntegrityResult() const
{
    return detectBorderIntegrityResult_;
}

void CambodianIdCardResult::setDetectBorderIntegrityResult(bool value)
{
    detectBorderIntegrityResult_ = value;
    detectBorderIntegrityResultIsSet_ = true;
}

bool CambodianIdCardResult::detectBorderIntegrityResultIsSet() const
{
    return detectBorderIntegrityResultIsSet_;
}

void CambodianIdCardResult::unsetdetectBorderIntegrityResult()
{
    detectBorderIntegrityResultIsSet_ = false;
}

bool CambodianIdCardResult::isDetectBlockingWithinBorderResult() const
{
    return detectBlockingWithinBorderResult_;
}

void CambodianIdCardResult::setDetectBlockingWithinBorderResult(bool value)
{
    detectBlockingWithinBorderResult_ = value;
    detectBlockingWithinBorderResultIsSet_ = true;
}

bool CambodianIdCardResult::detectBlockingWithinBorderResultIsSet() const
{
    return detectBlockingWithinBorderResultIsSet_;
}

void CambodianIdCardResult::unsetdetectBlockingWithinBorderResult()
{
    detectBlockingWithinBorderResultIsSet_ = false;
}

bool CambodianIdCardResult::isDetectBlurResult() const
{
    return detectBlurResult_;
}

void CambodianIdCardResult::setDetectBlurResult(bool value)
{
    detectBlurResult_ = value;
    detectBlurResultIsSet_ = true;
}

bool CambodianIdCardResult::detectBlurResultIsSet() const
{
    return detectBlurResultIsSet_;
}

void CambodianIdCardResult::unsetdetectBlurResult()
{
    detectBlurResultIsSet_ = false;
}

bool CambodianIdCardResult::isDetectGlareResult() const
{
    return detectGlareResult_;
}

void CambodianIdCardResult::setDetectGlareResult(bool value)
{
    detectGlareResult_ = value;
    detectGlareResultIsSet_ = true;
}

bool CambodianIdCardResult::detectGlareResultIsSet() const
{
    return detectGlareResultIsSet_;
}

void CambodianIdCardResult::unsetdetectGlareResult()
{
    detectGlareResultIsSet_ = false;
}

bool CambodianIdCardResult::isDetectTamperingResult() const
{
    return detectTamperingResult_;
}

void CambodianIdCardResult::setDetectTamperingResult(bool value)
{
    detectTamperingResult_ = value;
    detectTamperingResultIsSet_ = true;
}

bool CambodianIdCardResult::detectTamperingResultIsSet() const
{
    return detectTamperingResultIsSet_;
}

void CambodianIdCardResult::unsetdetectTamperingResult()
{
    detectTamperingResultIsSet_ = false;
}

CambodianIdCardScoreInformationResult CambodianIdCardResult::getScoreInfo() const
{
    return scoreInfo_;
}

void CambodianIdCardResult::setScoreInfo(const CambodianIdCardScoreInformationResult& value)
{
    scoreInfo_ = value;
    scoreInfoIsSet_ = true;
}

bool CambodianIdCardResult::scoreInfoIsSet() const
{
    return scoreInfoIsSet_;
}

void CambodianIdCardResult::unsetscoreInfo()
{
    scoreInfoIsSet_ = false;
}

Object CambodianIdCardResult::getConfidence() const
{
    return confidence_;
}

void CambodianIdCardResult::setConfidence(const Object& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool CambodianIdCardResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void CambodianIdCardResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

}
}
}
}
}


