

#include "huaweicloud/gaussdbforopengauss/v3/model/ListEventsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListEventsRequest::ListEventsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
    sortField_ = "";
    sortFieldIsSet_ = false;
    order_ = "";
    orderIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListEventsRequest::~ListEventsRequest() = default;

void ListEventsRequest::validate()
{
}

web::json::value ListEventsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(sortFieldIsSet_) {
        val[utility::conversions::to_string_t("sort_field")] = ModelBase::toJson(sortField_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListEventsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
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


std::string ListEventsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListEventsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListEventsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListEventsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListEventsRequest::getId() const
{
    return id_;
}

void ListEventsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListEventsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListEventsRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListEventsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListEventsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListEventsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListEventsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListEventsRequest::getStatus() const
{
    return status_;
}

void ListEventsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListEventsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListEventsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListEventsRequest::getType() const
{
    return type_;
}

void ListEventsRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListEventsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListEventsRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListEventsRequest::getLevel() const
{
    return level_;
}

void ListEventsRequest::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool ListEventsRequest::levelIsSet() const
{
    return levelIsSet_;
}

void ListEventsRequest::unsetlevel()
{
    levelIsSet_ = false;
}

std::string ListEventsRequest::getSortField() const
{
    return sortField_;
}

void ListEventsRequest::setSortField(const std::string& value)
{
    sortField_ = value;
    sortFieldIsSet_ = true;
}

bool ListEventsRequest::sortFieldIsSet() const
{
    return sortFieldIsSet_;
}

void ListEventsRequest::unsetsortField()
{
    sortFieldIsSet_ = false;
}

std::string ListEventsRequest::getOrder() const
{
    return order_;
}

void ListEventsRequest::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool ListEventsRequest::orderIsSet() const
{
    return orderIsSet_;
}

void ListEventsRequest::unsetorder()
{
    orderIsSet_ = false;
}

int32_t ListEventsRequest::getOffset() const
{
    return offset_;
}

void ListEventsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListEventsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListEventsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListEventsRequest::getLimit() const
{
    return limit_;
}

void ListEventsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListEventsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListEventsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


