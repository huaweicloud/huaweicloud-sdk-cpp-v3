

#include "huaweicloud/cfw/v1/model/DeleteServiceSetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteServiceSetResponse::DeleteServiceSetResponse()
{
    dataIsSet_ = false;
}

DeleteServiceSetResponse::~DeleteServiceSetResponse() = default;

void DeleteServiceSetResponse::validate()
{
}

web::json::value DeleteServiceSetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool DeleteServiceSetResponse::fromJson(const web::json::value& val)
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


ServiceSetId DeleteServiceSetResponse::getData() const
{
    return data_;
}

void DeleteServiceSetResponse::setData(const ServiceSetId& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool DeleteServiceSetResponse::dataIsSet() const
{
    return dataIsSet_;
}

void DeleteServiceSetResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


