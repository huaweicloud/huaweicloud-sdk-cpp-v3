

#include "huaweicloud/codeartsrepo/v3/model/GetTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




GetTemplatesRequest::GetTemplatesRequest()
{
    platform_ = "";
    platformIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    pipeline_ = "";
    pipelineIsSet_ = false;
    entertype_ = "";
    entertypeIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
    dateorder_ = "";
    dateorderIsSet_ = false;
    usedtimeorder_ = "";
    usedtimeorderIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
}

GetTemplatesRequest::~GetTemplatesRequest() = default;

void GetTemplatesRequest::validate()
{
}

web::json::value GetTemplatesRequest::toJson() const
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
    if(entertypeIsSet_) {
        val[utility::conversions::to_string_t("entertype")] = ModelBase::toJson(entertype_);
    }
    if(searchIsSet_) {
        val[utility::conversions::to_string_t("search")] = ModelBase::toJson(search_);
    }
    if(dateorderIsSet_) {
        val[utility::conversions::to_string_t("dateorder")] = ModelBase::toJson(dateorder_);
    }
    if(usedtimeorderIsSet_) {
        val[utility::conversions::to_string_t("usedtimeorder")] = ModelBase::toJson(usedtimeorder_);
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
bool GetTemplatesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("entertype"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entertype"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntertype(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("dateorder"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dateorder"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDateorder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("usedtimeorder"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("usedtimeorder"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedtimeorder(refVal);
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


std::string GetTemplatesRequest::getPlatform() const
{
    return platform_;
}

void GetTemplatesRequest::setPlatform(const std::string& value)
{
    platform_ = value;
    platformIsSet_ = true;
}

bool GetTemplatesRequest::platformIsSet() const
{
    return platformIsSet_;
}

void GetTemplatesRequest::unsetplatform()
{
    platformIsSet_ = false;
}

std::string GetTemplatesRequest::getLanguage() const
{
    return language_;
}

void GetTemplatesRequest::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool GetTemplatesRequest::languageIsSet() const
{
    return languageIsSet_;
}

void GetTemplatesRequest::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string GetTemplatesRequest::getPipeline() const
{
    return pipeline_;
}

void GetTemplatesRequest::setPipeline(const std::string& value)
{
    pipeline_ = value;
    pipelineIsSet_ = true;
}

bool GetTemplatesRequest::pipelineIsSet() const
{
    return pipelineIsSet_;
}

void GetTemplatesRequest::unsetpipeline()
{
    pipelineIsSet_ = false;
}

std::string GetTemplatesRequest::getEntertype() const
{
    return entertype_;
}

void GetTemplatesRequest::setEntertype(const std::string& value)
{
    entertype_ = value;
    entertypeIsSet_ = true;
}

bool GetTemplatesRequest::entertypeIsSet() const
{
    return entertypeIsSet_;
}

void GetTemplatesRequest::unsetentertype()
{
    entertypeIsSet_ = false;
}

std::string GetTemplatesRequest::getSearch() const
{
    return search_;
}

void GetTemplatesRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool GetTemplatesRequest::searchIsSet() const
{
    return searchIsSet_;
}

void GetTemplatesRequest::unsetsearch()
{
    searchIsSet_ = false;
}

std::string GetTemplatesRequest::getDateorder() const
{
    return dateorder_;
}

void GetTemplatesRequest::setDateorder(const std::string& value)
{
    dateorder_ = value;
    dateorderIsSet_ = true;
}

bool GetTemplatesRequest::dateorderIsSet() const
{
    return dateorderIsSet_;
}

void GetTemplatesRequest::unsetdateorder()
{
    dateorderIsSet_ = false;
}

std::string GetTemplatesRequest::getUsedtimeorder() const
{
    return usedtimeorder_;
}

void GetTemplatesRequest::setUsedtimeorder(const std::string& value)
{
    usedtimeorder_ = value;
    usedtimeorderIsSet_ = true;
}

bool GetTemplatesRequest::usedtimeorderIsSet() const
{
    return usedtimeorderIsSet_;
}

void GetTemplatesRequest::unsetusedtimeorder()
{
    usedtimeorderIsSet_ = false;
}

std::string GetTemplatesRequest::getType() const
{
    return type_;
}

void GetTemplatesRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool GetTemplatesRequest::typeIsSet() const
{
    return typeIsSet_;
}

void GetTemplatesRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string GetTemplatesRequest::getRegion() const
{
    return region_;
}

void GetTemplatesRequest::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool GetTemplatesRequest::regionIsSet() const
{
    return regionIsSet_;
}

void GetTemplatesRequest::unsetregion()
{
    regionIsSet_ = false;
}

int32_t GetTemplatesRequest::getPageNo() const
{
    return pageNo_;
}

void GetTemplatesRequest::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool GetTemplatesRequest::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void GetTemplatesRequest::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t GetTemplatesRequest::getPageSize() const
{
    return pageSize_;
}

void GetTemplatesRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool GetTemplatesRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void GetTemplatesRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

}
}
}
}
}


