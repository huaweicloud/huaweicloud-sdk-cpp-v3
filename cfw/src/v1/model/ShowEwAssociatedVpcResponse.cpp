

#include "huaweicloud/cfw/v1/model/ShowEwAssociatedVpcResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowEwAssociatedVpcResponse::ShowEwAssociatedVpcResponse()
{
    dataIsSet_ = false;
}

ShowEwAssociatedVpcResponse::~ShowEwAssociatedVpcResponse() = default;

void ShowEwAssociatedVpcResponse::validate()
{
}

web::json::value ShowEwAssociatedVpcResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ShowEwAssociatedVpcResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            ShowEwAssociatedVpcResp_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


ShowEwAssociatedVpcResp_data ShowEwAssociatedVpcResponse::getData() const
{
    return data_;
}

void ShowEwAssociatedVpcResponse::setData(const ShowEwAssociatedVpcResp_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowEwAssociatedVpcResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowEwAssociatedVpcResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


