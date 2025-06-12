

#include "huaweicloud/metastudio/v1/model/ShowTtsPhoneticSymbolResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowTtsPhoneticSymbolResponse::ShowTtsPhoneticSymbolResponse()
{
    dataIsSet_ = false;
}

ShowTtsPhoneticSymbolResponse::~ShowTtsPhoneticSymbolResponse() = default;

void ShowTtsPhoneticSymbolResponse::validate()
{
}

web::json::value ShowTtsPhoneticSymbolResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ShowTtsPhoneticSymbolResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ShowTtsPhoneticSymbolResponse::getData()
{
    return data_;
}

void ShowTtsPhoneticSymbolResponse::setData(const std::vector<std::string>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowTtsPhoneticSymbolResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowTtsPhoneticSymbolResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


