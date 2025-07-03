

#include "huaweicloud/ecs/v2/model/ListTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListTemplatesResponse::ListTemplatesResponse()
{
    launchTemplatesIsSet_ = false;
    pageInfoIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListTemplatesResponse::~ListTemplatesResponse() = default;

void ListTemplatesResponse::validate()
{
}

web::json::value ListTemplatesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(launchTemplatesIsSet_) {
        val[utility::conversions::to_string_t("launch_templates")] = ModelBase::toJson(launchTemplates_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListTemplatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("launch_templates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("launch_templates"));
        if(!fieldValue.is_null())
        {
            std::vector<LaunchTemplate> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLaunchTemplates(refVal);
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


std::vector<LaunchTemplate>& ListTemplatesResponse::getLaunchTemplates()
{
    return launchTemplates_;
}

void ListTemplatesResponse::setLaunchTemplates(const std::vector<LaunchTemplate>& value)
{
    launchTemplates_ = value;
    launchTemplatesIsSet_ = true;
}

bool ListTemplatesResponse::launchTemplatesIsSet() const
{
    return launchTemplatesIsSet_;
}

void ListTemplatesResponse::unsetlaunchTemplates()
{
    launchTemplatesIsSet_ = false;
}

ResponsePageInfoV3 ListTemplatesResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListTemplatesResponse::setPageInfo(const ResponsePageInfoV3& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListTemplatesResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListTemplatesResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

std::string ListTemplatesResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListTemplatesResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListTemplatesResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListTemplatesResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


