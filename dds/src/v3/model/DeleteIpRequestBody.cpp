

#include "huaweicloud/dds/v3/model/DeleteIpRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DeleteIpRequestBody::DeleteIpRequestBody()
{
    type_ = "";
    typeIsSet_ = false;
}

DeleteIpRequestBody::~DeleteIpRequestBody() = default;

void DeleteIpRequestBody::validate()
{
}

web::json::value DeleteIpRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool DeleteIpRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string DeleteIpRequestBody::getType() const
{
    return type_;
}

void DeleteIpRequestBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool DeleteIpRequestBody::typeIsSet() const
{
    return typeIsSet_;
}

void DeleteIpRequestBody::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


