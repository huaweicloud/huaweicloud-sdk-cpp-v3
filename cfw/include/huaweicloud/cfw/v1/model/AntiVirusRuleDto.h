
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AntiVirusRuleDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AntiVirusRuleDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/ScanProtocolConfig.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  AntiVirusRuleDto
    : public ModelBase
{
public:
    AntiVirusRuleDto();
    virtual ~AntiVirusRuleDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AntiVirusRuleDto members

    /// <summary>
    /// 防护对象ID，为必传参数
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);

    /// <summary>
    /// 扫描协议配置列表
    /// </summary>

    std::vector<ScanProtocolConfig>& getScanProtocolConfigs();
    bool scanProtocolConfigsIsSet() const;
    void unsetscanProtocolConfigs();
    void setScanProtocolConfigs(const std::vector<ScanProtocolConfig>& value);


protected:
    std::string objectId_;
    bool objectIdIsSet_;
    std::vector<ScanProtocolConfig> scanProtocolConfigs_;
    bool scanProtocolConfigsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AntiVirusRuleDto_H_
