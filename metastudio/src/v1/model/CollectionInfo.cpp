

#include "huaweicloud/metastudio/v1/model/CollectionInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CollectionInfo::CollectionInfo()
{
    collectionType_ = "";
    collectionTypeIsSet_ = false;
    collectionIdsIsSet_ = false;
}

CollectionInfo::~CollectionInfo() = default;

void CollectionInfo::validate()
{
}

web::json::value CollectionInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(collectionTypeIsSet_) {
        val[utility::conversions::to_string_t("collection_type")] = ModelBase::toJson(collectionType_);
    }
    if(collectionIdsIsSet_) {
        val[utility::conversions::to_string_t("collection_ids")] = ModelBase::toJson(collectionIds_);
    }

    return val;
}
bool CollectionInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("collection_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("collection_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCollectionType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("collection_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("collection_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCollectionIds(refVal);
        }
    }
    return ok;
}


std::string CollectionInfo::getCollectionType() const
{
    return collectionType_;
}

void CollectionInfo::setCollectionType(const std::string& value)
{
    collectionType_ = value;
    collectionTypeIsSet_ = true;
}

bool CollectionInfo::collectionTypeIsSet() const
{
    return collectionTypeIsSet_;
}

void CollectionInfo::unsetcollectionType()
{
    collectionTypeIsSet_ = false;
}

std::vector<std::string>& CollectionInfo::getCollectionIds()
{
    return collectionIds_;
}

void CollectionInfo::setCollectionIds(const std::vector<std::string>& value)
{
    collectionIds_ = value;
    collectionIdsIsSet_ = true;
}

bool CollectionInfo::collectionIdsIsSet() const
{
    return collectionIdsIsSet_;
}

void CollectionInfo::unsetcollectionIds()
{
    collectionIdsIsSet_ = false;
}

}
}
}
}
}


