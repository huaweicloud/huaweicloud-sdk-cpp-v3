

#include "huaweicloud/mpc/v1/model/CommonQueryTaskRsp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CommonQueryTaskRsp::CommonQueryTaskRsp()
{
    total_ = 0;
    totalIsSet_ = false;
}

CommonQueryTaskRsp::~CommonQueryTaskRsp() = default;

void CommonQueryTaskRsp::validate()
{
}

web::json::value CommonQueryTaskRsp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}

bool CommonQueryTaskRsp::fromJson(const web::json::value& val)
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

int32_t CommonQueryTaskRsp::getTotal() const
{
    return total_;
}

void CommonQueryTaskRsp::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool CommonQueryTaskRsp::totalIsSet() const
{
    return totalIsSet_;
}

void CommonQueryTaskRsp::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


