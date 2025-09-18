#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_CodeArtsCheckMeta_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_CodeArtsCheckMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  CodeArtsCheckMeta {
public:
    static HttpRequestDef genRequestDefForCheckParameters();
    static HttpRequestDef genRequestDefForCheckRecord();
    static HttpRequestDef genRequestDefForCheckRulesetParameters();
    static HttpRequestDef genRequestDefForCreateRuleset();
    static HttpRequestDef genRequestDefForCreateTask();
    static HttpRequestDef genRequestDefForDeleteRuleset();
    static HttpRequestDef genRequestDefForDeleteTask();
    static HttpRequestDef genRequestDefForListRules();
    static HttpRequestDef genRequestDefForListRulesets();
    static HttpRequestDef genRequestDefForListTaskParameter();
    static HttpRequestDef genRequestDefForListTaskRuleset();
    static HttpRequestDef genRequestDefForListTemplateRules();
    static HttpRequestDef genRequestDefForRunTask();
    static HttpRequestDef genRequestDefForSetDefaulTemplate();
    static HttpRequestDef genRequestDefForShowProgressDetail();
    static HttpRequestDef genRequestDefForShowTaskCmetrics();
    static HttpRequestDef genRequestDefForShowTaskDefects();
    static HttpRequestDef genRequestDefForShowTaskDefectsStatistic();
    static HttpRequestDef genRequestDefForShowTaskDetail();
    static HttpRequestDef genRequestDefForShowTaskListByProjectId();
    static HttpRequestDef genRequestDefForShowTaskPathTree();
    static HttpRequestDef genRequestDefForShowTaskSettings();
    static HttpRequestDef genRequestDefForShowTasklog();
    static HttpRequestDef genRequestDefForShowTasksRulesets();
    static HttpRequestDef genRequestDefForStopTaskById();
    static HttpRequestDef genRequestDefForUpdateDefectStatus();
    static HttpRequestDef genRequestDefForUpdateIgnorePath();
    static HttpRequestDef genRequestDefForUpdateTaskRuleset();
    static HttpRequestDef genRequestDefForUpdateTaskSettings();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_CodeArtsCheckMeta_H_
