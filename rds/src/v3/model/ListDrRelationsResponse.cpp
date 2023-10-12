

#include "huaweicloud/rds/v3/model/ListDrRelationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListDrRelationsResponse::ListDrRelationsResponse()
{
    instanceDrRelationsIsSet_ = false;
}

ListDrRelationsResponse::~ListDrRelationsResponse() = default;

void ListDrRelationsResponse::validate()
{
}

web::json::value ListDrRelationsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceDrRelationsIsSet_) {
        val[utility::conversions::to_string_t("instance_dr_relations")] = ModelBase::toJson(instanceDrRelations_);
    }

    return val;
}
bool ListDrRelationsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_dr_relations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_dr_relations"));
        if(!fieldValue.is_null())
        {
            std::vector<Instance_dr_relation> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceDrRelations(refVal);
        }
    }
    return ok;
}


std::vector<Instance_dr_relation>& ListDrRelationsResponse::getInstanceDrRelations()
{
    return instanceDrRelations_;
}

void ListDrRelationsResponse::setInstanceDrRelations(const std::vector<Instance_dr_relation>& value)
{
    instanceDrRelations_ = value;
    instanceDrRelationsIsSet_ = true;
}

bool ListDrRelationsResponse::instanceDrRelationsIsSet() const
{
    return instanceDrRelationsIsSet_;
}

void ListDrRelationsResponse::unsetinstanceDrRelations()
{
    instanceDrRelationsIsSet_ = false;
}

}
}
}
}
}


