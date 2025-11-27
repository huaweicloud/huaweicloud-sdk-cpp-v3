

#include "huaweicloud/cdn/v2/model/SpeicialConfiguration.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




SpeicialConfiguration::SpeicialConfiguration()
{
    createTime_ = 0L;
    createTimeIsSet_ = false;
    note_ = "";
    noteIsSet_ = false;
}

SpeicialConfiguration::~SpeicialConfiguration() = default;

void SpeicialConfiguration::validate()
{
}

web::json::value SpeicialConfiguration::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(noteIsSet_) {
        val[utility::conversions::to_string_t("note")] = ModelBase::toJson(note_);
    }

    return val;
}
bool SpeicialConfiguration::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("note"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("note"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNote(refVal);
        }
    }
    return ok;
}


int64_t SpeicialConfiguration::getCreateTime() const
{
    return createTime_;
}

void SpeicialConfiguration::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool SpeicialConfiguration::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void SpeicialConfiguration::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string SpeicialConfiguration::getNote() const
{
    return note_;
}

void SpeicialConfiguration::setNote(const std::string& value)
{
    note_ = value;
    noteIsSet_ = true;
}

bool SpeicialConfiguration::noteIsSet() const
{
    return noteIsSet_;
}

void SpeicialConfiguration::unsetnote()
{
    noteIsSet_ = false;
}

}
}
}
}
}


