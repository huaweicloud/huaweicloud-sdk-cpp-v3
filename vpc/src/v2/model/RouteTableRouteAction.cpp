

#include "huaweicloud/vpc/v2/model/RouteTableRouteAction.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




RouteTableRouteAction::RouteTableRouteAction()
{
    addIsSet_ = false;
    modIsSet_ = false;
    delIsSet_ = false;
}

RouteTableRouteAction::~RouteTableRouteAction() = default;

void RouteTableRouteAction::validate()
{
}

web::json::value RouteTableRouteAction::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addIsSet_) {
        val[utility::conversions::to_string_t("add")] = ModelBase::toJson(add_);
    }
    if(modIsSet_) {
        val[utility::conversions::to_string_t("mod")] = ModelBase::toJson(mod_);
    }
    if(delIsSet_) {
        val[utility::conversions::to_string_t("del")] = ModelBase::toJson(del_);
    }

    return val;
}

bool RouteTableRouteAction::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("add"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("add"));
        if(!fieldValue.is_null())
        {
            std::vector<AddRouteTableRoute> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mod"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mod"));
        if(!fieldValue.is_null())
        {
            std::vector<ModRouteTableRoute> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("del"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("del"));
        if(!fieldValue.is_null())
        {
            std::vector<DelRouteTableRoute> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDel(refVal);
        }
    }
    return ok;
}

std::vector<AddRouteTableRoute>& RouteTableRouteAction::getAdd()
{
    return add_;
}

void RouteTableRouteAction::setAdd(const std::vector<AddRouteTableRoute>& value)
{
    add_ = value;
    addIsSet_ = true;
}

bool RouteTableRouteAction::addIsSet() const
{
    return addIsSet_;
}

void RouteTableRouteAction::unsetadd()
{
    addIsSet_ = false;
}

std::vector<ModRouteTableRoute>& RouteTableRouteAction::getMod()
{
    return mod_;
}

void RouteTableRouteAction::setMod(const std::vector<ModRouteTableRoute>& value)
{
    mod_ = value;
    modIsSet_ = true;
}

bool RouteTableRouteAction::modIsSet() const
{
    return modIsSet_;
}

void RouteTableRouteAction::unsetmod()
{
    modIsSet_ = false;
}

std::vector<DelRouteTableRoute>& RouteTableRouteAction::getDel()
{
    return del_;
}

void RouteTableRouteAction::setDel(const std::vector<DelRouteTableRoute>& value)
{
    del_ = value;
    delIsSet_ = true;
}

bool RouteTableRouteAction::delIsSet() const
{
    return delIsSet_;
}

void RouteTableRouteAction::unsetdel()
{
    delIsSet_ = false;
}

}
}
}
}
}


