

#include "huaweicloud/aad/v2/model/CipherInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




CipherInfo::CipherInfo()
{
    name_ = "";
    nameIsSet_ = false;
    algo_ = "";
    algoIsSet_ = false;
    descCn_ = "";
    descCnIsSet_ = false;
    descEn_ = "";
    descEnIsSet_ = false;
}

CipherInfo::~CipherInfo() = default;

void CipherInfo::validate()
{
}

web::json::value CipherInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(algoIsSet_) {
        val[utility::conversions::to_string_t("algo")] = ModelBase::toJson(algo_);
    }
    if(descCnIsSet_) {
        val[utility::conversions::to_string_t("desc_cn")] = ModelBase::toJson(descCn_);
    }
    if(descEnIsSet_) {
        val[utility::conversions::to_string_t("desc_en")] = ModelBase::toJson(descEn_);
    }

    return val;
}
bool CipherInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("algo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("algo"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlgo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("desc_cn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("desc_cn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescCn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("desc_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("desc_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescEn(refVal);
        }
    }
    return ok;
}


std::string CipherInfo::getName() const
{
    return name_;
}

void CipherInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CipherInfo::nameIsSet() const
{
    return nameIsSet_;
}

void CipherInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string CipherInfo::getAlgo() const
{
    return algo_;
}

void CipherInfo::setAlgo(const std::string& value)
{
    algo_ = value;
    algoIsSet_ = true;
}

bool CipherInfo::algoIsSet() const
{
    return algoIsSet_;
}

void CipherInfo::unsetalgo()
{
    algoIsSet_ = false;
}

std::string CipherInfo::getDescCn() const
{
    return descCn_;
}

void CipherInfo::setDescCn(const std::string& value)
{
    descCn_ = value;
    descCnIsSet_ = true;
}

bool CipherInfo::descCnIsSet() const
{
    return descCnIsSet_;
}

void CipherInfo::unsetdescCn()
{
    descCnIsSet_ = false;
}

std::string CipherInfo::getDescEn() const
{
    return descEn_;
}

void CipherInfo::setDescEn(const std::string& value)
{
    descEn_ = value;
    descEnIsSet_ = true;
}

bool CipherInfo::descEnIsSet() const
{
    return descEnIsSet_;
}

void CipherInfo::unsetdescEn()
{
    descEnIsSet_ = false;
}

}
}
}
}
}


