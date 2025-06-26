

#include "huaweicloud/rgc/v1/model/ListControlsForOrganizationalUnitResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ListControlsForOrganizationalUnitResponse::ListControlsForOrganizationalUnitResponse()
{
    controlSummariesIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListControlsForOrganizationalUnitResponse::~ListControlsForOrganizationalUnitResponse() = default;

void ListControlsForOrganizationalUnitResponse::validate()
{
}

web::json::value ListControlsForOrganizationalUnitResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(controlSummariesIsSet_) {
        val[utility::conversions::to_string_t("control_summaries")] = ModelBase::toJson(controlSummaries_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListControlsForOrganizationalUnitResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("control_summaries"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("control_summaries"));
        if(!fieldValue.is_null())
        {
            std::vector<TargetControl> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setControlSummaries(refVal);
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


std::vector<TargetControl>& ListControlsForOrganizationalUnitResponse::getControlSummaries()
{
    return controlSummaries_;
}

void ListControlsForOrganizationalUnitResponse::setControlSummaries(const std::vector<TargetControl>& value)
{
    controlSummaries_ = value;
    controlSummariesIsSet_ = true;
}

bool ListControlsForOrganizationalUnitResponse::controlSummariesIsSet() const
{
    return controlSummariesIsSet_;
}

void ListControlsForOrganizationalUnitResponse::unsetcontrolSummaries()
{
    controlSummariesIsSet_ = false;
}

PageInfoDto ListControlsForOrganizationalUnitResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListControlsForOrganizationalUnitResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListControlsForOrganizationalUnitResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListControlsForOrganizationalUnitResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


