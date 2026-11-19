

#include "huaweicloud/gaussdb/v3/model/ShowInstanceStorageInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowInstanceStorageInfoResponse::ShowInstanceStorageInfoResponse()
{
    used_ = 0.0;
    usedIsSet_ = false;
    prepaidSize_ = 0.0;
    prepaidSizeIsSet_ = false;
    limit_ = 0.0;
    limitIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ShowInstanceStorageInfoResponse::~ShowInstanceStorageInfoResponse() = default;

void ShowInstanceStorageInfoResponse::validate()
{
}

web::json::value ShowInstanceStorageInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usedIsSet_) {
        val[utility::conversions::to_string_t("used")] = ModelBase::toJson(used_);
    }
    if(prepaidSizeIsSet_) {
        val[utility::conversions::to_string_t("prepaid_size")] = ModelBase::toJson(prepaidSize_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ShowInstanceStorageInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("used"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prepaid_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prepaid_size"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrepaidSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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


double ShowInstanceStorageInfoResponse::getUsed() const
{
    return used_;
}

void ShowInstanceStorageInfoResponse::setUsed(double value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool ShowInstanceStorageInfoResponse::usedIsSet() const
{
    return usedIsSet_;
}

void ShowInstanceStorageInfoResponse::unsetused()
{
    usedIsSet_ = false;
}

double ShowInstanceStorageInfoResponse::getPrepaidSize() const
{
    return prepaidSize_;
}

void ShowInstanceStorageInfoResponse::setPrepaidSize(double value)
{
    prepaidSize_ = value;
    prepaidSizeIsSet_ = true;
}

bool ShowInstanceStorageInfoResponse::prepaidSizeIsSet() const
{
    return prepaidSizeIsSet_;
}

void ShowInstanceStorageInfoResponse::unsetprepaidSize()
{
    prepaidSizeIsSet_ = false;
}

double ShowInstanceStorageInfoResponse::getLimit() const
{
    return limit_;
}

void ShowInstanceStorageInfoResponse::setLimit(double value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowInstanceStorageInfoResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ShowInstanceStorageInfoResponse::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowInstanceStorageInfoResponse::getType() const
{
    return type_;
}

void ShowInstanceStorageInfoResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowInstanceStorageInfoResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ShowInstanceStorageInfoResponse::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


