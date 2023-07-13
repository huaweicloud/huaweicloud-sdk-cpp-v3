

#include "huaweicloud/drs/v3/model/ObjectCompareResultDetails.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ObjectCompareResultDetails::ObjectCompareResultDetails()
{
    sourceDbName_ = "";
    sourceDbNameIsSet_ = false;
    targetDbName_ = "";
    targetDbNameIsSet_ = false;
    sourceDbValue_ = "";
    sourceDbValueIsSet_ = false;
    targetDbValue_ = "";
    targetDbValueIsSet_ = false;
    errorMessage_ = "";
    errorMessageIsSet_ = false;
}

ObjectCompareResultDetails::~ObjectCompareResultDetails() = default;

void ObjectCompareResultDetails::validate()
{
}

web::json::value ObjectCompareResultDetails::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceDbNameIsSet_) {
        val[utility::conversions::to_string_t("source_db_name")] = ModelBase::toJson(sourceDbName_);
    }
    if(targetDbNameIsSet_) {
        val[utility::conversions::to_string_t("target_db_name")] = ModelBase::toJson(targetDbName_);
    }
    if(sourceDbValueIsSet_) {
        val[utility::conversions::to_string_t("source_db_value")] = ModelBase::toJson(sourceDbValue_);
    }
    if(targetDbValueIsSet_) {
        val[utility::conversions::to_string_t("target_db_value")] = ModelBase::toJson(targetDbValue_);
    }
    if(errorMessageIsSet_) {
        val[utility::conversions::to_string_t("error_message")] = ModelBase::toJson(errorMessage_);
    }

    return val;
}

bool ObjectCompareResultDetails::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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

std::string ObjectCompareResultDetails::getSourceDbName() const
{
    return sourceDbName_;
}

void ObjectCompareResultDetails::setSourceDbName(const std::string& value)
{
    sourceDbName_ = value;
    sourceDbNameIsSet_ = true;
}

bool ObjectCompareResultDetails::sourceDbNameIsSet() const
{
    return sourceDbNameIsSet_;
}

void ObjectCompareResultDetails::unsetsourceDbName()
{
    sourceDbNameIsSet_ = false;
}

std::string ObjectCompareResultDetails::getTargetDbName() const
{
    return targetDbName_;
}

void ObjectCompareResultDetails::setTargetDbName(const std::string& value)
{
    targetDbName_ = value;
    targetDbNameIsSet_ = true;
}

bool ObjectCompareResultDetails::targetDbNameIsSet() const
{
    return targetDbNameIsSet_;
}

void ObjectCompareResultDetails::unsettargetDbName()
{
    targetDbNameIsSet_ = false;
}

std::string ObjectCompareResultDetails::getSourceDbValue() const
{
    return sourceDbValue_;
}

void ObjectCompareResultDetails::setSourceDbValue(const std::string& value)
{
    sourceDbValue_ = value;
    sourceDbValueIsSet_ = true;
}

bool ObjectCompareResultDetails::sourceDbValueIsSet() const
{
    return sourceDbValueIsSet_;
}

void ObjectCompareResultDetails::unsetsourceDbValue()
{
    sourceDbValueIsSet_ = false;
}

std::string ObjectCompareResultDetails::getTargetDbValue() const
{
    return targetDbValue_;
}

void ObjectCompareResultDetails::setTargetDbValue(const std::string& value)
{
    targetDbValue_ = value;
    targetDbValueIsSet_ = true;
}

bool ObjectCompareResultDetails::targetDbValueIsSet() const
{
    return targetDbValueIsSet_;
}

void ObjectCompareResultDetails::unsettargetDbValue()
{
    targetDbValueIsSet_ = false;
}

std::string ObjectCompareResultDetails::getErrorMessage() const
{
    return errorMessage_;
}

void ObjectCompareResultDetails::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool ObjectCompareResultDetails::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void ObjectCompareResultDetails::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

}
}
}
}
}


