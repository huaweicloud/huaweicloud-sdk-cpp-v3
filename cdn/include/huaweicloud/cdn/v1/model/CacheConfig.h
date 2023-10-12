
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_CacheConfig_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_CacheConfig_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v1/model/Rules.h>
#include <huaweicloud/cdn/v1/model/CompressResponse.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  CacheConfig
    : public ModelBase
{
public:
    CacheConfig();
    virtual ~CacheConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CacheConfig members

    /// <summary>
    /// 是否忽略url中的参数。
    /// </summary>

    bool isIgnoreUrlParameter() const;
    bool ignoreUrlParameterIsSet() const;
    void unsetignoreUrlParameter();
    void setIgnoreUrlParameter(bool value);

    /// <summary>
    /// 缓存规则是否遵循源站。
    /// </summary>

    bool isFollowOrigin() const;
    bool followOriginIsSet() const;
    void unsetfollowOrigin();
    void setFollowOrigin(bool value);

    /// <summary>
    /// 
    /// </summary>

    CompressResponse getCompress() const;
    bool compressIsSet() const;
    void unsetcompress();
    void setCompress(const CompressResponse& value);

    /// <summary>
    /// 缓存规则，将覆盖之前的规则配置。规则为空重置为默认规则。
    /// </summary>

    std::vector<Rules>& getRules();
    bool rulesIsSet() const;
    void unsetrules();
    void setRules(const std::vector<Rules>& value);


protected:
    bool ignoreUrlParameter_;
    bool ignoreUrlParameterIsSet_;
    bool followOrigin_;
    bool followOriginIsSet_;
    CompressResponse compress_;
    bool compressIsSet_;
    std::vector<Rules> rules_;
    bool rulesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_CacheConfig_H_
