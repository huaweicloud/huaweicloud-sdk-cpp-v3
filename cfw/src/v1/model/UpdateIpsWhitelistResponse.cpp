

#include "huaweicloud/cfw/v1/model/UpdateIpsWhitelistResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateIpsWhitelistResponse::UpdateIpsWhitelistResponse()
{
    dataIsSet_ = false;
}

UpdateIpsWhitelistResponse::~UpdateIpsWhitelistResponse() = default;

void UpdateIpsWhitelistResponse::validate()
{
}

web::json::value UpdateIpsWhitelistResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool UpdateIpsWhitelistResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            UpdateIpsWhitelistResp_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


UpdateIpsWhitelistResp_data UpdateIpsWhitelistResponse::getData() const
{
    return data_;
}

void UpdateIpsWhitelistResponse::setData(const UpdateIpsWhitelistResp_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool UpdateIpsWhitelistResponse::dataIsSet() const
{
    return dataIsSet_;
}

void UpdateIpsWhitelistResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


