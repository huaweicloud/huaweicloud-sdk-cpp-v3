

#include "huaweicloud/rgc/v1/model/ListEnabledControlsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ListEnabledControlsResponse::ListEnabledControlsResponse()
{
    enabledControlsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListEnabledControlsResponse::~ListEnabledControlsResponse() = default;

void ListEnabledControlsResponse::validate()
{
}

web::json::value ListEnabledControlsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enabledControlsIsSet_) {
        val[utility::conversions::to_string_t("enabled_controls")] = ModelBase::toJson(enabledControls_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListEnabledControlsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enabled_controls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled_controls"));
        if(!fieldValue.is_null())
        {
            std::vector<EnabledControl> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabledControls(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfoDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}


std::vector<EnabledControl>& ListEnabledControlsResponse::getEnabledControls()
{
    return enabledControls_;
}

void ListEnabledControlsResponse::setEnabledControls(const std::vector<EnabledControl>& value)
{
    enabledControls_ = value;
    enabledControlsIsSet_ = true;
}

bool ListEnabledControlsResponse::enabledControlsIsSet() const
{
    return enabledControlsIsSet_;
}

void ListEnabledControlsResponse::unsetenabledControls()
{
    enabledControlsIsSet_ = false;
}

PageInfoDto ListEnabledControlsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListEnabledControlsResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListEnabledControlsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListEnabledControlsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


