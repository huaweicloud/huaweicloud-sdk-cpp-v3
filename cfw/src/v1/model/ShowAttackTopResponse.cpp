

#include "huaweicloud/cfw/v1/model/ShowAttackTopResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowAttackTopResponse::ShowAttackTopResponse()
{
    dataIsSet_ = false;
}

ShowAttackTopResponse::~ShowAttackTopResponse() = default;

void ShowAttackTopResponse::validate()
{
}

web::json::value ShowAttackTopResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ShowAttackTopResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            AttackTopRespBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


AttackTopRespBody ShowAttackTopResponse::getData() const
{
    return data_;
}

void ShowAttackTopResponse::setData(const AttackTopRespBody& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowAttackTopResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowAttackTopResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


