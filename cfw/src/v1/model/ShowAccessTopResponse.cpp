

#include "huaweicloud/cfw/v1/model/ShowAccessTopResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowAccessTopResponse::ShowAccessTopResponse()
{
    dataIsSet_ = false;
}

ShowAccessTopResponse::~ShowAccessTopResponse() = default;

void ShowAccessTopResponse::validate()
{
}

web::json::value ShowAccessTopResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ShowAccessTopResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            AccessTopVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


AccessTopVO ShowAccessTopResponse::getData() const
{
    return data_;
}

void ShowAccessTopResponse::setData(const AccessTopVO& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowAccessTopResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowAccessTopResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


