

#include "huaweicloud/cfw/v1/model/ShowAttackDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowAttackDetailResponse::ShowAttackDetailResponse()
{
    dataIsSet_ = false;
}

ShowAttackDetailResponse::~ShowAttackDetailResponse() = default;

void ShowAttackDetailResponse::validate()
{
}

web::json::value ShowAttackDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ShowAttackDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            AttackDetailVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


AttackDetailVO ShowAttackDetailResponse::getData() const
{
    return data_;
}

void ShowAttackDetailResponse::setData(const AttackDetailVO& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowAttackDetailResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowAttackDetailResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


