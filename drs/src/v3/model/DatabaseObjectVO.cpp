

#include "huaweicloud/drs/v3/model/DatabaseObjectVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




DatabaseObjectVO::DatabaseObjectVO()
{
    id_ = "";
    idIsSet_ = false;
    select_ = "";
    selectIsSet_ = false;
}

DatabaseObjectVO::~DatabaseObjectVO() = default;

void DatabaseObjectVO::validate()
{
}

web::json::value DatabaseObjectVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(selectIsSet_) {
        val[utility::conversions::to_string_t("select")] = ModelBase::toJson(select_);
    }

    return val;
}
bool DatabaseObjectVO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("select"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("select"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSelect(refVal);
        }
    }
    return ok;
}


std::string DatabaseObjectVO::getId() const
{
    return id_;
}

void DatabaseObjectVO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DatabaseObjectVO::idIsSet() const
{
    return idIsSet_;
}

void DatabaseObjectVO::unsetid()
{
    idIsSet_ = false;
}

std::string DatabaseObjectVO::getSelect() const
{
    return select_;
}

void DatabaseObjectVO::setSelect(const std::string& value)
{
    select_ = value;
    selectIsSet_ = true;
}

bool DatabaseObjectVO::selectIsSet() const
{
    return selectIsSet_;
}

void DatabaseObjectVO::unsetselect()
{
    selectIsSet_ = false;
}

}
}
}
}
}


