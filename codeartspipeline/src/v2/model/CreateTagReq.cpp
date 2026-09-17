

#include "huaweicloud/codeartspipeline/v2/model/CreateTagReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CreateTagReq::CreateTagReq()
{
    name_ = "";
    nameIsSet_ = false;
    color_ = "";
    colorIsSet_ = false;
}

CreateTagReq::~CreateTagReq() = default;

void CreateTagReq::validate()
{
}

web::json::value CreateTagReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(colorIsSet_) {
        val[utility::conversions::to_string_t("color")] = ModelBase::toJson(color_);
    }

    return val;
}
bool CreateTagReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("color"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("color"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColor(refVal);
        }
    }
    return ok;
}


std::string CreateTagReq::getName() const
{
    return name_;
}

void CreateTagReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateTagReq::nameIsSet() const
{
    return nameIsSet_;
}

void CreateTagReq::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateTagReq::getColor() const
{
    return color_;
}

void CreateTagReq::setColor(const std::string& value)
{
    color_ = value;
    colorIsSet_ = true;
}

bool CreateTagReq::colorIsSet() const
{
    return colorIsSet_;
}

void CreateTagReq::unsetcolor()
{
    colorIsSet_ = false;
}

}
}
}
}
}


