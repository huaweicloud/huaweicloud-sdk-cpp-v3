

#include "huaweicloud/cfw/v1/model/UpdateServiceSetUsingPutResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateServiceSetUsingPutResponse::UpdateServiceSetUsingPutResponse()
{
    dataIsSet_ = false;
}

UpdateServiceSetUsingPutResponse::~UpdateServiceSetUsingPutResponse() = default;

void UpdateServiceSetUsingPutResponse::validate()
{
}

web::json::value UpdateServiceSetUsingPutResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool UpdateServiceSetUsingPutResponse::fromJson(const web::json::value& val)
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


IdObject UpdateServiceSetUsingPutResponse::getData() const
{
    return data_;
}

void UpdateServiceSetUsingPutResponse::setData(const IdObject& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool UpdateServiceSetUsingPutResponse::dataIsSet() const
{
    return dataIsSet_;
}

void UpdateServiceSetUsingPutResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


