

#include "huaweicloud/cfw/v1/model/BatchDeleteAddressSetsDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchDeleteAddressSetsDto::BatchDeleteAddressSetsDto()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    setIdsIsSet_ = false;
}

BatchDeleteAddressSetsDto::~BatchDeleteAddressSetsDto() = default;

void BatchDeleteAddressSetsDto::validate()
{
}

web::json::value BatchDeleteAddressSetsDto::toJson() const
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
bool BatchDeleteAddressSetsDto::fromJson(const web::json::value& val)
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


std::string BatchDeleteAddressSetsDto::getObjectId() const
{
    return objectId_;
}

void BatchDeleteAddressSetsDto::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool BatchDeleteAddressSetsDto::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void BatchDeleteAddressSetsDto::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::vector<std::string>& BatchDeleteAddressSetsDto::getSetIds()
{
    return setIds_;
}

void BatchDeleteAddressSetsDto::setSetIds(const std::vector<std::string>& value)
{
    setIds_ = value;
    setIdsIsSet_ = true;
}

bool BatchDeleteAddressSetsDto::setIdsIsSet() const
{
    return setIdsIsSet_;
}

void BatchDeleteAddressSetsDto::unsetsetIds()
{
    setIdsIsSet_ = false;
}

}
}
}
}
}


