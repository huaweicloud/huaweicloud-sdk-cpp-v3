
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_DuplicateDomainRequestBody_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_DuplicateDomainRequestBody_H_


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
/// **参数解释：** 复制域名请求体 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  DuplicateDomainRequestBody
    : public ModelBase
{
public:
    DuplicateDomainRequestBody();
    virtual ~DuplicateDomainRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DuplicateDomainRequestBody members

    /// <summary>
    /// **参数解释：** 存量加速域名，将该域名的配置复制给新添加的域名。  **约束限制：** 已经在CDN添加成功的域名。 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getReferenceDomainName() const;
    bool referenceDomainNameIsSet() const;
    void unsetreferenceDomainName();
    void setReferenceDomainName(const std::string& value);

    /// <summary>
    /// **参数解释：** 需要添加到CDN控制台加速的域名 &gt; 添加泛域名后，该泛域名所有次级域名均默认接入CDN加速。  **约束限制：** 加速域名不允许重复添加 **取值范围：** - 域名长度不能超过200个字符 - 支持大小写字母、数字、\&quot;-\&quot;、\&quot;.\&quot;，首尾字符不能是\&quot;-\&quot;或\&quot;.\&quot; - 泛域名场景下支持\&quot;*\&quot;，且\&quot;*必须为首字符 - 域名单节点长度不超过63个字符，即：***.***.com中，***的字符数不超过63个字符  **默认取值：** 不涉及
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);


protected:
    std::string referenceDomainName_;
    bool referenceDomainNameIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_DuplicateDomainRequestBody_H_
