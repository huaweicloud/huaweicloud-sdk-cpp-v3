

#include "huaweicloud/cloudtest/v1/model/QueryRequirementsOverviewInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




QueryRequirementsOverviewInfo::QueryRequirementsOverviewInfo()
{
    fixedVersionId_ = "";
    fixedVersionIdIsSet_ = false;
    moduleId_ = "";
    moduleIdIsSet_ = false;
    keyWord_ = "";
    keyWordIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    pageNo_ = 0;
    pageNoIsSet_ = false;
    piFilterIsSet_ = false;
}

QueryRequirementsOverviewInfo::~QueryRequirementsOverviewInfo() = default;

void QueryRequirementsOverviewInfo::validate()
{
}

web::json::value QueryRequirementsOverviewInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fixedVersionIdIsSet_) {
        val[utility::conversions::to_string_t("fixed_version_id")] = ModelBase::toJson(fixedVersionId_);
    }
    if(moduleIdIsSet_) {
        val[utility::conversions::to_string_t("module_id")] = ModelBase::toJson(moduleId_);
    }
    if(keyWordIsSet_) {
        val[utility::conversions::to_string_t("key_word")] = ModelBase::toJson(keyWord_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(piFilterIsSet_) {
        val[utility::conversions::to_string_t("pi_filter")] = ModelBase::toJson(piFilter_);
    }

    return val;
}
bool QueryRequirementsOverviewInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fixed_version_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fixed_version_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFixedVersionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_word"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_word"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyWord(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("page_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pi_filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pi_filter"));
        if(!fieldValue.is_null())
        {
            PiFilterInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPiFilter(refVal);
        }
    }
    return ok;
}


std::string QueryRequirementsOverviewInfo::getFixedVersionId() const
{
    return fixedVersionId_;
}

void QueryRequirementsOverviewInfo::setFixedVersionId(const std::string& value)
{
    fixedVersionId_ = value;
    fixedVersionIdIsSet_ = true;
}

bool QueryRequirementsOverviewInfo::fixedVersionIdIsSet() const
{
    return fixedVersionIdIsSet_;
}

void QueryRequirementsOverviewInfo::unsetfixedVersionId()
{
    fixedVersionIdIsSet_ = false;
}

std::string QueryRequirementsOverviewInfo::getModuleId() const
{
    return moduleId_;
}

void QueryRequirementsOverviewInfo::setModuleId(const std::string& value)
{
    moduleId_ = value;
    moduleIdIsSet_ = true;
}

bool QueryRequirementsOverviewInfo::moduleIdIsSet() const
{
    return moduleIdIsSet_;
}

void QueryRequirementsOverviewInfo::unsetmoduleId()
{
    moduleIdIsSet_ = false;
}

std::string QueryRequirementsOverviewInfo::getKeyWord() const
{
    return keyWord_;
}

void QueryRequirementsOverviewInfo::setKeyWord(const std::string& value)
{
    keyWord_ = value;
    keyWordIsSet_ = true;
}

bool QueryRequirementsOverviewInfo::keyWordIsSet() const
{
    return keyWordIsSet_;
}

void QueryRequirementsOverviewInfo::unsetkeyWord()
{
    keyWordIsSet_ = false;
}

int32_t QueryRequirementsOverviewInfo::getPageSize() const
{
    return pageSize_;
}

void QueryRequirementsOverviewInfo::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool QueryRequirementsOverviewInfo::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void QueryRequirementsOverviewInfo::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t QueryRequirementsOverviewInfo::getPageNo() const
{
    return pageNo_;
}

void QueryRequirementsOverviewInfo::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool QueryRequirementsOverviewInfo::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void QueryRequirementsOverviewInfo::unsetpageNo()
{
    pageNoIsSet_ = false;
}

PiFilterInfo QueryRequirementsOverviewInfo::getPiFilter() const
{
    return piFilter_;
}

void QueryRequirementsOverviewInfo::setPiFilter(const PiFilterInfo& value)
{
    piFilter_ = value;
    piFilterIsSet_ = true;
}

bool QueryRequirementsOverviewInfo::piFilterIsSet() const
{
    return piFilterIsSet_;
}

void QueryRequirementsOverviewInfo::unsetpiFilter()
{
    piFilterIsSet_ = false;
}

}
}
}
}
}


