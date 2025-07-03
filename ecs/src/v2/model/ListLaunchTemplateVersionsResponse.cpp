

#include "huaweicloud/ecs/v2/model/ListLaunchTemplateVersionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListLaunchTemplateVersionsResponse::ListLaunchTemplateVersionsResponse()
{
    launchTemplateVersionsIsSet_ = false;
    pageInfoIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListLaunchTemplateVersionsResponse::~ListLaunchTemplateVersionsResponse() = default;

void ListLaunchTemplateVersionsResponse::validate()
{
}

web::json::value ListLaunchTemplateVersionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(launchTemplateVersionsIsSet_) {
        val[utility::conversions::to_string_t("launch_template_versions")] = ModelBase::toJson(launchTemplateVersions_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListLaunchTemplateVersionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("launch_template_versions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("launch_template_versions"));
        if(!fieldValue.is_null())
        {
            std::vector<TemplateVersion> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLaunchTemplateVersions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            ResponsePageInfoV3 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::vector<TemplateVersion>& ListLaunchTemplateVersionsResponse::getLaunchTemplateVersions()
{
    return launchTemplateVersions_;
}

void ListLaunchTemplateVersionsResponse::setLaunchTemplateVersions(const std::vector<TemplateVersion>& value)
{
    launchTemplateVersions_ = value;
    launchTemplateVersionsIsSet_ = true;
}

bool ListLaunchTemplateVersionsResponse::launchTemplateVersionsIsSet() const
{
    return launchTemplateVersionsIsSet_;
}

void ListLaunchTemplateVersionsResponse::unsetlaunchTemplateVersions()
{
    launchTemplateVersionsIsSet_ = false;
}

ResponsePageInfoV3 ListLaunchTemplateVersionsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListLaunchTemplateVersionsResponse::setPageInfo(const ResponsePageInfoV3& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListLaunchTemplateVersionsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListLaunchTemplateVersionsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

std::string ListLaunchTemplateVersionsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListLaunchTemplateVersionsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListLaunchTemplateVersionsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListLaunchTemplateVersionsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


