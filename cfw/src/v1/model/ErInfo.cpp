

#include "huaweicloud/cfw/v1/model/ErInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ErInfo::ErInfo()
{
    erId_ = "";
    erIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ErInfo::~ErInfo() = default;

void ErInfo::validate()
{
}

web::json::value ErInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(erIdIsSet_) {
        val[utility::conversions::to_string_t("er_id")] = ModelBase::toJson(erId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ErInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("er_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("er_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErId(refVal);
        }
    }
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


std::string ErInfo::getErId() const
{
    return erId_;
}

void ErInfo::setErId(const std::string& value)
{
    erId_ = value;
    erIdIsSet_ = true;
}

bool ErInfo::erIdIsSet() const
{
    return erIdIsSet_;
}

void ErInfo::unseterId()
{
    erIdIsSet_ = false;
}

std::string ErInfo::getName() const
{
    return name_;
}

void ErInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ErInfo::nameIsSet() const
{
    return nameIsSet_;
}

void ErInfo::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


