

#include "huaweicloud/dds/v3/model/RestoreInstanceFromCollectionRequestBody_restore_collections.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




RestoreInstanceFromCollectionRequestBody_restore_collections::RestoreInstanceFromCollectionRequestBody_restore_collections()
{
    database_ = "";
    databaseIsSet_ = false;
    restoreDatabaseTime_ = "";
    restoreDatabaseTimeIsSet_ = false;
    collectionsIsSet_ = false;
}

RestoreInstanceFromCollectionRequestBody_restore_collections::~RestoreInstanceFromCollectionRequestBody_restore_collections() = default;

void RestoreInstanceFromCollectionRequestBody_restore_collections::validate()
{
}

web::json::value RestoreInstanceFromCollectionRequestBody_restore_collections::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databaseIsSet_) {
        val[utility::conversions::to_string_t("database")] = ModelBase::toJson(database_);
    }
    if(restoreDatabaseTimeIsSet_) {
        val[utility::conversions::to_string_t("restore_database_time")] = ModelBase::toJson(restoreDatabaseTime_);
    }
    if(collectionsIsSet_) {
        val[utility::conversions::to_string_t("collections")] = ModelBase::toJson(collections_);
    }

    return val;
}
bool RestoreInstanceFromCollectionRequestBody_restore_collections::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("database"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("restore_database_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_database_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreDatabaseTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("collections"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("collections"));
        if(!fieldValue.is_null())
        {
            std::vector<RestoreInstanceFromCollectionRequestBody_collections> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCollections(refVal);
        }
    }
    return ok;
}


std::string RestoreInstanceFromCollectionRequestBody_restore_collections::getDatabase() const
{
    return database_;
}

void RestoreInstanceFromCollectionRequestBody_restore_collections::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool RestoreInstanceFromCollectionRequestBody_restore_collections::databaseIsSet() const
{
    return databaseIsSet_;
}

void RestoreInstanceFromCollectionRequestBody_restore_collections::unsetdatabase()
{
    databaseIsSet_ = false;
}

std::string RestoreInstanceFromCollectionRequestBody_restore_collections::getRestoreDatabaseTime() const
{
    return restoreDatabaseTime_;
}

void RestoreInstanceFromCollectionRequestBody_restore_collections::setRestoreDatabaseTime(const std::string& value)
{
    restoreDatabaseTime_ = value;
    restoreDatabaseTimeIsSet_ = true;
}

bool RestoreInstanceFromCollectionRequestBody_restore_collections::restoreDatabaseTimeIsSet() const
{
    return restoreDatabaseTimeIsSet_;
}

void RestoreInstanceFromCollectionRequestBody_restore_collections::unsetrestoreDatabaseTime()
{
    restoreDatabaseTimeIsSet_ = false;
}

std::vector<RestoreInstanceFromCollectionRequestBody_collections>& RestoreInstanceFromCollectionRequestBody_restore_collections::getCollections()
{
    return collections_;
}

void RestoreInstanceFromCollectionRequestBody_restore_collections::setCollections(const std::vector<RestoreInstanceFromCollectionRequestBody_collections>& value)
{
    collections_ = value;
    collectionsIsSet_ = true;
}

bool RestoreInstanceFromCollectionRequestBody_restore_collections::collectionsIsSet() const
{
    return collectionsIsSet_;
}

void RestoreInstanceFromCollectionRequestBody_restore_collections::unsetcollections()
{
    collectionsIsSet_ = false;
}

}
}
}
}
}


