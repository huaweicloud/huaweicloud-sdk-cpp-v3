

#include "huaweicloud/projectman/v4/model/ListWorkitemConfigsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListWorkitemConfigsResponse::ListWorkitemConfigsResponse()
{
    closedWorkitemReadonlyMode_ = false;
    closedWorkitemReadonlyModeIsSet_ = false;
}

ListWorkitemConfigsResponse::~ListWorkitemConfigsResponse() = default;

void ListWorkitemConfigsResponse::validate()
{
}

web::json::value ListWorkitemConfigsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(closedWorkitemReadonlyModeIsSet_) {
        val[utility::conversions::to_string_t("closed_workitem_readonly_mode")] = ModelBase::toJson(closedWorkitemReadonlyMode_);
    }

    return val;
}
bool ListWorkitemConfigsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("closed_workitem_readonly_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("closed_workitem_readonly_mode"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClosedWorkitemReadonlyMode(refVal);
        }
    }
    return ok;
}


bool ListWorkitemConfigsResponse::isClosedWorkitemReadonlyMode() const
{
    return closedWorkitemReadonlyMode_;
}

void ListWorkitemConfigsResponse::setClosedWorkitemReadonlyMode(bool value)
{
    closedWorkitemReadonlyMode_ = value;
    closedWorkitemReadonlyModeIsSet_ = true;
}

bool ListWorkitemConfigsResponse::closedWorkitemReadonlyModeIsSet() const
{
    return closedWorkitemReadonlyModeIsSet_;
}

void ListWorkitemConfigsResponse::unsetclosedWorkitemReadonlyMode()
{
    closedWorkitemReadonlyModeIsSet_ = false;
}

}
}
}
}
}


