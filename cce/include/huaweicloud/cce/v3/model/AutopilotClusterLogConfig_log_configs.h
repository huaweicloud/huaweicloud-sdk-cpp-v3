
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_AutopilotClusterLogConfig_log_configs_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_AutopilotClusterLogConfig_log_configs_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CCE_V3_EXPORT  AutopilotClusterLogConfig_log_configs
    : public ModelBase
{
public:
    AutopilotClusterLogConfig_log_configs();
    virtual ~AutopilotClusterLogConfig_log_configs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AutopilotClusterLogConfig_log_configs members

    /// <summary>
    /// 日志类型
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 是否采集
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);


protected:
    std::string name_;
    bool nameIsSet_;
    bool enable_;
    bool enableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_AutopilotClusterLogConfig_log_configs_H_
