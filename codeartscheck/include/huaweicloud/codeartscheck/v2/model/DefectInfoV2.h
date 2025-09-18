
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_DefectInfoV2_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_DefectInfoV2_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartscheck/v2/model/DefectEvents.h>
#include <huaweicloud/codeartscheck/v2/model/DefectFragmentV2.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 缺陷信息
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  DefectInfoV2
    : public ModelBase
{
public:
    DefectInfoV2();
    virtual ~DefectInfoV2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DefectInfoV2 members

    /// <summary>
    /// 缺陷的id
    /// </summary>

    std::string getDefectId() const;
    bool defectIdIsSet() const;
    void unsetdefectId();
    void setDefectId(const std::string& value);

    /// <summary>
    /// 缺陷对应检查项的名称
    /// </summary>

    std::string getDefectCheckerName() const;
    bool defectCheckerNameIsSet() const;
    void unsetdefectCheckerName();
    void setDefectCheckerName(const std::string& value);

    /// <summary>
    /// 缺陷的状态0为解决 1已解决 2已忽略
    /// </summary>

    std::string getDefectStatus() const;
    bool defectStatusIsSet() const;
    void unsetdefectStatus();
    void setDefectStatus(const std::string& value);

    /// <summary>
    /// 规则标签,多个标签用逗号隔开
    /// </summary>

    std::string getRuleSystemTags() const;
    bool ruleSystemTagsIsSet() const;
    void unsetruleSystemTags();
    void setRuleSystemTags(const std::string& value);

    /// <summary>
    /// 规则名
    /// </summary>

    std::string getRuleName() const;
    bool ruleNameIsSet() const;
    void unsetruleName();
    void setRuleName(const std::string& value);

    /// <summary>
    /// 缺陷所在文件行号
    /// </summary>

    std::string getLineNumber() const;
    bool lineNumberIsSet() const;
    void unsetlineNumber();
    void setLineNumber(const std::string& value);

    /// <summary>
    /// 缺陷描述
    /// </summary>

    std::string getDefectContent() const;
    bool defectContentIsSet() const;
    void unsetdefectContent();
    void setDefectContent(const std::string& value);

    /// <summary>
    /// 缺陷等级，0致命，1严重，2一般，3提示
    /// </summary>

    std::string getDefectLevel() const;
    bool defectLevelIsSet() const;
    void unsetdefectLevel();
    void setDefectLevel(const std::string& value);

    /// <summary>
    /// 缺陷文件路径
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 问题唯一标识
    /// </summary>

    std::string getIssueKey() const;
    bool issueKeyIsSet() const;
    void unsetissueKey();
    void setIssueKey(const std::string& value);

    /// <summary>
    /// 缺陷代码片段详情
    /// </summary>

    std::vector<DefectFragmentV2>& getFragment();
    bool fragmentIsSet() const;
    void unsetfragment();
    void setFragment(const std::vector<DefectFragmentV2>& value);

    /// <summary>
    /// 调用链信息
    /// </summary>

    std::vector<DefectEvents>& getEvents();
    bool eventsIsSet() const;
    void unsetevents();
    void setEvents(const std::vector<DefectEvents>& value);


protected:
    std::string defectId_;
    bool defectIdIsSet_;
    std::string defectCheckerName_;
    bool defectCheckerNameIsSet_;
    std::string defectStatus_;
    bool defectStatusIsSet_;
    std::string ruleSystemTags_;
    bool ruleSystemTagsIsSet_;
    std::string ruleName_;
    bool ruleNameIsSet_;
    std::string lineNumber_;
    bool lineNumberIsSet_;
    std::string defectContent_;
    bool defectContentIsSet_;
    std::string defectLevel_;
    bool defectLevelIsSet_;
    std::string filePath_;
    bool filePathIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string issueKey_;
    bool issueKeyIsSet_;
    std::vector<DefectFragmentV2> fragment_;
    bool fragmentIsSet_;
    std::vector<DefectEvents> events_;
    bool eventsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_DefectInfoV2_H_
