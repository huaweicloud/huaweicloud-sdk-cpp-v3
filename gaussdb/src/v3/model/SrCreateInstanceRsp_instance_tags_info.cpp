

#include "huaweicloud/gaussdb/v3/model/SrCreateInstanceRsp_instance_tags_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SrCreateInstanceRsp_instance_tags_info::SrCreateInstanceRsp_instance_tags_info()
{
    tagsIsSet_ = false;
    sysTagsIsSet_ = false;
}

SrCreateInstanceRsp_instance_tags_info::~SrCreateInstanceRsp_instance_tags_info() = default;

void SrCreateInstanceRsp_instance_tags_info::validate()
{
}

web::json::value SrCreateInstanceRsp_instance_tags_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(sysTagsIsSet_) {
        val[utility::conversions::to_string_t("sys_tags")] = ModelBase::toJson(sysTags_);
    }

    return val;
}
bool SrCreateInstanceRsp_instance_tags_info::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateChInstanceInfo_tags_info_tags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<SrCreateInstanceRsp_instance_tags_info_sys_tags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysTags(refVal);
        }
    }
    return ok;
}


std::vector<CreateChInstanceInfo_tags_info_tags>& SrCreateInstanceRsp_instance_tags_info::getTags()
{
    return tags_;
}

void SrCreateInstanceRsp_instance_tags_info::setTags(const std::vector<CreateChInstanceInfo_tags_info_tags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool SrCreateInstanceRsp_instance_tags_info::tagsIsSet() const
{
    return tagsIsSet_;
}

void SrCreateInstanceRsp_instance_tags_info::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<SrCreateInstanceRsp_instance_tags_info_sys_tags>& SrCreateInstanceRsp_instance_tags_info::getSysTags()
{
    return sysTags_;
}

void SrCreateInstanceRsp_instance_tags_info::setSysTags(const std::vector<SrCreateInstanceRsp_instance_tags_info_sys_tags>& value)
{
    sysTags_ = value;
    sysTagsIsSet_ = true;
}

bool SrCreateInstanceRsp_instance_tags_info::sysTagsIsSet() const
{
    return sysTagsIsSet_;
}

void SrCreateInstanceRsp_instance_tags_info::unsetsysTags()
{
    sysTagsIsSet_ = false;
}

}
}
}
}
}


