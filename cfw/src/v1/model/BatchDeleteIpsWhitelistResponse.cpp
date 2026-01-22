

#include "huaweicloud/cfw/v1/model/BatchDeleteIpsWhitelistResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchDeleteIpsWhitelistResponse::BatchDeleteIpsWhitelistResponse()
{
    dataIsSet_ = false;
}

BatchDeleteIpsWhitelistResponse::~BatchDeleteIpsWhitelistResponse() = default;

void BatchDeleteIpsWhitelistResponse::validate()
{
}

web::json::value BatchDeleteIpsWhitelistResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool BatchDeleteIpsWhitelistResponse::fromJson(const web::json::value& val)
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


IpsWhitelistRespData BatchDeleteIpsWhitelistResponse::getData() const
{
    return data_;
}

void BatchDeleteIpsWhitelistResponse::setData(const IpsWhitelistRespData& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool BatchDeleteIpsWhitelistResponse::dataIsSet() const
{
    return dataIsSet_;
}

void BatchDeleteIpsWhitelistResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


