
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowJobDetailRequest_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowJobDetailRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowJobDetailRequest
    : public ModelBase
{
public:
    ShowJobDetailRequest();
    virtual ~ShowJobDetailRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowJobDetailRequest members

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 请求语言类型。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 任务详情类型。取值： - overview：任务概览信息。 - detail：任务基本信息。 - network：测试连接结果信息，需配合query_id参数一起查询。 - precheck：预检查结果信息，需配合query_id参数一起查询。 - progress：任务进度信息。 - log：任务日志信息，支持分页查询参数offset与limit。 - compare：查询对比任务。 - file：对象导入信息。 - is_writable：目标库解除只读结果。 - cloud_connection：录制回放他云连通性测试，需配合query_id参数一起查询。 - diagnosis：查询一键诊断结果，需配合query_id参数一起查询。 - diagnosis_history：查询一键诊断结果历史，需配合query_id参数一起查询。 - repair_progress：数据修复进度，需配合query_id参数一起查询。 - repair_detail：数据修复详情，需配合query_id参数一起查询。 - repair_export_status：查询数据修复SQL导出状态，需配合compare_task_id参数一起查询。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 通过指定Query ID查询任务详情。  说明：部分type类型的任务详情，需要通过触发该操作的请求返回的query_id进行操作结果查询。
    /// </summary>

    std::string getQueryId() const;
    bool queryIdIsSet() const;
    void unsetqueryId();
    void setQueryId(const std::string& value);

    /// <summary>
    /// 偏移量，表示查询该偏移量后面的记录。  说明：部分type类型的任务详情支持分页查询，可以通过传递该参数进行分页控制。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 查询返回记录的数量限制。  说明：部分type类型的任务详情支持分页查询，可以通过传递该参数进行分页控制。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 对比任务类型 - object_compare：对象对比。 - line_compare：行对比。 - content_compare：内容对比。 - data_compare：数据对比。
    /// </summary>

    std::string getCompareType() const;
    bool compareTypeIsSet() const;
    void unsetcompareType();
    void setCompareType(const std::string& value);

    /// <summary>
    /// 查询对比内容。取值： - overview：对比任务概览。 - list：数据对比任务列表。 - detail：对比详情。 - diff：不一致详情。
    /// </summary>

    std::string getQueryType() const;
    bool queryTypeIsSet() const;
    void unsetqueryType();
    void setQueryType(const std::string& value);

    /// <summary>
    /// 查询对象对比详情类型。取值： - DB：库级对比详情。 - TABLE：表级对比详情。 - INDEX：索引对比详情。
    /// </summary>

    std::string getObjectType() const;
    bool objectTypeIsSet() const;
    void unsetobjectType();
    void setObjectType(const std::string& value);

    /// <summary>
    /// 对比任务ID。
    /// </summary>

    std::string getCompareTaskId() const;
    bool compareTaskIdIsSet() const;
    void unsetcompareTaskId();
    void setCompareTaskId(const std::string& value);

    /// <summary>
    /// 数据对比源库名称。
    /// </summary>

    std::string getSourceDbName() const;
    bool sourceDbNameIsSet() const;
    void unsetsourceDbName();
    void setSourceDbName(const std::string& value);

    /// <summary>
    /// 数据对比目标库名称。
    /// </summary>

    std::string getTargetDbName() const;
    bool targetDbNameIsSet() const;
    void unsettargetDbName();
    void setTargetDbName(const std::string& value);

    /// <summary>
    /// 对比结果类型。取值： - compare：对比完成。 - uncompare：无法对比。
    /// </summary>

    std::string getCompareDetailType() const;
    bool compareDetailTypeIsSet() const;
    void unsetcompareDetailType();
    void setCompareDetailType(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string queryId_;
    bool queryIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string compareType_;
    bool compareTypeIsSet_;
    std::string queryType_;
    bool queryTypeIsSet_;
    std::string objectType_;
    bool objectTypeIsSet_;
    std::string compareTaskId_;
    bool compareTaskIdIsSet_;
    std::string sourceDbName_;
    bool sourceDbNameIsSet_;
    std::string targetDbName_;
    bool targetDbNameIsSet_;
    std::string compareDetailType_;
    bool compareDetailTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowJobDetailRequest& dereference_from_shared_ptr(std::shared_ptr<ShowJobDetailRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowJobDetailRequest_H_
