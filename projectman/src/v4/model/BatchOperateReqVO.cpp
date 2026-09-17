

#include "huaweicloud/projectman/v4/model/BatchOperateReqVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchOperateReqVO::BatchOperateReqVO()
{
    idsIsSet_ = false;
}

BatchOperateReqVO::~BatchOperateReqVO() = default;

void BatchOperateReqVO::validate()
{
}

web::json::value BatchOperateReqVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idsIsSet_) {
        val[utility::conversions::to_string_t("ids")] = ModelBase::toJson(ids_);
    }

    return val;
}
bool BatchOperateReqVO::fromJson(const web::json::value& val)
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
    return ok;
}


std::vector<std::string>& BatchOperateReqVO::getIds()
{
    return ids_;
}

void BatchOperateReqVO::setIds(const std::vector<std::string>& value)
{
    ids_ = value;
    idsIsSet_ = true;
}

bool BatchOperateReqVO::idsIsSet() const
{
    return idsIsSet_;
}

void BatchOperateReqVO::unsetids()
{
    idsIsSet_ = false;
}

}
}
}
}
}


