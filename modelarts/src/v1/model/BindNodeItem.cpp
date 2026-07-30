

#include "huaweicloud/modelarts/v1/model/BindNodeItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BindNodeItem::BindNodeItem()
{
    name_ = "";
    nameIsSet_ = false;
    quotaName_ = "";
    quotaNameIsSet_ = false;
}

BindNodeItem::~BindNodeItem() = default;

void BindNodeItem::validate()
{
}

web::json::value BindNodeItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(quotaNameIsSet_) {
        val[utility::conversions::to_string_t("quotaName")] = ModelBase::toJson(quotaName_);
    }

    return val;
}
bool BindNodeItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("quotaName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quotaName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotaName(refVal);
        }
    }
    return ok;
}


std::string BindNodeItem::getName() const
{
    return name_;
}

void BindNodeItem::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BindNodeItem::nameIsSet() const
{
    return nameIsSet_;
}

void BindNodeItem::unsetname()
{
    nameIsSet_ = false;
}

std::string BindNodeItem::getQuotaName() const
{
    return quotaName_;
}

void BindNodeItem::setQuotaName(const std::string& value)
{
    quotaName_ = value;
    quotaNameIsSet_ = true;
}

bool BindNodeItem::quotaNameIsSet() const
{
    return quotaNameIsSet_;
}

void BindNodeItem::unsetquotaName()
{
    quotaNameIsSet_ = false;
}

}
}
}
}
}


