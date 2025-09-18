

#include "huaweicloud/codeartscheck/v2/model/ProgressDetailV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ProgressDetailV2::ProgressDetailV2()
{
    ratio_ = "";
    ratioIsSet_ = false;
    info_ = "";
    infoIsSet_ = false;
}

ProgressDetailV2::~ProgressDetailV2() = default;

void ProgressDetailV2::validate()
{
}

web::json::value ProgressDetailV2::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ratioIsSet_) {
        val[utility::conversions::to_string_t("ratio")] = ModelBase::toJson(ratio_);
    }
    if(infoIsSet_) {
        val[utility::conversions::to_string_t("info")] = ModelBase::toJson(info_);
    }

    return val;
}
bool ProgressDetailV2::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ratio"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRatio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInfo(refVal);
        }
    }
    return ok;
}


std::string ProgressDetailV2::getRatio() const
{
    return ratio_;
}

void ProgressDetailV2::setRatio(const std::string& value)
{
    ratio_ = value;
    ratioIsSet_ = true;
}

bool ProgressDetailV2::ratioIsSet() const
{
    return ratioIsSet_;
}

void ProgressDetailV2::unsetratio()
{
    ratioIsSet_ = false;
}

std::string ProgressDetailV2::getInfo() const
{
    return info_;
}

void ProgressDetailV2::setInfo(const std::string& value)
{
    info_ = value;
    infoIsSet_ = true;
}

bool ProgressDetailV2::infoIsSet() const
{
    return infoIsSet_;
}

void ProgressDetailV2::unsetinfo()
{
    infoIsSet_ = false;
}

}
}
}
}
}


