

#include "huaweicloud/dds/v3/model/RestoreInstanceFromCollectionRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




RestoreInstanceFromCollectionRequestBody::RestoreInstanceFromCollectionRequestBody()
{
    restoreCollectionsIsSet_ = false;
}

RestoreInstanceFromCollectionRequestBody::~RestoreInstanceFromCollectionRequestBody() = default;

void RestoreInstanceFromCollectionRequestBody::validate()
{
}

web::json::value RestoreInstanceFromCollectionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(restoreCollectionsIsSet_) {
        val[utility::conversions::to_string_t("restore_collections")] = ModelBase::toJson(restoreCollections_);
    }

    return val;
}
bool RestoreInstanceFromCollectionRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("restore_collections"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_collections"));
        if(!fieldValue.is_null())
        {
            std::vector<RestoreInstanceFromCollectionRequestBody_restore_collections> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreCollections(refVal);
        }
    }
    return ok;
}


std::vector<RestoreInstanceFromCollectionRequestBody_restore_collections>& RestoreInstanceFromCollectionRequestBody::getRestoreCollections()
{
    return restoreCollections_;
}

void RestoreInstanceFromCollectionRequestBody::setRestoreCollections(const std::vector<RestoreInstanceFromCollectionRequestBody_restore_collections>& value)
{
    restoreCollections_ = value;
    restoreCollectionsIsSet_ = true;
}

bool RestoreInstanceFromCollectionRequestBody::restoreCollectionsIsSet() const
{
    return restoreCollectionsIsSet_;
}

void RestoreInstanceFromCollectionRequestBody::unsetrestoreCollections()
{
    restoreCollectionsIsSet_ = false;
}

}
}
}
}
}


