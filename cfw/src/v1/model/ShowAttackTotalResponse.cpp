

#include "huaweicloud/cfw/v1/model/ShowAttackTotalResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowAttackTotalResponse::ShowAttackTotalResponse()
{
    dataIsSet_ = false;
}

ShowAttackTotalResponse::~ShowAttackTotalResponse() = default;

void ShowAttackTotalResponse::validate()
{
}

web::json::value ShowAttackTotalResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ShowAttackTotalResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            ShowAttackTotalResp_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


ShowAttackTotalResp_data ShowAttackTotalResponse::getData() const
{
    return data_;
}

void ShowAttackTotalResponse::setData(const ShowAttackTotalResp_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowAttackTotalResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowAttackTotalResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


