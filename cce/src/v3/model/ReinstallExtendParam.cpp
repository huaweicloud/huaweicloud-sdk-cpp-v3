

#include "huaweicloud/cce/v3/model/ReinstallExtendParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ReinstallExtendParam::ReinstallExtendParam()
{
    alphaCceNodeImageID_ = "";
    alphaCceNodeImageIDIsSet_ = false;
}

ReinstallExtendParam::~ReinstallExtendParam() = default;

void ReinstallExtendParam::validate()
{
}

web::json::value ReinstallExtendParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(alphaCceNodeImageIDIsSet_) {
        val[utility::conversions::to_string_t("alpha.cce/NodeImageID")] = ModelBase::toJson(alphaCceNodeImageID_);
    }

    return val;
}
bool ReinstallExtendParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alpha.cce/NodeImageID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alpha.cce/NodeImageID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlphaCceNodeImageID(refVal);
        }
    }
    return ok;
}


std::string ReinstallExtendParam::getAlphaCceNodeImageID() const
{
    return alphaCceNodeImageID_;
}

void ReinstallExtendParam::setAlphaCceNodeImageID(const std::string& value)
{
    alphaCceNodeImageID_ = value;
    alphaCceNodeImageIDIsSet_ = true;
}

bool ReinstallExtendParam::alphaCceNodeImageIDIsSet() const
{
    return alphaCceNodeImageIDIsSet_;
}

void ReinstallExtendParam::unsetalphaCceNodeImageID()
{
    alphaCceNodeImageIDIsSet_ = false;
}

}
}
}
}
}


