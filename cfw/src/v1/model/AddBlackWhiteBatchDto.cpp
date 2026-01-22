

#include "huaweicloud/cfw/v1/model/AddBlackWhiteBatchDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddBlackWhiteBatchDto::AddBlackWhiteBatchDto()
{
    listItemsIsSet_ = false;
    listType_ = 0;
    listTypeIsSet_ = false;
    objectId_ = "";
    objectIdIsSet_ = false;
}

AddBlackWhiteBatchDto::~AddBlackWhiteBatchDto() = default;

void AddBlackWhiteBatchDto::validate()
{
}

web::json::value AddBlackWhiteBatchDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(listItemsIsSet_) {
        val[utility::conversions::to_string_t("list_items")] = ModelBase::toJson(listItems_);
    }
    if(listTypeIsSet_) {
        val[utility::conversions::to_string_t("list_type")] = ModelBase::toJson(listType_);
    }
    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }

    return val;
}
bool AddBlackWhiteBatchDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("list_items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list_items"));
        if(!fieldValue.is_null())
        {
            std::vector<BlackWhiteInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setListItems(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("list_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setListType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
        }
    }
    return ok;
}


std::vector<BlackWhiteInfo>& AddBlackWhiteBatchDto::getListItems()
{
    return listItems_;
}

void AddBlackWhiteBatchDto::setListItems(const std::vector<BlackWhiteInfo>& value)
{
    listItems_ = value;
    listItemsIsSet_ = true;
}

bool AddBlackWhiteBatchDto::listItemsIsSet() const
{
    return listItemsIsSet_;
}

void AddBlackWhiteBatchDto::unsetlistItems()
{
    listItemsIsSet_ = false;
}

int32_t AddBlackWhiteBatchDto::getListType() const
{
    return listType_;
}

void AddBlackWhiteBatchDto::setListType(int32_t value)
{
    listType_ = value;
    listTypeIsSet_ = true;
}

bool AddBlackWhiteBatchDto::listTypeIsSet() const
{
    return listTypeIsSet_;
}

void AddBlackWhiteBatchDto::unsetlistType()
{
    listTypeIsSet_ = false;
}

std::string AddBlackWhiteBatchDto::getObjectId() const
{
    return objectId_;
}

void AddBlackWhiteBatchDto::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool AddBlackWhiteBatchDto::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void AddBlackWhiteBatchDto::unsetobjectId()
{
    objectIdIsSet_ = false;
}

}
}
}
}
}


