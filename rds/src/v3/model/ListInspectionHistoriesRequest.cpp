

#include "huaweicloud/rds/v3/model/ListInspectionHistoriesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListInspectionHistoriesRequest::ListInspectionHistoriesRequest()
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
    targetVersion_ = "";
    targetVersionIsSet_ = false;
    isAvailable_ = false;
    isAvailableIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListInspectionHistoriesRequest::~ListInspectionHistoriesRequest() = default;

void ListInspectionHistoriesRequest::validate()
{
}

web::json::value ListInspectionHistoriesRequest::toJson() const
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
    if(targetVersionIsSet_) {
        val[utility::conversions::to_string_t("target_version")] = ModelBase::toJson(targetVersion_);
    }
    if(isAvailableIsSet_) {
        val[utility::conversions::to_string_t("is_available")] = ModelBase::toJson(isAvailable_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ListInspectionHistoriesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("target_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_available"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_available"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAvailable(refVal);
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


std::string ListInspectionHistoriesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListInspectionHistoriesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListInspectionHistoriesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListInspectionHistoriesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListInspectionHistoriesRequest::getOffset() const
{
    return offset_;
}

void ListInspectionHistoriesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInspectionHistoriesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInspectionHistoriesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListInspectionHistoriesRequest::getLimit() const
{
    return limit_;
}

void ListInspectionHistoriesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInspectionHistoriesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInspectionHistoriesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListInspectionHistoriesRequest::getOrder() const
{
    return order_;
}

void ListInspectionHistoriesRequest::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool ListInspectionHistoriesRequest::orderIsSet() const
{
    return orderIsSet_;
}

void ListInspectionHistoriesRequest::unsetorder()
{
    orderIsSet_ = false;
}

std::string ListInspectionHistoriesRequest::getSortField() const
{
    return sortField_;
}

void ListInspectionHistoriesRequest::setSortField(const std::string& value)
{
    sortField_ = value;
    sortFieldIsSet_ = true;
}

bool ListInspectionHistoriesRequest::sortFieldIsSet() const
{
    return sortFieldIsSet_;
}

void ListInspectionHistoriesRequest::unsetsortField()
{
    sortFieldIsSet_ = false;
}

std::string ListInspectionHistoriesRequest::getTargetVersion() const
{
    return targetVersion_;
}

void ListInspectionHistoriesRequest::setTargetVersion(const std::string& value)
{
    targetVersion_ = value;
    targetVersionIsSet_ = true;
}

bool ListInspectionHistoriesRequest::targetVersionIsSet() const
{
    return targetVersionIsSet_;
}

void ListInspectionHistoriesRequest::unsettargetVersion()
{
    targetVersionIsSet_ = false;
}

bool ListInspectionHistoriesRequest::isIsAvailable() const
{
    return isAvailable_;
}

void ListInspectionHistoriesRequest::setIsAvailable(bool value)
{
    isAvailable_ = value;
    isAvailableIsSet_ = true;
}

bool ListInspectionHistoriesRequest::isAvailableIsSet() const
{
    return isAvailableIsSet_;
}

void ListInspectionHistoriesRequest::unsetisAvailable()
{
    isAvailableIsSet_ = false;
}

std::string ListInspectionHistoriesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListInspectionHistoriesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListInspectionHistoriesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListInspectionHistoriesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


