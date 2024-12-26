
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowAlarmConfigResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowAlarmConfigResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/cfw/v1/model/AlarmConfig.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ShowAlarmConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAlarmConfigResponse();
    virtual ~ShowAlarmConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAlarmConfigResponse members

    /// <summary>
    /// 告警配置列表
    /// </summary>

    std::vector<AlarmConfig>& getAlarmConfigs();
    bool alarmConfigsIsSet() const;
    void unsetalarmConfigs();
    void setAlarmConfigs(const std::vector<AlarmConfig>& value);

    /// <summary>
    /// 
    /// </summary>

    Object getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const Object& value);


protected:
    std::vector<AlarmConfig> alarmConfigs_;
    bool alarmConfigsIsSet_;
    Object data_;
    bool dataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowAlarmConfigResponse_H_
