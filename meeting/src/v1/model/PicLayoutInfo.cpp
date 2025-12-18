

#include "huaweicloud/meeting/v1/model/PicLayoutInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




PicLayoutInfo::PicLayoutInfo()
{
    x_ = 0;
    xIsSet_ = false;
    y_ = 0;
    yIsSet_ = false;
    subPicLayoutInfoListIsSet_ = false;
}

PicLayoutInfo::~PicLayoutInfo() = default;

void PicLayoutInfo::validate()
{
}

web::json::value PicLayoutInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xIsSet_) {
        val[utility::conversions::to_string_t("x")] = ModelBase::toJson(x_);
    }
    if(yIsSet_) {
        val[utility::conversions::to_string_t("y")] = ModelBase::toJson(y_);
    }
    if(subPicLayoutInfoListIsSet_) {
        val[utility::conversions::to_string_t("subPicLayoutInfoList")] = ModelBase::toJson(subPicLayoutInfoList_);
    }

    return val;
}
bool PicLayoutInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("x"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("x"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setX(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("y"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("y"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setY(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subPicLayoutInfoList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subPicLayoutInfoList"));
        if(!fieldValue.is_null())
        {
            std::vector<SubPicLayoutInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubPicLayoutInfoList(refVal);
        }
    }
    return ok;
}


int32_t PicLayoutInfo::getX() const
{
    return x_;
}

void PicLayoutInfo::setX(int32_t value)
{
    x_ = value;
    xIsSet_ = true;
}

bool PicLayoutInfo::XIsSet() const
{
    return xIsSet_;
}

void PicLayoutInfo::unsetx()
{
    xIsSet_ = false;
}

int32_t PicLayoutInfo::getY() const
{
    return y_;
}

void PicLayoutInfo::setY(int32_t value)
{
    y_ = value;
    yIsSet_ = true;
}

bool PicLayoutInfo::YIsSet() const
{
    return yIsSet_;
}

void PicLayoutInfo::unsety()
{
    yIsSet_ = false;
}

std::vector<SubPicLayoutInfo>& PicLayoutInfo::getSubPicLayoutInfoList()
{
    return subPicLayoutInfoList_;
}

void PicLayoutInfo::setSubPicLayoutInfoList(const std::vector<SubPicLayoutInfo>& value)
{
    subPicLayoutInfoList_ = value;
    subPicLayoutInfoListIsSet_ = true;
}

bool PicLayoutInfo::subPicLayoutInfoListIsSet() const
{
    return subPicLayoutInfoListIsSet_;
}

void PicLayoutInfo::unsetsubPicLayoutInfoList()
{
    subPicLayoutInfoListIsSet_ = false;
}

}
}
}
}
}


