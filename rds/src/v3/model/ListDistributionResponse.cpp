

#include "huaweicloud/rds/v3/model/ListDistributionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListDistributionResponse::ListDistributionResponse()
{
    status_ = "";
    statusIsSet_ = false;
    distributorInstanceId_ = "";
    distributorInstanceIdIsSet_ = false;
    distributorInstanceName_ = "";
    distributorInstanceNameIsSet_ = false;
}

ListDistributionResponse::~ListDistributionResponse() = default;

void ListDistributionResponse::validate()
{
}

web::json::value ListDistributionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(distributorInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("distributor_instance_id")] = ModelBase::toJson(distributorInstanceId_);
    }
    if(distributorInstanceNameIsSet_) {
        val[utility::conversions::to_string_t("distributor_instance_name")] = ModelBase::toJson(distributorInstanceName_);
    }

    return val;
}
bool ListDistributionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("distributor_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("distributor_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDistributorInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("distributor_instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("distributor_instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDistributorInstanceName(refVal);
        }
    }
    return ok;
}


std::string ListDistributionResponse::getStatus() const
{
    return status_;
}

void ListDistributionResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListDistributionResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListDistributionResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListDistributionResponse::getDistributorInstanceId() const
{
    return distributorInstanceId_;
}

void ListDistributionResponse::setDistributorInstanceId(const std::string& value)
{
    distributorInstanceId_ = value;
    distributorInstanceIdIsSet_ = true;
}

bool ListDistributionResponse::distributorInstanceIdIsSet() const
{
    return distributorInstanceIdIsSet_;
}

void ListDistributionResponse::unsetdistributorInstanceId()
{
    distributorInstanceIdIsSet_ = false;
}

std::string ListDistributionResponse::getDistributorInstanceName() const
{
    return distributorInstanceName_;
}

void ListDistributionResponse::setDistributorInstanceName(const std::string& value)
{
    distributorInstanceName_ = value;
    distributorInstanceNameIsSet_ = true;
}

bool ListDistributionResponse::distributorInstanceNameIsSet() const
{
    return distributorInstanceNameIsSet_;
}

void ListDistributionResponse::unsetdistributorInstanceName()
{
    distributorInstanceNameIsSet_ = false;
}

}
}
}
}
}


