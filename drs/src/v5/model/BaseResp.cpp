

#include "huaweicloud/drs/v5/model/BaseResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




BaseResp::BaseResp()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

BaseResp::~BaseResp() = default;

void BaseResp::validate()
{
}

web::json::value BaseResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}

bool BaseResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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

int32_t BaseResp::getTotalCount() const
{
    return totalCount_;
}

void BaseResp::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool BaseResp::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void BaseResp::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


