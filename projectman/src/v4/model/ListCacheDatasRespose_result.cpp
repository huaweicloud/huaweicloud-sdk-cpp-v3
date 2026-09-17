

#include "huaweicloud/projectman/v4/model/ListCacheDatasRespose_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListCacheDatasRespose_result::ListCacheDatasRespose_result()
{
    fieldsIsSet_ = false;
    visibleFieldsIsSet_ = false;
}

ListCacheDatasRespose_result::~ListCacheDatasRespose_result() = default;

void ListCacheDatasRespose_result::validate()
{
}

web::json::value ListCacheDatasRespose_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fieldsIsSet_) {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(fields_);
    }
    if(visibleFieldsIsSet_) {
        val[utility::conversions::to_string_t("visibleFields")] = ModelBase::toJson(visibleFields_);
    }

    return val;
}
bool ListCacheDatasRespose_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fields"));
        if(!fieldValue.is_null())
        {
            std::vector<FieldVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("visibleFields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("visibleFields"));
        if(!fieldValue.is_null())
        {
            std::vector<FieldVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVisibleFields(refVal);
        }
    }
    return ok;
}


std::vector<FieldVO>& ListCacheDatasRespose_result::getFields()
{
    return fields_;
}

void ListCacheDatasRespose_result::setFields(const std::vector<FieldVO>& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool ListCacheDatasRespose_result::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void ListCacheDatasRespose_result::unsetfields()
{
    fieldsIsSet_ = false;
}

std::vector<FieldVO>& ListCacheDatasRespose_result::getVisibleFields()
{
    return visibleFields_;
}

void ListCacheDatasRespose_result::setVisibleFields(const std::vector<FieldVO>& value)
{
    visibleFields_ = value;
    visibleFieldsIsSet_ = true;
}

bool ListCacheDatasRespose_result::visibleFieldsIsSet() const
{
    return visibleFieldsIsSet_;
}

void ListCacheDatasRespose_result::unsetvisibleFields()
{
    visibleFieldsIsSet_ = false;
}

}
}
}
}
}


