
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_FlexibleOrigins_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_FlexibleOrigins_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/BackSources.h>
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
/// **参数解释：** 高级回源，实现根据不同的资源类型或路径回源到不同源站 **约束限制：** 最多配置20条
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  FlexibleOrigins
    : public ModelBase
{
public:
    FlexibleOrigins();
    virtual ~FlexibleOrigins();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FlexibleOrigins members

    /// <summary>
    /// **参数解释：** URI的匹配方式 **约束限制：** 不涉及 **取值范围：** - file_extension: 文件后缀匹配 - file_path: 目录路径 - all: 匹配所有文件  **默认取值：** 不涉及
    /// </summary>

    std::string getMatchType() const;
    bool matchTypeIsSet() const;
    void unsetmatchType();
    void setMatchType(const std::string& value);

    /// <summary>
    /// **参数解释：** URI的匹配规则 **约束限制：** match_type为file_extension时：   - 支持所有格式的文件类型   - 输入首字符为“.”，以“;”进行分隔   - 输入的文件后缀名总数不能超过20个  match_type为file_path时：   - 要求以“/”作为首字符   - 以“;”进行分隔   - 输入的目录路径总数不能超过20个  match_type为all时：置空  &gt; 文件名后缀英文字符大、小写代表不同资源  **取值范围：** 1-512个字符 **默认取值：** 不涉及
    /// </summary>

    std::string getMatchPattern() const;
    bool matchPatternIsSet() const;
    void unsetmatchPattern();
    void setMatchPattern(const std::string& value);

    /// <summary>
    /// **参数解释：** 优先级 &gt; 数值越大优先级越高  **约束限制：** 不涉及 **取值范围：** 1-1000 **默认取值：** 不涉及
    /// </summary>

    int32_t getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(int32_t value);

    /// <summary>
    /// **参数解释：** 配置客户端请求匹配当前规则时，CDN节点回源访问的源站 **约束限制：** 每条规则的回源源站数量不超过1个 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::vector<BackSources>& getBackSources();
    bool backSourcesIsSet() const;
    void unsetbackSources();
    void setBackSources(const std::vector<BackSources>& value);


protected:
    std::string matchType_;
    bool matchTypeIsSet_;
    std::string matchPattern_;
    bool matchPatternIsSet_;
    int32_t priority_;
    bool priorityIsSet_;
    std::vector<BackSources> backSources_;
    bool backSourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_FlexibleOrigins_H_
