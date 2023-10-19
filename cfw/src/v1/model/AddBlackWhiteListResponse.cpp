

#include "huaweicloud/cfw/v1/model/AddBlackWhiteListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddBlackWhiteListResponse::AddBlackWhiteListResponse()
{
    dataIsSet_ = false;
}

AddBlackWhiteListResponse::~AddBlackWhiteListResponse() = default;

void AddBlackWhiteListResponse::validate()
{
}

web::json::value AddBlackWhiteListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool AddBlackWhiteListResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            IdObject refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


IdObject AddBlackWhiteListResponse::getData() const
{
    return data_;
}

void AddBlackWhiteListResponse::setData(const IdObject& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool AddBlackWhiteListResponse::dataIsSet() const
{
    return dataIsSet_;
}

void AddBlackWhiteListResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


