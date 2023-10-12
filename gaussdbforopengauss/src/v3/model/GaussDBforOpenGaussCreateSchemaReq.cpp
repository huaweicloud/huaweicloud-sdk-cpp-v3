

#include "huaweicloud/gaussdbforopengauss/v3/model/GaussDBforOpenGaussCreateSchemaReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




GaussDBforOpenGaussCreateSchemaReq::GaussDBforOpenGaussCreateSchemaReq()
{
    name_ = "";
    nameIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
}

GaussDBforOpenGaussCreateSchemaReq::~GaussDBforOpenGaussCreateSchemaReq() = default;

void GaussDBforOpenGaussCreateSchemaReq::validate()
{
}

web::json::value GaussDBforOpenGaussCreateSchemaReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }

    return val;
}
bool GaussDBforOpenGaussCreateSchemaReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    return ok;
}


std::string GaussDBforOpenGaussCreateSchemaReq::getName() const
{
    return name_;
}

void GaussDBforOpenGaussCreateSchemaReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GaussDBforOpenGaussCreateSchemaReq::nameIsSet() const
{
    return nameIsSet_;
}

void GaussDBforOpenGaussCreateSchemaReq::unsetname()
{
    nameIsSet_ = false;
}

std::string GaussDBforOpenGaussCreateSchemaReq::getOwner() const
{
    return owner_;
}

void GaussDBforOpenGaussCreateSchemaReq::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool GaussDBforOpenGaussCreateSchemaReq::ownerIsSet() const
{
    return ownerIsSet_;
}

void GaussDBforOpenGaussCreateSchemaReq::unsetowner()
{
    ownerIsSet_ = false;
}

}
}
}
}
}


