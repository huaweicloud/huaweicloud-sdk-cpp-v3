
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ListShareCacheGroupsConfig_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ListShareCacheGroupsConfig_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/ListShareCacheGroupsRecord.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 共享缓存配置
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ListShareCacheGroupsConfig
    : public ModelBase
{
public:
    ListShareCacheGroupsConfig();
    virtual ~ListShareCacheGroupsConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListShareCacheGroupsConfig members

    /// <summary>
    /// 共享缓存ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 共享缓存组名
    /// </summary>

    std::string getGroupName() const;
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::string& value);

    /// <summary>
    /// 共享缓存创建时间
    /// </summary>

    int32_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int32_t value);

    /// <summary>
    /// 共享缓存域名记录
    /// </summary>

    std::vector<ListShareCacheGroupsRecord>& getShareCacheRecords();
    bool shareCacheRecordsIsSet() const;
    void unsetshareCacheRecords();
    void setShareCacheRecords(const std::vector<ListShareCacheGroupsRecord>& value);

    /// <summary>
    /// 共享缓存组主域名
    /// </summary>

    std::string getPrimaryDomain() const;
    bool primaryDomainIsSet() const;
    void unsetprimaryDomain();
    void setPrimaryDomain(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string groupName_;
    bool groupNameIsSet_;
    int32_t createTime_;
    bool createTimeIsSet_;
    std::vector<ListShareCacheGroupsRecord> shareCacheRecords_;
    bool shareCacheRecordsIsSet_;
    std::string primaryDomain_;
    bool primaryDomainIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ListShareCacheGroupsConfig_H_
