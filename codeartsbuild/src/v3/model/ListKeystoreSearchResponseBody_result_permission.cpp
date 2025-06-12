

#include "huaweicloud/codeartsbuild/v3/model/ListKeystoreSearchResponseBody_result_permission.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListKeystoreSearchResponseBody_result_permission::ListKeystoreSearchResponseBody_result_permission()
{
    keystoreId_ = "";
    keystoreIdIsSet_ = false;
    setting_ = false;
    settingIsSet_ = false;
    delete_ = false;
    deleteIsSet_ = false;
    modify_ = false;
    modifyIsSet_ = false;
    usage_ = false;
    usageIsSet_ = false;
}

ListKeystoreSearchResponseBody_result_permission::~ListKeystoreSearchResponseBody_result_permission() = default;

void ListKeystoreSearchResponseBody_result_permission::validate()
{
}

web::json::value ListKeystoreSearchResponseBody_result_permission::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keystoreIdIsSet_) {
        val[utility::conversions::to_string_t("keystore_id")] = ModelBase::toJson(keystoreId_);
    }
    if(settingIsSet_) {
        val[utility::conversions::to_string_t("setting")] = ModelBase::toJson(setting_);
    }
    if(deleteIsSet_) {
        val[utility::conversions::to_string_t("delete")] = ModelBase::toJson(delete_);
    }
    if(modifyIsSet_) {
        val[utility::conversions::to_string_t("modify")] = ModelBase::toJson(modify_);
    }
    if(usageIsSet_) {
        val[utility::conversions::to_string_t("usage")] = ModelBase::toJson(usage_);
    }

    return val;
}
bool ListKeystoreSearchResponseBody_result_permission::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keystore_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keystore_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeystoreId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("setting"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("setting"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSetting(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelete(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modify"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modify"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModify(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("usage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("usage"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsage(refVal);
        }
    }
    return ok;
}


std::string ListKeystoreSearchResponseBody_result_permission::getKeystoreId() const
{
    return keystoreId_;
}

void ListKeystoreSearchResponseBody_result_permission::setKeystoreId(const std::string& value)
{
    keystoreId_ = value;
    keystoreIdIsSet_ = true;
}

bool ListKeystoreSearchResponseBody_result_permission::keystoreIdIsSet() const
{
    return keystoreIdIsSet_;
}

void ListKeystoreSearchResponseBody_result_permission::unsetkeystoreId()
{
    keystoreIdIsSet_ = false;
}

bool ListKeystoreSearchResponseBody_result_permission::isSetting() const
{
    return setting_;
}

void ListKeystoreSearchResponseBody_result_permission::setSetting(bool value)
{
    setting_ = value;
    settingIsSet_ = true;
}

bool ListKeystoreSearchResponseBody_result_permission::settingIsSet() const
{
    return settingIsSet_;
}

void ListKeystoreSearchResponseBody_result_permission::unsetsetting()
{
    settingIsSet_ = false;
}

bool ListKeystoreSearchResponseBody_result_permission::isDelete() const
{
    return delete_;
}

void ListKeystoreSearchResponseBody_result_permission::setDelete(bool value)
{
    delete_ = value;
    deleteIsSet_ = true;
}

bool ListKeystoreSearchResponseBody_result_permission::deleteIsSet() const
{
    return deleteIsSet_;
}

void ListKeystoreSearchResponseBody_result_permission::unsetdelete()
{
    deleteIsSet_ = false;
}

bool ListKeystoreSearchResponseBody_result_permission::isModify() const
{
    return modify_;
}

void ListKeystoreSearchResponseBody_result_permission::setModify(bool value)
{
    modify_ = value;
    modifyIsSet_ = true;
}

bool ListKeystoreSearchResponseBody_result_permission::modifyIsSet() const
{
    return modifyIsSet_;
}

void ListKeystoreSearchResponseBody_result_permission::unsetmodify()
{
    modifyIsSet_ = false;
}

bool ListKeystoreSearchResponseBody_result_permission::isUsage() const
{
    return usage_;
}

void ListKeystoreSearchResponseBody_result_permission::setUsage(bool value)
{
    usage_ = value;
    usageIsSet_ = true;
}

bool ListKeystoreSearchResponseBody_result_permission::usageIsSet() const
{
    return usageIsSet_;
}

void ListKeystoreSearchResponseBody_result_permission::unsetusage()
{
    usageIsSet_ = false;
}

}
}
}
}
}


