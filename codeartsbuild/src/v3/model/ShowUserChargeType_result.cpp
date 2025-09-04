

#include "huaweicloud/codeartsbuild/v3/model/ShowUserChargeType_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowUserChargeType_result::ShowUserChargeType_result()
{
    type_ = "";
    typeIsSet_ = false;
    chargeType_ = "";
    chargeTypeIsSet_ = false;
    mainResourceListIsSet_ = false;
}

ShowUserChargeType_result::~ShowUserChargeType_result() = default;

void ShowUserChargeType_result::validate()
{
}

web::json::value ShowUserChargeType_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(chargeTypeIsSet_) {
        val[utility::conversions::to_string_t("charge_type")] = ModelBase::toJson(chargeType_);
    }
    if(mainResourceListIsSet_) {
        val[utility::conversions::to_string_t("main_resource_list")] = ModelBase::toJson(mainResourceList_);
    }

    return val;
}
bool ShowUserChargeType_result::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("charge_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("main_resource_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("main_resource_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowUserChargeType_result_main_resource_list> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMainResourceList(refVal);
        }
    }
    return ok;
}


std::string ShowUserChargeType_result::getType() const
{
    return type_;
}

void ShowUserChargeType_result::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowUserChargeType_result::typeIsSet() const
{
    return typeIsSet_;
}

void ShowUserChargeType_result::unsettype()
{
    typeIsSet_ = false;
}

std::string ShowUserChargeType_result::getChargeType() const
{
    return chargeType_;
}

void ShowUserChargeType_result::setChargeType(const std::string& value)
{
    chargeType_ = value;
    chargeTypeIsSet_ = true;
}

bool ShowUserChargeType_result::chargeTypeIsSet() const
{
    return chargeTypeIsSet_;
}

void ShowUserChargeType_result::unsetchargeType()
{
    chargeTypeIsSet_ = false;
}

std::vector<ShowUserChargeType_result_main_resource_list>& ShowUserChargeType_result::getMainResourceList()
{
    return mainResourceList_;
}

void ShowUserChargeType_result::setMainResourceList(const std::vector<ShowUserChargeType_result_main_resource_list>& value)
{
    mainResourceList_ = value;
    mainResourceListIsSet_ = true;
}

bool ShowUserChargeType_result::mainResourceListIsSet() const
{
    return mainResourceListIsSet_;
}

void ShowUserChargeType_result::unsetmainResourceList()
{
    mainResourceListIsSet_ = false;
}

}
}
}
}
}


