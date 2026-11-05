

#include "huaweicloud/rds/v3/model/ListSupabaseApplicationApiKeysRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSupabaseApplicationApiKeysRequest::ListSupabaseApplicationApiKeysRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    applicationId_ = "";
    applicationIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    startCreatedTime_ = "";
    startCreatedTimeIsSet_ = false;
    endCreatedTime_ = "";
    endCreatedTimeIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListSupabaseApplicationApiKeysRequest::~ListSupabaseApplicationApiKeysRequest() = default;

void ListSupabaseApplicationApiKeysRequest::validate()
{
}

web::json::value ListSupabaseApplicationApiKeysRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(applicationIdIsSet_) {
        val[utility::conversions::to_string_t("application_id")] = ModelBase::toJson(applicationId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(startCreatedTimeIsSet_) {
        val[utility::conversions::to_string_t("start_created_time")] = ModelBase::toJson(startCreatedTime_);
    }
    if(endCreatedTimeIsSet_) {
        val[utility::conversions::to_string_t("end_created_time")] = ModelBase::toJson(endCreatedTime_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListSupabaseApplicationApiKeysRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("application_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("start_created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_created_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartCreatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_created_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndCreatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
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


std::string ListSupabaseApplicationApiKeysRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListSupabaseApplicationApiKeysRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListSupabaseApplicationApiKeysRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListSupabaseApplicationApiKeysRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListSupabaseApplicationApiKeysRequest::getApplicationId() const
{
    return applicationId_;
}

void ListSupabaseApplicationApiKeysRequest::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool ListSupabaseApplicationApiKeysRequest::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void ListSupabaseApplicationApiKeysRequest::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

std::string ListSupabaseApplicationApiKeysRequest::getName() const
{
    return name_;
}

void ListSupabaseApplicationApiKeysRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListSupabaseApplicationApiKeysRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListSupabaseApplicationApiKeysRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListSupabaseApplicationApiKeysRequest::getId() const
{
    return id_;
}

void ListSupabaseApplicationApiKeysRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListSupabaseApplicationApiKeysRequest::idIsSet() const
{
    return idIsSet_;
}

void ListSupabaseApplicationApiKeysRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListSupabaseApplicationApiKeysRequest::getStatus() const
{
    return status_;
}

void ListSupabaseApplicationApiKeysRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListSupabaseApplicationApiKeysRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListSupabaseApplicationApiKeysRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListSupabaseApplicationApiKeysRequest::getType() const
{
    return type_;
}

void ListSupabaseApplicationApiKeysRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListSupabaseApplicationApiKeysRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListSupabaseApplicationApiKeysRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListSupabaseApplicationApiKeysRequest::getStartCreatedTime() const
{
    return startCreatedTime_;
}

void ListSupabaseApplicationApiKeysRequest::setStartCreatedTime(const std::string& value)
{
    startCreatedTime_ = value;
    startCreatedTimeIsSet_ = true;
}

bool ListSupabaseApplicationApiKeysRequest::startCreatedTimeIsSet() const
{
    return startCreatedTimeIsSet_;
}

void ListSupabaseApplicationApiKeysRequest::unsetstartCreatedTime()
{
    startCreatedTimeIsSet_ = false;
}

std::string ListSupabaseApplicationApiKeysRequest::getEndCreatedTime() const
{
    return endCreatedTime_;
}

void ListSupabaseApplicationApiKeysRequest::setEndCreatedTime(const std::string& value)
{
    endCreatedTime_ = value;
    endCreatedTimeIsSet_ = true;
}

bool ListSupabaseApplicationApiKeysRequest::endCreatedTimeIsSet() const
{
    return endCreatedTimeIsSet_;
}

void ListSupabaseApplicationApiKeysRequest::unsetendCreatedTime()
{
    endCreatedTimeIsSet_ = false;
}

std::string ListSupabaseApplicationApiKeysRequest::getSortKey() const
{
    return sortKey_;
}

void ListSupabaseApplicationApiKeysRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListSupabaseApplicationApiKeysRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListSupabaseApplicationApiKeysRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListSupabaseApplicationApiKeysRequest::getSortDir() const
{
    return sortDir_;
}

void ListSupabaseApplicationApiKeysRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListSupabaseApplicationApiKeysRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListSupabaseApplicationApiKeysRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

int32_t ListSupabaseApplicationApiKeysRequest::getOffset() const
{
    return offset_;
}

void ListSupabaseApplicationApiKeysRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSupabaseApplicationApiKeysRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSupabaseApplicationApiKeysRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListSupabaseApplicationApiKeysRequest::getLimit() const
{
    return limit_;
}

void ListSupabaseApplicationApiKeysRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSupabaseApplicationApiKeysRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSupabaseApplicationApiKeysRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


