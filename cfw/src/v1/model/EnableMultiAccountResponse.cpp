

#include "huaweicloud/cfw/v1/model/EnableMultiAccountResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




EnableMultiAccountResponse::EnableMultiAccountResponse()
{
    dataIsSet_ = false;
}

EnableMultiAccountResponse::~EnableMultiAccountResponse() = default;

void EnableMultiAccountResponse::validate()
{
}

web::json::value EnableMultiAccountResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool EnableMultiAccountResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            EnableMultiAccountResp_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


EnableMultiAccountResp_data EnableMultiAccountResponse::getData() const
{
    return data_;
}

void EnableMultiAccountResponse::setData(const EnableMultiAccountResp_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool EnableMultiAccountResponse::dataIsSet() const
{
    return dataIsSet_;
}

void EnableMultiAccountResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


