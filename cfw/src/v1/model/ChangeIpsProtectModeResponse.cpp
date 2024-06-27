

#include "huaweicloud/cfw/v1/model/ChangeIpsProtectModeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ChangeIpsProtectModeResponse::ChangeIpsProtectModeResponse()
{
    dataIsSet_ = false;
}

ChangeIpsProtectModeResponse::~ChangeIpsProtectModeResponse() = default;

void ChangeIpsProtectModeResponse::validate()
{
}

web::json::value ChangeIpsProtectModeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ChangeIpsProtectModeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            CommonResponseDTO_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


CommonResponseDTO_data ChangeIpsProtectModeResponse::getData() const
{
    return data_;
}

void ChangeIpsProtectModeResponse::setData(const CommonResponseDTO_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ChangeIpsProtectModeResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ChangeIpsProtectModeResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


