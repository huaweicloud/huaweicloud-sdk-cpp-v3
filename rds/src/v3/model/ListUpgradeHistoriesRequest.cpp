

#include "huaweicloud/rds/v3/model/ListUpgradeHistoriesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListUpgradeHistoriesRequest::ListUpgradeHistoriesRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    order_ = "";
    orderIsSet_ = false;
    sortField_ = "";
    sortFieldIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListUpgradeHistoriesRequest::~ListUpgradeHistoriesRequest() = default;

void ListUpgradeHistoriesRequest::validate()
{
}

web::json::value ListUpgradeHistoriesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }
    if(sortFieldIsSet_) {
        val[utility::conversions::to_string_t("sort_field")] = ModelBase::toJson(sortField_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ListUpgradeHistoriesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortField(refVal);
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


std::string ListUpgradeHistoriesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListUpgradeHistoriesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListUpgradeHistoriesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListUpgradeHistoriesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListUpgradeHistoriesRequest::getOffset() const
{
    return offset_;
}

void ListUpgradeHistoriesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListUpgradeHistoriesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListUpgradeHistoriesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListUpgradeHistoriesRequest::getLimit() const
{
    return limit_;
}

void ListUpgradeHistoriesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListUpgradeHistoriesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListUpgradeHistoriesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListUpgradeHistoriesRequest::getOrder() const
{
    return order_;
}

void ListUpgradeHistoriesRequest::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool ListUpgradeHistoriesRequest::orderIsSet() const
{
    return orderIsSet_;
}

void ListUpgradeHistoriesRequest::unsetorder()
{
    orderIsSet_ = false;
}

std::string ListUpgradeHistoriesRequest::getSortField() const
{
    return sortField_;
}

void ListUpgradeHistoriesRequest::setSortField(const std::string& value)
{
    sortField_ = value;
    sortFieldIsSet_ = true;
}

bool ListUpgradeHistoriesRequest::sortFieldIsSet() const
{
    return sortFieldIsSet_;
}

void ListUpgradeHistoriesRequest::unsetsortField()
{
    sortFieldIsSet_ = false;
}

std::string ListUpgradeHistoriesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListUpgradeHistoriesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListUpgradeHistoriesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListUpgradeHistoriesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


