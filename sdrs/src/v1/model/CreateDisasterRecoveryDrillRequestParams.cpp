

#include "huaweicloud/sdrs/v1/model/CreateDisasterRecoveryDrillRequestParams.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




CreateDisasterRecoveryDrillRequestParams::CreateDisasterRecoveryDrillRequestParams()
{
    serverGroupId_ = "";
    serverGroupIdIsSet_ = false;
    drillVpcId_ = "";
    drillVpcIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

CreateDisasterRecoveryDrillRequestParams::~CreateDisasterRecoveryDrillRequestParams() = default;

void CreateDisasterRecoveryDrillRequestParams::validate()
{
}

web::json::value CreateDisasterRecoveryDrillRequestParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverGroupIdIsSet_) {
        val[utility::conversions::to_string_t("server_group_id")] = ModelBase::toJson(serverGroupId_);
    }
    if(drillVpcIdIsSet_) {
        val[utility::conversions::to_string_t("drill_vpc_id")] = ModelBase::toJson(drillVpcId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}

bool CreateDisasterRecoveryDrillRequestParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("drill_vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("drill_vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDrillVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string CreateDisasterRecoveryDrillRequestParams::getServerGroupId() const
{
    return serverGroupId_;
}

void CreateDisasterRecoveryDrillRequestParams::setServerGroupId(const std::string& value)
{
    serverGroupId_ = value;
    serverGroupIdIsSet_ = true;
}

bool CreateDisasterRecoveryDrillRequestParams::serverGroupIdIsSet() const
{
    return serverGroupIdIsSet_;
}

void CreateDisasterRecoveryDrillRequestParams::unsetserverGroupId()
{
    serverGroupIdIsSet_ = false;
}

std::string CreateDisasterRecoveryDrillRequestParams::getDrillVpcId() const
{
    return drillVpcId_;
}

void CreateDisasterRecoveryDrillRequestParams::setDrillVpcId(const std::string& value)
{
    drillVpcId_ = value;
    drillVpcIdIsSet_ = true;
}

bool CreateDisasterRecoveryDrillRequestParams::drillVpcIdIsSet() const
{
    return drillVpcIdIsSet_;
}

void CreateDisasterRecoveryDrillRequestParams::unsetdrillVpcId()
{
    drillVpcIdIsSet_ = false;
}

std::string CreateDisasterRecoveryDrillRequestParams::getName() const
{
    return name_;
}

void CreateDisasterRecoveryDrillRequestParams::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateDisasterRecoveryDrillRequestParams::nameIsSet() const
{
    return nameIsSet_;
}

void CreateDisasterRecoveryDrillRequestParams::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


