

#include "huaweicloud/rds/v3/model/MysqlReadOnlySwitch.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




MysqlReadOnlySwitch::MysqlReadOnlySwitch()
{
    readonly_ = false;
    readonlyIsSet_ = false;
}

MysqlReadOnlySwitch::~MysqlReadOnlySwitch() = default;

void MysqlReadOnlySwitch::validate()
{
}

web::json::value MysqlReadOnlySwitch::toJson() const
{
    web::json::value val = web::json::value::object();

    if(readonlyIsSet_) {
        val[utility::conversions::to_string_t("readonly")] = ModelBase::toJson(readonly_);
    }

    return val;
}

bool MysqlReadOnlySwitch::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("readonly"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("readonly"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadonly(refVal);
        }
    }
    return ok;
}

bool MysqlReadOnlySwitch::isReadonly() const
{
    return readonly_;
}

void MysqlReadOnlySwitch::setReadonly(bool value)
{
    readonly_ = value;
    readonlyIsSet_ = true;
}

bool MysqlReadOnlySwitch::readonlyIsSet() const
{
    return readonlyIsSet_;
}

void MysqlReadOnlySwitch::unsetreadonly()
{
    readonlyIsSet_ = false;
}

}
}
}
}
}


