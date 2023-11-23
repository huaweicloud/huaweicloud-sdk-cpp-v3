

#include "huaweicloud/cfw/v1/model/AddLogConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddLogConfigResponse::AddLogConfigResponse()
{
    data_ = "";
    dataIsSet_ = false;
}

AddLogConfigResponse::~AddLogConfigResponse() = default;

void AddLogConfigResponse::validate()
{
}

web::json::value AddLogConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool AddLogConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::string AddLogConfigResponse::getData() const
{
    return data_;
}

void AddLogConfigResponse::setData(const std::string& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool AddLogConfigResponse::dataIsSet() const
{
    return dataIsSet_;
}

void AddLogConfigResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


