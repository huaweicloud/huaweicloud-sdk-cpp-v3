

#include "huaweicloud/codeartspipeline/v2/model/ListPipelineTemplatesQuery.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListPipelineTemplatesQuery::ListPipelineTemplatesQuery()
{
    language_ = "";
    languageIsSet_ = false;
    isSystem_ = false;
    isSystemIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    offset_ = 0L;
    offsetIsSet_ = false;
    limit_ = 0L;
    limitIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
}

ListPipelineTemplatesQuery::~ListPipelineTemplatesQuery() = default;

void ListPipelineTemplatesQuery::validate()
{
}

web::json::value ListPipelineTemplatesQuery::toJson() const
{
    web::json::value val = web::json::value::object();

    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(isSystemIsSet_) {
        val[utility::conversions::to_string_t("is_system")] = ModelBase::toJson(isSystem_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }

    return val;
}
bool ListPipelineTemplatesQuery::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_system"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_system"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSystem(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    return ok;
}


std::string ListPipelineTemplatesQuery::getLanguage() const
{
    return language_;
}

void ListPipelineTemplatesQuery::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ListPipelineTemplatesQuery::languageIsSet() const
{
    return languageIsSet_;
}

void ListPipelineTemplatesQuery::unsetlanguage()
{
    languageIsSet_ = false;
}

bool ListPipelineTemplatesQuery::isIsSystem() const
{
    return isSystem_;
}

void ListPipelineTemplatesQuery::setIsSystem(bool value)
{
    isSystem_ = value;
    isSystemIsSet_ = true;
}

bool ListPipelineTemplatesQuery::isSystemIsSet() const
{
    return isSystemIsSet_;
}

void ListPipelineTemplatesQuery::unsetisSystem()
{
    isSystemIsSet_ = false;
}

std::string ListPipelineTemplatesQuery::getName() const
{
    return name_;
}

void ListPipelineTemplatesQuery::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListPipelineTemplatesQuery::nameIsSet() const
{
    return nameIsSet_;
}

void ListPipelineTemplatesQuery::unsetname()
{
    nameIsSet_ = false;
}

int64_t ListPipelineTemplatesQuery::getOffset() const
{
    return offset_;
}

void ListPipelineTemplatesQuery::setOffset(int64_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPipelineTemplatesQuery::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPipelineTemplatesQuery::unsetoffset()
{
    offsetIsSet_ = false;
}

int64_t ListPipelineTemplatesQuery::getLimit() const
{
    return limit_;
}

void ListPipelineTemplatesQuery::setLimit(int64_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPipelineTemplatesQuery::limitIsSet() const
{
    return limitIsSet_;
}

void ListPipelineTemplatesQuery::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListPipelineTemplatesQuery::getSortKey() const
{
    return sortKey_;
}

void ListPipelineTemplatesQuery::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListPipelineTemplatesQuery::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListPipelineTemplatesQuery::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListPipelineTemplatesQuery::getSortDir() const
{
    return sortDir_;
}

void ListPipelineTemplatesQuery::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListPipelineTemplatesQuery::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListPipelineTemplatesQuery::unsetsortDir()
{
    sortDirIsSet_ = false;
}

}
}
}
}
}


