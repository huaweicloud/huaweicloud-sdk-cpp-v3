

#include "huaweicloud/cfw/v1/model/ListAttackStatisticResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListAttackStatisticResponse::ListAttackStatisticResponse()
{
    dataIsSet_ = false;
}

ListAttackStatisticResponse::~ListAttackStatisticResponse() = default;

void ListAttackStatisticResponse::validate()
{
}

web::json::value ListAttackStatisticResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListAttackStatisticResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<AttackStatisticRespBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::vector<AttackStatisticRespBody>& ListAttackStatisticResponse::getData()
{
    return data_;
}

void ListAttackStatisticResponse::setData(const std::vector<AttackStatisticRespBody>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListAttackStatisticResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListAttackStatisticResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


