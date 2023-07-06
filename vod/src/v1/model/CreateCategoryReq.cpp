

#include "huaweicloud/vod/v1/model/CreateCategoryReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateCategoryReq::CreateCategoryReq()
{
    name_ = "";
    nameIsSet_ = false;
    parentId_ = 0;
    parentIdIsSet_ = false;
}

CreateCategoryReq::~CreateCategoryReq() = default;

void CreateCategoryReq::validate()
{
}

web::json::value CreateCategoryReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }

    return val;
}

bool CreateCategoryReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
        }
    }
    return ok;
}

std::string CreateCategoryReq::getName() const
{
    return name_;
}

void CreateCategoryReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateCategoryReq::nameIsSet() const
{
    return nameIsSet_;
}

void CreateCategoryReq::unsetname()
{
    nameIsSet_ = false;
}

int32_t CreateCategoryReq::getParentId() const
{
    return parentId_;
}

void CreateCategoryReq::setParentId(int32_t value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool CreateCategoryReq::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void CreateCategoryReq::unsetparentId()
{
    parentIdIsSet_ = false;
}

}
}
}
}
}


