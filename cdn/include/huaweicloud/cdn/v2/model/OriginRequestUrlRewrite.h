
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_OriginRequestUrlRewrite_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_OriginRequestUrlRewrite_H_


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
/// 改写回源URL，最多配置20条。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  OriginRequestUrlRewrite
    : public ModelBase
{
public:
    OriginRequestUrlRewrite();
    virtual ~OriginRequestUrlRewrite();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OriginRequestUrlRewrite members

    /// <summary>
    /// 回源URL改写规则的优先级。 优先级设置具有唯一性，不支持多条回源URL改写规则设置同一优先级，且优先级不能输入为空。 多条规则下，不同规则中的相同资源内容，CDN按照优先级高的规则执行URL改写。 取值为1-100之间的整数，数值越大优先级越高。
    /// </summary>

    int32_t getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(int32_t value);

    /// <summary>
    /// 匹配类型， all：所有文件， file_path：URL路径， wildcard：通配符， full_path: 全路径。
    /// </summary>

    std::string getMatchType() const;
    bool matchTypeIsSet() const;
    void unsetmatchType();
    void setMatchType(const std::string& value);

    /// <summary>
    /// 需要替换的URI。 改写后的URI以正斜线（/）开头的URI，不含http(s)://头及域名。 长度不超过512个字符。 支持通配符\\*匹配，如：/test/\\*_/\\*.mp4。 匹配方式为“所有文件”时，不支持配置参数。
    /// </summary>

    std::string getSourceUrl() const;
    bool sourceUrlIsSet() const;
    void unsetsourceUrl();
    void setSourceUrl(const std::string& value);

    /// <summary>
    /// 以正斜线（/）开头的URI，不含http(s)://头及域名。 长度不超过256个字符。 通配符 * 可通过$n捕获（n&#x3D;1,2,3...，例如：/newtest/$1/$2.jpg）。
    /// </summary>

    std::string getTargetUrl() const;
    bool targetUrlIsSet() const;
    void unsettargetUrl();
    void setTargetUrl(const std::string& value);


protected:
    int32_t priority_;
    bool priorityIsSet_;
    std::string matchType_;
    bool matchTypeIsSet_;
    std::string sourceUrl_;
    bool sourceUrlIsSet_;
    std::string targetUrl_;
    bool targetUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_OriginRequestUrlRewrite_H_
