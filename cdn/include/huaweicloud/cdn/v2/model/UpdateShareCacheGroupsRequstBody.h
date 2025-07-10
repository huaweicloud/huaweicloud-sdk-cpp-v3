
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_UpdateShareCacheGroupsRequstBody_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_UpdateShareCacheGroupsRequstBody_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/ShareCacheGroupsRecord.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 共享缓存组配置 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  UpdateShareCacheGroupsRequstBody
    : public ModelBase
{
public:
    UpdateShareCacheGroupsRequstBody();
    virtual ~UpdateShareCacheGroupsRequstBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateShareCacheGroupsRequstBody members

    /// <summary>
    /// **参数解释：** 关联域名 **约束限制：** - 必须传入主域名 - 最多可包含50个关联域名
    /// </summary>

    std::vector<ShareCacheGroupsRecord>& getShareCacheRecords();
    bool shareCacheRecordsIsSet() const;
    void unsetshareCacheRecords();
    void setShareCacheRecords(const std::vector<ShareCacheGroupsRecord>& value);


protected:
    std::vector<ShareCacheGroupsRecord> shareCacheRecords_;
    bool shareCacheRecordsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_UpdateShareCacheGroupsRequstBody_H_
