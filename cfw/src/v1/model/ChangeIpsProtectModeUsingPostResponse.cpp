

#include "huaweicloud/cfw/v1/model/ChangeIpsProtectModeUsingPostResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ChangeIpsProtectModeUsingPostResponse::ChangeIpsProtectModeUsingPostResponse()
{
    dataIsSet_ = false;
}

ChangeIpsProtectModeUsingPostResponse::~ChangeIpsProtectModeUsingPostResponse() = default;

void ChangeIpsProtectModeUsingPostResponse::validate()
{
}

web::json::value ChangeIpsProtectModeUsingPostResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ChangeIpsProtectModeUsingPostResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            IdObject refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


IdObject ChangeIpsProtectModeUsingPostResponse::getData() const
{
    return data_;
}

void ChangeIpsProtectModeUsingPostResponse::setData(const IdObject& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ChangeIpsProtectModeUsingPostResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ChangeIpsProtectModeUsingPostResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


