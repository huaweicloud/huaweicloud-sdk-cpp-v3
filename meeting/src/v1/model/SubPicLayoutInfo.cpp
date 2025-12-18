

#include "huaweicloud/meeting/v1/model/SubPicLayoutInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SubPicLayoutInfo::SubPicLayoutInfo()
{
    id_ = 0;
    idIsSet_ = false;
    left_ = 0;
    leftIsSet_ = false;
    top_ = 0;
    topIsSet_ = false;
    xSize_ = 0;
    xSizeIsSet_ = false;
    ySize_ = 0;
    ySizeIsSet_ = false;
}

SubPicLayoutInfo::~SubPicLayoutInfo() = default;

void SubPicLayoutInfo::validate()
{
}

web::json::value SubPicLayoutInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(leftIsSet_) {
        val[utility::conversions::to_string_t("left")] = ModelBase::toJson(left_);
    }
    if(topIsSet_) {
        val[utility::conversions::to_string_t("top")] = ModelBase::toJson(top_);
    }
    if(xSizeIsSet_) {
        val[utility::conversions::to_string_t("xSize")] = ModelBase::toJson(xSize_);
    }
    if(ySizeIsSet_) {
        val[utility::conversions::to_string_t("ySize")] = ModelBase::toJson(ySize_);
    }

    return val;
}
bool SubPicLayoutInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("left"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("left"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLeft(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("top"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTop(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("xSize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("xSize"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ySize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ySize"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setYSize(refVal);
        }
    }
    return ok;
}


int32_t SubPicLayoutInfo::getId() const
{
    return id_;
}

void SubPicLayoutInfo::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SubPicLayoutInfo::idIsSet() const
{
    return idIsSet_;
}

void SubPicLayoutInfo::unsetid()
{
    idIsSet_ = false;
}

int32_t SubPicLayoutInfo::getLeft() const
{
    return left_;
}

void SubPicLayoutInfo::setLeft(int32_t value)
{
    left_ = value;
    leftIsSet_ = true;
}

bool SubPicLayoutInfo::leftIsSet() const
{
    return leftIsSet_;
}

void SubPicLayoutInfo::unsetleft()
{
    leftIsSet_ = false;
}

int32_t SubPicLayoutInfo::getTop() const
{
    return top_;
}

void SubPicLayoutInfo::setTop(int32_t value)
{
    top_ = value;
    topIsSet_ = true;
}

bool SubPicLayoutInfo::topIsSet() const
{
    return topIsSet_;
}

void SubPicLayoutInfo::unsettop()
{
    topIsSet_ = false;
}

int32_t SubPicLayoutInfo::getXSize() const
{
    return xSize_;
}

void SubPicLayoutInfo::setXSize(int32_t value)
{
    xSize_ = value;
    xSizeIsSet_ = true;
}

bool SubPicLayoutInfo::xSizeIsSet() const
{
    return xSizeIsSet_;
}

void SubPicLayoutInfo::unsetxSize()
{
    xSizeIsSet_ = false;
}

int32_t SubPicLayoutInfo::getYSize() const
{
    return ySize_;
}

void SubPicLayoutInfo::setYSize(int32_t value)
{
    ySize_ = value;
    ySizeIsSet_ = true;
}

bool SubPicLayoutInfo::ySizeIsSet() const
{
    return ySizeIsSet_;
}

void SubPicLayoutInfo::unsetySize()
{
    ySizeIsSet_ = false;
}

}
}
}
}
}


