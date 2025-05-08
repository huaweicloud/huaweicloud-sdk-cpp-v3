

#include "huaweicloud/vod/v1/model/ObjectList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ObjectList::ObjectList()
{
    object_ = "";
    objectIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    metaDataIsSet_ = false;
}

ObjectList::~ObjectList() = default;

void ObjectList::validate()
{
}

web::json::value ObjectList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIsSet_) {
        val[utility::conversions::to_string_t("object")] = ModelBase::toJson(object_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(metaDataIsSet_) {
        val[utility::conversions::to_string_t("meta_data")] = ModelBase::toJson(metaData_);
    }

    return val;
}
bool ObjectList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("meta_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("meta_data"));
        if(!fieldValue.is_null())
        {
            ObjectMetaData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetaData(refVal);
        }
    }
    return ok;
}


std::string ObjectList::getObject() const
{
    return object_;
}

void ObjectList::setObject(const std::string& value)
{
    object_ = value;
    objectIsSet_ = true;
}

bool ObjectList::objectIsSet() const
{
    return objectIsSet_;
}

void ObjectList::unsetobject()
{
    objectIsSet_ = false;
}

std::string ObjectList::getAssetId() const
{
    return assetId_;
}

void ObjectList::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ObjectList::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ObjectList::unsetassetId()
{
    assetIdIsSet_ = false;
}

ObjectMetaData ObjectList::getMetaData() const
{
    return metaData_;
}

void ObjectList::setMetaData(const ObjectMetaData& value)
{
    metaData_ = value;
    metaDataIsSet_ = true;
}

bool ObjectList::metaDataIsSet() const
{
    return metaDataIsSet_;
}

void ObjectList::unsetmetaData()
{
    metaDataIsSet_ = false;
}

}
}
}
}
}


