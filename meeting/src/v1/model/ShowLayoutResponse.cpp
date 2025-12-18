

#include "huaweicloud/meeting/v1/model/ShowLayoutResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowLayoutResponse::ShowLayoutResponse()
{
    returnCode_ = 0;
    returnCodeIsSet_ = false;
    returnDesc_ = "";
    returnDescIsSet_ = false;
    picLayoutsIsSet_ = false;
}

ShowLayoutResponse::~ShowLayoutResponse() = default;

void ShowLayoutResponse::validate()
{
}

web::json::value ShowLayoutResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(returnCodeIsSet_) {
        val[utility::conversions::to_string_t("returnCode")] = ModelBase::toJson(returnCode_);
    }
    if(returnDescIsSet_) {
        val[utility::conversions::to_string_t("returnDesc")] = ModelBase::toJson(returnDesc_);
    }
    if(picLayoutsIsSet_) {
        val[utility::conversions::to_string_t("picLayouts")] = ModelBase::toJson(picLayouts_);
    }

    return val;
}
bool ShowLayoutResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("returnCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("returnCode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("returnDesc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("returnDesc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnDesc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("picLayouts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("picLayouts"));
        if(!fieldValue.is_null())
        {
            std::vector<RestPicLayout> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPicLayouts(refVal);
        }
    }
    return ok;
}


int32_t ShowLayoutResponse::getReturnCode() const
{
    return returnCode_;
}

void ShowLayoutResponse::setReturnCode(int32_t value)
{
    returnCode_ = value;
    returnCodeIsSet_ = true;
}

bool ShowLayoutResponse::returnCodeIsSet() const
{
    return returnCodeIsSet_;
}

void ShowLayoutResponse::unsetreturnCode()
{
    returnCodeIsSet_ = false;
}

std::string ShowLayoutResponse::getReturnDesc() const
{
    return returnDesc_;
}

void ShowLayoutResponse::setReturnDesc(const std::string& value)
{
    returnDesc_ = value;
    returnDescIsSet_ = true;
}

bool ShowLayoutResponse::returnDescIsSet() const
{
    return returnDescIsSet_;
}

void ShowLayoutResponse::unsetreturnDesc()
{
    returnDescIsSet_ = false;
}

std::vector<RestPicLayout>& ShowLayoutResponse::getPicLayouts()
{
    return picLayouts_;
}

void ShowLayoutResponse::setPicLayouts(const std::vector<RestPicLayout>& value)
{
    picLayouts_ = value;
    picLayoutsIsSet_ = true;
}

bool ShowLayoutResponse::picLayoutsIsSet() const
{
    return picLayoutsIsSet_;
}

void ShowLayoutResponse::unsetpicLayouts()
{
    picLayoutsIsSet_ = false;
}

}
}
}
}
}


