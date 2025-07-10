
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_CreateShareCacheGroupsRequstBody_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_CreateShareCacheGroupsRequstBody_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/ShareCacheGroupsRecord.h>
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
/// **参数解释：** 共享缓存组配置 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  CreateShareCacheGroupsRequstBody
    : public ModelBase
{
public:
    CreateShareCacheGroupsRequstBody();
    virtual ~CreateShareCacheGroupsRequstBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateShareCacheGroupsRequstBody members

    /// <summary>
    /// **参数解释：** 共享缓存组名称 **约束限制：** 不涉及 **取值范围：** - 1-128个字符 - 不支持特殊字符“%”、“&amp;”、“&#x3D;”、“?”、“$”\&quot;、“\&quot;”、“&lt;”、“&gt;” **默认取值：** 不涉及
    /// </summary>

    std::string getGroupName() const;
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::string& value);

    /// <summary>
    /// **参数解释：** 主域名 **约束限制：** 只能有一个主域名 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getPrimaryDomain() const;
    bool primaryDomainIsSet() const;
    void unsetprimaryDomain();
    void setPrimaryDomain(const std::string& value);

    /// <summary>
    /// **参数解释：** 关联域名 **约束限制：** - 必须传入主域名 - 最多可包含50个关联域名
    /// </summary>

    std::vector<ShareCacheGroupsRecord>& getShareCacheRecords();
    bool shareCacheRecordsIsSet() const;
    void unsetshareCacheRecords();
    void setShareCacheRecords(const std::vector<ShareCacheGroupsRecord>& value);


protected:
    std::string groupName_;
    bool groupNameIsSet_;
    std::string primaryDomain_;
    bool primaryDomainIsSet_;
    std::vector<ShareCacheGroupsRecord> shareCacheRecords_;
    bool shareCacheRecordsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_CreateShareCacheGroupsRequstBody_H_
