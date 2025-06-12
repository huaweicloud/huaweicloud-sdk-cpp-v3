

#include "huaweicloud/ecs/v2/model/UpdateRecycleBinReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




UpdateRecycleBinReq::UpdateRecycleBinReq()
{
    recycleBinIsSet_ = false;
}

UpdateRecycleBinReq::~UpdateRecycleBinReq() = default;

void UpdateRecycleBinReq::validate()
{
}

web::json::value UpdateRecycleBinReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recycleBinIsSet_) {
        val[utility::conversions::to_string_t("recycle_bin")] = ModelBase::toJson(recycleBin_);
    }

    return val;
}
bool UpdateRecycleBinReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("recycle_bin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recycle_bin"));
        if(!fieldValue.is_null())
        {
            UpdateRecycleBinOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecycleBin(refVal);
        }
    }
    return ok;
}


UpdateRecycleBinOption UpdateRecycleBinReq::getRecycleBin() const
{
    return recycleBin_;
}

void UpdateRecycleBinReq::setRecycleBin(const UpdateRecycleBinOption& value)
{
    recycleBin_ = value;
    recycleBinIsSet_ = true;
}

bool UpdateRecycleBinReq::recycleBinIsSet() const
{
    return recycleBinIsSet_;
}

void UpdateRecycleBinReq::unsetrecycleBin()
{
    recycleBinIsSet_ = false;
}

}
}
}
}
}


