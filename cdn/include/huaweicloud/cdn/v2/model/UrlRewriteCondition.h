
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_UrlRewriteCondition_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_UrlRewriteCondition_H_


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
/// **参数解释：** 匹配条件 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  UrlRewriteCondition
    : public ModelBase
{
public:
    UrlRewriteCondition();
    virtual ~UrlRewriteCondition();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UrlRewriteCondition members

    /// <summary>
    /// **参数解释：** 匹配类型 **约束限制：** 不涉及 **取值范围：** - catalog: 指定目录下的文件需执行访问URL重写规则 - full_path: 某个完整路径下的文件需执行访问URL重写规则 - home_page: 访问域名首页时需执行访问URL重写规则 - regex: 客户端请求URL中的字符匹配正则表达式时需要执行访问URL重写规则  **默认取值：** 不涉及
    /// </summary>

    std::string getMatchType() const;
    bool matchTypeIsSet() const;
    void unsetmatchType();
    void setMatchType(const std::string& value);

    /// <summary>
    /// **参数解释：** 匹配内容 **约束限制：** - 当match_type为catalog时，为目录路径，输入要求以“/”作为首字符，以“,”进行分隔，如/test/folder01,/test/folder02，并且输入的目录路径总数不超过20个 - 当match_type为full_path时，为全路径，输入要求以“/”作为首字符，支持匹配指定目录下的具体文件，或者带通配符“\\*”的文件，单条全路径缓存规则里仅支持配置一个全路径，如/test/index.html或/test/\\*.jpg  **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getMatchValue() const;
    bool matchValueIsSet() const;
    void unsetmatchValue();
    void setMatchValue(const std::string& value);

    /// <summary>
    /// **参数解释：** 访问URL重写规则的优先级 &gt; 数值越大优先级越高  **约束限制：** 不支持多条规则设置同一优先级 **取值范围：** 1-1000 **默认取值：** 不涉及
    /// </summary>

    int32_t getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(int32_t value);


protected:
    std::string matchType_;
    bool matchTypeIsSet_;
    std::string matchValue_;
    bool matchValueIsSet_;
    int32_t priority_;
    bool priorityIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_UrlRewriteCondition_H_
