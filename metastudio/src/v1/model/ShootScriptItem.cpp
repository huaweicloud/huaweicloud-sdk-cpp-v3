

#include "huaweicloud/metastudio/v1/model/ShootScriptItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShootScriptItem::ShootScriptItem()
{
    sequenceNo_ = 0;
    sequenceNoIsSet_ = false;
    shootScriptIsSet_ = false;
    subtitleFileInfoIsSet_ = false;
}

ShootScriptItem::~ShootScriptItem() = default;

void ShootScriptItem::validate()
{
}

web::json::value ShootScriptItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sequenceNoIsSet_) {
        val[utility::conversions::to_string_t("sequence_no")] = ModelBase::toJson(sequenceNo_);
    }
    if(shootScriptIsSet_) {
        val[utility::conversions::to_string_t("shoot_script")] = ModelBase::toJson(shootScript_);
    }
    if(subtitleFileInfoIsSet_) {
        val[utility::conversions::to_string_t("subtitle_file_info")] = ModelBase::toJson(subtitleFileInfo_);
    }

    return val;
}
bool ShootScriptItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sequence_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequenceNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("shoot_script"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shoot_script"));
        if(!fieldValue.is_null())
        {
            ShootScript refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShootScript(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subtitle_file_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subtitle_file_info"));
        if(!fieldValue.is_null())
        {
            SubtitleFiles refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubtitleFileInfo(refVal);
        }
    }
    return ok;
}


int32_t ShootScriptItem::getSequenceNo() const
{
    return sequenceNo_;
}

void ShootScriptItem::setSequenceNo(int32_t value)
{
    sequenceNo_ = value;
    sequenceNoIsSet_ = true;
}

bool ShootScriptItem::sequenceNoIsSet() const
{
    return sequenceNoIsSet_;
}

void ShootScriptItem::unsetsequenceNo()
{
    sequenceNoIsSet_ = false;
}

ShootScript ShootScriptItem::getShootScript() const
{
    return shootScript_;
}

void ShootScriptItem::setShootScript(const ShootScript& value)
{
    shootScript_ = value;
    shootScriptIsSet_ = true;
}

bool ShootScriptItem::shootScriptIsSet() const
{
    return shootScriptIsSet_;
}

void ShootScriptItem::unsetshootScript()
{
    shootScriptIsSet_ = false;
}

SubtitleFiles ShootScriptItem::getSubtitleFileInfo() const
{
    return subtitleFileInfo_;
}

void ShootScriptItem::setSubtitleFileInfo(const SubtitleFiles& value)
{
    subtitleFileInfo_ = value;
    subtitleFileInfoIsSet_ = true;
}

bool ShootScriptItem::subtitleFileInfoIsSet() const
{
    return subtitleFileInfoIsSet_;
}

void ShootScriptItem::unsetsubtitleFileInfo()
{
    subtitleFileInfoIsSet_ = false;
}

}
}
}
}
}


