

#include "huaweicloud/cfw/v1/model/AddEipAlarmWhitelistRespData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddEipAlarmWhitelistRespData::AddEipAlarmWhitelistRespData()
{
    id_ = "";
    idIsSet_ = false;
}

AddEipAlarmWhitelistRespData::~AddEipAlarmWhitelistRespData() = default;

void AddEipAlarmWhitelistRespData::validate()
{
}

web::json::value AddEipAlarmWhitelistRespData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool AddEipAlarmWhitelistRespData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string AddEipAlarmWhitelistRespData::getId() const
{
    return id_;
}

void AddEipAlarmWhitelistRespData::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AddEipAlarmWhitelistRespData::idIsSet() const
{
    return idIsSet_;
}

void AddEipAlarmWhitelistRespData::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


