
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_DomainBody_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_DomainBody_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/SourcesRequestBody.h>
#include <huaweicloud/cdn/v2/model/CreateDomainConfigs.h>
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
/// **参数解释：** 创建域名请求体，包含创建域名所需参数 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  DomainBody
    : public ModelBase
{
public:
    DomainBody();
    virtual ~DomainBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DomainBody members

    /// <summary>
    /// **参数解释：** 加速域名 &gt; 添加泛域名后，该泛域名所有次级域名默认支持CDN加速  **约束限制：** 加速域名不允许重复添加 **取值范围：** - 域名长度不能超过200个字符 - 支持大小写字母、数字、\&quot;-\&quot;、\&quot;.\&quot;，首尾字符不能是\&quot;-\&quot;或\&quot;.\&quot; - 泛域名场景下支持\&quot;\\*\&quot;，且\&quot;\\*必须为首字符 - 域名单节点长度不超过63个字符，即：\\*\\*\\*.\\*\\*\\*.com中，\\*\\*\\*的字符数不超过63个字符  **默认取值：** 不涉及
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// **参数解释：** 域名业务类型 **约束限制：** 不涉及 **取值范围：** - web: 网页加速 - download: 文件下载加速 - video: 点播加速 - wholeSite: 全站加速  **默认取值：** 不涉及
    /// </summary>

    std::string getBusinessType() const;
    bool businessTypeIsSet() const;
    void unsetbusinessType();
    void setBusinessType(const std::string& value);

    /// <summary>
    /// **参数解释：** 源站配置 **约束限制：** 不涉及
    /// </summary>

    std::vector<SourcesRequestBody>& getSources();
    bool sourcesIsSet() const;
    void unsetsources();
    void setSources(const std::vector<SourcesRequestBody>& value);

    /// <summary>
    /// **参数解释：** 域名服务范围 **约束限制：** 服务范围为中国大陆或全球时，加速域名需要到工信部备案 **取值范围：** - mainland_china: 中国大陆 - outside_mainland_china: 中国大陆境外 - global: 全球  **默认取值：** mainland_china: 中国大陆
    /// </summary>

    std::string getServiceArea() const;
    bool serviceAreaIsSet() const;
    void unsetserviceArea();
    void setServiceArea(const std::string& value);

    /// <summary>
    /// **参数解释：** 企业项目id。您可以通过调用企业项目管理服务（EPS）的查询企业项目列表接口（ListEnterpriseProject）查询企业项目id **约束限制：** 当用户开启企业项目功能时，该参数生效，表示查询资源所属项目，\&quot;all\&quot;表示所有项目  **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// **参数解释：** 指定CDN回源时的请求协议 **约束限制：** 不涉及 **取值范围：** - follow: 协议跟随 - http: http协议 - https: https协议  **默认取值：** http: http协议
    /// </summary>

    std::string getOriginProtocol() const;
    bool originProtocolIsSet() const;
    void unsetoriginProtocol();
    void setOriginProtocol(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateDomainConfigs getConfigs() const;
    bool configsIsSet() const;
    void unsetconfigs();
    void setConfigs(const CreateDomainConfigs& value);


protected:
    std::string domainName_;
    bool domainNameIsSet_;
    std::string businessType_;
    bool businessTypeIsSet_;
    std::vector<SourcesRequestBody> sources_;
    bool sourcesIsSet_;
    std::string serviceArea_;
    bool serviceAreaIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string originProtocol_;
    bool originProtocolIsSet_;
    CreateDomainConfigs configs_;
    bool configsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_DomainBody_H_
