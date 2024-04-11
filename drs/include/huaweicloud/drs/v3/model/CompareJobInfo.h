
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_CompareJobInfo_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_CompareJobInfo_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 对比列表信息体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  CompareJobInfo
    : public ModelBase
{
public:
    CompareJobInfo();
    virtual ~CompareJobInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CompareJobInfo members

    /// <summary>
    /// 对比任务ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 对比类型。 - lines：行数对比 - contents：内容对比 - random：抽样对比，当前仅支持gaussdbv5、gaussdbv5-to-postgresql、gaussdbv5ha-to-postgresql链路。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 对比配置项，key-value形式。 内容对比支持以下配置项： - 对比方式配置，key：contentCompareType，value：dynamic表示动态对比，static表示静态对比。 - lob字段对比类型配置，key：lobCompare，value：ignore表示忽略，length表示长度对比。  行数对比支持以下配置项： - 对比策略配置，多表归一情况下适用，key：comparePolicy，value：normal表示正常对比，manyToOne表示多对一对比。
    /// </summary>

    std::map<std::string, std::string>& getOptions();
    bool optionsIsSet() const;
    void unsetoptions();
    void setOptions(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 开始时间，UTC时间，例如：2020-09-01T18:50:20Z。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间，UTC时间，例如：2020-09-01T18:50:20Z。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 对比任务的状态。 - RUNNING-运行中 - WAITING_FOR_RUNNING-等待启动中 - SUCCESSFUL-完成 - FAILED-失败 - CANCELLED-已取消 - TIMEOUT_INTERRUPT-超时中断 - FULL_DOING-全量校验中 - INCRE_DOING-增量校验中
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 导出对比结果状态。 - INIT：初始状态 - EXPORTING：对比结果导出中 - EXPORT_COMPLETE：对比结果导出完成 - EXPORT_COMMON_FAILED：对比结果导出失败
    /// </summary>

    std::string getExportStatus() const;
    bool exportStatusIsSet() const;
    void unsetexportStatus();
    void setExportStatus(const std::string& value);

    /// <summary>
    /// 导出比对结果有效期剩余时间。
    /// </summary>

    int64_t getReportRemainSeconds() const;
    bool reportRemainSecondsIsSet() const;
    void unsetreportRemainSeconds();
    void setReportRemainSeconds(int64_t value);

    /// <summary>
    /// 对比任务的标签，当前仅涉及对比策略时返回。
    /// </summary>

    std::map<std::string, std::string>& getCompareJobTag();
    bool compareJobTagIsSet() const;
    void unsetcompareJobTag();
    void setCompareJobTag(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 抽样比例，对比类型为抽样对比时填写。
    /// </summary>

    std::string getProportionValue() const;
    bool proportionValueIsSet() const;
    void unsetproportionValue();
    void setProportionValue(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::map<std::string, std::string> options_;
    bool optionsIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string exportStatus_;
    bool exportStatusIsSet_;
    int64_t reportRemainSeconds_;
    bool reportRemainSecondsIsSet_;
    std::map<std::string, std::string> compareJobTag_;
    bool compareJobTagIsSet_;
    std::string proportionValue_;
    bool proportionValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_CompareJobInfo_H_
