

#include "huaweicloud/cfw/v1/model/AddServiceSetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddServiceSetResponse::AddServiceSetResponse()
{
    dataIsSet_ = false;
}

AddServiceSetResponse::~AddServiceSetResponse() = default;

void AddServiceSetResponse::validate()
{
}

web::json::value AddServiceSetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool AddServiceSetResponse::fromJson(const web::json::value& val)
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


ServiceSetId AddServiceSetResponse::getData() const
{
    return data_;
}

void AddServiceSetResponse::setData(const ServiceSetId& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool AddServiceSetResponse::dataIsSet() const
{
    return dataIsSet_;
}

void AddServiceSetResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


