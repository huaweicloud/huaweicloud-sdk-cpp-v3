

#include "huaweicloud/vod/v1/model/ListCategoryInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ListCategoryInfoRequest::ListCategoryInfoRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    idIsSet_ = false;
}

ListCategoryInfoRequest::~ListCategoryInfoRequest() = default;

void ListCategoryInfoRequest::validate()
{
}

web::json::value ListCategoryInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool ListCategoryInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string ListCategoryInfoRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListCategoryInfoRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListCategoryInfoRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListCategoryInfoRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::vector<int32_t>& ListCategoryInfoRequest::getId()
{
    return id_;
}

void ListCategoryInfoRequest::setId(std::vector<int32_t> value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListCategoryInfoRequest::idIsSet() const
{
    return idIsSet_;
}

void ListCategoryInfoRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


