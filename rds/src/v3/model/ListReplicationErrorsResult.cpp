

#include "huaweicloud/rds/v3/model/ListReplicationErrorsResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListReplicationErrorsResult::ListReplicationErrorsResult()
{
    occurTime_ = "";
    occurTimeIsSet_ = false;
    sourceTypeId_ = "";
    sourceTypeIdIsSet_ = false;
    sourceName_ = "";
    sourceNameIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorText_ = "";
    errorTextIsSet_ = false;
}

ListReplicationErrorsResult::~ListReplicationErrorsResult() = default;

void ListReplicationErrorsResult::validate()
{
}

web::json::value ListReplicationErrorsResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(occurTimeIsSet_) {
        val[utility::conversions::to_string_t("occur_time")] = ModelBase::toJson(occurTime_);
    }
    if(sourceTypeIdIsSet_) {
        val[utility::conversions::to_string_t("source_type_id")] = ModelBase::toJson(sourceTypeId_);
    }
    if(sourceNameIsSet_) {
        val[utility::conversions::to_string_t("source_name")] = ModelBase::toJson(sourceName_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorTextIsSet_) {
        val[utility::conversions::to_string_t("error_text")] = ModelBase::toJson(errorText_);
    }

    return val;
}
bool ListReplicationErrorsResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("occur_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("occur_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOccurTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_type_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_type_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceTypeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_text"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorText(refVal);
        }
    }
    return ok;
}


std::string ListReplicationErrorsResult::getOccurTime() const
{
    return occurTime_;
}

void ListReplicationErrorsResult::setOccurTime(const std::string& value)
{
    occurTime_ = value;
    occurTimeIsSet_ = true;
}

bool ListReplicationErrorsResult::occurTimeIsSet() const
{
    return occurTimeIsSet_;
}

void ListReplicationErrorsResult::unsetoccurTime()
{
    occurTimeIsSet_ = false;
}

std::string ListReplicationErrorsResult::getSourceTypeId() const
{
    return sourceTypeId_;
}

void ListReplicationErrorsResult::setSourceTypeId(const std::string& value)
{
    sourceTypeId_ = value;
    sourceTypeIdIsSet_ = true;
}

bool ListReplicationErrorsResult::sourceTypeIdIsSet() const
{
    return sourceTypeIdIsSet_;
}

void ListReplicationErrorsResult::unsetsourceTypeId()
{
    sourceTypeIdIsSet_ = false;
}

std::string ListReplicationErrorsResult::getSourceName() const
{
    return sourceName_;
}

void ListReplicationErrorsResult::setSourceName(const std::string& value)
{
    sourceName_ = value;
    sourceNameIsSet_ = true;
}

bool ListReplicationErrorsResult::sourceNameIsSet() const
{
    return sourceNameIsSet_;
}

void ListReplicationErrorsResult::unsetsourceName()
{
    sourceNameIsSet_ = false;
}

std::string ListReplicationErrorsResult::getErrorCode() const
{
    return errorCode_;
}

void ListReplicationErrorsResult::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ListReplicationErrorsResult::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ListReplicationErrorsResult::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ListReplicationErrorsResult::getErrorText() const
{
    return errorText_;
}

void ListReplicationErrorsResult::setErrorText(const std::string& value)
{
    errorText_ = value;
    errorTextIsSet_ = true;
}

bool ListReplicationErrorsResult::errorTextIsSet() const
{
    return errorTextIsSet_;
}

void ListReplicationErrorsResult::unseterrorText()
{
    errorTextIsSet_ = false;
}

}
}
}
}
}


