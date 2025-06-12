

#include "huaweicloud/metastudio/v1/model/OperationLogItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




OperationLogItem::OperationLogItem()
{
    time_ = 0L;
    timeIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    operator_ = "";
    operatorIsSet_ = false;
    externalInfoIsSet_ = false;
}

OperationLogItem::~OperationLogItem() = default;

void OperationLogItem::validate()
{
}

web::json::value OperationLogItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(operatorIsSet_) {
        val[utility::conversions::to_string_t("operator")] = ModelBase::toJson(operator_);
    }
    if(externalInfoIsSet_) {
        val[utility::conversions::to_string_t("external_info")] = ModelBase::toJson(externalInfo_);
    }

    return val;
}
bool OperationLogItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("external_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("external_info"));
        if(!fieldValue.is_null())
        {
            OpExternalInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExternalInfo(refVal);
        }
    }
    return ok;
}


int64_t OperationLogItem::getTime() const
{
    return time_;
}

void OperationLogItem::setTime(int64_t value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool OperationLogItem::timeIsSet() const
{
    return timeIsSet_;
}

void OperationLogItem::unsettime()
{
    timeIsSet_ = false;
}

std::string OperationLogItem::getAction() const
{
    return action_;
}

void OperationLogItem::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool OperationLogItem::actionIsSet() const
{
    return actionIsSet_;
}

void OperationLogItem::unsetaction()
{
    actionIsSet_ = false;
}

std::string OperationLogItem::getOperator() const
{
    return operator_;
}

void OperationLogItem::setOperator(const std::string& value)
{
    operator_ = value;
    operatorIsSet_ = true;
}

bool OperationLogItem::operatorIsSet() const
{
    return operatorIsSet_;
}

void OperationLogItem::unsetoperator()
{
    operatorIsSet_ = false;
}

OpExternalInfo OperationLogItem::getExternalInfo() const
{
    return externalInfo_;
}

void OperationLogItem::setExternalInfo(const OpExternalInfo& value)
{
    externalInfo_ = value;
    externalInfoIsSet_ = true;
}

bool OperationLogItem::externalInfoIsSet() const
{
    return externalInfoIsSet_;
}

void OperationLogItem::unsetexternalInfo()
{
    externalInfoIsSet_ = false;
}

}
}
}
}
}


