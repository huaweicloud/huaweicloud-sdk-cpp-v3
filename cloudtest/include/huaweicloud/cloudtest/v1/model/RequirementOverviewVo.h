
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_RequirementOverviewVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_RequirementOverviewVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/CaseExecuteVo.h>
#include <huaweicloud/cloudtest/v1/model/CasePassVo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 质量报告需求测试情况列表
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  RequirementOverviewVo
    : public ModelBase
{
public:
    RequirementOverviewVo();
    virtual ~RequirementOverviewVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RequirementOverviewVo members

    /// <summary>
    /// 需求名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 需求id
    /// </summary>

    std::string getWorkitemId() const;
    bool workitemIdIsSet() const;
    void unsetworkitemId();
    void setWorkitemId(const std::string& value);

    /// <summary>
    /// 需求序列编号
    /// </summary>

    std::string getSequenceId() const;
    bool sequenceIdIsSet() const;
    void unsetsequenceId();
    void setSequenceId(const std::string& value);

    /// <summary>
    /// 看板需求id
    /// </summary>

    std::string getBoardId() const;
    bool boardIdIsSet() const;
    void unsetboardId();
    void setBoardId(const std::string& value);

    /// <summary>
    /// 需求类型id
    /// </summary>

    std::string getTrackerId() const;
    bool trackerIdIsSet() const;
    void unsettrackerId();
    void setTrackerId(const std::string& value);

    /// <summary>
    /// 需求类型
    /// </summary>

    std::string getTrackerName() const;
    bool trackerNameIsSet() const;
    void unsettrackerName();
    void setTrackerName(const std::string& value);

    /// <summary>
    /// 需求关联用例总数
    /// </summary>

    int32_t getRelateCaseNumber() const;
    bool relateCaseNumberIsSet() const;
    void unsetrelateCaseNumber();
    void setRelateCaseNumber(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    CasePassVo getCasePassVo() const;
    bool casePassVoIsSet() const;
    void unsetcasePassVo();
    void setCasePassVo(const CasePassVo& value);

    /// <summary>
    /// 
    /// </summary>

    CaseExecuteVo getCaseExecuteVo() const;
    bool caseExecuteVoIsSet() const;
    void unsetcaseExecuteVo();
    void setCaseExecuteVo(const CaseExecuteVo& value);

    /// <summary>
    /// 需求关联缺陷总数
    /// </summary>

    int32_t getRelateDefectNumber() const;
    bool relateDefectNumberIsSet() const;
    void unsetrelateDefectNumber();
    void setRelateDefectNumber(int32_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string workitemId_;
    bool workitemIdIsSet_;
    std::string sequenceId_;
    bool sequenceIdIsSet_;
    std::string boardId_;
    bool boardIdIsSet_;
    std::string trackerId_;
    bool trackerIdIsSet_;
    std::string trackerName_;
    bool trackerNameIsSet_;
    int32_t relateCaseNumber_;
    bool relateCaseNumberIsSet_;
    CasePassVo casePassVo_;
    bool casePassVoIsSet_;
    CaseExecuteVo caseExecuteVo_;
    bool caseExecuteVoIsSet_;
    int32_t relateDefectNumber_;
    bool relateDefectNumberIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_RequirementOverviewVo_H_
