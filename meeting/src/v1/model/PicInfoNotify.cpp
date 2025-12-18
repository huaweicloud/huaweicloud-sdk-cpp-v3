

#include "huaweicloud/meeting/v1/model/PicInfoNotify.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




PicInfoNotify::PicInfoNotify()
{
    index_ = 0;
    indexIsSet_ = false;
    idIsSet_ = false;
    share_ = 0;
    shareIsSet_ = false;
}

PicInfoNotify::~PicInfoNotify() = default;

void PicInfoNotify::validate()
{
}

web::json::value PicInfoNotify::toJson() const
{
    web::json::value val = web::json::value::object();

    if(indexIsSet_) {
        val[utility::conversions::to_string_t("index")] = ModelBase::toJson(index_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(shareIsSet_) {
        val[utility::conversions::to_string_t("share")] = ModelBase::toJson(share_);
    }

    return val;
}
bool PicInfoNotify::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("index"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("share"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("share"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShare(refVal);
        }
    }
    return ok;
}


int32_t PicInfoNotify::getIndex() const
{
    return index_;
}

void PicInfoNotify::setIndex(int32_t value)
{
    index_ = value;
    indexIsSet_ = true;
}

bool PicInfoNotify::indexIsSet() const
{
    return indexIsSet_;
}

void PicInfoNotify::unsetindex()
{
    indexIsSet_ = false;
}

std::vector<std::string>& PicInfoNotify::getId()
{
    return id_;
}

void PicInfoNotify::setId(const std::vector<std::string>& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PicInfoNotify::idIsSet() const
{
    return idIsSet_;
}

void PicInfoNotify::unsetid()
{
    idIsSet_ = false;
}

int32_t PicInfoNotify::getShare() const
{
    return share_;
}

void PicInfoNotify::setShare(int32_t value)
{
    share_ = value;
    shareIsSet_ = true;
}

bool PicInfoNotify::shareIsSet() const
{
    return shareIsSet_;
}

void PicInfoNotify::unsetshare()
{
    shareIsSet_ = false;
}

}
}
}
}
}


