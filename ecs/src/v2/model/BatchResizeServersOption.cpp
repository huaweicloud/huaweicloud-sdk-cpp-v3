

#include "huaweicloud/ecs/v2/model/BatchResizeServersOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchResizeServersOption::BatchResizeServersOption()
{
    flavorRef_ = "";
    flavorRefIsSet_ = false;
    serversIsSet_ = false;
    cpuOptionsIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    promotionIsSet_ = false;
}

BatchResizeServersOption::~BatchResizeServersOption() = default;

void BatchResizeServersOption::validate()
{
}

web::json::value BatchResizeServersOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorRefIsSet_) {
        val[utility::conversions::to_string_t("flavorRef")] = ModelBase::toJson(flavorRef_);
    }
    if(serversIsSet_) {
        val[utility::conversions::to_string_t("servers")] = ModelBase::toJson(servers_);
    }
    if(cpuOptionsIsSet_) {
        val[utility::conversions::to_string_t("cpu_options")] = ModelBase::toJson(cpuOptions_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(promotionIsSet_) {
        val[utility::conversions::to_string_t("promotion")] = ModelBase::toJson(promotion_);
    }

    return val;
}
bool BatchResizeServersOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavorRef"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavorRef"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("servers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("servers"));
        if(!fieldValue.is_null())
        {
            std::vector<ServerId> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu_options"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu_options"));
        if(!fieldValue.is_null())
        {
            CpuOptions refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuOptions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("promotion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("promotion"));
        if(!fieldValue.is_null())
        {
            Promotion refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPromotion(refVal);
        }
    }
    return ok;
}


std::string BatchResizeServersOption::getFlavorRef() const
{
    return flavorRef_;
}

void BatchResizeServersOption::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool BatchResizeServersOption::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void BatchResizeServersOption::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

std::vector<ServerId>& BatchResizeServersOption::getServers()
{
    return servers_;
}

void BatchResizeServersOption::setServers(const std::vector<ServerId>& value)
{
    servers_ = value;
    serversIsSet_ = true;
}

bool BatchResizeServersOption::serversIsSet() const
{
    return serversIsSet_;
}

void BatchResizeServersOption::unsetservers()
{
    serversIsSet_ = false;
}

CpuOptions BatchResizeServersOption::getCpuOptions() const
{
    return cpuOptions_;
}

void BatchResizeServersOption::setCpuOptions(const CpuOptions& value)
{
    cpuOptions_ = value;
    cpuOptionsIsSet_ = true;
}

bool BatchResizeServersOption::cpuOptionsIsSet() const
{
    return cpuOptionsIsSet_;
}

void BatchResizeServersOption::unsetcpuOptions()
{
    cpuOptionsIsSet_ = false;
}

std::string BatchResizeServersOption::getMode() const
{
    return mode_;
}

void BatchResizeServersOption::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool BatchResizeServersOption::modeIsSet() const
{
    return modeIsSet_;
}

void BatchResizeServersOption::unsetmode()
{
    modeIsSet_ = false;
}

Promotion BatchResizeServersOption::getPromotion() const
{
    return promotion_;
}

void BatchResizeServersOption::setPromotion(const Promotion& value)
{
    promotion_ = value;
    promotionIsSet_ = true;
}

bool BatchResizeServersOption::promotionIsSet() const
{
    return promotionIsSet_;
}

void BatchResizeServersOption::unsetpromotion()
{
    promotionIsSet_ = false;
}

}
}
}
}
}


