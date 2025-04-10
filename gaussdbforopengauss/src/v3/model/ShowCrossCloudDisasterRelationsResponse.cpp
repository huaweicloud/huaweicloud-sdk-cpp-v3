

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowCrossCloudDisasterRelationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowCrossCloudDisasterRelationsResponse::ShowCrossCloudDisasterRelationsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    relationsIsSet_ = false;
}

ShowCrossCloudDisasterRelationsResponse::~ShowCrossCloudDisasterRelationsResponse() = default;

void ShowCrossCloudDisasterRelationsResponse::validate()
{
}

web::json::value ShowCrossCloudDisasterRelationsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(relationsIsSet_) {
        val[utility::conversions::to_string_t("relations")] = ModelBase::toJson(relations_);
    }

    return val;
}
bool ShowCrossCloudDisasterRelationsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("relations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relations"));
        if(!fieldValue.is_null())
        {
            std::vector<DisasterRelations> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelations(refVal);
        }
    }
    return ok;
}


int32_t ShowCrossCloudDisasterRelationsResponse::getTotal() const
{
    return total_;
}

void ShowCrossCloudDisasterRelationsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowCrossCloudDisasterRelationsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowCrossCloudDisasterRelationsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<DisasterRelations>& ShowCrossCloudDisasterRelationsResponse::getRelations()
{
    return relations_;
}

void ShowCrossCloudDisasterRelationsResponse::setRelations(const std::vector<DisasterRelations>& value)
{
    relations_ = value;
    relationsIsSet_ = true;
}

bool ShowCrossCloudDisasterRelationsResponse::relationsIsSet() const
{
    return relationsIsSet_;
}

void ShowCrossCloudDisasterRelationsResponse::unsetrelations()
{
    relationsIsSet_ = false;
}

}
}
}
}
}


