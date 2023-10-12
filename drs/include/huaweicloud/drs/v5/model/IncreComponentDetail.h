
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_IncreComponentDetail_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_IncreComponentDetail_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 增量组件详情。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  IncreComponentDetail
    : public ModelBase
{
public:
    IncreComponentDetail();
    virtual ~IncreComponentDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IncreComponentDetail members

    /// <summary>
    /// 组件类型 - capture：抓取 - apply：回放
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 状态。 - STOPPED：停止 - STARTED：运行中 - STOPPING：停止中 - STARTING：启动中
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 启动时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 启动位点
    /// </summary>

    std::string getStartPoint() const;
    bool startPointIsSet() const;
    void unsetstartPoint();
    void setStartPoint(const std::string& value);

    /// <summary>
    /// 当前位点
    /// </summary>

    std::string getCurrentPoint() const;
    bool currentPointIsSet() const;
    void unsetcurrentPoint();
    void setCurrentPoint(const std::string& value);

    /// <summary>
    /// 解析时间
    /// </summary>

    std::string getResolutionTime() const;
    bool resolutionTimeIsSet() const;
    void unsetresolutionTime();
    void setResolutionTime(const std::string& value);

    /// <summary>
    /// 时延，单位：秒
    /// </summary>

    std::string getDelay() const;
    bool delayIsSet() const;
    void unsetdelay();
    void setDelay(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string startPoint_;
    bool startPointIsSet_;
    std::string currentPoint_;
    bool currentPointIsSet_;
    std::string resolutionTime_;
    bool resolutionTimeIsSet_;
    std::string delay_;
    bool delayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_IncreComponentDetail_H_
