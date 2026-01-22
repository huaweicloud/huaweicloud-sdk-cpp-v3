

#include "huaweicloud/cfw/v1/model/DeleteBlackWhiteDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteBlackWhiteDto::DeleteBlackWhiteDto()
{
    listIdsIsSet_ = false;
    listType_ = 0;
    listTypeIsSet_ = false;
    objectId_ = "";
    objectIdIsSet_ = false;
}

DeleteBlackWhiteDto::~DeleteBlackWhiteDto() = default;

void DeleteBlackWhiteDto::validate()
{
}

web::json::value DeleteBlackWhiteDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(listIdsIsSet_) {
        val[utility::conversions::to_string_t("list_ids")] = ModelBase::toJson(listIds_);
    }
    if(listTypeIsSet_) {
        val[utility::conversions::to_string_t("list_type")] = ModelBase::toJson(listType_);
    }
    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }

    return val;
}
bool DeleteBlackWhiteDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("list_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setListIds(refVal);
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


std::vector<std::string>& DeleteBlackWhiteDto::getListIds()
{
    return listIds_;
}

void DeleteBlackWhiteDto::setListIds(const std::vector<std::string>& value)
{
    listIds_ = value;
    listIdsIsSet_ = true;
}

bool DeleteBlackWhiteDto::listIdsIsSet() const
{
    return listIdsIsSet_;
}

void DeleteBlackWhiteDto::unsetlistIds()
{
    listIdsIsSet_ = false;
}

int32_t DeleteBlackWhiteDto::getListType() const
{
    return listType_;
}

void DeleteBlackWhiteDto::setListType(int32_t value)
{
    listType_ = value;
    listTypeIsSet_ = true;
}

bool DeleteBlackWhiteDto::listTypeIsSet() const
{
    return listTypeIsSet_;
}

void DeleteBlackWhiteDto::unsetlistType()
{
    listTypeIsSet_ = false;
}

std::string DeleteBlackWhiteDto::getObjectId() const
{
    return objectId_;
}

void DeleteBlackWhiteDto::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool DeleteBlackWhiteDto::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void DeleteBlackWhiteDto::unsetobjectId()
{
    objectIdIsSet_ = false;
}

}
}
}
}
}


