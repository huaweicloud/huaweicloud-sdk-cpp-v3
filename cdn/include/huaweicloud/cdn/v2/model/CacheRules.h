
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_CacheRules_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_CacheRules_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  CacheRules
    : public ModelBase
{
public:
    CacheRules();
    virtual ~CacheRules();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CacheRules members

    /// <summary>
    /// 匹配类型: - all：匹配所有文件， - file_extension：按文件后缀匹配， - catalog：按目录匹配， - full_path：全路径匹配， - home_page：按首页匹配。   &gt; 配置单条缓存规则时，可不传，默认为all。   &gt; 配置多条缓存规则时，此参数必传。
    /// </summary>

    std::string getMatchType() const;
    bool matchTypeIsSet() const;
    void unsetmatchType();
    void setMatchType(const std::string& value);

    /// <summary>
    /// 缓存匹配设置， 当match_type为all时，为空。当match_type为file_extension时，为文件后缀，输入首字符为“.”，以“,”进行分隔， 如.jpg,.zip,.exe，并且输入的文 件名后缀总数不超过20个。 当match_type为catalog时，为目录，输入要求以“/”作为首字符， 以“,”进行分隔，如/test/folder01,/test/folder02，并且输入的目录路径总数不超过20个。  当match_type为full_path时，为全路径，输入要求以“/”作为首字符，支持匹配指定目录下的具体文件，或者带通配符“\\*”的文件， 如/test/index.html,/test/\\*.jpg。 当match_type为home_page时，为空。
    /// </summary>

    std::string getMatchValue() const;
    bool matchValueIsSet() const;
    void unsetmatchValue();
    void setMatchValue(const std::string& value);

    /// <summary>
    /// 缓存过期时间，最大支持365天。  &gt; 默认值为0。
    /// </summary>

    int32_t getTtl() const;
    bool ttlIsSet() const;
    void unsetttl();
    void setTtl(int32_t value);

    /// <summary>
    /// 缓存过期时间单位，s：秒；m：分；h：小时；d：天。
    /// </summary>

    std::string getTtlUnit() const;
    bool ttlUnitIsSet() const;
    void unsetttlUnit();
    void setTtlUnit(const std::string& value);

    /// <summary>
    /// 此条缓存规则的优先级, 默认值1，数值越大，优先级越高，取值范围为1-100，优先级不能相同。
    /// </summary>

    int32_t getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(int32_t value);

    /// <summary>
    /// 缓存遵循源站开关，on：打开，off：关闭。  &gt; 默认值为off。
    /// </summary>

    std::string getFollowOrigin() const;
    bool followOriginIsSet() const;
    void unsetfollowOrigin();
    void setFollowOrigin(const std::string& value);

    /// <summary>
    /// URL参数： - del_params：忽略指定URL参数， - reserve_params：保留指定URL参数， - ignore_url_params：忽略全部URL参数， - full_url：使用完整URL参数。   &gt; 不传此参数时，默认为full_url。
    /// </summary>

    std::string getUrlParameterType() const;
    bool urlParameterTypeIsSet() const;
    void unseturlParameterType();
    void setUrlParameterType(const std::string& value);

    /// <summary>
    /// URL参数值，最多设置10条，以\&quot;,\&quot;分隔。  &gt; 当url_parameter_type为del_params或reserve_params时必填。
    /// </summary>

    std::string getUrlParameterValue() const;
    bool urlParameterValueIsSet() const;
    void unseturlParameterValue();
    void setUrlParameterValue(const std::string& value);


protected:
    std::string matchType_;
    bool matchTypeIsSet_;
    std::string matchValue_;
    bool matchValueIsSet_;
    int32_t ttl_;
    bool ttlIsSet_;
    std::string ttlUnit_;
    bool ttlUnitIsSet_;
    int32_t priority_;
    bool priorityIsSet_;
    std::string followOrigin_;
    bool followOriginIsSet_;
    std::string urlParameterType_;
    bool urlParameterTypeIsSet_;
    std::string urlParameterValue_;
    bool urlParameterValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_CacheRules_H_
