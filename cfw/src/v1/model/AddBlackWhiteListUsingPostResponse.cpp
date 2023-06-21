

#include "huaweicloud/cfw/v1/model/AddBlackWhiteListUsingPostResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddBlackWhiteListUsingPostResponse::AddBlackWhiteListUsingPostResponse()
{
    dataIsSet_ = false;
}

AddBlackWhiteListUsingPostResponse::~AddBlackWhiteListUsingPostResponse() = default;

void AddBlackWhiteListUsingPostResponse::validate()
{
}

web::json::value AddBlackWhiteListUsingPostResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool AddBlackWhiteListUsingPostResponse::fromJson(const web::json::value& val)
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


IdObject AddBlackWhiteListUsingPostResponse::getData() const
{
    return data_;
}

void AddBlackWhiteListUsingPostResponse::setData(const IdObject& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool AddBlackWhiteListUsingPostResponse::dataIsSet() const
{
    return dataIsSet_;
}

void AddBlackWhiteListUsingPostResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


