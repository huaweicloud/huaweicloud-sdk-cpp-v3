

#include "huaweicloud/rds/v3/model/UpdateDatabaseOwnerRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateDatabaseOwnerRequestBody::UpdateDatabaseOwnerRequestBody()
{
    owner_ = "";
    ownerIsSet_ = false;
    database_ = "";
    databaseIsSet_ = false;
}

UpdateDatabaseOwnerRequestBody::~UpdateDatabaseOwnerRequestBody() = default;

void UpdateDatabaseOwnerRequestBody::validate()
{
}

web::json::value UpdateDatabaseOwnerRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(databaseIsSet_) {
        val[utility::conversions::to_string_t("database")] = ModelBase::toJson(database_);
    }

    return val;
}
bool UpdateDatabaseOwnerRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabase(refVal);
        }
    }
    return ok;
}


std::string UpdateDatabaseOwnerRequestBody::getOwner() const
{
    return owner_;
}

void UpdateDatabaseOwnerRequestBody::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool UpdateDatabaseOwnerRequestBody::ownerIsSet() const
{
    return ownerIsSet_;
}

void UpdateDatabaseOwnerRequestBody::unsetowner()
{
    ownerIsSet_ = false;
}

std::string UpdateDatabaseOwnerRequestBody::getDatabase() const
{
    return database_;
}

void UpdateDatabaseOwnerRequestBody::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool UpdateDatabaseOwnerRequestBody::databaseIsSet() const
{
    return databaseIsSet_;
}

void UpdateDatabaseOwnerRequestBody::unsetdatabase()
{
    databaseIsSet_ = false;
}

}
}
}
}
}


