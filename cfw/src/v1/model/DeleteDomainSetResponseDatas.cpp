

#include "huaweicloud/cfw/v1/model/DeleteDomainSetResponseDatas.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteDomainSetResponseDatas::DeleteDomainSetResponseDatas()
{
    responseDatasIsSet_ = false;
}

DeleteDomainSetResponseDatas::~DeleteDomainSetResponseDatas() = default;

void DeleteDomainSetResponseDatas::validate()
{
}

web::json::value DeleteDomainSetResponseDatas::toJson() const
{
    web::json::value val = web::json::value::object();

    if(responseDatasIsSet_) {
        val[utility::conversions::to_string_t("responseDatas")] = ModelBase::toJson(responseDatas_);
    }

    return val;
}
bool DeleteDomainSetResponseDatas::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("responseDatas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("responseDatas"));
        if(!fieldValue.is_null())
        {
            std::vector<DomainSetId> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResponseDatas(refVal);
        }
    }
    return ok;
}


std::vector<DomainSetId>& DeleteDomainSetResponseDatas::getResponseDatas()
{
    return responseDatas_;
}

void DeleteDomainSetResponseDatas::setResponseDatas(const std::vector<DomainSetId>& value)
{
    responseDatas_ = value;
    responseDatasIsSet_ = true;
}

bool DeleteDomainSetResponseDatas::responseDatasIsSet() const
{
    return responseDatasIsSet_;
}

void DeleteDomainSetResponseDatas::unsetresponseDatas()
{
    responseDatasIsSet_ = false;
}

}
}
}
}
}


