

#include "huaweicloud/codeartsbuild/v3/model/TotalResponseBody_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




TotalResponseBody_result::TotalResponseBody_result()
{
    total_ = 0;
    totalIsSet_ = false;
}

TotalResponseBody_result::~TotalResponseBody_result() = default;

void TotalResponseBody_result::validate()
{
}

web::json::value TotalResponseBody_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool TotalResponseBody_result::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t TotalResponseBody_result::getTotal() const
{
    return total_;
}

void TotalResponseBody_result::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool TotalResponseBody_result::totalIsSet() const
{
    return totalIsSet_;
}

void TotalResponseBody_result::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


