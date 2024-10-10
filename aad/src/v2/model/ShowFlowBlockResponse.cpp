

#include "huaweicloud/aad/v2/model/ShowFlowBlockResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ShowFlowBlockResponse::ShowFlowBlockResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    ipsIsSet_ = false;
}

ShowFlowBlockResponse::~ShowFlowBlockResponse() = default;

void ShowFlowBlockResponse::validate()
{
}

web::json::value ShowFlowBlockResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(ipsIsSet_) {
        val[utility::conversions::to_string_t("ips")] = ModelBase::toJson(ips_);
    }

    return val;
}
bool ShowFlowBlockResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips"));
        if(!fieldValue.is_null())
        {
            std::vector<Ips> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIps(refVal);
        }
    }
    return ok;
}


int32_t ShowFlowBlockResponse::getTotal() const
{
    return total_;
}

void ShowFlowBlockResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowFlowBlockResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowFlowBlockResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<Ips>& ShowFlowBlockResponse::getIps()
{
    return ips_;
}

void ShowFlowBlockResponse::setIps(const std::vector<Ips>& value)
{
    ips_ = value;
    ipsIsSet_ = true;
}

bool ShowFlowBlockResponse::ipsIsSet() const
{
    return ipsIsSet_;
}

void ShowFlowBlockResponse::unsetips()
{
    ipsIsSet_ = false;
}

}
}
}
}
}


