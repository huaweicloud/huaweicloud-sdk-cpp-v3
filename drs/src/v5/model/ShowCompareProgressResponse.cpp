

#include "huaweicloud/drs/v5/model/ShowCompareProgressResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowCompareProgressResponse::ShowCompareProgressResponse()
{
    fullInfoIsSet_ = false;
    increInfoIsSet_ = false;
    globalInfoIsSet_ = false;
}

ShowCompareProgressResponse::~ShowCompareProgressResponse() = default;

void ShowCompareProgressResponse::validate()
{
}

web::json::value ShowCompareProgressResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fullInfoIsSet_) {
        val[utility::conversions::to_string_t("full_info")] = ModelBase::toJson(fullInfo_);
    }
    if(increInfoIsSet_) {
        val[utility::conversions::to_string_t("incre_info")] = ModelBase::toJson(increInfo_);
    }
    if(globalInfoIsSet_) {
        val[utility::conversions::to_string_t("global_info")] = ModelBase::toJson(globalInfo_);
    }

    return val;
}
bool ShowCompareProgressResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("full_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("full_info"));
        if(!fieldValue.is_null())
        {
            QueryCompareJobProgressResp_full_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFullInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("incre_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("incre_info"));
        if(!fieldValue.is_null())
        {
            QueryCompareJobProgressResp_incre_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncreInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("global_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("global_info"));
        if(!fieldValue.is_null())
        {
            QueryCompareJobProgressResp_global_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlobalInfo(refVal);
        }
    }
    return ok;
}


QueryCompareJobProgressResp_full_info ShowCompareProgressResponse::getFullInfo() const
{
    return fullInfo_;
}

void ShowCompareProgressResponse::setFullInfo(const QueryCompareJobProgressResp_full_info& value)
{
    fullInfo_ = value;
    fullInfoIsSet_ = true;
}

bool ShowCompareProgressResponse::fullInfoIsSet() const
{
    return fullInfoIsSet_;
}

void ShowCompareProgressResponse::unsetfullInfo()
{
    fullInfoIsSet_ = false;
}

QueryCompareJobProgressResp_incre_info ShowCompareProgressResponse::getIncreInfo() const
{
    return increInfo_;
}

void ShowCompareProgressResponse::setIncreInfo(const QueryCompareJobProgressResp_incre_info& value)
{
    increInfo_ = value;
    increInfoIsSet_ = true;
}

bool ShowCompareProgressResponse::increInfoIsSet() const
{
    return increInfoIsSet_;
}

void ShowCompareProgressResponse::unsetincreInfo()
{
    increInfoIsSet_ = false;
}

QueryCompareJobProgressResp_global_info ShowCompareProgressResponse::getGlobalInfo() const
{
    return globalInfo_;
}

void ShowCompareProgressResponse::setGlobalInfo(const QueryCompareJobProgressResp_global_info& value)
{
    globalInfo_ = value;
    globalInfoIsSet_ = true;
}

bool ShowCompareProgressResponse::globalInfoIsSet() const
{
    return globalInfoIsSet_;
}

void ShowCompareProgressResponse::unsetglobalInfo()
{
    globalInfoIsSet_ = false;
}

}
}
}
}
}


