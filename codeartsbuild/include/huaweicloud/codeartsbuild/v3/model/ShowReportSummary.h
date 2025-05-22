
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowReportSummary_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowReportSummary_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 单元测试报告
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowReportSummary
    : public ModelBase
{
public:
    ShowReportSummary();
    virtual ~ShowReportSummary();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowReportSummary members

    /// <summary>
    /// 任务编号
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 构建编号
    /// </summary>

    int32_t getBuildNo() const;
    bool buildNoIsSet() const;
    void unsetbuildNo();
    void setBuildNo(int32_t value);

    /// <summary>
    /// 步骤名称，对应构建步骤，例如stage2
    /// </summary>

    std::string getStageName() const;
    bool stageNameIsSet() const;
    void unsetstageName();
    void setStageName(const std::string& value);

    /// <summary>
    /// 报告编号
    /// </summary>

    std::string getRootId() const;
    bool rootIdIsSet() const;
    void unsetrootId();
    void setRootId(const std::string& value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 成功数量
    /// </summary>

    int32_t getSuccess() const;
    bool successIsSet() const;
    void unsetsuccess();
    void setSuccess(int32_t value);

    /// <summary>
    /// 失败数量
    /// </summary>

    int32_t getFailures() const;
    bool failuresIsSet() const;
    void unsetfailures();
    void setFailures(int32_t value);

    /// <summary>
    /// 错误数量
    /// </summary>

    int32_t getErrors() const;
    bool errorsIsSet() const;
    void unseterrors();
    void setErrors(int32_t value);

    /// <summary>
    /// 其他
    /// </summary>

    int32_t getOthers() const;
    bool othersIsSet() const;
    void unsetothers();
    void setOthers(int32_t value);

    /// <summary>
    /// 执行耗时
    /// </summary>

    int32_t getExecutionTime() const;
    bool executionTimeIsSet() const;
    void unsetexecutionTime();
    void setExecutionTime(int32_t value);

    /// <summary>
    /// 生成时间
    /// </summary>

    std::string getGenrateTime() const;
    bool genrateTimeIsSet() const;
    void unsetgenrateTime();
    void setGenrateTime(const std::string& value);

    /// <summary>
    /// 局点
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 是否通过
    /// </summary>

    bool isIsSuccess() const;
    bool isSuccessIsSet() const;
    void unsetisSuccess();
    void setIsSuccess(bool value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    int32_t buildNo_;
    bool buildNoIsSet_;
    std::string stageName_;
    bool stageNameIsSet_;
    std::string rootId_;
    bool rootIdIsSet_;
    int32_t total_;
    bool totalIsSet_;
    int32_t success_;
    bool successIsSet_;
    int32_t failures_;
    bool failuresIsSet_;
    int32_t errors_;
    bool errorsIsSet_;
    int32_t others_;
    bool othersIsSet_;
    int32_t executionTime_;
    bool executionTimeIsSet_;
    std::string genrateTime_;
    bool genrateTimeIsSet_;
    std::string region_;
    bool regionIsSet_;
    bool isSuccess_;
    bool isSuccessIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowReportSummary_H_
