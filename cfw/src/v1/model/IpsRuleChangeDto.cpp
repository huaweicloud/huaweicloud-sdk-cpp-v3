

#include "huaweicloud/cfw/v1/model/IpsRuleChangeDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




IpsRuleChangeDto::IpsRuleChangeDto()
{
    ipsIdsIsSet_ = false;
    objectId_ = "";
    objectIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

IpsRuleChangeDto::~IpsRuleChangeDto() = default;

void IpsRuleChangeDto::validate()
{
}

web::json::value IpsRuleChangeDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipsIdsIsSet_) {
        val[utility::conversions::to_string_t("ips_ids")] = ModelBase::toJson(ipsIds_);
    }
    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool IpsRuleChangeDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ips_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsIds(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& IpsRuleChangeDto::getIpsIds()
{
    return ipsIds_;
}

void IpsRuleChangeDto::setIpsIds(const std::vector<std::string>& value)
{
    ipsIds_ = value;
    ipsIdsIsSet_ = true;
}

bool IpsRuleChangeDto::ipsIdsIsSet() const
{
    return ipsIdsIsSet_;
}

void IpsRuleChangeDto::unsetipsIds()
{
    ipsIdsIsSet_ = false;
}

std::string IpsRuleChangeDto::getObjectId() const
{
    return objectId_;
}

void IpsRuleChangeDto::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool IpsRuleChangeDto::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void IpsRuleChangeDto::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::string IpsRuleChangeDto::getStatus() const
{
    return status_;
}

void IpsRuleChangeDto::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool IpsRuleChangeDto::statusIsSet() const
{
    return statusIsSet_;
}

void IpsRuleChangeDto::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


