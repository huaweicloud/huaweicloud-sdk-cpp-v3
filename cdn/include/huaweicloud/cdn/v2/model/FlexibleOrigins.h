
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_FlexibleOrigins_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_FlexibleOrigins_H_

#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 灵活回源信息,最多20条。
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
    /// URI的匹配方式，支持文件后缀（file_extension）和路径前缀（file_path）。
    /// </summary>

    std::string getMatchType() const;
    bool matchTypeIsSet() const;
    void unsetmatchType();
    void setMatchType(const std::string& value);

    /// <summary>
    /// file_extension（文件后缀）： 支持所有格式的文件类型。 输入首字符为“.”，以“;”进行分隔。 输入的文件后缀名总数不能超过20个。 file_path（目录路径）：输入要求以“/”作为首字符，以“;”进行分隔，输入的目录路径总数不能超过20个。
    /// </summary>

    std::string getMatchPattern() const;
    bool matchPatternIsSet() const;
    void unsetmatchPattern();
    void setMatchPattern(const std::string& value);

    /// <summary>
    /// 优先级取值范围为1~100，数值越大优先级越高。
    /// </summary>

    int32_t getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(int32_t value);

    /// <summary>
    /// 回源信息。  &gt; 每个目录的回源源站数量不超过1个。
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
