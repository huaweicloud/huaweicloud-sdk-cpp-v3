

#include "huaweicloud/codeartsartifact/v2/model/SearchByChecksumRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




SearchByChecksumRequest::SearchByChecksumRequest()
{
    checksum_ = "";
    checksumIsSet_ = false;
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    format_ = "";
    formatIsSet_ = false;
    inProject_ = "";
    inProjectIsSet_ = false;
}

SearchByChecksumRequest::~SearchByChecksumRequest() = default;

void SearchByChecksumRequest::validate()
{
}

web::json::value SearchByChecksumRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(checksumIsSet_) {
        val[utility::conversions::to_string_t("checksum")] = ModelBase::toJson(checksum_);
    }
    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }
    if(inProjectIsSet_) {
        val[utility::conversions::to_string_t("in_project")] = ModelBase::toJson(inProject_);
    }

    return val;
}
bool SearchByChecksumRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("checksum"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("checksum"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChecksum(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("in_project"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("in_project"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInProject(refVal);
        }
    }
    return ok;
}


std::string SearchByChecksumRequest::getChecksum() const
{
    return checksum_;
}

void SearchByChecksumRequest::setChecksum(const std::string& value)
{
    checksum_ = value;
    checksumIsSet_ = true;
}

bool SearchByChecksumRequest::checksumIsSet() const
{
    return checksumIsSet_;
}

void SearchByChecksumRequest::unsetchecksum()
{
    checksumIsSet_ = false;
}

int32_t SearchByChecksumRequest::getPageNo() const
{
    return pageNo_;
}

void SearchByChecksumRequest::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool SearchByChecksumRequest::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void SearchByChecksumRequest::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t SearchByChecksumRequest::getPageSize() const
{
    return pageSize_;
}

void SearchByChecksumRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool SearchByChecksumRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void SearchByChecksumRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string SearchByChecksumRequest::getFormat() const
{
    return format_;
}

void SearchByChecksumRequest::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool SearchByChecksumRequest::formatIsSet() const
{
    return formatIsSet_;
}

void SearchByChecksumRequest::unsetformat()
{
    formatIsSet_ = false;
}

std::string SearchByChecksumRequest::getInProject() const
{
    return inProject_;
}

void SearchByChecksumRequest::setInProject(const std::string& value)
{
    inProject_ = value;
    inProjectIsSet_ = true;
}

bool SearchByChecksumRequest::inProjectIsSet() const
{
    return inProjectIsSet_;
}

void SearchByChecksumRequest::unsetinProject()
{
    inProjectIsSet_ = false;
}

}
}
}
}
}


