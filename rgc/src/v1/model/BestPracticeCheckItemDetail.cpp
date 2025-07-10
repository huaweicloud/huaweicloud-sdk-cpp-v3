

#include "huaweicloud/rgc/v1/model/BestPracticeCheckItemDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




BestPracticeCheckItemDetail::BestPracticeCheckItemDetail()
{
    checkItem_ = 0;
    checkItemIsSet_ = false;
    checkItemName_ = "";
    checkItemNameIsSet_ = false;
    riskDescription_ = "";
    riskDescriptionIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
    scene_ = "";
    sceneIsSet_ = false;
    riskLevel_ = "";
    riskLevelIsSet_ = false;
}

BestPracticeCheckItemDetail::~BestPracticeCheckItemDetail() = default;

void BestPracticeCheckItemDetail::validate()
{
}

web::json::value BestPracticeCheckItemDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(checkItemIsSet_) {
        val[utility::conversions::to_string_t("check_item")] = ModelBase::toJson(checkItem_);
    }
    if(checkItemNameIsSet_) {
        val[utility::conversions::to_string_t("check_item_name")] = ModelBase::toJson(checkItemName_);
    }
    if(riskDescriptionIsSet_) {
        val[utility::conversions::to_string_t("risk_description")] = ModelBase::toJson(riskDescription_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(sceneIsSet_) {
        val[utility::conversions::to_string_t("scene")] = ModelBase::toJson(scene_);
    }
    if(riskLevelIsSet_) {
        val[utility::conversions::to_string_t("risk_level")] = ModelBase::toJson(riskLevel_);
    }

    return val;
}
bool BestPracticeCheckItemDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("check_item"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("check_item"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckItem(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("check_item_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("check_item_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckItemName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("risk_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("risk_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRiskDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scene"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scene"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScene(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("risk_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("risk_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRiskLevel(refVal);
        }
    }
    return ok;
}


int32_t BestPracticeCheckItemDetail::getCheckItem() const
{
    return checkItem_;
}

void BestPracticeCheckItemDetail::setCheckItem(int32_t value)
{
    checkItem_ = value;
    checkItemIsSet_ = true;
}

bool BestPracticeCheckItemDetail::checkItemIsSet() const
{
    return checkItemIsSet_;
}

void BestPracticeCheckItemDetail::unsetcheckItem()
{
    checkItemIsSet_ = false;
}

std::string BestPracticeCheckItemDetail::getCheckItemName() const
{
    return checkItemName_;
}

void BestPracticeCheckItemDetail::setCheckItemName(const std::string& value)
{
    checkItemName_ = value;
    checkItemNameIsSet_ = true;
}

bool BestPracticeCheckItemDetail::checkItemNameIsSet() const
{
    return checkItemNameIsSet_;
}

void BestPracticeCheckItemDetail::unsetcheckItemName()
{
    checkItemNameIsSet_ = false;
}

std::string BestPracticeCheckItemDetail::getRiskDescription() const
{
    return riskDescription_;
}

void BestPracticeCheckItemDetail::setRiskDescription(const std::string& value)
{
    riskDescription_ = value;
    riskDescriptionIsSet_ = true;
}

bool BestPracticeCheckItemDetail::riskDescriptionIsSet() const
{
    return riskDescriptionIsSet_;
}

void BestPracticeCheckItemDetail::unsetriskDescription()
{
    riskDescriptionIsSet_ = false;
}

std::string BestPracticeCheckItemDetail::getResult() const
{
    return result_;
}

void BestPracticeCheckItemDetail::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool BestPracticeCheckItemDetail::resultIsSet() const
{
    return resultIsSet_;
}

void BestPracticeCheckItemDetail::unsetresult()
{
    resultIsSet_ = false;
}

std::string BestPracticeCheckItemDetail::getScene() const
{
    return scene_;
}

void BestPracticeCheckItemDetail::setScene(const std::string& value)
{
    scene_ = value;
    sceneIsSet_ = true;
}

bool BestPracticeCheckItemDetail::sceneIsSet() const
{
    return sceneIsSet_;
}

void BestPracticeCheckItemDetail::unsetscene()
{
    sceneIsSet_ = false;
}

std::string BestPracticeCheckItemDetail::getRiskLevel() const
{
    return riskLevel_;
}

void BestPracticeCheckItemDetail::setRiskLevel(const std::string& value)
{
    riskLevel_ = value;
    riskLevelIsSet_ = true;
}

bool BestPracticeCheckItemDetail::riskLevelIsSet() const
{
    return riskLevelIsSet_;
}

void BestPracticeCheckItemDetail::unsetriskLevel()
{
    riskLevelIsSet_ = false;
}

}
}
}
}
}


