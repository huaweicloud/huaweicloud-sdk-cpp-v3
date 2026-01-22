

#include "huaweicloud/cfw/v1/model/BatchDeleteServiceSetsDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchDeleteServiceSetsDto::BatchDeleteServiceSetsDto()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    setIdsIsSet_ = false;
}

BatchDeleteServiceSetsDto::~BatchDeleteServiceSetsDto() = default;

void BatchDeleteServiceSetsDto::validate()
{
}

web::json::value BatchDeleteServiceSetsDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(setIdsIsSet_) {
        val[utility::conversions::to_string_t("set_ids")] = ModelBase::toJson(setIds_);
    }

    return val;
}
bool BatchDeleteServiceSetsDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("set_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("set_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSetIds(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteServiceSetsDto::getObjectId() const
{
    return objectId_;
}

void BatchDeleteServiceSetsDto::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool BatchDeleteServiceSetsDto::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void BatchDeleteServiceSetsDto::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::vector<std::string>& BatchDeleteServiceSetsDto::getSetIds()
{
    return setIds_;
}

void BatchDeleteServiceSetsDto::setSetIds(const std::vector<std::string>& value)
{
    setIds_ = value;
    setIdsIsSet_ = true;
}

bool BatchDeleteServiceSetsDto::setIdsIsSet() const
{
    return setIdsIsSet_;
}

void BatchDeleteServiceSetsDto::unsetsetIds()
{
    setIdsIsSet_ = false;
}

}
}
}
}
}


