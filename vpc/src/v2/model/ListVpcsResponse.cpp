

#include "huaweicloud/vpc/v2/model/ListVpcsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ListVpcsResponse::ListVpcsResponse()
{
    vpcsIsSet_ = false;
}

ListVpcsResponse::~ListVpcsResponse() = default;

void ListVpcsResponse::validate()
{
}

web::json::value ListVpcsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcsIsSet_) {
        val[utility::conversions::to_string_t("vpcs")] = ModelBase::toJson(vpcs_);
    }

    return val;
}
bool ListVpcsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vpcs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpcs"));
        if(!fieldValue.is_null())
        {
            std::vector<Vpc> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcs(refVal);
        }
    }
    return ok;
}


std::vector<Vpc>& ListVpcsResponse::getVpcs()
{
    return vpcs_;
}

void ListVpcsResponse::setVpcs(const std::vector<Vpc>& value)
{
    vpcs_ = value;
    vpcsIsSet_ = true;
}

bool ListVpcsResponse::vpcsIsSet() const
{
    return vpcsIsSet_;
}

void ListVpcsResponse::unsetvpcs()
{
    vpcsIsSet_ = false;
}

}
}
}
}
}


