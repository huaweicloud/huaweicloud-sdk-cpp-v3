

#include "huaweicloud/cfw/v1/model/ShowDomainSetDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowDomainSetDetailResponse::ShowDomainSetDetailResponse()
{
    dataIsSet_ = false;
}

ShowDomainSetDetailResponse::~ShowDomainSetDetailResponse() = default;

void ShowDomainSetDetailResponse::validate()
{
}

web::json::value ShowDomainSetDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ShowDomainSetDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            DomainSetVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


DomainSetVo ShowDomainSetDetailResponse::getData() const
{
    return data_;
}

void ShowDomainSetDetailResponse::setData(const DomainSetVo& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowDomainSetDetailResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowDomainSetDetailResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


