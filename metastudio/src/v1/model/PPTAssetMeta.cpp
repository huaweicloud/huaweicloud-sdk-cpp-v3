

#include "huaweicloud/metastudio/v1/model/PPTAssetMeta.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




PPTAssetMeta::PPTAssetMeta()
{
    autoAnalysis_ = false;
    autoAnalysisIsSet_ = false;
    pptAnalysisStatus_ = "";
    pptAnalysisStatusIsSet_ = false;
    errorInfoIsSet_ = false;
    pageCount_ = 0;
    pageCountIsSet_ = false;
    pagesIsSet_ = false;
}

PPTAssetMeta::~PPTAssetMeta() = default;

void PPTAssetMeta::validate()
{
}

web::json::value PPTAssetMeta::toJson() const
{
    web::json::value val = web::json::value::object();

    if(autoAnalysisIsSet_) {
        val[utility::conversions::to_string_t("auto_analysis")] = ModelBase::toJson(autoAnalysis_);
    }
    if(pptAnalysisStatusIsSet_) {
        val[utility::conversions::to_string_t("ppt_analysis_status")] = ModelBase::toJson(pptAnalysisStatus_);
    }
    if(errorInfoIsSet_) {
        val[utility::conversions::to_string_t("error_info")] = ModelBase::toJson(errorInfo_);
    }
    if(pageCountIsSet_) {
        val[utility::conversions::to_string_t("page_count")] = ModelBase::toJson(pageCount_);
    }
    if(pagesIsSet_) {
        val[utility::conversions::to_string_t("pages")] = ModelBase::toJson(pages_);
    }

    return val;
}
bool PPTAssetMeta::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("auto_analysis"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_analysis"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoAnalysis(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ppt_analysis_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ppt_analysis_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPptAnalysisStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_info"));
        if(!fieldValue.is_null())
        {
            ErrorResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pages"));
        if(!fieldValue.is_null())
        {
            std::vector<PPTPageInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPages(refVal);
        }
    }
    return ok;
}


bool PPTAssetMeta::isAutoAnalysis() const
{
    return autoAnalysis_;
}

void PPTAssetMeta::setAutoAnalysis(bool value)
{
    autoAnalysis_ = value;
    autoAnalysisIsSet_ = true;
}

bool PPTAssetMeta::autoAnalysisIsSet() const
{
    return autoAnalysisIsSet_;
}

void PPTAssetMeta::unsetautoAnalysis()
{
    autoAnalysisIsSet_ = false;
}

std::string PPTAssetMeta::getPptAnalysisStatus() const
{
    return pptAnalysisStatus_;
}

void PPTAssetMeta::setPptAnalysisStatus(const std::string& value)
{
    pptAnalysisStatus_ = value;
    pptAnalysisStatusIsSet_ = true;
}

bool PPTAssetMeta::pptAnalysisStatusIsSet() const
{
    return pptAnalysisStatusIsSet_;
}

void PPTAssetMeta::unsetpptAnalysisStatus()
{
    pptAnalysisStatusIsSet_ = false;
}

ErrorResponse PPTAssetMeta::getErrorInfo() const
{
    return errorInfo_;
}

void PPTAssetMeta::setErrorInfo(const ErrorResponse& value)
{
    errorInfo_ = value;
    errorInfoIsSet_ = true;
}

bool PPTAssetMeta::errorInfoIsSet() const
{
    return errorInfoIsSet_;
}

void PPTAssetMeta::unseterrorInfo()
{
    errorInfoIsSet_ = false;
}

int32_t PPTAssetMeta::getPageCount() const
{
    return pageCount_;
}

void PPTAssetMeta::setPageCount(int32_t value)
{
    pageCount_ = value;
    pageCountIsSet_ = true;
}

bool PPTAssetMeta::pageCountIsSet() const
{
    return pageCountIsSet_;
}

void PPTAssetMeta::unsetpageCount()
{
    pageCountIsSet_ = false;
}

std::vector<PPTPageInfo>& PPTAssetMeta::getPages()
{
    return pages_;
}

void PPTAssetMeta::setPages(const std::vector<PPTPageInfo>& value)
{
    pages_ = value;
    pagesIsSet_ = true;
}

bool PPTAssetMeta::pagesIsSet() const
{
    return pagesIsSet_;
}

void PPTAssetMeta::unsetpages()
{
    pagesIsSet_ = false;
}

}
}
}
}
}


