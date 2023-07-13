
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_DomainBody_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_DomainBody_H_

#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v1/model/Sources.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建域名Body
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  DomainBody
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
    /// 加速域名。（ 由字母（A-Z，a-z，大小写等价）、数字（0-9）和连接符（-）组成，各级域名之间用（.）连接，域名长度不超过75个字符。连接符（-）不能作为域名的开头或结尾字符。）
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 域名业务类型，若为web，则表示类型为网页加速；若为download，则表示业务类型为文件下载加速；若为video，则表示业务类型为点播加速；若为wholeSite，则表示业务类型为全站加速。
    /// </summary>

    std::string getBusinessType() const;
    bool businessTypeIsSet() const;
    void unsetbusinessType();
    void setBusinessType(const std::string& value);

    /// <summary>
    /// 源站配置。
    /// </summary>

    std::vector<Sources>& getSources();
    bool sourcesIsSet() const;
    void unsetsources();
    void setSources(const std::vector<Sources>& value);

    /// <summary>
    /// 域名服务范围，若为mainland_china，则表示服务范围为中国大陆；若为outside_mainland_china，则表示服务范围为中国大陆境外；若为global，则表示服务范围为全球。
    /// </summary>

    std::string getServiceArea() const;
    bool serviceAreaIsSet() const;
    void unsetserviceArea();
    void setServiceArea(const std::string& value);

    /// <summary>
    /// 当用户开启企业项目功能时，该参数生效，表示添加加速域名到该企业项目。注意：当使用子帐号调用接口时，该参数必传。  您可以通过调用企业项目管理服务（EPS）的查询企业项目列表接口（ListEnterpriseProject）查询企业项目id。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);


protected:
    std::string domainName_;
    bool domainNameIsSet_;
    std::string businessType_;
    bool businessTypeIsSet_;
    std::vector<Sources> sources_;
    bool sourcesIsSet_;
    std::string serviceArea_;
    bool serviceAreaIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_DomainBody_H_
