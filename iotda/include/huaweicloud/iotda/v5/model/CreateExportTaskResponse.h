
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateExportTaskResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateExportTaskResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  CreateExportTaskResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateExportTaskResponse();
    virtual ~CreateExportTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateExportTaskResponse members

    /// <summary>
    /// 导出任务唯一id。
    /// </summary>

    std::string getExportTaskId() const;
    bool exportTaskIdIsSet() const;
    void unsetexportTaskId();
    void setExportTaskId(const std::string& value);

    /// <summary>
    /// 导出源资源类型，支持批量任务导出类型BatchTask。
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 资源过滤条件，Json格式，里面是(K,V)键值对，当resource_type为BatchTask时填写填写key为task_id，value为BatchTask的task_id(task_id从批量任务接口获得)。
    /// </summary>

    Object getResourceCondition() const;
    bool resourceConditionIsSet() const;
    void unsetresourceCondition();
    void setResourceCondition(const Object& value);

    /// <summary>
    /// 导出格式，目前xls格式。
    /// </summary>

    std::string getExportFormat() const;
    bool exportFormatIsSet() const;
    void unsetexportFormat();
    void setExportFormat(const std::string& value);

    /// <summary>
    /// 任务状态，状态分别有：Processing：执行中，Success：成功，Failed：失败。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 已导出的资源数量。
    /// </summary>

    int64_t getExportCount() const;
    bool exportCountIsSet() const;
    void unsetexportCount();
    void setExportCount(int64_t value);

    /// <summary>
    /// 导出任务的执行进度，取值范围为1-100，当100表示进度为100%，任务完成。
    /// </summary>

    int32_t getProgress() const;
    bool progressIsSet() const;
    void unsetprogress();
    void setProgress(int32_t value);

    /// <summary>
    /// 在物联网平台创建产品的时间，格式：yyyy-MM-dd&#39;T&#39;HH:mm:ss.SSS&#39;Z&#39;，如2020-08-12T12:12:12.333Z。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 导出任务的执行结束时间，格式：yyyy-MM-dd&#39;T&#39;HH:mm:ss.SSS&#39;Z&#39;，如2020-08-12T12:12:12.333Z。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 租户规则的生效范围，默认GLOBAL，取值如下： - GLOBAL：生效范围为租户级 - APP：生效范围为应用级，如果类型为APP，需要携带app_id，如果不带，生效范围为defaultApp。 
    /// </summary>

    std::string getAppType() const;
    bool appTypeIsSet() const;
    void unsetappType();
    void setAppType(const std::string& value);

    /// <summary>
    /// 应用ID。此参数为非必选参数，用于兼容平台老用户存在多应用的场景。存在多应用的用户需要使用该接口时，必须携带该参数指定创建的规则归属到哪个应用下，否则接口会提示错误。如果用户存在多应用，同时又不想携带该参数，可以联系华为技术支持对用户数据做应用合并。
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);


protected:
    std::string exportTaskId_;
    bool exportTaskIdIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    Object resourceCondition_;
    bool resourceConditionIsSet_;
    std::string exportFormat_;
    bool exportFormatIsSet_;
    std::string status_;
    bool statusIsSet_;
    int64_t exportCount_;
    bool exportCountIsSet_;
    int32_t progress_;
    bool progressIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string appType_;
    bool appTypeIsSet_;
    std::string appId_;
    bool appIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateExportTaskResponse_H_
