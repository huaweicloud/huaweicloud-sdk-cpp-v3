
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SecondMonitor_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SecondMonitor_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 秒级监控信息
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SecondMonitor
    : public ModelBase
{
public:
    SecondMonitor();
    virtual ~SecondMonitor();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SecondMonitor members

    /// <summary>
    /// 秒级监控开关
    /// </summary>

    bool isSwitchOption() const;
    bool switchOptionIsSet() const;
    void unsetswitchOption();
    void setSwitchOption(bool value);

    /// <summary>
    /// 监控间隔, 支持1秒和5秒
    /// </summary>

    int32_t getInterval() const;
    bool intervalIsSet() const;
    void unsetinterval();
    void setInterval(int32_t value);


protected:
    bool switchOption_;
    bool switchOptionIsSet_;
    int32_t interval_;
    bool intervalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SecondMonitor_H_
