

#include "huaweicloud/drs/v5/model/ListsAgencyPermissionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListsAgencyPermissionsResponse::ListsAgencyPermissionsResponse()
{
    commonPermissionsIsSet_ = false;
    enginePermissionsIsSet_ = false;
}

ListsAgencyPermissionsResponse::~ListsAgencyPermissionsResponse() = default;

void ListsAgencyPermissionsResponse::validate()
{
}

web::json::value ListsAgencyPermissionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commonPermissionsIsSet_) {
        val[utility::conversions::to_string_t("common_permissions")] = ModelBase::toJson(commonPermissions_);
    }
    if(enginePermissionsIsSet_) {
        val[utility::conversions::to_string_t("engine_permissions")] = ModelBase::toJson(enginePermissions_);
    }

    return val;
}
bool ListsAgencyPermissionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("common_permissions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("common_permissions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommonPermissions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_permissions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_permissions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnginePermissions(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ListsAgencyPermissionsResponse::getCommonPermissions()
{
    return commonPermissions_;
}

void ListsAgencyPermissionsResponse::setCommonPermissions(const std::vector<std::string>& value)
{
    commonPermissions_ = value;
    commonPermissionsIsSet_ = true;
}

bool ListsAgencyPermissionsResponse::commonPermissionsIsSet() const
{
    return commonPermissionsIsSet_;
}

void ListsAgencyPermissionsResponse::unsetcommonPermissions()
{
    commonPermissionsIsSet_ = false;
}

std::vector<std::string>& ListsAgencyPermissionsResponse::getEnginePermissions()
{
    return enginePermissions_;
}

void ListsAgencyPermissionsResponse::setEnginePermissions(const std::vector<std::string>& value)
{
    enginePermissions_ = value;
    enginePermissionsIsSet_ = true;
}

bool ListsAgencyPermissionsResponse::enginePermissionsIsSet() const
{
    return enginePermissionsIsSet_;
}

void ListsAgencyPermissionsResponse::unsetenginePermissions()
{
    enginePermissionsIsSet_ = false;
}

}
}
}
}
}


