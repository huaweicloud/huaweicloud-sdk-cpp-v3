

#include "huaweicloud/codeartscheck/v2/model/ShowTaskDefectsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ShowTaskDefectsResponse::ShowTaskDefectsResponse()
{
    defectsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ShowTaskDefectsResponse::~ShowTaskDefectsResponse() = default;

void ShowTaskDefectsResponse::validate()
{
}

web::json::value ShowTaskDefectsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(defectsIsSet_) {
        val[utility::conversions::to_string_t("defects")] = ModelBase::toJson(defects_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ShowTaskDefectsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("defects"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defects"));
        if(!fieldValue.is_null())
        {
            std::vector<DefectInfoV2> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefects(refVal);
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


std::vector<DefectInfoV2>& ShowTaskDefectsResponse::getDefects()
{
    return defects_;
}

void ShowTaskDefectsResponse::setDefects(const std::vector<DefectInfoV2>& value)
{
    defects_ = value;
    defectsIsSet_ = true;
}

bool ShowTaskDefectsResponse::defectsIsSet() const
{
    return defectsIsSet_;
}

void ShowTaskDefectsResponse::unsetdefects()
{
    defectsIsSet_ = false;
}

int32_t ShowTaskDefectsResponse::getTotal() const
{
    return total_;
}

void ShowTaskDefectsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowTaskDefectsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowTaskDefectsResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


