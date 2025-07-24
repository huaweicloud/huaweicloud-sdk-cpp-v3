

#include "huaweicloud/cloudtest/v1/model/AssociateDefectInfoVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AssociateDefectInfoVo::AssociateDefectInfoVo()
{
    associate_ = false;
    associateIsSet_ = false;
    associateCount_ = 0;
    associateCountIsSet_ = false;
}

AssociateDefectInfoVo::~AssociateDefectInfoVo() = default;

void AssociateDefectInfoVo::validate()
{
}

web::json::value AssociateDefectInfoVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(associateIsSet_) {
        val[utility::conversions::to_string_t("associate")] = ModelBase::toJson(associate_);
    }
    if(associateCountIsSet_) {
        val[utility::conversions::to_string_t("associate_count")] = ModelBase::toJson(associateCount_);
    }

    return val;
}
bool AssociateDefectInfoVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("associate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateCount(refVal);
        }
    }
    return ok;
}


bool AssociateDefectInfoVo::isAssociate() const
{
    return associate_;
}

void AssociateDefectInfoVo::setAssociate(bool value)
{
    associate_ = value;
    associateIsSet_ = true;
}

bool AssociateDefectInfoVo::associateIsSet() const
{
    return associateIsSet_;
}

void AssociateDefectInfoVo::unsetassociate()
{
    associateIsSet_ = false;
}

int32_t AssociateDefectInfoVo::getAssociateCount() const
{
    return associateCount_;
}

void AssociateDefectInfoVo::setAssociateCount(int32_t value)
{
    associateCount_ = value;
    associateCountIsSet_ = true;
}

bool AssociateDefectInfoVo::associateCountIsSet() const
{
    return associateCountIsSet_;
}

void AssociateDefectInfoVo::unsetassociateCount()
{
    associateCountIsSet_ = false;
}

}
}
}
}
}


