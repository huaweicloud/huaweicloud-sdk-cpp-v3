
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ListShareCacheGroupsRecord_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ListShareCacheGroupsRecord_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 共享缓存域名记录
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ListShareCacheGroupsRecord
    : public ModelBase
{
public:
    ListShareCacheGroupsRecord();
    virtual ~ListShareCacheGroupsRecord();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListShareCacheGroupsRecord members

    /// <summary>
    /// 共享缓存组关联域名
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);


protected:
    std::string domainName_;
    bool domainNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ListShareCacheGroupsRecord_H_
