

#include "huaweicloud/cce/v3/model/InPlaceMigrateNodeExtendParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




InPlaceMigrateNodeExtendParam::InPlaceMigrateNodeExtendParam()
{
    alphaCcePreInstall_ = "";
    alphaCcePreInstallIsSet_ = false;
    alphaCcePostInstall_ = "";
    alphaCcePostInstallIsSet_ = false;
    waitPostInstallFinish_ = false;
    waitPostInstallFinishIsSet_ = false;
}

InPlaceMigrateNodeExtendParam::~InPlaceMigrateNodeExtendParam() = default;

void InPlaceMigrateNodeExtendParam::validate()
{
}

web::json::value InPlaceMigrateNodeExtendParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(alphaCcePreInstallIsSet_) {
        val[utility::conversions::to_string_t("alpha.cce/preInstall")] = ModelBase::toJson(alphaCcePreInstall_);
    }
    if(alphaCcePostInstallIsSet_) {
        val[utility::conversions::to_string_t("alpha.cce/postInstall")] = ModelBase::toJson(alphaCcePostInstall_);
    }
    if(waitPostInstallFinishIsSet_) {
        val[utility::conversions::to_string_t("waitPostInstallFinish")] = ModelBase::toJson(waitPostInstallFinish_);
    }

    return val;
}
bool InPlaceMigrateNodeExtendParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alpha.cce/preInstall"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alpha.cce/preInstall"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlphaCcePreInstall(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alpha.cce/postInstall"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alpha.cce/postInstall"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlphaCcePostInstall(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("waitPostInstallFinish"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("waitPostInstallFinish"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWaitPostInstallFinish(refVal);
        }
    }
    return ok;
}


std::string InPlaceMigrateNodeExtendParam::getAlphaCcePreInstall() const
{
    return alphaCcePreInstall_;
}

void InPlaceMigrateNodeExtendParam::setAlphaCcePreInstall(const std::string& value)
{
    alphaCcePreInstall_ = value;
    alphaCcePreInstallIsSet_ = true;
}

bool InPlaceMigrateNodeExtendParam::alphaCcePreInstallIsSet() const
{
    return alphaCcePreInstallIsSet_;
}

void InPlaceMigrateNodeExtendParam::unsetalphaCcePreInstall()
{
    alphaCcePreInstallIsSet_ = false;
}

std::string InPlaceMigrateNodeExtendParam::getAlphaCcePostInstall() const
{
    return alphaCcePostInstall_;
}

void InPlaceMigrateNodeExtendParam::setAlphaCcePostInstall(const std::string& value)
{
    alphaCcePostInstall_ = value;
    alphaCcePostInstallIsSet_ = true;
}

bool InPlaceMigrateNodeExtendParam::alphaCcePostInstallIsSet() const
{
    return alphaCcePostInstallIsSet_;
}

void InPlaceMigrateNodeExtendParam::unsetalphaCcePostInstall()
{
    alphaCcePostInstallIsSet_ = false;
}

bool InPlaceMigrateNodeExtendParam::isWaitPostInstallFinish() const
{
    return waitPostInstallFinish_;
}

void InPlaceMigrateNodeExtendParam::setWaitPostInstallFinish(bool value)
{
    waitPostInstallFinish_ = value;
    waitPostInstallFinishIsSet_ = true;
}

bool InPlaceMigrateNodeExtendParam::waitPostInstallFinishIsSet() const
{
    return waitPostInstallFinishIsSet_;
}

void InPlaceMigrateNodeExtendParam::unsetwaitPostInstallFinish()
{
    waitPostInstallFinishIsSet_ = false;
}

}
}
}
}
}


