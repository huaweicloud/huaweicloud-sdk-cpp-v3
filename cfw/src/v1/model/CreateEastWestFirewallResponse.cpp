

#include "huaweicloud/cfw/v1/model/CreateEastWestFirewallResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CreateEastWestFirewallResponse::CreateEastWestFirewallResponse()
{
    dataIsSet_ = false;
}

CreateEastWestFirewallResponse::~CreateEastWestFirewallResponse() = default;

void CreateEastWestFirewallResponse::validate()
{
}

web::json::value CreateEastWestFirewallResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool CreateEastWestFirewallResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            IdObject refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


IdObject CreateEastWestFirewallResponse::getData() const
{
    return data_;
}

void CreateEastWestFirewallResponse::setData(const IdObject& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool CreateEastWestFirewallResponse::dataIsSet() const
{
    return dataIsSet_;
}

void CreateEastWestFirewallResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


