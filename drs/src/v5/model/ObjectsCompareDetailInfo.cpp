

#include "huaweicloud/drs/v5/model/ObjectsCompareDetailInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ObjectsCompareDetailInfo::ObjectsCompareDetailInfo()
{
    sourceDbValue_ = "";
    sourceDbValueIsSet_ = false;
    targetDbValue_ = "";
    targetDbValueIsSet_ = false;
    sourceDbName_ = "";
    sourceDbNameIsSet_ = false;
    targetDbName_ = "";
    targetDbNameIsSet_ = false;
    errorMessage_ = "";
    errorMessageIsSet_ = false;
}

ObjectsCompareDetailInfo::~ObjectsCompareDetailInfo() = default;

void ObjectsCompareDetailInfo::validate()
{
}

web::json::value ObjectsCompareDetailInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceDbValueIsSet_) {
        val[utility::conversions::to_string_t("source_db_value")] = ModelBase::toJson(sourceDbValue_);
    }
    if(targetDbValueIsSet_) {
        val[utility::conversions::to_string_t("target_db_value")] = ModelBase::toJson(targetDbValue_);
    }
    if(sourceDbNameIsSet_) {
        val[utility::conversions::to_string_t("source_db_name")] = ModelBase::toJson(sourceDbName_);
    }
    if(targetDbNameIsSet_) {
        val[utility::conversions::to_string_t("target_db_name")] = ModelBase::toJson(targetDbName_);
    }
    if(errorMessageIsSet_) {
        val[utility::conversions::to_string_t("error_message")] = ModelBase::toJson(errorMessage_);
    }

    return val;
}

bool ObjectsCompareDetailInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_db_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_db_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceDbValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_db_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_db_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetDbValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMessage(refVal);
        }
    }
    return ok;
}

std::string ObjectsCompareDetailInfo::getSourceDbValue() const
{
    return sourceDbValue_;
}

void ObjectsCompareDetailInfo::setSourceDbValue(const std::string& value)
{
    sourceDbValue_ = value;
    sourceDbValueIsSet_ = true;
}

bool ObjectsCompareDetailInfo::sourceDbValueIsSet() const
{
    return sourceDbValueIsSet_;
}

void ObjectsCompareDetailInfo::unsetsourceDbValue()
{
    sourceDbValueIsSet_ = false;
}

std::string ObjectsCompareDetailInfo::getTargetDbValue() const
{
    return targetDbValue_;
}

void ObjectsCompareDetailInfo::setTargetDbValue(const std::string& value)
{
    targetDbValue_ = value;
    targetDbValueIsSet_ = true;
}

bool ObjectsCompareDetailInfo::targetDbValueIsSet() const
{
    return targetDbValueIsSet_;
}

void ObjectsCompareDetailInfo::unsettargetDbValue()
{
    targetDbValueIsSet_ = false;
}

std::string ObjectsCompareDetailInfo::getSourceDbName() const
{
    return sourceDbName_;
}

void ObjectsCompareDetailInfo::setSourceDbName(const std::string& value)
{
    sourceDbName_ = value;
    sourceDbNameIsSet_ = true;
}

bool ObjectsCompareDetailInfo::sourceDbNameIsSet() const
{
    return sourceDbNameIsSet_;
}

void ObjectsCompareDetailInfo::unsetsourceDbName()
{
    sourceDbNameIsSet_ = false;
}

std::string ObjectsCompareDetailInfo::getTargetDbName() const
{
    return targetDbName_;
}

void ObjectsCompareDetailInfo::setTargetDbName(const std::string& value)
{
    targetDbName_ = value;
    targetDbNameIsSet_ = true;
}

bool ObjectsCompareDetailInfo::targetDbNameIsSet() const
{
    return targetDbNameIsSet_;
}

void ObjectsCompareDetailInfo::unsettargetDbName()
{
    targetDbNameIsSet_ = false;
}

std::string ObjectsCompareDetailInfo::getErrorMessage() const
{
    return errorMessage_;
}

void ObjectsCompareDetailInfo::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool ObjectsCompareDetailInfo::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void ObjectsCompareDetailInfo::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

}
}
}
}
}


