

#include "huaweicloud/cfw/v1/model/ShowAccessDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowAccessDetailResponse::ShowAccessDetailResponse()
{
    dataIsSet_ = false;
}

ShowAccessDetailResponse::~ShowAccessDetailResponse() = default;

void ShowAccessDetailResponse::validate()
{
}

web::json::value ShowAccessDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ShowAccessDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            AccessDetailVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


AccessDetailVO ShowAccessDetailResponse::getData() const
{
    return data_;
}

void ShowAccessDetailResponse::setData(const AccessDetailVO& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowAccessDetailResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowAccessDetailResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


