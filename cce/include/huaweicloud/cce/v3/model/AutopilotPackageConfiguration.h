
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_AutopilotPackageConfiguration_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_AutopilotPackageConfiguration_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/AutopilotConfigurationItem.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  AutopilotPackageConfiguration
    : public ModelBase
{
public:
    AutopilotPackageConfiguration();
    virtual ~AutopilotPackageConfiguration();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AutopilotPackageConfiguration members

    /// <summary>
    /// 组件名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 组件配置项
    /// </summary>

    std::vector<AutopilotConfigurationItem>& getConfigurations();
    bool configurationsIsSet() const;
    void unsetconfigurations();
    void setConfigurations(const std::vector<AutopilotConfigurationItem>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::vector<AutopilotConfigurationItem> configurations_;
    bool configurationsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_AutopilotPackageConfiguration_H_
