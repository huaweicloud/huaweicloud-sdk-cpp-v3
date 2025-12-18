

#include "huaweicloud/meeting/v1/model/QueryDeviceTypeResultDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




QueryDeviceTypeResultDTO::QueryDeviceTypeResultDTO()
{
    type_ = "";
    typeIsSet_ = false;
    model_ = "";
    modelIsSet_ = false;
    enableActiveCode_ = false;
    enableActiveCodeIsSet_ = false;
    resolution_ = "";
    resolutionIsSet_ = false;
    supportProjectionCode_ = false;
    supportProjectionCodeIsSet_ = false;
    supportSVC_ = false;
    supportSVCIsSet_ = false;
}

QueryDeviceTypeResultDTO::~QueryDeviceTypeResultDTO() = default;

void QueryDeviceTypeResultDTO::validate()
{
}

web::json::value QueryDeviceTypeResultDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(modelIsSet_) {
        val[utility::conversions::to_string_t("model")] = ModelBase::toJson(model_);
    }
    if(enableActiveCodeIsSet_) {
        val[utility::conversions::to_string_t("enableActiveCode")] = ModelBase::toJson(enableActiveCode_);
    }
    if(resolutionIsSet_) {
        val[utility::conversions::to_string_t("resolution")] = ModelBase::toJson(resolution_);
    }
    if(supportProjectionCodeIsSet_) {
        val[utility::conversions::to_string_t("supportProjectionCode")] = ModelBase::toJson(supportProjectionCode_);
    }
    if(supportSVCIsSet_) {
        val[utility::conversions::to_string_t("supportSVC")] = ModelBase::toJson(supportSVC_);
    }

    return val;
}
bool QueryDeviceTypeResultDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enableActiveCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enableActiveCode"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableActiveCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resolution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resolution"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResolution(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("supportProjectionCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("supportProjectionCode"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportProjectionCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("supportSVC"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("supportSVC"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportSVC(refVal);
        }
    }
    return ok;
}


std::string QueryDeviceTypeResultDTO::getType() const
{
    return type_;
}

void QueryDeviceTypeResultDTO::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool QueryDeviceTypeResultDTO::typeIsSet() const
{
    return typeIsSet_;
}

void QueryDeviceTypeResultDTO::unsettype()
{
    typeIsSet_ = false;
}

std::string QueryDeviceTypeResultDTO::getModel() const
{
    return model_;
}

void QueryDeviceTypeResultDTO::setModel(const std::string& value)
{
    model_ = value;
    modelIsSet_ = true;
}

bool QueryDeviceTypeResultDTO::modelIsSet() const
{
    return modelIsSet_;
}

void QueryDeviceTypeResultDTO::unsetmodel()
{
    modelIsSet_ = false;
}

bool QueryDeviceTypeResultDTO::isEnableActiveCode() const
{
    return enableActiveCode_;
}

void QueryDeviceTypeResultDTO::setEnableActiveCode(bool value)
{
    enableActiveCode_ = value;
    enableActiveCodeIsSet_ = true;
}

bool QueryDeviceTypeResultDTO::enableActiveCodeIsSet() const
{
    return enableActiveCodeIsSet_;
}

void QueryDeviceTypeResultDTO::unsetenableActiveCode()
{
    enableActiveCodeIsSet_ = false;
}

std::string QueryDeviceTypeResultDTO::getResolution() const
{
    return resolution_;
}

void QueryDeviceTypeResultDTO::setResolution(const std::string& value)
{
    resolution_ = value;
    resolutionIsSet_ = true;
}

bool QueryDeviceTypeResultDTO::resolutionIsSet() const
{
    return resolutionIsSet_;
}

void QueryDeviceTypeResultDTO::unsetresolution()
{
    resolutionIsSet_ = false;
}

bool QueryDeviceTypeResultDTO::isSupportProjectionCode() const
{
    return supportProjectionCode_;
}

void QueryDeviceTypeResultDTO::setSupportProjectionCode(bool value)
{
    supportProjectionCode_ = value;
    supportProjectionCodeIsSet_ = true;
}

bool QueryDeviceTypeResultDTO::supportProjectionCodeIsSet() const
{
    return supportProjectionCodeIsSet_;
}

void QueryDeviceTypeResultDTO::unsetsupportProjectionCode()
{
    supportProjectionCodeIsSet_ = false;
}

bool QueryDeviceTypeResultDTO::isSupportSVC() const
{
    return supportSVC_;
}

void QueryDeviceTypeResultDTO::setSupportSVC(bool value)
{
    supportSVC_ = value;
    supportSVCIsSet_ = true;
}

bool QueryDeviceTypeResultDTO::supportSVCIsSet() const
{
    return supportSVCIsSet_;
}

void QueryDeviceTypeResultDTO::unsetsupportSVC()
{
    supportSVCIsSet_ = false;
}

}
}
}
}
}


