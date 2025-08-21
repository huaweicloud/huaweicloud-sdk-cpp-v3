

#include "huaweicloud/cfw/v1/model/ShowFlowTopResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowFlowTopResponse::ShowFlowTopResponse()
{
    dataIsSet_ = false;
}

ShowFlowTopResponse::~ShowFlowTopResponse() = default;

void ShowFlowTopResponse::validate()
{
}

web::json::value ShowFlowTopResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ShowFlowTopResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::vector<ItemVO>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::map<std::string, std::vector<ItemVO>>& ShowFlowTopResponse::getData()
{
    return data_;
}

void ShowFlowTopResponse::setData(const std::map<std::string, std::vector<ItemVO>>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowFlowTopResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowFlowTopResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


