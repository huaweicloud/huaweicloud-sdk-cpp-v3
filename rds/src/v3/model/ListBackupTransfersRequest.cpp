

#include "huaweicloud/rds/v3/model/ListBackupTransfersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListBackupTransfersRequest::ListBackupTransfersRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    orderField_ = "";
    orderFieldIsSet_ = false;
    orderRule_ = "";
    orderRuleIsSet_ = false;
    filterField_ = "";
    filterFieldIsSet_ = false;
    filterContent_ = "";
    filterContentIsSet_ = false;
    beginTime_ = 0L;
    beginTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    transferType_ = "";
    transferTypeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListBackupTransfersRequest::~ListBackupTransfersRequest() = default;

void ListBackupTransfersRequest::validate()
{
}

web::json::value ListBackupTransfersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(transferTypeIsSet_) {
        val[utility::conversions::to_string_t("transfer_type")] = ModelBase::toJson(transferType_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListBackupTransfersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
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
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("transfer_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transfer_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransferType(refVal);
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
    return ok;
}


int32_t ListBackupTransfersRequest::getLimit() const
{
    return limit_;
}

void ListBackupTransfersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListBackupTransfersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListBackupTransfersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListBackupTransfersRequest::getOrderField() const
{
    return orderField_;
}

void ListBackupTransfersRequest::setOrderField(const std::string& value)
{
    orderField_ = value;
    orderFieldIsSet_ = true;
}

bool ListBackupTransfersRequest::orderFieldIsSet() const
{
    return orderFieldIsSet_;
}

void ListBackupTransfersRequest::unsetorderField()
{
    orderFieldIsSet_ = false;
}

std::string ListBackupTransfersRequest::getOrderRule() const
{
    return orderRule_;
}

void ListBackupTransfersRequest::setOrderRule(const std::string& value)
{
    orderRule_ = value;
    orderRuleIsSet_ = true;
}

bool ListBackupTransfersRequest::orderRuleIsSet() const
{
    return orderRuleIsSet_;
}

void ListBackupTransfersRequest::unsetorderRule()
{
    orderRuleIsSet_ = false;
}

std::string ListBackupTransfersRequest::getFilterField() const
{
    return filterField_;
}

void ListBackupTransfersRequest::setFilterField(const std::string& value)
{
    filterField_ = value;
    filterFieldIsSet_ = true;
}

bool ListBackupTransfersRequest::filterFieldIsSet() const
{
    return filterFieldIsSet_;
}

void ListBackupTransfersRequest::unsetfilterField()
{
    filterFieldIsSet_ = false;
}

std::string ListBackupTransfersRequest::getFilterContent() const
{
    return filterContent_;
}

void ListBackupTransfersRequest::setFilterContent(const std::string& value)
{
    filterContent_ = value;
    filterContentIsSet_ = true;
}

bool ListBackupTransfersRequest::filterContentIsSet() const
{
    return filterContentIsSet_;
}

void ListBackupTransfersRequest::unsetfilterContent()
{
    filterContentIsSet_ = false;
}

int64_t ListBackupTransfersRequest::getBeginTime() const
{
    return beginTime_;
}

void ListBackupTransfersRequest::setBeginTime(int64_t value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ListBackupTransfersRequest::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ListBackupTransfersRequest::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

int64_t ListBackupTransfersRequest::getEndTime() const
{
    return endTime_;
}

void ListBackupTransfersRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListBackupTransfersRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListBackupTransfersRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListBackupTransfersRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListBackupTransfersRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListBackupTransfersRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListBackupTransfersRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListBackupTransfersRequest::getTransferType() const
{
    return transferType_;
}

void ListBackupTransfersRequest::setTransferType(const std::string& value)
{
    transferType_ = value;
    transferTypeIsSet_ = true;
}

bool ListBackupTransfersRequest::transferTypeIsSet() const
{
    return transferTypeIsSet_;
}

void ListBackupTransfersRequest::unsettransferType()
{
    transferTypeIsSet_ = false;
}

int32_t ListBackupTransfersRequest::getOffset() const
{
    return offset_;
}

void ListBackupTransfersRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListBackupTransfersRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListBackupTransfersRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


