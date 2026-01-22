

#include "huaweicloud/cfw/v1/model/IpsCustomerBatchDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




IpsCustomerBatchDto::IpsCustomerBatchDto()
{
    actionType_ = 0;
    actionTypeIsSet_ = false;
    ipsIdsIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
}

IpsCustomerBatchDto::~IpsCustomerBatchDto() = default;

void IpsCustomerBatchDto::validate()
{
}

web::json::value IpsCustomerBatchDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionTypeIsSet_) {
        val[utility::conversions::to_string_t("action_type")] = ModelBase::toJson(actionType_);
    }
    if(ipsIdsIsSet_) {
        val[utility::conversions::to_string_t("ips_ids")] = ModelBase::toJson(ipsIds_);
    }
    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }

    return val;
}
bool IpsCustomerBatchDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ips_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    return ok;
}


int32_t IpsCustomerBatchDto::getActionType() const
{
    return actionType_;
}

void IpsCustomerBatchDto::setActionType(int32_t value)
{
    actionType_ = value;
    actionTypeIsSet_ = true;
}

bool IpsCustomerBatchDto::actionTypeIsSet() const
{
    return actionTypeIsSet_;
}

void IpsCustomerBatchDto::unsetactionType()
{
    actionTypeIsSet_ = false;
}

std::vector<std::string>& IpsCustomerBatchDto::getIpsIds()
{
    return ipsIds_;
}

void IpsCustomerBatchDto::setIpsIds(const std::vector<std::string>& value)
{
    ipsIds_ = value;
    ipsIdsIsSet_ = true;
}

bool IpsCustomerBatchDto::ipsIdsIsSet() const
{
    return ipsIdsIsSet_;
}

void IpsCustomerBatchDto::unsetipsIds()
{
    ipsIdsIsSet_ = false;
}

std::string IpsCustomerBatchDto::getFwInstanceId() const
{
    return fwInstanceId_;
}

void IpsCustomerBatchDto::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool IpsCustomerBatchDto::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void IpsCustomerBatchDto::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

}
}
}
}
}


