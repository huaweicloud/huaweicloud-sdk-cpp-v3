

#include "huaweicloud/cdn/v2/model/ShowAppliedTemplateRecordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowAppliedTemplateRecordRequest::ShowAppliedTemplateRecordRequest()
{
    tmlId_ = "";
    tmlIdIsSet_ = false;
    tmlName_ = "";
    tmlNameIsSet_ = false;
    operatorId_ = "";
    operatorIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ShowAppliedTemplateRecordRequest::~ShowAppliedTemplateRecordRequest() = default;

void ShowAppliedTemplateRecordRequest::validate()
{
}

web::json::value ShowAppliedTemplateRecordRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tmlIdIsSet_) {
        val[utility::conversions::to_string_t("tml_id")] = ModelBase::toJson(tmlId_);
    }
    if(tmlNameIsSet_) {
        val[utility::conversions::to_string_t("tml_name")] = ModelBase::toJson(tmlName_);
    }
    if(operatorIdIsSet_) {
        val[utility::conversions::to_string_t("operator_id")] = ModelBase::toJson(operatorId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ShowAppliedTemplateRecordRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tml_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tml_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTmlId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tml_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tml_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTmlName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operator_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operator_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperatorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ShowAppliedTemplateRecordRequest::getTmlId() const
{
    return tmlId_;
}

void ShowAppliedTemplateRecordRequest::setTmlId(const std::string& value)
{
    tmlId_ = value;
    tmlIdIsSet_ = true;
}

bool ShowAppliedTemplateRecordRequest::tmlIdIsSet() const
{
    return tmlIdIsSet_;
}

void ShowAppliedTemplateRecordRequest::unsettmlId()
{
    tmlIdIsSet_ = false;
}

std::string ShowAppliedTemplateRecordRequest::getTmlName() const
{
    return tmlName_;
}

void ShowAppliedTemplateRecordRequest::setTmlName(const std::string& value)
{
    tmlName_ = value;
    tmlNameIsSet_ = true;
}

bool ShowAppliedTemplateRecordRequest::tmlNameIsSet() const
{
    return tmlNameIsSet_;
}

void ShowAppliedTemplateRecordRequest::unsettmlName()
{
    tmlNameIsSet_ = false;
}

std::string ShowAppliedTemplateRecordRequest::getOperatorId() const
{
    return operatorId_;
}

void ShowAppliedTemplateRecordRequest::setOperatorId(const std::string& value)
{
    operatorId_ = value;
    operatorIdIsSet_ = true;
}

bool ShowAppliedTemplateRecordRequest::operatorIdIsSet() const
{
    return operatorIdIsSet_;
}

void ShowAppliedTemplateRecordRequest::unsetoperatorId()
{
    operatorIdIsSet_ = false;
}

int32_t ShowAppliedTemplateRecordRequest::getOffset() const
{
    return offset_;
}

void ShowAppliedTemplateRecordRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowAppliedTemplateRecordRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowAppliedTemplateRecordRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowAppliedTemplateRecordRequest::getLimit() const
{
    return limit_;
}

void ShowAppliedTemplateRecordRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowAppliedTemplateRecordRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowAppliedTemplateRecordRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


