

#include "huaweicloud/cfw/v1/model/ShowAttackTrendResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowAttackTrendResponse::ShowAttackTrendResponse()
{
    dataIsSet_ = false;
}

ShowAttackTrendResponse::~ShowAttackTrendResponse() = default;

void ShowAttackTrendResponse::validate()
{
}

web::json::value ShowAttackTrendResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ShowAttackTrendResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<AttackTrendRespBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::vector<AttackTrendRespBody>& ShowAttackTrendResponse::getData()
{
    return data_;
}

void ShowAttackTrendResponse::setData(const std::vector<AttackTrendRespBody>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowAttackTrendResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowAttackTrendResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


