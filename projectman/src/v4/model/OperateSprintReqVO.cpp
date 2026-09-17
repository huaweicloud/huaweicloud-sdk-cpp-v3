

#include "huaweicloud/projectman/v4/model/OperateSprintReqVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




OperateSprintReqVO::OperateSprintReqVO()
{
    idsIsSet_ = false;
    attributeIsSet_ = false;
}

OperateSprintReqVO::~OperateSprintReqVO() = default;

void OperateSprintReqVO::validate()
{
}

web::json::value OperateSprintReqVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idsIsSet_) {
        val[utility::conversions::to_string_t("ids")] = ModelBase::toJson(ids_);
    }
    if(attributeIsSet_) {
        val[utility::conversions::to_string_t("attribute")] = ModelBase::toJson(attribute_);
    }

    return val;
}
bool OperateSprintReqVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attribute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attribute"));
        if(!fieldValue.is_null())
        {
            BaseLineVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttribute(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& OperateSprintReqVO::getIds()
{
    return ids_;
}

void OperateSprintReqVO::setIds(const std::vector<std::string>& value)
{
    ids_ = value;
    idsIsSet_ = true;
}

bool OperateSprintReqVO::idsIsSet() const
{
    return idsIsSet_;
}

void OperateSprintReqVO::unsetids()
{
    idsIsSet_ = false;
}

BaseLineVO OperateSprintReqVO::getAttribute() const
{
    return attribute_;
}

void OperateSprintReqVO::setAttribute(const BaseLineVO& value)
{
    attribute_ = value;
    attributeIsSet_ = true;
}

bool OperateSprintReqVO::attributeIsSet() const
{
    return attributeIsSet_;
}

void OperateSprintReqVO::unsetattribute()
{
    attributeIsSet_ = false;
}

}
}
}
}
}


