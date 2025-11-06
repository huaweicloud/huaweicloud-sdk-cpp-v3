

#include "huaweicloud/codeartsrepo/v4/model/MemberBaseDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




MemberBaseDto::MemberBaseDto()
{
    id_ = "";
    idIsSet_ = false;
    iamId_ = "";
    iamIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

MemberBaseDto::~MemberBaseDto() = default;

void MemberBaseDto::validate()
{
}

web::json::value MemberBaseDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(iamIdIsSet_) {
        val[utility::conversions::to_string_t("iam_id")] = ModelBase::toJson(iamId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool MemberBaseDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iam_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iam_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIamId(refVal);
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


std::string MemberBaseDto::getId() const
{
    return id_;
}

void MemberBaseDto::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MemberBaseDto::idIsSet() const
{
    return idIsSet_;
}

void MemberBaseDto::unsetid()
{
    idIsSet_ = false;
}

std::string MemberBaseDto::getIamId() const
{
    return iamId_;
}

void MemberBaseDto::setIamId(const std::string& value)
{
    iamId_ = value;
    iamIdIsSet_ = true;
}

bool MemberBaseDto::iamIdIsSet() const
{
    return iamIdIsSet_;
}

void MemberBaseDto::unsetiamId()
{
    iamIdIsSet_ = false;
}

std::string MemberBaseDto::getName() const
{
    return name_;
}

void MemberBaseDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MemberBaseDto::nameIsSet() const
{
    return nameIsSet_;
}

void MemberBaseDto::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


