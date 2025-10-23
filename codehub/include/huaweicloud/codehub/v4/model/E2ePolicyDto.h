
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_E2ePolicyDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_E2ePolicyDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** E2E公共设置信息。
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  E2ePolicyDto
    : public ModelBase
{
public:
    E2ePolicyDto();
    virtual ~E2ePolicyDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// E2ePolicyDto members

    /// <summary>
    /// **参数解释：** 是否开启单号自动提取。 **取值范围：** true：开启单号自动提取，false：未开启单号自动提取。
    /// </summary>

    bool isAutoExtract() const;
    bool autoExtractIsSet() const;
    void unsetautoExtract();
    void setAutoExtract(bool value);

    /// <summary>
    /// **参数解释：** 自动提取时的单号前缀合集，英文逗号分隔。 **取值范围：** 单个前缀长度最多200个字符，最多允许配置10个前缀。
    /// </summary>

    std::string getPrefixSymbol() const;
    bool prefixSymbolIsSet() const;
    void unsetprefixSymbol();
    void setPrefixSymbol(const std::string& value);

    /// <summary>
    /// **参数解释：** 自动提取时的分隔符。
    /// </summary>

    std::string getSeparator() const;
    bool separatorIsSet() const;
    void unsetseparator();
    void setSeparator(const std::string& value);

    /// <summary>
    /// **参数解释：** 自动提取时的单号后缀。
    /// </summary>

    std::string getSuffixSymbol() const;
    bool suffixSymbolIsSet() const;
    void unsetsuffixSymbol();
    void setSuffixSymbol(const std::string& value);


protected:
    bool autoExtract_;
    bool autoExtractIsSet_;
    std::string prefixSymbol_;
    bool prefixSymbolIsSet_;
    std::string separator_;
    bool separatorIsSet_;
    std::string suffixSymbol_;
    bool suffixSymbolIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_E2ePolicyDto_H_
