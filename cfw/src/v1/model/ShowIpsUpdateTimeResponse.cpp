

#include "huaweicloud/cfw/v1/model/ShowIpsUpdateTimeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowIpsUpdateTimeResponse::ShowIpsUpdateTimeResponse()
{
    dataIsSet_ = false;
}

ShowIpsUpdateTimeResponse::~ShowIpsUpdateTimeResponse() = default;

void ShowIpsUpdateTimeResponse::validate()
{
}

web::json::value ShowIpsUpdateTimeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ShowIpsUpdateTimeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<IpsRuleUpdateTimeVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::vector<IpsRuleUpdateTimeVO>& ShowIpsUpdateTimeResponse::getData()
{
    return data_;
}

void ShowIpsUpdateTimeResponse::setData(const std::vector<IpsRuleUpdateTimeVO>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowIpsUpdateTimeResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowIpsUpdateTimeResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


