

#include "huaweicloud/ecs/v2/model/MigrateServerRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




MigrateServerRequestBody::MigrateServerRequestBody()
{
    migrateIsSet_ = false;
}

MigrateServerRequestBody::~MigrateServerRequestBody() = default;

void MigrateServerRequestBody::validate()
{
}

web::json::value MigrateServerRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(migrateIsSet_) {
        val[utility::conversions::to_string_t("migrate")] = ModelBase::toJson(migrate_);
    }

    return val;
}
bool MigrateServerRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("migrate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("migrate"));
        if(!fieldValue.is_null())
        {
            MigrateServerOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMigrate(refVal);
        }
    }
    return ok;
}


MigrateServerOption MigrateServerRequestBody::getMigrate() const
{
    return migrate_;
}

void MigrateServerRequestBody::setMigrate(const MigrateServerOption& value)
{
    migrate_ = value;
    migrateIsSet_ = true;
}

bool MigrateServerRequestBody::migrateIsSet() const
{
    return migrateIsSet_;
}

void MigrateServerRequestBody::unsetmigrate()
{
    migrateIsSet_ = false;
}

}
}
}
}
}


