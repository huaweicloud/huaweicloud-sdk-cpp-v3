

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowShardDiskMessagesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowShardDiskMessagesResponse::ShowShardDiskMessagesResponse()
{
    groupDiskInfosIsSet_ = false;
}

ShowShardDiskMessagesResponse::~ShowShardDiskMessagesResponse() = default;

void ShowShardDiskMessagesResponse::validate()
{
}

web::json::value ShowShardDiskMessagesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupDiskInfosIsSet_) {
        val[utility::conversions::to_string_t("group_disk_infos")] = ModelBase::toJson(groupDiskInfos_);
    }

    return val;
}
bool ShowShardDiskMessagesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_disk_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_disk_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<GroupDiskInfoResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupDiskInfos(refVal);
        }
    }
    return ok;
}


std::vector<GroupDiskInfoResult>& ShowShardDiskMessagesResponse::getGroupDiskInfos()
{
    return groupDiskInfos_;
}

void ShowShardDiskMessagesResponse::setGroupDiskInfos(const std::vector<GroupDiskInfoResult>& value)
{
    groupDiskInfos_ = value;
    groupDiskInfosIsSet_ = true;
}

bool ShowShardDiskMessagesResponse::groupDiskInfosIsSet() const
{
    return groupDiskInfosIsSet_;
}

void ShowShardDiskMessagesResponse::unsetgroupDiskInfos()
{
    groupDiskInfosIsSet_ = false;
}

}
}
}
}
}


