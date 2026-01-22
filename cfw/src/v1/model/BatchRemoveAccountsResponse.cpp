

#include "huaweicloud/cfw/v1/model/BatchRemoveAccountsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchRemoveAccountsResponse::BatchRemoveAccountsResponse()
{
    dataIsSet_ = false;
}

BatchRemoveAccountsResponse::~BatchRemoveAccountsResponse() = default;

void BatchRemoveAccountsResponse::validate()
{
}

web::json::value BatchRemoveAccountsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool BatchRemoveAccountsResponse::fromJson(const web::json::value& val)
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


MultiAccountResp_data BatchRemoveAccountsResponse::getData() const
{
    return data_;
}

void BatchRemoveAccountsResponse::setData(const MultiAccountResp_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool BatchRemoveAccountsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void BatchRemoveAccountsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


