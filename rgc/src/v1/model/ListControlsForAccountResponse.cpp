

#include "huaweicloud/rgc/v1/model/ListControlsForAccountResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ListControlsForAccountResponse::ListControlsForAccountResponse()
{
    controlSummariesIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListControlsForAccountResponse::~ListControlsForAccountResponse() = default;

void ListControlsForAccountResponse::validate()
{
}

web::json::value ListControlsForAccountResponse::toJson() const
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
bool ListControlsForAccountResponse::fromJson(const web::json::value& val)
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


std::vector<TargetControl>& ListControlsForAccountResponse::getControlSummaries()
{
    return controlSummaries_;
}

void ListControlsForAccountResponse::setControlSummaries(const std::vector<TargetControl>& value)
{
    controlSummaries_ = value;
    controlSummariesIsSet_ = true;
}

bool ListControlsForAccountResponse::controlSummariesIsSet() const
{
    return controlSummariesIsSet_;
}

void ListControlsForAccountResponse::unsetcontrolSummaries()
{
    controlSummariesIsSet_ = false;
}

PageInfoDto ListControlsForAccountResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListControlsForAccountResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListControlsForAccountResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListControlsForAccountResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


