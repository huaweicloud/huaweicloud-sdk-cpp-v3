

#include "huaweicloud/gaussdb/v3/model/RestoreDatabaseTableInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




RestoreDatabaseTableInfo::RestoreDatabaseTableInfo()
{
    name_ = "";
    nameIsSet_ = false;
}

RestoreDatabaseTableInfo::~RestoreDatabaseTableInfo() = default;

void RestoreDatabaseTableInfo::validate()
{
}

web::json::value RestoreDatabaseTableInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool RestoreDatabaseTableInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string RestoreDatabaseTableInfo::getName() const
{
    return name_;
}

void RestoreDatabaseTableInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RestoreDatabaseTableInfo::nameIsSet() const
{
    return nameIsSet_;
}

void RestoreDatabaseTableInfo::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


