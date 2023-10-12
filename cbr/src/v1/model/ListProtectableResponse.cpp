

#include "huaweicloud/cbr/v1/model/ListProtectableResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ListProtectableResponse::ListProtectableResponse()
{
    instancesIsSet_ = false;
}

ListProtectableResponse::~ListProtectableResponse() = default;

void ListProtectableResponse::validate()
{
}

web::json::value ListProtectableResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instancesIsSet_) {
        val[utility::conversions::to_string_t("instances")] = ModelBase::toJson(instances_);
    }

    return val;
}
bool ListProtectableResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<ProtectablesResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstances(refVal);
        }
    }
    return ok;
}


std::vector<ProtectablesResp>& ListProtectableResponse::getInstances()
{
    return instances_;
}

void ListProtectableResponse::setInstances(const std::vector<ProtectablesResp>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ListProtectableResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ListProtectableResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

}
}
}
}
}


