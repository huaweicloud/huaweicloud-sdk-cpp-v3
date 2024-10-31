

#include "huaweicloud/cfw/v1/model/UpdateServiceSetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateServiceSetResponse::UpdateServiceSetResponse()
{
    dataIsSet_ = false;
}

UpdateServiceSetResponse::~UpdateServiceSetResponse() = default;

void UpdateServiceSetResponse::validate()
{
}

web::json::value UpdateServiceSetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool UpdateServiceSetResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            ServiceSetId refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


ServiceSetId UpdateServiceSetResponse::getData() const
{
    return data_;
}

void UpdateServiceSetResponse::setData(const ServiceSetId& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool UpdateServiceSetResponse::dataIsSet() const
{
    return dataIsSet_;
}

void UpdateServiceSetResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


