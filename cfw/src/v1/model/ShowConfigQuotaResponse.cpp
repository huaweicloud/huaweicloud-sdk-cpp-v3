

#include "huaweicloud/cfw/v1/model/ShowConfigQuotaResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowConfigQuotaResponse::ShowConfigQuotaResponse()
{
    dataIsSet_ = false;
}

ShowConfigQuotaResponse::~ShowConfigQuotaResponse() = default;

void ShowConfigQuotaResponse::validate()
{
}

web::json::value ShowConfigQuotaResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ShowConfigQuotaResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            ShowConfigQuotaDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


ShowConfigQuotaDto ShowConfigQuotaResponse::getData() const
{
    return data_;
}

void ShowConfigQuotaResponse::setData(const ShowConfigQuotaDto& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowConfigQuotaResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowConfigQuotaResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


