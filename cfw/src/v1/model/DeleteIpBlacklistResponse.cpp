

#include "huaweicloud/cfw/v1/model/DeleteIpBlacklistResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteIpBlacklistResponse::DeleteIpBlacklistResponse()
{
    dataIsSet_ = false;
}

DeleteIpBlacklistResponse::~DeleteIpBlacklistResponse() = default;

void DeleteIpBlacklistResponse::validate()
{
}

web::json::value DeleteIpBlacklistResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool DeleteIpBlacklistResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


Object DeleteIpBlacklistResponse::getData() const
{
    return data_;
}

void DeleteIpBlacklistResponse::setData(const Object& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool DeleteIpBlacklistResponse::dataIsSet() const
{
    return dataIsSet_;
}

void DeleteIpBlacklistResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


