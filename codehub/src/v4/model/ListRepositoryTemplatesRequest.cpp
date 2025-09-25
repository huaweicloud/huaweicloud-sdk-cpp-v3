

#include "huaweicloud/codehub/v4/model/ListRepositoryTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListRepositoryTemplatesRequest::ListRepositoryTemplatesRequest()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    platform_ = "";
    platformIsSet_ = false;
    pipeline_ = "";
    pipelineIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
    enterType_ = "";
    enterTypeIsSet_ = false;
    dateOrder_ = "";
    dateOrderIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
}

ListRepositoryTemplatesRequest::~ListRepositoryTemplatesRequest() = default;

void ListRepositoryTemplatesRequest::validate()
{
}

web::json::value ListRepositoryTemplatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(platformIsSet_) {
        val[utility::conversions::to_string_t("platform")] = ModelBase::toJson(platform_);
    }
    if(pipelineIsSet_) {
        val[utility::conversions::to_string_t("pipeline")] = ModelBase::toJson(pipeline_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(searchIsSet_) {
        val[utility::conversions::to_string_t("search")] = ModelBase::toJson(search_);
    }
    if(enterTypeIsSet_) {
        val[utility::conversions::to_string_t("enter_type")] = ModelBase::toJson(enterType_);
    }
    if(dateOrderIsSet_) {
        val[utility::conversions::to_string_t("date_order")] = ModelBase::toJson(dateOrder_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ListRepositoryTemplatesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("platform"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("platform"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlatform(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pipeline"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipeline(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("search"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enter_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enter_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("date_order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date_order"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDateOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    return ok;
}


int32_t ListRepositoryTemplatesRequest::getOffset() const
{
    return offset_;
}

void ListRepositoryTemplatesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRepositoryTemplatesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRepositoryTemplatesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRepositoryTemplatesRequest::getLimit() const
{
    return limit_;
}

void ListRepositoryTemplatesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRepositoryTemplatesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRepositoryTemplatesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListRepositoryTemplatesRequest::getPlatform() const
{
    return platform_;
}

void ListRepositoryTemplatesRequest::setPlatform(const std::string& value)
{
    platform_ = value;
    platformIsSet_ = true;
}

bool ListRepositoryTemplatesRequest::platformIsSet() const
{
    return platformIsSet_;
}

void ListRepositoryTemplatesRequest::unsetplatform()
{
    platformIsSet_ = false;
}

std::string ListRepositoryTemplatesRequest::getPipeline() const
{
    return pipeline_;
}

void ListRepositoryTemplatesRequest::setPipeline(const std::string& value)
{
    pipeline_ = value;
    pipelineIsSet_ = true;
}

bool ListRepositoryTemplatesRequest::pipelineIsSet() const
{
    return pipelineIsSet_;
}

void ListRepositoryTemplatesRequest::unsetpipeline()
{
    pipelineIsSet_ = false;
}

std::string ListRepositoryTemplatesRequest::getType() const
{
    return type_;
}

void ListRepositoryTemplatesRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListRepositoryTemplatesRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListRepositoryTemplatesRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListRepositoryTemplatesRequest::getSearch() const
{
    return search_;
}

void ListRepositoryTemplatesRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListRepositoryTemplatesRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListRepositoryTemplatesRequest::unsetsearch()
{
    searchIsSet_ = false;
}

std::string ListRepositoryTemplatesRequest::getEnterType() const
{
    return enterType_;
}

void ListRepositoryTemplatesRequest::setEnterType(const std::string& value)
{
    enterType_ = value;
    enterTypeIsSet_ = true;
}

bool ListRepositoryTemplatesRequest::enterTypeIsSet() const
{
    return enterTypeIsSet_;
}

void ListRepositoryTemplatesRequest::unsetenterType()
{
    enterTypeIsSet_ = false;
}

std::string ListRepositoryTemplatesRequest::getDateOrder() const
{
    return dateOrder_;
}

void ListRepositoryTemplatesRequest::setDateOrder(const std::string& value)
{
    dateOrder_ = value;
    dateOrderIsSet_ = true;
}

bool ListRepositoryTemplatesRequest::dateOrderIsSet() const
{
    return dateOrderIsSet_;
}

void ListRepositoryTemplatesRequest::unsetdateOrder()
{
    dateOrderIsSet_ = false;
}

std::string ListRepositoryTemplatesRequest::getLanguage() const
{
    return language_;
}

void ListRepositoryTemplatesRequest::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ListRepositoryTemplatesRequest::languageIsSet() const
{
    return languageIsSet_;
}

void ListRepositoryTemplatesRequest::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string ListRepositoryTemplatesRequest::getProjectId() const
{
    return projectId_;
}

void ListRepositoryTemplatesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListRepositoryTemplatesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListRepositoryTemplatesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


