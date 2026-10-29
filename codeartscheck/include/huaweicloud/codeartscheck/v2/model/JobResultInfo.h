
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_JobResultInfo_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_JobResultInfo_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 执行结果。
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  JobResultInfo
    : public ModelBase
{
public:
    JobResultInfo();
    virtual ~JobResultInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobResultInfo members

    /// <summary>
    /// **参数解释：** 严重问题数。 **取值范围：** ≥0
    /// </summary>

    int32_t getCritical() const;
    bool criticalIsSet() const;
    void unsetcritical();
    void setCritical(int32_t value);

    /// <summary>
    /// **参数解释：** 延迟上线问题数。 **取值范围：** ≥0
    /// </summary>

    int32_t getDelaystatusCount() const;
    bool delaystatusCountIsSet() const;
    void unsetdelaystatusCount();
    void setDelaystatusCount(int32_t value);

    /// <summary>
    /// **参数解释：** 致命问题数。 **取值范围：** ≥0
    /// </summary>

    int32_t getFatal() const;
    bool fatalIsSet() const;
    void unsetfatal();
    void setFatal(int32_t value);

    /// <summary>
    /// **参数解释：** 一般问题数。 **取值范围：** ≥0
    /// </summary>

    int32_t getGeneral() const;
    bool generalIsSet() const;
    void unsetgeneral();
    void setGeneral(int32_t value);

    /// <summary>
    /// **参数解释：** 信息问题数。 **取值范围：** ≥0
    /// </summary>

    int32_t getInfo() const;
    bool infoIsSet() const;
    void unsetinfo();
    void setInfo(int32_t value);

    /// <summary>
    /// **参数解释：** 提示问题数。 **取值范围：** ≥0
    /// </summary>

    int32_t getPrompt() const;
    bool promptIsSet() const;
    void unsetprompt();
    void setPrompt(int32_t value);

    /// <summary>
    /// **参数解释：** 扫描代码行数，不包括空行和注释行。 **取值范围：** ≥0
    /// </summary>

    int32_t getCodeLine() const;
    bool codeLineIsSet() const;
    void unsetcodeLine();
    void setCodeLine(int32_t value);

    /// <summary>
    /// **参数解释：** 缺陷总数。 **取值范围：** ≥0
    /// </summary>

    int32_t getDefectCount() const;
    bool defectCountIsSet() const;
    void unsetdefectCount();
    void setDefectCount(int32_t value);

    /// <summary>
    /// **参数解释：** 已忽略问题数。 **取值范围：** ≥0
    /// </summary>

    int32_t getDismissed() const;
    bool dismissedIsSet() const;
    void unsetdismissed();
    void setDismissed(int32_t value);

    /// <summary>
    /// **参数解释：** 文件总数。 **取值范围：** ≥0
    /// </summary>

    int32_t getFileTotal() const;
    bool fileTotalIsSet() const;
    void unsetfileTotal();
    void setFileTotal(int32_t value);

    /// <summary>
    /// **参数解释：** 已修复问题数。 **取值范围：** ≥0
    /// </summary>

    int32_t getFixed() const;
    bool fixedIsSet() const;
    void unsetfixed();
    void setFixed(int32_t value);

    /// <summary>
    /// **参数解释：** 执行ID，来自代码检查执行任务接口的返回值，每次执行代码检查任务都有唯一的执行ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 执行ID，来自代码检查执行任务接口的返回值，每次执行代码检查任务都有唯一的执行ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// **参数解释：** 未解决且新增的问题数。 **取值范围：** ≥0
    /// </summary>

    int32_t getNewUnsolvedDefectCount() const;
    bool newUnsolvedDefectCountIsSet() const;
    void unsetnewUnsolvedDefectCount();
    void setNewUnsolvedDefectCount(int32_t value);

    /// <summary>
    /// **参数解释：** 非安全问题数。 **取值范围：** ≥0
    /// </summary>

    int32_t getNonSecurityDefectCount() const;
    bool nonSecurityDefectCountIsSet() const;
    void unsetnonSecurityDefectCount();
    void setNonSecurityDefectCount(int32_t value);

    /// <summary>
    /// **参数解释：** 门禁结果。 **取值范围：** - success：门禁通过。 - error：门禁未通过。
    /// </summary>

    std::string getReviewResult() const;
    bool reviewResultIsSet() const;
    void unsetreviewResult();
    void setReviewResult(const std::string& value);

    /// <summary>
    /// **参数解释：** 安全问题数。 **取值范围：** ≥0
    /// </summary>

    int32_t getSecurityDefectCount() const;
    bool securityDefectCountIsSet() const;
    void unsetsecurityDefectCount();
    void setSecurityDefectCount(int32_t value);

    /// <summary>
    /// **参数解释：** 已解决的问题数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getSolvedDefectCount() const;
    bool solvedDefectCountIsSet() const;
    void unsetsolvedDefectCount();
    void setSolvedDefectCount(int32_t value);

    /// <summary>
    /// **参数解释：** 未解决的问题数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getUnsolvedDefectCount() const;
    bool unsolvedDefectCountIsSet() const;
    void unsetunsolvedDefectCount();
    void setUnsolvedDefectCount(int32_t value);


protected:
    int32_t critical_;
    bool criticalIsSet_;
    int32_t delaystatusCount_;
    bool delaystatusCountIsSet_;
    int32_t fatal_;
    bool fatalIsSet_;
    int32_t general_;
    bool generalIsSet_;
    int32_t info_;
    bool infoIsSet_;
    int32_t prompt_;
    bool promptIsSet_;
    int32_t codeLine_;
    bool codeLineIsSet_;
    int32_t defectCount_;
    bool defectCountIsSet_;
    int32_t dismissed_;
    bool dismissedIsSet_;
    int32_t fileTotal_;
    bool fileTotalIsSet_;
    int32_t fixed_;
    bool fixedIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    int32_t newUnsolvedDefectCount_;
    bool newUnsolvedDefectCountIsSet_;
    int32_t nonSecurityDefectCount_;
    bool nonSecurityDefectCountIsSet_;
    std::string reviewResult_;
    bool reviewResultIsSet_;
    int32_t securityDefectCount_;
    bool securityDefectCountIsSet_;
    int32_t solvedDefectCount_;
    bool solvedDefectCountIsSet_;
    int32_t unsolvedDefectCount_;
    bool unsolvedDefectCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_JobResultInfo_H_
