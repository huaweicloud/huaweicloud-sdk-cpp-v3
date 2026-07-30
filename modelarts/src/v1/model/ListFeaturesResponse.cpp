

#include "huaweicloud/modelarts/v1/model/ListFeaturesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListFeaturesResponse::ListFeaturesResponse()
{
    createAt_ = 0L;
    createAtIsSet_ = false;
    enabled_ = false;
    enabledIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    quota_ = 0;
    quotaIsSet_ = false;
    used_ = 0;
    usedIsSet_ = false;
    updateAt_ = 0L;
    updateAtIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
}

ListFeaturesResponse::~ListFeaturesResponse() = default;

void ListFeaturesResponse::validate()
{
}

web::json::value ListFeaturesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(quotaIsSet_) {
        val[utility::conversions::to_string_t("quota")] = ModelBase::toJson(quota_);
    }
    if(usedIsSet_) {
        val[utility::conversions::to_string_t("used")] = ModelBase::toJson(used_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }

    return val;
}
bool ListFeaturesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    return ok;
}


int64_t ListFeaturesResponse::getCreateAt() const
{
    return createAt_;
}

void ListFeaturesResponse::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool ListFeaturesResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void ListFeaturesResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

bool ListFeaturesResponse::isEnabled() const
{
    return enabled_;
}

void ListFeaturesResponse::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool ListFeaturesResponse::enabledIsSet() const
{
    return enabledIsSet_;
}

void ListFeaturesResponse::unsetenabled()
{
    enabledIsSet_ = false;
}

std::string ListFeaturesResponse::getId() const
{
    return id_;
}

void ListFeaturesResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListFeaturesResponse::idIsSet() const
{
    return idIsSet_;
}

void ListFeaturesResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ListFeaturesResponse::getName() const
{
    return name_;
}

void ListFeaturesResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListFeaturesResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ListFeaturesResponse::unsetname()
{
    nameIsSet_ = false;
}

int32_t ListFeaturesResponse::getQuota() const
{
    return quota_;
}

void ListFeaturesResponse::setQuota(int32_t value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool ListFeaturesResponse::quotaIsSet() const
{
    return quotaIsSet_;
}

void ListFeaturesResponse::unsetquota()
{
    quotaIsSet_ = false;
}

int32_t ListFeaturesResponse::getUsed() const
{
    return used_;
}

void ListFeaturesResponse::setUsed(int32_t value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool ListFeaturesResponse::usedIsSet() const
{
    return usedIsSet_;
}

void ListFeaturesResponse::unsetused()
{
    usedIsSet_ = false;
}

int64_t ListFeaturesResponse::getUpdateAt() const
{
    return updateAt_;
}

void ListFeaturesResponse::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool ListFeaturesResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void ListFeaturesResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::string ListFeaturesResponse::getUserId() const
{
    return userId_;
}

void ListFeaturesResponse::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ListFeaturesResponse::userIdIsSet() const
{
    return userIdIsSet_;
}

void ListFeaturesResponse::unsetuserId()
{
    userIdIsSet_ = false;
}

}
}
}
}
}


