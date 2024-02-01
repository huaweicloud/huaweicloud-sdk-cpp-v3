

#include "huaweicloud/rds/v3/model/MysqlProxyFlavorsResponse_compute_flavor_groups.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




MysqlProxyFlavorsResponse_compute_flavor_groups::MysqlProxyFlavorsResponse_compute_flavor_groups()
{
    groupType_ = "";
    groupTypeIsSet_ = false;
    computeFlavorsIsSet_ = false;
}

MysqlProxyFlavorsResponse_compute_flavor_groups::~MysqlProxyFlavorsResponse_compute_flavor_groups() = default;

void MysqlProxyFlavorsResponse_compute_flavor_groups::validate()
{
}

web::json::value MysqlProxyFlavorsResponse_compute_flavor_groups::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupTypeIsSet_) {
        val[utility::conversions::to_string_t("group_type")] = ModelBase::toJson(groupType_);
    }
    if(computeFlavorsIsSet_) {
        val[utility::conversions::to_string_t("compute_flavors")] = ModelBase::toJson(computeFlavors_);
    }

    return val;
}
bool MysqlProxyFlavorsResponse_compute_flavor_groups::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compute_flavors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compute_flavors"));
        if(!fieldValue.is_null())
        {
            std::vector<MysqlProxyFlavorsResponse_compute_flavors> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComputeFlavors(refVal);
        }
    }
    return ok;
}


std::string MysqlProxyFlavorsResponse_compute_flavor_groups::getGroupType() const
{
    return groupType_;
}

void MysqlProxyFlavorsResponse_compute_flavor_groups::setGroupType(const std::string& value)
{
    groupType_ = value;
    groupTypeIsSet_ = true;
}

bool MysqlProxyFlavorsResponse_compute_flavor_groups::groupTypeIsSet() const
{
    return groupTypeIsSet_;
}

void MysqlProxyFlavorsResponse_compute_flavor_groups::unsetgroupType()
{
    groupTypeIsSet_ = false;
}

std::vector<MysqlProxyFlavorsResponse_compute_flavors>& MysqlProxyFlavorsResponse_compute_flavor_groups::getComputeFlavors()
{
    return computeFlavors_;
}

void MysqlProxyFlavorsResponse_compute_flavor_groups::setComputeFlavors(const std::vector<MysqlProxyFlavorsResponse_compute_flavors>& value)
{
    computeFlavors_ = value;
    computeFlavorsIsSet_ = true;
}

bool MysqlProxyFlavorsResponse_compute_flavor_groups::computeFlavorsIsSet() const
{
    return computeFlavorsIsSet_;
}

void MysqlProxyFlavorsResponse_compute_flavor_groups::unsetcomputeFlavors()
{
    computeFlavorsIsSet_ = false;
}

}
}
}
}
}


