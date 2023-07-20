

#include "huaweicloud/dds/v3/model/RestoreInstanceFromCollectionRequestBody_collections.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




RestoreInstanceFromCollectionRequestBody_collections::RestoreInstanceFromCollectionRequestBody_collections()
{
    oldName_ = "";
    oldNameIsSet_ = false;
    newName_ = "";
    newNameIsSet_ = false;
    restoreCollectionTime_ = "";
    restoreCollectionTimeIsSet_ = false;
}

RestoreInstanceFromCollectionRequestBody_collections::~RestoreInstanceFromCollectionRequestBody_collections() = default;

void RestoreInstanceFromCollectionRequestBody_collections::validate()
{
}

web::json::value RestoreInstanceFromCollectionRequestBody_collections::toJson() const
{
    web::json::value val = web::json::value::object();

    if(oldNameIsSet_) {
        val[utility::conversions::to_string_t("old_name")] = ModelBase::toJson(oldName_);
    }
    if(newNameIsSet_) {
        val[utility::conversions::to_string_t("new_name")] = ModelBase::toJson(newName_);
    }
    if(restoreCollectionTimeIsSet_) {
        val[utility::conversions::to_string_t("restore_collection_time")] = ModelBase::toJson(restoreCollectionTime_);
    }

    return val;
}

bool RestoreInstanceFromCollectionRequestBody_collections::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("old_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("old_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOldName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("restore_collection_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_collection_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreCollectionTime(refVal);
        }
    }
    return ok;
}

std::string RestoreInstanceFromCollectionRequestBody_collections::getOldName() const
{
    return oldName_;
}

void RestoreInstanceFromCollectionRequestBody_collections::setOldName(const std::string& value)
{
    oldName_ = value;
    oldNameIsSet_ = true;
}

bool RestoreInstanceFromCollectionRequestBody_collections::oldNameIsSet() const
{
    return oldNameIsSet_;
}

void RestoreInstanceFromCollectionRequestBody_collections::unsetoldName()
{
    oldNameIsSet_ = false;
}

std::string RestoreInstanceFromCollectionRequestBody_collections::getNewName() const
{
    return newName_;
}

void RestoreInstanceFromCollectionRequestBody_collections::setNewName(const std::string& value)
{
    newName_ = value;
    newNameIsSet_ = true;
}

bool RestoreInstanceFromCollectionRequestBody_collections::newNameIsSet() const
{
    return newNameIsSet_;
}

void RestoreInstanceFromCollectionRequestBody_collections::unsetnewName()
{
    newNameIsSet_ = false;
}

std::string RestoreInstanceFromCollectionRequestBody_collections::getRestoreCollectionTime() const
{
    return restoreCollectionTime_;
}

void RestoreInstanceFromCollectionRequestBody_collections::setRestoreCollectionTime(const std::string& value)
{
    restoreCollectionTime_ = value;
    restoreCollectionTimeIsSet_ = true;
}

bool RestoreInstanceFromCollectionRequestBody_collections::restoreCollectionTimeIsSet() const
{
    return restoreCollectionTimeIsSet_;
}

void RestoreInstanceFromCollectionRequestBody_collections::unsetrestoreCollectionTime()
{
    restoreCollectionTimeIsSet_ = false;
}

}
}
}
}
}


