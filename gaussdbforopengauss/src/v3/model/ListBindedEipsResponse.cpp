

#include "huaweicloud/gaussdbforopengauss/v3/model/ListBindedEipsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListBindedEipsResponse::ListBindedEipsResponse()
{
    publicIpsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListBindedEipsResponse::~ListBindedEipsResponse() = default;

void ListBindedEipsResponse::validate()
{
}

web::json::value ListBindedEipsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicIpsIsSet_) {
        val[utility::conversions::to_string_t("public_ips")] = ModelBase::toJson(publicIps_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListBindedEipsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("public_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ips"));
        if(!fieldValue.is_null())
        {
            std::vector<BindedEipResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<BindedEipResult>& ListBindedEipsResponse::getPublicIps()
{
    return publicIps_;
}

void ListBindedEipsResponse::setPublicIps(const std::vector<BindedEipResult>& value)
{
    publicIps_ = value;
    publicIpsIsSet_ = true;
}

bool ListBindedEipsResponse::publicIpsIsSet() const
{
    return publicIpsIsSet_;
}

void ListBindedEipsResponse::unsetpublicIps()
{
    publicIpsIsSet_ = false;
}

int32_t ListBindedEipsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListBindedEipsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListBindedEipsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListBindedEipsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


