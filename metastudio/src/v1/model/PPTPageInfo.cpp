

#include "huaweicloud/metastudio/v1/model/PPTPageInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




PPTPageInfo::PPTPageInfo()
{
    pageNo_ = 0;
    pageNoIsSet_ = false;
    fileId_ = "";
    fileIdIsSet_ = false;
    pageContent_ = "";
    pageContentIsSet_ = false;
}

PPTPageInfo::~PPTPageInfo() = default;

void PPTPageInfo::validate()
{
}

web::json::value PPTPageInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(fileIdIsSet_) {
        val[utility::conversions::to_string_t("file_id")] = ModelBase::toJson(fileId_);
    }
    if(pageContentIsSet_) {
        val[utility::conversions::to_string_t("page_content")] = ModelBase::toJson(pageContent_);
    }

    return val;
}
bool PPTPageInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("page_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageContent(refVal);
        }
    }
    return ok;
}


int32_t PPTPageInfo::getPageNo() const
{
    return pageNo_;
}

void PPTPageInfo::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool PPTPageInfo::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void PPTPageInfo::unsetpageNo()
{
    pageNoIsSet_ = false;
}

std::string PPTPageInfo::getFileId() const
{
    return fileId_;
}

void PPTPageInfo::setFileId(const std::string& value)
{
    fileId_ = value;
    fileIdIsSet_ = true;
}

bool PPTPageInfo::fileIdIsSet() const
{
    return fileIdIsSet_;
}

void PPTPageInfo::unsetfileId()
{
    fileIdIsSet_ = false;
}

std::string PPTPageInfo::getPageContent() const
{
    return pageContent_;
}

void PPTPageInfo::setPageContent(const std::string& value)
{
    pageContent_ = value;
    pageContentIsSet_ = true;
}

bool PPTPageInfo::pageContentIsSet() const
{
    return pageContentIsSet_;
}

void PPTPageInfo::unsetpageContent()
{
    pageContentIsSet_ = false;
}

}
}
}
}
}


