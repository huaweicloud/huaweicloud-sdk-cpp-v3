
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsContent_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsContent_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 自定义IPS规则内容 **取值范围**： 不涉及
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  IpsContent
    : public ModelBase
{
public:
    IpsContent();
    virtual ~IpsContent();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IpsContent members

    /// <summary>
    /// **参数解释**： 内容 **取值范围**： 不涉及
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);

    /// <summary>
    /// **参数解释**： 深度 **取值范围**： 不涉及
    /// </summary>

    int32_t getDepth() const;
    bool depthIsSet() const;
    void unsetdepth();
    void setDepth(int32_t value);

    /// <summary>
    /// **参数解释**： 报文内容是否为十六进制 **取值范围**： 不涉及
    /// </summary>

    bool isIsHex() const;
    bool isHexIsSet() const;
    void unsetisHex();
    void setIsHex(bool value);

    /// <summary>
    /// **参数解释**： 是否忽略大小写 **取值范围**： 不涉及
    /// </summary>

    bool isIsIgnore() const;
    bool isIgnoreIsSet() const;
    void unsetisIgnore();
    void setIsIgnore(bool value);

    /// <summary>
    /// **参数解释**： 是否在uri中截取报文 **取值范围**： 不涉及
    /// </summary>

    bool isIsUri() const;
    bool isUriIsSet() const;
    void unsetisUri();
    void setIsUri(bool value);

    /// <summary>
    /// **参数解释**： 偏移量 **取值范围**： 不涉及
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释**： 相对位置 **取值范围**： 不涉及
    /// </summary>

    int32_t getRelativePosition() const;
    bool relativePositionIsSet() const;
    void unsetrelativePosition();
    void setRelativePosition(int32_t value);


protected:
    std::string content_;
    bool contentIsSet_;
    int32_t depth_;
    bool depthIsSet_;
    bool isHex_;
    bool isHexIsSet_;
    bool isIgnore_;
    bool isIgnoreIsSet_;
    bool isUri_;
    bool isUriIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t relativePosition_;
    bool relativePositionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsContent_H_
