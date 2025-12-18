
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ExportInstanceInfosRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ExportInstanceInfosRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ExportInstanceInfosRequestBody
    : public ModelBase
{
public:
    ExportInstanceInfosRequestBody();
    virtual ~ExportInstanceInfosRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExportInstanceInfosRequestBody members

    /// <summary>
    /// **参数解释**:   实例id列表。 **约束限制**:   不涉及。 **取值范围**:   不涉及 **默认取值**:   不涉及。
    /// </summary>

    std::vector<std::string>& getInstanceList();
    bool instanceListIsSet() const;
    void unsetinstanceList();
    void setInstanceList(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**:   导出字段列表。 **约束限制**:   不涉及。 **取值范围**:   - name：实例名称   - id：实例ID   - alias：实例备注   - editionMode：产品类型   - haModel：实例类型   - deployMode：部署形态   - engine：数据库引擎版本   - hotfixVersions：已升级热补丁   - instanceStatus：实例状态   - payModel：计费模式   - targetEngineVersion：目标版本   - flavor：性能规格   - availableZones：可用区   - privateIp：内网地址   - dnsName：DNS   - ipv6：IPv6地址   - dbPort：数据库端口   - publicIp：弹性公网IP   - createAt：创建时间   - volumeType：存储空间类型   - volumeSize：存储空间大小   - vpcName：虚拟私有云名称   - vpcId：虚拟私有云ID   - securityGroupName：安全组   - enterpriseProjectName：企业项目  **默认取值**:   不涉及。
    /// </summary>

    std::vector<std::string>& getUserDefinedColumns();
    bool userDefinedColumnsIsSet() const;
    void unsetuserDefinedColumns();
    void setUserDefinedColumns(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**:   时区。 **约束限制**:   不涉及。 **取值范围**:   - +08:00 **默认取值**:   +08:00
    /// </summary>

    std::string getTimeZone() const;
    bool timeZoneIsSet() const;
    void unsettimeZone();
    void setTimeZone(const std::string& value);

    /// <summary>
    /// **参数解释**:   语言。 **约束限制**:   不涉及。 **取值范围**:   - zh-cn    - en-us  **默认取值**:   zh-cn
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);


protected:
    std::vector<std::string> instanceList_;
    bool instanceListIsSet_;
    std::vector<std::string> userDefinedColumns_;
    bool userDefinedColumnsIsSet_;
    std::string timeZone_;
    bool timeZoneIsSet_;
    std::string language_;
    bool languageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ExportInstanceInfosRequestBody_H_
