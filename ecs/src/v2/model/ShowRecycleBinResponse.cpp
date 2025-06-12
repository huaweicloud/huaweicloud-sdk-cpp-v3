

#include "huaweicloud/ecs/v2/model/ShowRecycleBinResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowRecycleBinResponse::ShowRecycleBinResponse()
{
    recycleBinIsSet_ = false;
}

ShowRecycleBinResponse::~ShowRecycleBinResponse() = default;

void ShowRecycleBinResponse::validate()
{
}

web::json::value ShowRecycleBinResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recycleBinIsSet_) {
        val[utility::conversions::to_string_t("recycle_bin")] = ModelBase::toJson(recycleBin_);
    }

    return val;
}
bool ShowRecycleBinResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("recycle_bin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recycle_bin"));
        if(!fieldValue.is_null())
        {
            RecycleBin refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecycleBin(refVal);
        }
    }
    return ok;
}


RecycleBin ShowRecycleBinResponse::getRecycleBin() const
{
    return recycleBin_;
}

void ShowRecycleBinResponse::setRecycleBin(const RecycleBin& value)
{
    recycleBin_ = value;
    recycleBinIsSet_ = true;
}

bool ShowRecycleBinResponse::recycleBinIsSet() const
{
    return recycleBinIsSet_;
}

void ShowRecycleBinResponse::unsetrecycleBin()
{
    recycleBinIsSet_ = false;
}

}
}
}
}
}


