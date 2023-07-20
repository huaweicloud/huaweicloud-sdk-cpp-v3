

#include "huaweicloud/gaussdb/v3/model/MysqlChangeSpecificationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlChangeSpecificationRequest::MysqlChangeSpecificationRequest()
{
    resizeFlavorIsSet_ = false;
    isAutoPay_ = "";
    isAutoPayIsSet_ = false;
}

MysqlChangeSpecificationRequest::~MysqlChangeSpecificationRequest() = default;

void MysqlChangeSpecificationRequest::validate()
{
}

web::json::value MysqlChangeSpecificationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resizeFlavorIsSet_) {
        val[utility::conversions::to_string_t("resize_flavor")] = ModelBase::toJson(resizeFlavor_);
    }
    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("is_auto_pay")] = ModelBase::toJson(isAutoPay_);
    }

    return val;
}

bool MysqlChangeSpecificationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resize_flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resize_flavor"));
        if(!fieldValue.is_null())
        {
            MysqlResizeFlavor refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResizeFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_auto_pay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_pay"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoPay(refVal);
        }
    }
    return ok;
}

MysqlResizeFlavor MysqlChangeSpecificationRequest::getResizeFlavor() const
{
    return resizeFlavor_;
}

void MysqlChangeSpecificationRequest::setResizeFlavor(const MysqlResizeFlavor& value)
{
    resizeFlavor_ = value;
    resizeFlavorIsSet_ = true;
}

bool MysqlChangeSpecificationRequest::resizeFlavorIsSet() const
{
    return resizeFlavorIsSet_;
}

void MysqlChangeSpecificationRequest::unsetresizeFlavor()
{
    resizeFlavorIsSet_ = false;
}

std::string MysqlChangeSpecificationRequest::getIsAutoPay() const
{
    return isAutoPay_;
}

void MysqlChangeSpecificationRequest::setIsAutoPay(const std::string& value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool MysqlChangeSpecificationRequest::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void MysqlChangeSpecificationRequest::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


