

#include "huaweicloud/live/v1/model/AudioSelectorHlsSelection.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




AudioSelectorHlsSelection::AudioSelectorHlsSelection()
{
    name_ = "";
    nameIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
}

AudioSelectorHlsSelection::~AudioSelectorHlsSelection() = default;

void AudioSelectorHlsSelection::validate()
{
}

web::json::value AudioSelectorHlsSelection::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}
bool AudioSelectorHlsSelection::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    return ok;
}


std::string AudioSelectorHlsSelection::getName() const
{
    return name_;
}

void AudioSelectorHlsSelection::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AudioSelectorHlsSelection::nameIsSet() const
{
    return nameIsSet_;
}

void AudioSelectorHlsSelection::unsetname()
{
    nameIsSet_ = false;
}

std::string AudioSelectorHlsSelection::getGroupId() const
{
    return groupId_;
}

void AudioSelectorHlsSelection::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool AudioSelectorHlsSelection::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void AudioSelectorHlsSelection::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


