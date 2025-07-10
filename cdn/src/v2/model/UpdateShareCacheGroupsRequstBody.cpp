

#include "huaweicloud/cdn/v2/model/UpdateShareCacheGroupsRequstBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




UpdateShareCacheGroupsRequstBody::UpdateShareCacheGroupsRequstBody()
{
    shareCacheRecordsIsSet_ = false;
}

UpdateShareCacheGroupsRequstBody::~UpdateShareCacheGroupsRequstBody() = default;

void UpdateShareCacheGroupsRequstBody::validate()
{
}

web::json::value UpdateShareCacheGroupsRequstBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(shareCacheRecordsIsSet_) {
        val[utility::conversions::to_string_t("share_cache_records")] = ModelBase::toJson(shareCacheRecords_);
    }

    return val;
}
bool UpdateShareCacheGroupsRequstBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("share_cache_records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("share_cache_records"));
        if(!fieldValue.is_null())
        {
            std::vector<ShareCacheGroupsRecord> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShareCacheRecords(refVal);
        }
    }
    return ok;
}


std::vector<ShareCacheGroupsRecord>& UpdateShareCacheGroupsRequstBody::getShareCacheRecords()
{
    return shareCacheRecords_;
}

void UpdateShareCacheGroupsRequstBody::setShareCacheRecords(const std::vector<ShareCacheGroupsRecord>& value)
{
    shareCacheRecords_ = value;
    shareCacheRecordsIsSet_ = true;
}

bool UpdateShareCacheGroupsRequstBody::shareCacheRecordsIsSet() const
{
    return shareCacheRecordsIsSet_;
}

void UpdateShareCacheGroupsRequstBody::unsetshareCacheRecords()
{
    shareCacheRecordsIsSet_ = false;
}

}
}
}
}
}


