

#include "huaweicloud/projectman/v4/model/StatusChangeResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




StatusChangeResult::StatusChangeResult()
{
    cannotFinishArIsSet_ = false;
}

StatusChangeResult::~StatusChangeResult() = default;

void StatusChangeResult::validate()
{
}

web::json::value StatusChangeResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cannotFinishArIsSet_) {
        val[utility::conversions::to_string_t("cannot_finish_ar")] = ModelBase::toJson(cannotFinishAr_);
    }

    return val;
}
bool StatusChangeResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cannot_finish_ar"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cannot_finish_ar"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkItemVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCannotFinishAr(refVal);
        }
    }
    return ok;
}


std::vector<WorkItemVO>& StatusChangeResult::getCannotFinishAr()
{
    return cannotFinishAr_;
}

void StatusChangeResult::setCannotFinishAr(const std::vector<WorkItemVO>& value)
{
    cannotFinishAr_ = value;
    cannotFinishArIsSet_ = true;
}

bool StatusChangeResult::cannotFinishArIsSet() const
{
    return cannotFinishArIsSet_;
}

void StatusChangeResult::unsetcannotFinishAr()
{
    cannotFinishArIsSet_ = false;
}

}
}
}
}
}


