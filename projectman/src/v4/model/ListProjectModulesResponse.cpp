

#include "huaweicloud/projectman/v4/model/ListProjectModulesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListProjectModulesResponse::ListProjectModulesResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    modulesIsSet_ = false;
}

ListProjectModulesResponse::~ListProjectModulesResponse() = default;

void ListProjectModulesResponse::validate()
{
}

web::json::value ListProjectModulesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(modulesIsSet_) {
        val[utility::conversions::to_string_t("modules")] = ModelBase::toJson(modules_);
    }

    return val;
}
bool ListProjectModulesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modules"));
        if(!fieldValue.is_null())
        {
            std::vector<ProjectModule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModules(refVal);
        }
    }
    return ok;
}


int32_t ListProjectModulesResponse::getTotal() const
{
    return total_;
}

void ListProjectModulesResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListProjectModulesResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListProjectModulesResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<ProjectModule>& ListProjectModulesResponse::getModules()
{
    return modules_;
}

void ListProjectModulesResponse::setModules(const std::vector<ProjectModule>& value)
{
    modules_ = value;
    modulesIsSet_ = true;
}

bool ListProjectModulesResponse::modulesIsSet() const
{
    return modulesIsSet_;
}

void ListProjectModulesResponse::unsetmodules()
{
    modulesIsSet_ = false;
}

}
}
}
}
}


