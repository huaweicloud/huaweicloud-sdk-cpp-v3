

#include "huaweicloud/cfw/v1/model/BatchDeleteSchedulesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchDeleteSchedulesResponse::BatchDeleteSchedulesResponse()
{
    dataIsSet_ = false;
}

BatchDeleteSchedulesResponse::~BatchDeleteSchedulesResponse() = default;

void BatchDeleteSchedulesResponse::validate()
{
}

web::json::value BatchDeleteSchedulesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool BatchDeleteSchedulesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchDeleteSchedulesResponse::getData()
{
    return data_;
}

void BatchDeleteSchedulesResponse::setData(const std::vector<std::string>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool BatchDeleteSchedulesResponse::dataIsSet() const
{
    return dataIsSet_;
}

void BatchDeleteSchedulesResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


