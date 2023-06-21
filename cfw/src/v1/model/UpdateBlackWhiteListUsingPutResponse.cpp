

#include "huaweicloud/cfw/v1/model/UpdateBlackWhiteListUsingPutResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateBlackWhiteListUsingPutResponse::UpdateBlackWhiteListUsingPutResponse()
{
    dataIsSet_ = false;
}

UpdateBlackWhiteListUsingPutResponse::~UpdateBlackWhiteListUsingPutResponse() = default;

void UpdateBlackWhiteListUsingPutResponse::validate()
{
}

web::json::value UpdateBlackWhiteListUsingPutResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool UpdateBlackWhiteListUsingPutResponse::fromJson(const web::json::value& val)
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


IdObject UpdateBlackWhiteListUsingPutResponse::getData() const
{
    return data_;
}

void UpdateBlackWhiteListUsingPutResponse::setData(const IdObject& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool UpdateBlackWhiteListUsingPutResponse::dataIsSet() const
{
    return dataIsSet_;
}

void UpdateBlackWhiteListUsingPutResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


