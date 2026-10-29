

#include "huaweicloud/cbr/v1/model/OpResourceResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




OpResourceResp::OpResourceResp()
{
    extraInfoIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

OpResourceResp::~OpResourceResp() = default;

void OpResourceResp::validate()
{
}

web::json::value OpResourceResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(extraInfoIsSet_) {
        val[utility::conversions::to_string_t("extra_info")] = ModelBase::toJson(extraInfo_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool OpResourceResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("extra_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extra_info"));
        if(!fieldValue.is_null())
        {
            OpResourceExtraInfoResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtraInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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


OpResourceExtraInfoResp OpResourceResp::getExtraInfo() const
{
    return extraInfo_;
}

void OpResourceResp::setExtraInfo(const OpResourceExtraInfoResp& value)
{
    extraInfo_ = value;
    extraInfoIsSet_ = true;
}

bool OpResourceResp::extraInfoIsSet() const
{
    return extraInfoIsSet_;
}

void OpResourceResp::unsetextraInfo()
{
    extraInfoIsSet_ = false;
}

std::string OpResourceResp::getId() const
{
    return id_;
}

void OpResourceResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool OpResourceResp::idIsSet() const
{
    return idIsSet_;
}

void OpResourceResp::unsetid()
{
    idIsSet_ = false;
}

std::string OpResourceResp::getName() const
{
    return name_;
}

void OpResourceResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool OpResourceResp::nameIsSet() const
{
    return nameIsSet_;
}

void OpResourceResp::unsetname()
{
    nameIsSet_ = false;
}

std::string OpResourceResp::getType() const
{
    return type_;
}

void OpResourceResp::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool OpResourceResp::typeIsSet() const
{
    return typeIsSet_;
}

void OpResourceResp::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


