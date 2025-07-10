

#include "huaweicloud/rgc/v1/model/ListControlsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ListControlsResponse::ListControlsResponse()
{
    controlsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListControlsResponse::~ListControlsResponse() = default;

void ListControlsResponse::validate()
{
}

web::json::value ListControlsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(controlsIsSet_) {
        val[utility::conversions::to_string_t("controls")] = ModelBase::toJson(controls_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListControlsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("controls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("controls"));
        if(!fieldValue.is_null())
        {
            std::vector<Control> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setControls(refVal);
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


std::vector<Control>& ListControlsResponse::getControls()
{
    return controls_;
}

void ListControlsResponse::setControls(const std::vector<Control>& value)
{
    controls_ = value;
    controlsIsSet_ = true;
}

bool ListControlsResponse::controlsIsSet() const
{
    return controlsIsSet_;
}

void ListControlsResponse::unsetcontrols()
{
    controlsIsSet_ = false;
}

PageInfoDto ListControlsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListControlsResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListControlsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListControlsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


