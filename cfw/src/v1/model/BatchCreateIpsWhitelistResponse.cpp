

#include "huaweicloud/cfw/v1/model/BatchCreateIpsWhitelistResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchCreateIpsWhitelistResponse::BatchCreateIpsWhitelistResponse()
{
    dataIsSet_ = false;
}

BatchCreateIpsWhitelistResponse::~BatchCreateIpsWhitelistResponse() = default;

void BatchCreateIpsWhitelistResponse::validate()
{
}

web::json::value BatchCreateIpsWhitelistResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool BatchCreateIpsWhitelistResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            IpsWhitelistRespData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


IpsWhitelistRespData BatchCreateIpsWhitelistResponse::getData() const
{
    return data_;
}

void BatchCreateIpsWhitelistResponse::setData(const IpsWhitelistRespData& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool BatchCreateIpsWhitelistResponse::dataIsSet() const
{
    return dataIsSet_;
}

void BatchCreateIpsWhitelistResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


