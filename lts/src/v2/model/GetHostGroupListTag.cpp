

#include "huaweicloud/lts/v2/model/GetHostGroupListTag.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




GetHostGroupListTag::GetHostGroupListTag()
{
    tagType_ = "";
    tagTypeIsSet_ = false;
    tagListIsSet_ = false;
}

GetHostGroupListTag::~GetHostGroupListTag() = default;

void GetHostGroupListTag::validate()
{
}

web::json::value GetHostGroupListTag::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagTypeIsSet_) {
        val[utility::conversions::to_string_t("tag_type")] = ModelBase::toJson(tagType_);
    }
    if(tagListIsSet_) {
        val[utility::conversions::to_string_t("tag_list")] = ModelBase::toJson(tagList_);
    }

    return val;
}

bool GetHostGroupListTag::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tag_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_list"));
        if(!fieldValue.is_null())
        {
            std::vector<HostGroupTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagList(refVal);
        }
    }
    return ok;
}


std::string GetHostGroupListTag::getTagType() const
{
    return tagType_;
}

void GetHostGroupListTag::setTagType(const std::string& value)
{
    tagType_ = value;
    tagTypeIsSet_ = true;
}

bool GetHostGroupListTag::tagTypeIsSet() const
{
    return tagTypeIsSet_;
}

void GetHostGroupListTag::unsettagType()
{
    tagTypeIsSet_ = false;
}

std::vector<HostGroupTag>& GetHostGroupListTag::getTagList()
{
    return tagList_;
}

void GetHostGroupListTag::setTagList(const std::vector<HostGroupTag>& value)
{
    tagList_ = value;
    tagListIsSet_ = true;
}

bool GetHostGroupListTag::tagListIsSet() const
{
    return tagListIsSet_;
}

void GetHostGroupListTag::unsettagList()
{
    tagListIsSet_ = false;
}

}
}
}
}
}


