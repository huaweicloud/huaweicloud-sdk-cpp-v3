

#include "huaweicloud/dds/v3/model/ShowReplSetNameResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ShowReplSetNameResponse::ShowReplSetNameResponse()
{
    name_ = "";
    nameIsSet_ = false;
}

ShowReplSetNameResponse::~ShowReplSetNameResponse() = default;

void ShowReplSetNameResponse::validate()
{
}

web::json::value ShowReplSetNameResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ShowReplSetNameResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string ShowReplSetNameResponse::getName() const
{
    return name_;
}

void ShowReplSetNameResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowReplSetNameResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowReplSetNameResponse::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


