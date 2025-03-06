

#include "huaweicloud/gaussdbforopengauss/v3/model/ListInstanceEngineDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListInstanceEngineDetailResponse::ListInstanceEngineDetailResponse()
{
    engineInstanceDetailsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListInstanceEngineDetailResponse::~ListInstanceEngineDetailResponse() = default;

void ListInstanceEngineDetailResponse::validate()
{
}

web::json::value ListInstanceEngineDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(engineInstanceDetailsIsSet_) {
        val[utility::conversions::to_string_t("engine_instance_details")] = ModelBase::toJson(engineInstanceDetails_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListInstanceEngineDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("engine_instance_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_instance_details"));
        if(!fieldValue.is_null())
        {
            std::vector<InstanceEngineDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineInstanceDetails(refVal);
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


std::vector<InstanceEngineDetail>& ListInstanceEngineDetailResponse::getEngineInstanceDetails()
{
    return engineInstanceDetails_;
}

void ListInstanceEngineDetailResponse::setEngineInstanceDetails(const std::vector<InstanceEngineDetail>& value)
{
    engineInstanceDetails_ = value;
    engineInstanceDetailsIsSet_ = true;
}

bool ListInstanceEngineDetailResponse::engineInstanceDetailsIsSet() const
{
    return engineInstanceDetailsIsSet_;
}

void ListInstanceEngineDetailResponse::unsetengineInstanceDetails()
{
    engineInstanceDetailsIsSet_ = false;
}

int32_t ListInstanceEngineDetailResponse::getTotalCount() const
{
    return totalCount_;
}

void ListInstanceEngineDetailResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListInstanceEngineDetailResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListInstanceEngineDetailResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


