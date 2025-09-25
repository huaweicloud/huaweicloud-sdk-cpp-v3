

#include "huaweicloud/codeartspipeline/v2/model/ListTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListTemplatesRequest::ListTemplatesRequest()
{
    templateType_ = "";
    templateTypeIsSet_ = false;
    isBuildIn_ = "";
    isBuildInIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
    asc_ = "";
    ascIsSet_ = false;
}

ListTemplatesRequest::~ListTemplatesRequest() = default;

void ListTemplatesRequest::validate()
{
}

web::json::value ListTemplatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateTypeIsSet_) {
        val[utility::conversions::to_string_t("template_type")] = ModelBase::toJson(templateType_);
    }
    if(isBuildInIsSet_) {
        val[utility::conversions::to_string_t("is_build_in")] = ModelBase::toJson(isBuildIn_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }
    if(ascIsSet_) {
        val[utility::conversions::to_string_t("asc")] = ModelBase::toJson(asc_);
    }

    return val;
}
bool ListTemplatesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_build_in"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_build_in"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsBuildIn(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAsc(refVal);
        }
    }
    return ok;
}


std::string ListTemplatesRequest::getTemplateType() const
{
    return templateType_;
}

void ListTemplatesRequest::setTemplateType(const std::string& value)
{
    templateType_ = value;
    templateTypeIsSet_ = true;
}

bool ListTemplatesRequest::templateTypeIsSet() const
{
    return templateTypeIsSet_;
}

void ListTemplatesRequest::unsettemplateType()
{
    templateTypeIsSet_ = false;
}

std::string ListTemplatesRequest::getIsBuildIn() const
{
    return isBuildIn_;
}

void ListTemplatesRequest::setIsBuildIn(const std::string& value)
{
    isBuildIn_ = value;
    isBuildInIsSet_ = true;
}

bool ListTemplatesRequest::isBuildInIsSet() const
{
    return isBuildInIsSet_;
}

void ListTemplatesRequest::unsetisBuildIn()
{
    isBuildInIsSet_ = false;
}

int32_t ListTemplatesRequest::getOffset() const
{
    return offset_;
}

void ListTemplatesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListTemplatesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListTemplatesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListTemplatesRequest::getLimit() const
{
    return limit_;
}

void ListTemplatesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTemplatesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTemplatesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListTemplatesRequest::getName() const
{
    return name_;
}

void ListTemplatesRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListTemplatesRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListTemplatesRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListTemplatesRequest::getSort() const
{
    return sort_;
}

void ListTemplatesRequest::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool ListTemplatesRequest::sortIsSet() const
{
    return sortIsSet_;
}

void ListTemplatesRequest::unsetsort()
{
    sortIsSet_ = false;
}

std::string ListTemplatesRequest::getAsc() const
{
    return asc_;
}

void ListTemplatesRequest::setAsc(const std::string& value)
{
    asc_ = value;
    ascIsSet_ = true;
}

bool ListTemplatesRequest::ascIsSet() const
{
    return ascIsSet_;
}

void ListTemplatesRequest::unsetasc()
{
    ascIsSet_ = false;
}

}
}
}
}
}


