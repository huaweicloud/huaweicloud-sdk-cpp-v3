

#include "huaweicloud/rds/v3/model/CreateDistributionRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateDistributionRequestBody::CreateDistributionRequestBody()
{
    distributorInstanceId_ = "";
    distributorInstanceIdIsSet_ = false;
}

CreateDistributionRequestBody::~CreateDistributionRequestBody() = default;

void CreateDistributionRequestBody::validate()
{
}

web::json::value CreateDistributionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(distributorInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("distributor_instance_id")] = ModelBase::toJson(distributorInstanceId_);
    }

    return val;
}
bool CreateDistributionRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("distributor_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("distributor_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDistributorInstanceId(refVal);
        }
    }
    return ok;
}


std::string CreateDistributionRequestBody::getDistributorInstanceId() const
{
    return distributorInstanceId_;
}

void CreateDistributionRequestBody::setDistributorInstanceId(const std::string& value)
{
    distributorInstanceId_ = value;
    distributorInstanceIdIsSet_ = true;
}

bool CreateDistributionRequestBody::distributorInstanceIdIsSet() const
{
    return distributorInstanceIdIsSet_;
}

void CreateDistributionRequestBody::unsetdistributorInstanceId()
{
    distributorInstanceIdIsSet_ = false;
}

}
}
}
}
}


