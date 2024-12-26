

#include "huaweicloud/cfw/v1/model/UpdateAlarmConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateAlarmConfigResponse::UpdateAlarmConfigResponse()
{
    dataIsSet_ = false;
}

UpdateAlarmConfigResponse::~UpdateAlarmConfigResponse() = default;

void UpdateAlarmConfigResponse::validate()
{
}

web::json::value UpdateAlarmConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool UpdateAlarmConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            ResponseData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


ResponseData UpdateAlarmConfigResponse::getData() const
{
    return data_;
}

void UpdateAlarmConfigResponse::setData(const ResponseData& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool UpdateAlarmConfigResponse::dataIsSet() const
{
    return dataIsSet_;
}

void UpdateAlarmConfigResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


