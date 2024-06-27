
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChInstancesInfoRsponse_instance_ops_window_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChInstancesInfoRsponse_instance_ops_window_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实例操作时间窗。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ChInstancesInfoRsponse_instance_ops_window
    : public ModelBase
{
public:
    ChInstancesInfoRsponse_instance_ops_window();
    virtual ~ChInstancesInfoRsponse_instance_ops_window();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChInstancesInfoRsponse_instance_ops_window members

    /// <summary>
    /// 时间窗周期。
    /// </summary>

    std::string getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(const std::string& value);

    /// <summary>
    /// 时间窗开始时间。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 时间窗结束时间。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);


protected:
    std::string period_;
    bool periodIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChInstancesInfoRsponse_instance_ops_window_H_
