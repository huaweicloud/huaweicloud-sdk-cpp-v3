
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Spec_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Spec_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/AutoStop.h>
#include <huaweicloud/modelarts/v1/model/CustomMetrics.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/AssetModel.h>
#include <huaweicloud/modelarts/v1/model/SchedulePolicy.h>
#include <vector>
#include <huaweicloud/modelarts/v1/model/RetentionPolicy.h>
#include <huaweicloud/modelarts/v1/model/LogExportConfig.h>
#include <huaweicloud/modelarts/v1/model/OutputModel.h>
#include <huaweicloud/modelarts/v1/model/SpecResource.h>
#include <huaweicloud/modelarts/v1/model/Notification.h>
#include <huaweicloud/modelarts/v1/model/ReserveTime.h>
#include <huaweicloud/modelarts/v1/model/SpecVolumes.h>
#include <huaweicloud/modelarts/v1/model/LogExportPath.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 训练作业规格参数。有此字段时，无需填写tasks字段。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Spec
    : public ModelBase
{
public:
    Spec();
    virtual ~Spec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Spec members

    /// <summary>
    /// 
    /// </summary>

    SpecResource getResource() const;
    bool resourceIsSet() const;
    void unsetresource();
    void setResource(const SpecResource& value);

    /// <summary>
    /// **参数解释**：训练作业挂载卷信息。 **约束限制**：不涉及。
    /// </summary>

    std::vector<SpecVolumes>& getVolumes();
    bool volumesIsSet() const;
    void unsetvolumes();
    void setVolumes(const std::vector<SpecVolumes>& value);

    /// <summary>
    /// 
    /// </summary>

    LogExportPath getLogExportPath() const;
    bool logExportPathIsSet() const;
    void unsetlogExportPath();
    void setLogExportPath(const LogExportPath& value);

    /// <summary>
    /// 
    /// </summary>

    AutoStop getAutoStop() const;
    bool autoStopIsSet() const;
    void unsetautoStop();
    void setAutoStop(const AutoStop& value);

    /// <summary>
    /// 
    /// </summary>

    RetentionPolicy getRetention() const;
    bool retentionIsSet() const;
    void unsetretention();
    void setRetention(const RetentionPolicy& value);

    /// <summary>
    /// 
    /// </summary>

    SchedulePolicy getSchedulePolicy() const;
    bool schedulePolicyIsSet() const;
    void unsetschedulePolicy();
    void setSchedulePolicy(const SchedulePolicy& value);

    /// <summary>
    /// 
    /// </summary>

    LogExportConfig getLogExportConfig() const;
    bool logExportConfigIsSet() const;
    void unsetlogExportConfig();
    void setLogExportConfig(const LogExportConfig& value);

    /// <summary>
    /// 
    /// </summary>

    Notification getNotification() const;
    bool notificationIsSet() const;
    void unsetnotification();
    void setNotification(const Notification& value);

    /// <summary>
    /// **参数解释**：指标采集配置。
    /// </summary>

    std::vector<CustomMetrics>& getCustomMetrics();
    bool customMetricsIsSet() const;
    void unsetcustomMetrics();
    void setCustomMetrics(const std::vector<CustomMetrics>& value);

    /// <summary>
    /// 
    /// </summary>

    OutputModel getOutputModel() const;
    bool outputModelIsSet() const;
    void unsetoutputModel();
    void setOutputModel(const OutputModel& value);

    /// <summary>
    /// 
    /// </summary>

    AssetModel getAssetModel() const;
    bool assetModelIsSet() const;
    void unsetassetModel();
    void setAssetModel(const AssetModel& value);

    /// <summary>
    /// **参数解释**：精调训练作业资产模型ID。
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ReserveTime getReservedTime() const;
    bool reservedTimeIsSet() const;
    void unsetreservedTime();
    void setReservedTime(const ReserveTime& value);


protected:
    SpecResource resource_;
    bool resourceIsSet_;
    std::vector<SpecVolumes> volumes_;
    bool volumesIsSet_;
    LogExportPath logExportPath_;
    bool logExportPathIsSet_;
    AutoStop autoStop_;
    bool autoStopIsSet_;
    RetentionPolicy retention_;
    bool retentionIsSet_;
    SchedulePolicy schedulePolicy_;
    bool schedulePolicyIsSet_;
    LogExportConfig logExportConfig_;
    bool logExportConfigIsSet_;
    Notification notification_;
    bool notificationIsSet_;
    std::vector<CustomMetrics> customMetrics_;
    bool customMetricsIsSet_;
    OutputModel outputModel_;
    bool outputModelIsSet_;
    AssetModel assetModel_;
    bool assetModelIsSet_;
    std::string assetId_;
    bool assetIdIsSet_;
    ReserveTime reservedTime_;
    bool reservedTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Spec_H_
