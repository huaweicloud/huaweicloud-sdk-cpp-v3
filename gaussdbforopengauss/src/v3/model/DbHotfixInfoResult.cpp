

#include "huaweicloud/gaussdbforopengauss/v3/model/DbHotfixInfoResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DbHotfixInfoResult::DbHotfixInfoResult()
{
    version_ = "";
    versionIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    deployModesIsSet_ = false;
}

DbHotfixInfoResult::~DbHotfixInfoResult() = default;

void DbHotfixInfoResult::validate()
{
}

web::json::value DbHotfixInfoResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(deployModesIsSet_) {
        val[utility::conversions::to_string_t("deploy_modes")] = ModelBase::toJson(deployModes_);
    }

    return val;
}
bool DbHotfixInfoResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("deploy_modes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deploy_modes"));
        if(!fieldValue.is_null())
        {
            std::vector<HotfixDeployMode> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeployModes(refVal);
        }
    }
    return ok;
}


std::string DbHotfixInfoResult::getVersion() const
{
    return version_;
}

void DbHotfixInfoResult::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool DbHotfixInfoResult::versionIsSet() const
{
    return versionIsSet_;
}

void DbHotfixInfoResult::unsetversion()
{
    versionIsSet_ = false;
}

int64_t DbHotfixInfoResult::getCreateTime() const
{
    return createTime_;
}

void DbHotfixInfoResult::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool DbHotfixInfoResult::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void DbHotfixInfoResult::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::vector<HotfixDeployMode>& DbHotfixInfoResult::getDeployModes()
{
    return deployModes_;
}

void DbHotfixInfoResult::setDeployModes(const std::vector<HotfixDeployMode>& value)
{
    deployModes_ = value;
    deployModesIsSet_ = true;
}

bool DbHotfixInfoResult::deployModesIsSet() const
{
    return deployModesIsSet_;
}

void DbHotfixInfoResult::unsetdeployModes()
{
    deployModesIsSet_ = false;
}

}
}
}
}
}


