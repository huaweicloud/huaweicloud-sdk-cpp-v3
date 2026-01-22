
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AntiVirusRuleVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AntiVirusRuleVO_H_


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
class HUAWEICLOUD_CFW_V1_EXPORT  AntiVirusRuleVO
    : public ModelBase
{
public:
    AntiVirusRuleVO();
    virtual ~AntiVirusRuleVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AntiVirusRuleVO members

    /// <summary>
    /// 反病毒规则id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 反病毒规则名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 反病毒扫描协议列表
    /// </summary>

    std::vector<ScanProtocolConfig>& getScanProtocolConfigs();
    bool scanProtocolConfigsIsSet() const;
    void unsetscanProtocolConfigs();
    void setScanProtocolConfigs(const std::vector<ScanProtocolConfig>& value);

    /// <summary>
    /// 反病毒扫描协议列表总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<ScanProtocolConfig> scanProtocolConfigs_;
    bool scanProtocolConfigsIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AntiVirusRuleVO_H_
