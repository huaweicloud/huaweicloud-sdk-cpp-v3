

#include "huaweicloud/metastudio/v1/model/ShootScriptItemBaseInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShootScriptItemBaseInfo::ShootScriptItemBaseInfo()
{
    sequenceNo_ = 0;
    sequenceNoIsSet_ = false;
}

ShootScriptItemBaseInfo::~ShootScriptItemBaseInfo() = default;

void ShootScriptItemBaseInfo::validate()
{
}

web::json::value ShootScriptItemBaseInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sequenceNoIsSet_) {
        val[utility::conversions::to_string_t("sequence_no")] = ModelBase::toJson(sequenceNo_);
    }

    return val;
}
bool ShootScriptItemBaseInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sequence_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequenceNo(refVal);
        }
    }
    return ok;
}


int32_t ShootScriptItemBaseInfo::getSequenceNo() const
{
    return sequenceNo_;
}

void ShootScriptItemBaseInfo::setSequenceNo(int32_t value)
{
    sequenceNo_ = value;
    sequenceNoIsSet_ = true;
}

bool ShootScriptItemBaseInfo::sequenceNoIsSet() const
{
    return sequenceNoIsSet_;
}

void ShootScriptItemBaseInfo::unsetsequenceNo()
{
    sequenceNoIsSet_ = false;
}

}
}
}
}
}


