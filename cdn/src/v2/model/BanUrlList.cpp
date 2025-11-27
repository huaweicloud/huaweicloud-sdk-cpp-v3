

#include "huaweicloud/cdn/v2/model/BanUrlList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




BanUrlList::BanUrlList()
{
    type_ = "";
    typeIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    modifyTime_ = 0L;
    modifyTimeIsSet_ = false;
}

BanUrlList::~BanUrlList() = default;

void BanUrlList::validate()
{
}

web::json::value BanUrlList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(modifyTimeIsSet_) {
        val[utility::conversions::to_string_t("modify_time")] = ModelBase::toJson(modifyTime_);
    }

    return val;
}
bool BanUrlList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modify_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modify_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifyTime(refVal);
        }
    }
    return ok;
}


std::string BanUrlList::getType() const
{
    return type_;
}

void BanUrlList::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool BanUrlList::typeIsSet() const
{
    return typeIsSet_;
}

void BanUrlList::unsettype()
{
    typeIsSet_ = false;
}

std::string BanUrlList::getUrl() const
{
    return url_;
}

void BanUrlList::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool BanUrlList::urlIsSet() const
{
    return urlIsSet_;
}

void BanUrlList::unseturl()
{
    urlIsSet_ = false;
}

int64_t BanUrlList::getCreateTime() const
{
    return createTime_;
}

void BanUrlList::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool BanUrlList::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void BanUrlList::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t BanUrlList::getModifyTime() const
{
    return modifyTime_;
}

void BanUrlList::setModifyTime(int64_t value)
{
    modifyTime_ = value;
    modifyTimeIsSet_ = true;
}

bool BanUrlList::modifyTimeIsSet() const
{
    return modifyTimeIsSet_;
}

void BanUrlList::unsetmodifyTime()
{
    modifyTimeIsSet_ = false;
}

}
}
}
}
}


