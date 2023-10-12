

#include "huaweicloud/ims/v2/model/UpdateImageRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




UpdateImageRequestBody::UpdateImageRequestBody()
{
    op_ = "";
    opIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

UpdateImageRequestBody::~UpdateImageRequestBody() = default;

void UpdateImageRequestBody::validate()
{
}

web::json::value UpdateImageRequestBody::toJson() const
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
bool UpdateImageRequestBody::fromJson(const web::json::value& val)
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


std::string UpdateImageRequestBody::getOp() const
{
    return op_;
}

void UpdateImageRequestBody::setOp(const std::string& value)
{
    op_ = value;
    opIsSet_ = true;
}

bool UpdateImageRequestBody::opIsSet() const
{
    return opIsSet_;
}

void UpdateImageRequestBody::unsetop()
{
    opIsSet_ = false;
}

std::string UpdateImageRequestBody::getPath() const
{
    return path_;
}

void UpdateImageRequestBody::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool UpdateImageRequestBody::pathIsSet() const
{
    return pathIsSet_;
}

void UpdateImageRequestBody::unsetpath()
{
    pathIsSet_ = false;
}

std::string UpdateImageRequestBody::getValue() const
{
    return value_;
}

void UpdateImageRequestBody::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool UpdateImageRequestBody::valueIsSet() const
{
    return valueIsSet_;
}

void UpdateImageRequestBody::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


