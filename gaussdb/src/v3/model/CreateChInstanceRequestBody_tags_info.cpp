

#include "huaweicloud/gaussdb/v3/model/CreateChInstanceRequestBody_tags_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateChInstanceRequestBody_tags_info::CreateChInstanceRequestBody_tags_info()
{
    sysTagsIsSet_ = false;
}

CreateChInstanceRequestBody_tags_info::~CreateChInstanceRequestBody_tags_info() = default;

void CreateChInstanceRequestBody_tags_info::validate()
{
}

web::json::value CreateChInstanceRequestBody_tags_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sysTagsIsSet_) {
        val[utility::conversions::to_string_t("sys_tags")] = ModelBase::toJson(sysTags_);
    }

    return val;
}
bool CreateChInstanceRequestBody_tags_info::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sys_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateChInstanceRequestBody_tags_info_sys_tags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysTags(refVal);
        }
    }
    return ok;
}


std::vector<CreateChInstanceRequestBody_tags_info_sys_tags>& CreateChInstanceRequestBody_tags_info::getSysTags()
{
    return sysTags_;
}

void CreateChInstanceRequestBody_tags_info::setSysTags(const std::vector<CreateChInstanceRequestBody_tags_info_sys_tags>& value)
{
    sysTags_ = value;
    sysTagsIsSet_ = true;
}

bool CreateChInstanceRequestBody_tags_info::sysTagsIsSet() const
{
    return sysTagsIsSet_;
}

void CreateChInstanceRequestBody_tags_info::unsetsysTags()
{
    sysTagsIsSet_ = false;
}

}
}
}
}
}


