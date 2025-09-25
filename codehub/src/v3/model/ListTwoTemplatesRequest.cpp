

#include "huaweicloud/codehub/v3/model/ListTwoTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ListTwoTemplatesRequest::ListTwoTemplatesRequest()
{
    platform_ = "";
    platformIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    pipeline_ = "";
    pipelineIsSet_ = false;
    enterType_ = "";
    enterTypeIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
    dateOrder_ = "";
    dateOrderIsSet_ = false;
    usedTimeOrder_ = "";
    usedTimeOrderIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
}

ListTwoTemplatesRequest::~ListTwoTemplatesRequest() = default;

void ListTwoTemplatesRequest::validate()
{
}

web::json::value ListTwoTemplatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(platformIsSet_) {
        val[utility::conversions::to_string_t("platform")] = ModelBase::toJson(platform_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(pipelineIsSet_) {
        val[utility::conversions::to_string_t("pipeline")] = ModelBase::toJson(pipeline_);
    }
    if(enterTypeIsSet_) {
        val[utility::conversions::to_string_t("enter_type")] = ModelBase::toJson(enterType_);
    }
    if(searchIsSet_) {
        val[utility::conversions::to_string_t("search")] = ModelBase::toJson(search_);
    }
    if(dateOrderIsSet_) {
        val[utility::conversions::to_string_t("date_order")] = ModelBase::toJson(dateOrder_);
    }
    if(usedTimeOrderIsSet_) {
        val[utility::conversions::to_string_t("used_time_order")] = ModelBase::toJson(usedTimeOrder_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }

    return val;
}
bool ListTwoTemplatesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("platform"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("platform"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlatform(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("pipeline"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipeline(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("search"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearch(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("used_time_order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_time_order"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedTimeOrder(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    return ok;
}


std::string ListTwoTemplatesRequest::getPlatform() const
{
    return platform_;
}

void ListTwoTemplatesRequest::setPlatform(const std::string& value)
{
    platform_ = value;
    platformIsSet_ = true;
}

bool ListTwoTemplatesRequest::platformIsSet() const
{
    return platformIsSet_;
}

void ListTwoTemplatesRequest::unsetplatform()
{
    platformIsSet_ = false;
}

std::string ListTwoTemplatesRequest::getLanguage() const
{
    return language_;
}

void ListTwoTemplatesRequest::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ListTwoTemplatesRequest::languageIsSet() const
{
    return languageIsSet_;
}

void ListTwoTemplatesRequest::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string ListTwoTemplatesRequest::getPipeline() const
{
    return pipeline_;
}

void ListTwoTemplatesRequest::setPipeline(const std::string& value)
{
    pipeline_ = value;
    pipelineIsSet_ = true;
}

bool ListTwoTemplatesRequest::pipelineIsSet() const
{
    return pipelineIsSet_;
}

void ListTwoTemplatesRequest::unsetpipeline()
{
    pipelineIsSet_ = false;
}

std::string ListTwoTemplatesRequest::getEnterType() const
{
    return enterType_;
}

void ListTwoTemplatesRequest::setEnterType(const std::string& value)
{
    enterType_ = value;
    enterTypeIsSet_ = true;
}

bool ListTwoTemplatesRequest::enterTypeIsSet() const
{
    return enterTypeIsSet_;
}

void ListTwoTemplatesRequest::unsetenterType()
{
    enterTypeIsSet_ = false;
}

std::string ListTwoTemplatesRequest::getSearch() const
{
    return search_;
}

void ListTwoTemplatesRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListTwoTemplatesRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListTwoTemplatesRequest::unsetsearch()
{
    searchIsSet_ = false;
}

std::string ListTwoTemplatesRequest::getDateOrder() const
{
    return dateOrder_;
}

void ListTwoTemplatesRequest::setDateOrder(const std::string& value)
{
    dateOrder_ = value;
    dateOrderIsSet_ = true;
}

bool ListTwoTemplatesRequest::dateOrderIsSet() const
{
    return dateOrderIsSet_;
}

void ListTwoTemplatesRequest::unsetdateOrder()
{
    dateOrderIsSet_ = false;
}

std::string ListTwoTemplatesRequest::getUsedTimeOrder() const
{
    return usedTimeOrder_;
}

void ListTwoTemplatesRequest::setUsedTimeOrder(const std::string& value)
{
    usedTimeOrder_ = value;
    usedTimeOrderIsSet_ = true;
}

bool ListTwoTemplatesRequest::usedTimeOrderIsSet() const
{
    return usedTimeOrderIsSet_;
}

void ListTwoTemplatesRequest::unsetusedTimeOrder()
{
    usedTimeOrderIsSet_ = false;
}

std::string ListTwoTemplatesRequest::getType() const
{
    return type_;
}

void ListTwoTemplatesRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListTwoTemplatesRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListTwoTemplatesRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListTwoTemplatesRequest::getRegion() const
{
    return region_;
}

void ListTwoTemplatesRequest::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ListTwoTemplatesRequest::regionIsSet() const
{
    return regionIsSet_;
}

void ListTwoTemplatesRequest::unsetregion()
{
    regionIsSet_ = false;
}

int32_t ListTwoTemplatesRequest::getPageNo() const
{
    return pageNo_;
}

void ListTwoTemplatesRequest::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ListTwoTemplatesRequest::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ListTwoTemplatesRequest::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t ListTwoTemplatesRequest::getPageSize() const
{
    return pageSize_;
}

void ListTwoTemplatesRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListTwoTemplatesRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListTwoTemplatesRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

}
}
}
}
}


