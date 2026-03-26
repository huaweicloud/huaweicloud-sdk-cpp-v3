

#include "huaweicloud/gaussdb/v3/model/ShowInstanceBackupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowInstanceBackupsRequest::ShowInstanceBackupsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    orderField_ = "";
    orderFieldIsSet_ = false;
    orderRule_ = "";
    orderRuleIsSet_ = false;
    filterField_ = "";
    filterFieldIsSet_ = false;
    filterContent_ = "";
    filterContentIsSet_ = false;
}

ShowInstanceBackupsRequest::~ShowInstanceBackupsRequest() = default;

void ShowInstanceBackupsRequest::validate()
{
}

web::json::value ShowInstanceBackupsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(orderFieldIsSet_) {
        val[utility::conversions::to_string_t("order_field")] = ModelBase::toJson(orderField_);
    }
    if(orderRuleIsSet_) {
        val[utility::conversions::to_string_t("order_rule")] = ModelBase::toJson(orderRule_);
    }
    if(filterFieldIsSet_) {
        val[utility::conversions::to_string_t("filter_field")] = ModelBase::toJson(filterField_);
    }
    if(filterContentIsSet_) {
        val[utility::conversions::to_string_t("filter_content")] = ModelBase::toJson(filterContent_);
    }

    return val;
}
bool ShowInstanceBackupsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderField(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_rule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_rule"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderRule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filter_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter_field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilterField(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filter_content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter_content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilterContent(refVal);
        }
    }
    return ok;
}


std::string ShowInstanceBackupsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowInstanceBackupsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowInstanceBackupsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowInstanceBackupsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowInstanceBackupsRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowInstanceBackupsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowInstanceBackupsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowInstanceBackupsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowInstanceBackupsRequest::getOffset() const
{
    return offset_;
}

void ShowInstanceBackupsRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowInstanceBackupsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowInstanceBackupsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ShowInstanceBackupsRequest::getLimit() const
{
    return limit_;
}

void ShowInstanceBackupsRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowInstanceBackupsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowInstanceBackupsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowInstanceBackupsRequest::getOrderField() const
{
    return orderField_;
}

void ShowInstanceBackupsRequest::setOrderField(const std::string& value)
{
    orderField_ = value;
    orderFieldIsSet_ = true;
}

bool ShowInstanceBackupsRequest::orderFieldIsSet() const
{
    return orderFieldIsSet_;
}

void ShowInstanceBackupsRequest::unsetorderField()
{
    orderFieldIsSet_ = false;
}

std::string ShowInstanceBackupsRequest::getOrderRule() const
{
    return orderRule_;
}

void ShowInstanceBackupsRequest::setOrderRule(const std::string& value)
{
    orderRule_ = value;
    orderRuleIsSet_ = true;
}

bool ShowInstanceBackupsRequest::orderRuleIsSet() const
{
    return orderRuleIsSet_;
}

void ShowInstanceBackupsRequest::unsetorderRule()
{
    orderRuleIsSet_ = false;
}

std::string ShowInstanceBackupsRequest::getFilterField() const
{
    return filterField_;
}

void ShowInstanceBackupsRequest::setFilterField(const std::string& value)
{
    filterField_ = value;
    filterFieldIsSet_ = true;
}

bool ShowInstanceBackupsRequest::filterFieldIsSet() const
{
    return filterFieldIsSet_;
}

void ShowInstanceBackupsRequest::unsetfilterField()
{
    filterFieldIsSet_ = false;
}

std::string ShowInstanceBackupsRequest::getFilterContent() const
{
    return filterContent_;
}

void ShowInstanceBackupsRequest::setFilterContent(const std::string& value)
{
    filterContent_ = value;
    filterContentIsSet_ = true;
}

bool ShowInstanceBackupsRequest::filterContentIsSet() const
{
    return filterContentIsSet_;
}

void ShowInstanceBackupsRequest::unsetfilterContent()
{
    filterContentIsSet_ = false;
}

}
}
}
}
}


