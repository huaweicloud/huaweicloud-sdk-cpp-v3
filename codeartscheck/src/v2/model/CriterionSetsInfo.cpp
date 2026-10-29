

#include "huaweicloud/codeartscheck/v2/model/CriterionSetsInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




CriterionSetsInfo::CriterionSetsInfo()
{
    criterionSetListIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

CriterionSetsInfo::~CriterionSetsInfo() = default;

void CriterionSetsInfo::validate()
{
}

web::json::value CriterionSetsInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(criterionSetListIsSet_) {
        val[utility::conversions::to_string_t("criterionSetList")] = ModelBase::toJson(criterionSetList_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool CriterionSetsInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("criterionSetList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("criterionSetList"));
        if(!fieldValue.is_null())
        {
            std::vector<CriterionSetListV2Body> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCriterionSetList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<CriterionSetListV2Body>& CriterionSetsInfo::getCriterionSetList()
{
    return criterionSetList_;
}

void CriterionSetsInfo::setCriterionSetList(const std::vector<CriterionSetListV2Body>& value)
{
    criterionSetList_ = value;
    criterionSetListIsSet_ = true;
}

bool CriterionSetsInfo::criterionSetListIsSet() const
{
    return criterionSetListIsSet_;
}

void CriterionSetsInfo::unsetcriterionSetList()
{
    criterionSetListIsSet_ = false;
}

int32_t CriterionSetsInfo::getTotal() const
{
    return total_;
}

void CriterionSetsInfo::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool CriterionSetsInfo::totalIsSet() const
{
    return totalIsSet_;
}

void CriterionSetsInfo::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


