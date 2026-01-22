

#include "huaweicloud/cfw/v1/model/BatchAddAccountsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchAddAccountsResponse::BatchAddAccountsResponse()
{
    dataIsSet_ = false;
}

BatchAddAccountsResponse::~BatchAddAccountsResponse() = default;

void BatchAddAccountsResponse::validate()
{
}

web::json::value BatchAddAccountsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool BatchAddAccountsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            MultiAccountResp_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


MultiAccountResp_data BatchAddAccountsResponse::getData() const
{
    return data_;
}

void BatchAddAccountsResponse::setData(const MultiAccountResp_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool BatchAddAccountsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void BatchAddAccountsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


