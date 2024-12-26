

#include "huaweicloud/cfw/v1/model/BatchDeleteDomainSetsDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchDeleteDomainSetsDto::BatchDeleteDomainSetsDto()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    setIdsIsSet_ = false;
}

BatchDeleteDomainSetsDto::~BatchDeleteDomainSetsDto() = default;

void BatchDeleteDomainSetsDto::validate()
{
}

web::json::value BatchDeleteDomainSetsDto::toJson() const
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
bool BatchDeleteDomainSetsDto::fromJson(const web::json::value& val)
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


std::string BatchDeleteDomainSetsDto::getObjectId() const
{
    return objectId_;
}

void BatchDeleteDomainSetsDto::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool BatchDeleteDomainSetsDto::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void BatchDeleteDomainSetsDto::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::vector<std::string>& BatchDeleteDomainSetsDto::getSetIds()
{
    return setIds_;
}

void BatchDeleteDomainSetsDto::setSetIds(const std::vector<std::string>& value)
{
    setIds_ = value;
    setIdsIsSet_ = true;
}

bool BatchDeleteDomainSetsDto::setIdsIsSet() const
{
    return setIdsIsSet_;
}

void BatchDeleteDomainSetsDto::unsetsetIds()
{
    setIdsIsSet_ = false;
}

}
}
}
}
}


