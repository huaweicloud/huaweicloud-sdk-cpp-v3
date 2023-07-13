

#include "huaweicloud/ims/v2/model/GlanceUpdateImageRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




GlanceUpdateImageRequestBody::GlanceUpdateImageRequestBody()
{
    op_ = "";
    opIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

GlanceUpdateImageRequestBody::~GlanceUpdateImageRequestBody() = default;

void GlanceUpdateImageRequestBody::validate()
{
}

web::json::value GlanceUpdateImageRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(opIsSet_) {
        val[utility::conversions::to_string_t("op")] = ModelBase::toJson(op_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}

bool GlanceUpdateImageRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("op"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("op"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}

std::string GlanceUpdateImageRequestBody::getOp() const
{
    return op_;
}

void GlanceUpdateImageRequestBody::setOp(const std::string& value)
{
    op_ = value;
    opIsSet_ = true;
}

bool GlanceUpdateImageRequestBody::opIsSet() const
{
    return opIsSet_;
}

void GlanceUpdateImageRequestBody::unsetop()
{
    opIsSet_ = false;
}

std::string GlanceUpdateImageRequestBody::getPath() const
{
    return path_;
}

void GlanceUpdateImageRequestBody::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool GlanceUpdateImageRequestBody::pathIsSet() const
{
    return pathIsSet_;
}

void GlanceUpdateImageRequestBody::unsetpath()
{
    pathIsSet_ = false;
}

std::string GlanceUpdateImageRequestBody::getValue() const
{
    return value_;
}

void GlanceUpdateImageRequestBody::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool GlanceUpdateImageRequestBody::valueIsSet() const
{
    return valueIsSet_;
}

void GlanceUpdateImageRequestBody::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


