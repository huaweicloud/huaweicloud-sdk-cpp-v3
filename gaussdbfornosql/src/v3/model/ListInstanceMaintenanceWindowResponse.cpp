

#include "huaweicloud/gaussdbfornosql/v3/model/ListInstanceMaintenanceWindowResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListInstanceMaintenanceWindowResponse::ListInstanceMaintenanceWindowResponse()
{
    maintenanceWindow_ = "";
    maintenanceWindowIsSet_ = false;
}

ListInstanceMaintenanceWindowResponse::~ListInstanceMaintenanceWindowResponse() = default;

void ListInstanceMaintenanceWindowResponse::validate()
{
}

web::json::value ListInstanceMaintenanceWindowResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(maintenanceWindowIsSet_) {
        val[utility::conversions::to_string_t("maintenance_window")] = ModelBase::toJson(maintenanceWindow_);
    }

    return val;
}
bool ListInstanceMaintenanceWindowResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("maintenance_window"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maintenance_window"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaintenanceWindow(refVal);
        }
    }
    return ok;
}


std::string ListInstanceMaintenanceWindowResponse::getMaintenanceWindow() const
{
    return maintenanceWindow_;
}

void ListInstanceMaintenanceWindowResponse::setMaintenanceWindow(const std::string& value)
{
    maintenanceWindow_ = value;
    maintenanceWindowIsSet_ = true;
}

bool ListInstanceMaintenanceWindowResponse::maintenanceWindowIsSet() const
{
    return maintenanceWindowIsSet_;
}

void ListInstanceMaintenanceWindowResponse::unsetmaintenanceWindow()
{
    maintenanceWindowIsSet_ = false;
}

}
}
}
}
}


