

#include "huaweicloud/aad/v1/model/IpBindingBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




IpBindingBody::IpBindingBody()
{
    packageId_ = "";
    packageIdIsSet_ = false;
    idListIsSet_ = false;
}

IpBindingBody::~IpBindingBody() = default;

void IpBindingBody::validate()
{
}

web::json::value IpBindingBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(packageIdIsSet_) {
        val[utility::conversions::to_string_t("package_id")] = ModelBase::toJson(packageId_);
    }
    if(idListIsSet_) {
        val[utility::conversions::to_string_t("id_list")] = ModelBase::toJson(idList_);
    }

    return val;
}
bool IpBindingBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("package_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdList(refVal);
        }
    }
    return ok;
}


std::string IpBindingBody::getPackageId() const
{
    return packageId_;
}

void IpBindingBody::setPackageId(const std::string& value)
{
    packageId_ = value;
    packageIdIsSet_ = true;
}

bool IpBindingBody::packageIdIsSet() const
{
    return packageIdIsSet_;
}

void IpBindingBody::unsetpackageId()
{
    packageIdIsSet_ = false;
}

std::vector<std::string>& IpBindingBody::getIdList()
{
    return idList_;
}

void IpBindingBody::setIdList(const std::vector<std::string>& value)
{
    idList_ = value;
    idListIsSet_ = true;
}

bool IpBindingBody::idListIsSet() const
{
    return idListIsSet_;
}

void IpBindingBody::unsetidList()
{
    idListIsSet_ = false;
}

}
}
}
}
}


