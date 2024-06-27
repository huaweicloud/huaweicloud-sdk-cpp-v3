

#include "huaweicloud/drs/v5/model/ReplayErrorClassification.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ReplayErrorClassification::ReplayErrorClassification()
{
    targetName_ = "";
    targetNameIsSet_ = false;
    errorType_ = "";
    errorTypeIsSet_ = false;
    errorCnt_ = "";
    errorCntIsSet_ = false;
    errorTemplateCnt_ = "";
    errorTemplateCntIsSet_ = false;
}

ReplayErrorClassification::~ReplayErrorClassification() = default;

void ReplayErrorClassification::validate()
{
}

web::json::value ReplayErrorClassification::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetNameIsSet_) {
        val[utility::conversions::to_string_t("target_name")] = ModelBase::toJson(targetName_);
    }
    if(errorTypeIsSet_) {
        val[utility::conversions::to_string_t("error_type")] = ModelBase::toJson(errorType_);
    }
    if(errorCntIsSet_) {
        val[utility::conversions::to_string_t("error_cnt")] = ModelBase::toJson(errorCnt_);
    }
    if(errorTemplateCntIsSet_) {
        val[utility::conversions::to_string_t("error_template_cnt")] = ModelBase::toJson(errorTemplateCnt_);
    }

    return val;
}
bool ReplayErrorClassification::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("target_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_cnt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_cnt"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCnt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_template_cnt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_template_cnt"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorTemplateCnt(refVal);
        }
    }
    return ok;
}


std::string ReplayErrorClassification::getTargetName() const
{
    return targetName_;
}

void ReplayErrorClassification::setTargetName(const std::string& value)
{
    targetName_ = value;
    targetNameIsSet_ = true;
}

bool ReplayErrorClassification::targetNameIsSet() const
{
    return targetNameIsSet_;
}

void ReplayErrorClassification::unsettargetName()
{
    targetNameIsSet_ = false;
}

std::string ReplayErrorClassification::getErrorType() const
{
    return errorType_;
}

void ReplayErrorClassification::setErrorType(const std::string& value)
{
    errorType_ = value;
    errorTypeIsSet_ = true;
}

bool ReplayErrorClassification::errorTypeIsSet() const
{
    return errorTypeIsSet_;
}

void ReplayErrorClassification::unseterrorType()
{
    errorTypeIsSet_ = false;
}

std::string ReplayErrorClassification::getErrorCnt() const
{
    return errorCnt_;
}

void ReplayErrorClassification::setErrorCnt(const std::string& value)
{
    errorCnt_ = value;
    errorCntIsSet_ = true;
}

bool ReplayErrorClassification::errorCntIsSet() const
{
    return errorCntIsSet_;
}

void ReplayErrorClassification::unseterrorCnt()
{
    errorCntIsSet_ = false;
}

std::string ReplayErrorClassification::getErrorTemplateCnt() const
{
    return errorTemplateCnt_;
}

void ReplayErrorClassification::setErrorTemplateCnt(const std::string& value)
{
    errorTemplateCnt_ = value;
    errorTemplateCntIsSet_ = true;
}

bool ReplayErrorClassification::errorTemplateCntIsSet() const
{
    return errorTemplateCntIsSet_;
}

void ReplayErrorClassification::unseterrorTemplateCnt()
{
    errorTemplateCntIsSet_ = false;
}

}
}
}
}
}


