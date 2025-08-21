

#include "huaweicloud/cfw/v1/model/ShowEwAssociatedErResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowEwAssociatedErResponse::ShowEwAssociatedErResponse()
{
    dataIsSet_ = false;
}

ShowEwAssociatedErResponse::~ShowEwAssociatedErResponse() = default;

void ShowEwAssociatedErResponse::validate()
{
}

web::json::value ShowEwAssociatedErResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ShowEwAssociatedErResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            ShowEwAssociatedErResp_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


ShowEwAssociatedErResp_data ShowEwAssociatedErResponse::getData() const
{
    return data_;
}

void ShowEwAssociatedErResponse::setData(const ShowEwAssociatedErResp_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowEwAssociatedErResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowEwAssociatedErResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


