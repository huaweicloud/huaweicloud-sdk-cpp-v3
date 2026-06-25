

#include "huaweicloud/rds/v3/model/ListInstanceBackupSummaryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListInstanceBackupSummaryRequest::ListInstanceBackupSummaryRequest()
{
    engine_ = "";
    engineIsSet_ = false;
    orderField_ = "";
    orderFieldIsSet_ = false;
    orderRule_ = "";
    orderRuleIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListInstanceBackupSummaryRequest::~ListInstanceBackupSummaryRequest() = default;

void ListInstanceBackupSummaryRequest::validate()
{
}

web::json::value ListInstanceBackupSummaryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(engineIsSet_) {
        val[utility::conversions::to_string_t("engine")] = ModelBase::toJson(engine_);
    }
    if(orderFieldIsSet_) {
        val[utility::conversions::to_string_t("order_field")] = ModelBase::toJson(orderField_);
    }
    if(orderRuleIsSet_) {
        val[utility::conversions::to_string_t("order_rule")] = ModelBase::toJson(orderRule_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ListInstanceBackupSummaryRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("engine"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngine(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    return ok;
}


std::string ListInstanceBackupSummaryRequest::getEngine() const
{
    return engine_;
}

void ListInstanceBackupSummaryRequest::setEngine(const std::string& value)
{
    engine_ = value;
    engineIsSet_ = true;
}

bool ListInstanceBackupSummaryRequest::engineIsSet() const
{
    return engineIsSet_;
}

void ListInstanceBackupSummaryRequest::unsetengine()
{
    engineIsSet_ = false;
}

std::string ListInstanceBackupSummaryRequest::getOrderField() const
{
    return orderField_;
}

void ListInstanceBackupSummaryRequest::setOrderField(const std::string& value)
{
    orderField_ = value;
    orderFieldIsSet_ = true;
}

bool ListInstanceBackupSummaryRequest::orderFieldIsSet() const
{
    return orderFieldIsSet_;
}

void ListInstanceBackupSummaryRequest::unsetorderField()
{
    orderFieldIsSet_ = false;
}

std::string ListInstanceBackupSummaryRequest::getOrderRule() const
{
    return orderRule_;
}

void ListInstanceBackupSummaryRequest::setOrderRule(const std::string& value)
{
    orderRule_ = value;
    orderRuleIsSet_ = true;
}

bool ListInstanceBackupSummaryRequest::orderRuleIsSet() const
{
    return orderRuleIsSet_;
}

void ListInstanceBackupSummaryRequest::unsetorderRule()
{
    orderRuleIsSet_ = false;
}

std::string ListInstanceBackupSummaryRequest::getInstanceId() const
{
    return instanceId_;
}

void ListInstanceBackupSummaryRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListInstanceBackupSummaryRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListInstanceBackupSummaryRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListInstanceBackupSummaryRequest::getInstanceName() const
{
    return instanceName_;
}

void ListInstanceBackupSummaryRequest::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ListInstanceBackupSummaryRequest::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ListInstanceBackupSummaryRequest::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

int32_t ListInstanceBackupSummaryRequest::getOffset() const
{
    return offset_;
}

void ListInstanceBackupSummaryRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInstanceBackupSummaryRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInstanceBackupSummaryRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListInstanceBackupSummaryRequest::getLimit() const
{
    return limit_;
}

void ListInstanceBackupSummaryRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInstanceBackupSummaryRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInstanceBackupSummaryRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListInstanceBackupSummaryRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListInstanceBackupSummaryRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListInstanceBackupSummaryRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListInstanceBackupSummaryRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


