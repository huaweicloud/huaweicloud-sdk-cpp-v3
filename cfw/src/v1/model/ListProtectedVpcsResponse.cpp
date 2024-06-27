

#include "huaweicloud/cfw/v1/model/ListProtectedVpcsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListProtectedVpcsResponse::ListProtectedVpcsResponse()
{
    dataIsSet_ = false;
}

ListProtectedVpcsResponse::~ListProtectedVpcsResponse() = default;

void ListProtectedVpcsResponse::validate()
{
}

web::json::value ListProtectedVpcsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListProtectedVpcsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            VPCProtectsVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


VPCProtectsVo ListProtectedVpcsResponse::getData() const
{
    return data_;
}

void ListProtectedVpcsResponse::setData(const VPCProtectsVo& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListProtectedVpcsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListProtectedVpcsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


