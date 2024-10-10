

#include "huaweicloud/aad/v2/model/ActionInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ActionInfo::ActionInfo()
{
    category_ = "";
    categoryIsSet_ = false;
    detailIsSet_ = false;
}

ActionInfo::~ActionInfo() = default;

void ActionInfo::validate()
{
}

web::json::value ActionInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(detailIsSet_) {
        val[utility::conversions::to_string_t("detail")] = ModelBase::toJson(detail_);
    }

    return val;
}
bool ActionInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detail"));
        if(!fieldValue.is_null())
        {
            DetailInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetail(refVal);
        }
    }
    return ok;
}


std::string ActionInfo::getCategory() const
{
    return category_;
}

void ActionInfo::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool ActionInfo::categoryIsSet() const
{
    return categoryIsSet_;
}

void ActionInfo::unsetcategory()
{
    categoryIsSet_ = false;
}

DetailInfo ActionInfo::getDetail() const
{
    return detail_;
}

void ActionInfo::setDetail(const DetailInfo& value)
{
    detail_ = value;
    detailIsSet_ = true;
}

bool ActionInfo::detailIsSet() const
{
    return detailIsSet_;
}

void ActionInfo::unsetdetail()
{
    detailIsSet_ = false;
}

}
}
}
}
}


