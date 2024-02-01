

#include "huaweicloud/rds/v3/model/ListRdSforMysqlProxyFlavorsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListRdSforMysqlProxyFlavorsResponse::ListRdSforMysqlProxyFlavorsResponse()
{
    computeFlavorGroupsIsSet_ = false;
}

ListRdSforMysqlProxyFlavorsResponse::~ListRdSforMysqlProxyFlavorsResponse() = default;

void ListRdSforMysqlProxyFlavorsResponse::validate()
{
}

web::json::value ListRdSforMysqlProxyFlavorsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(computeFlavorGroupsIsSet_) {
        val[utility::conversions::to_string_t("compute_flavor_groups")] = ModelBase::toJson(computeFlavorGroups_);
    }

    return val;
}
bool ListRdSforMysqlProxyFlavorsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("compute_flavor_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compute_flavor_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<MysqlProxyFlavorsResponse_compute_flavor_groups> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComputeFlavorGroups(refVal);
        }
    }
    return ok;
}


std::vector<MysqlProxyFlavorsResponse_compute_flavor_groups>& ListRdSforMysqlProxyFlavorsResponse::getComputeFlavorGroups()
{
    return computeFlavorGroups_;
}

void ListRdSforMysqlProxyFlavorsResponse::setComputeFlavorGroups(const std::vector<MysqlProxyFlavorsResponse_compute_flavor_groups>& value)
{
    computeFlavorGroups_ = value;
    computeFlavorGroupsIsSet_ = true;
}

bool ListRdSforMysqlProxyFlavorsResponse::computeFlavorGroupsIsSet() const
{
    return computeFlavorGroupsIsSet_;
}

void ListRdSforMysqlProxyFlavorsResponse::unsetcomputeFlavorGroups()
{
    computeFlavorGroupsIsSet_ = false;
}

}
}
}
}
}


