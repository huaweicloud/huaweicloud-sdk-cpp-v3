
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_LogInfo_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_LogInfo_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  LogInfo
    : public ModelBase
{
public:
    LogInfo();
    virtual ~LogInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LogInfo members

    /// <summary>
    /// **参数解释：** 检查日志页面所显示的子任务阶段名称。 **取值范围:** 不涉及。
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// **参数解释：** 扫描日志内容。 **取值范围:** 不涉及。
    /// </summary>

    std::string getLog() const;
    bool logIsSet() const;
    void unsetlog();
    void setLog(const std::string& value);

    /// <summary>
    /// **参数解释：** 废弃字段。 **取值范围:** 不涉及。
    /// </summary>

    std::string getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(const std::string& value);

    /// <summary>
    /// **参数解释：** 任务失败的简要原因。 **取值范围:** 不涉及。
    /// </summary>

    std::string getAnalysis() const;
    bool analysisIsSet() const;
    void unsetanalysis();
    void setAnalysis(const std::string& value);

    /// <summary>
    /// **参数解释：** 废弃字段。 **取值范围:** 不涉及。
    /// </summary>

    std::string getFaq() const;
    bool faqIsSet() const;
    void unsetfaq();
    void setFaq(const std::string& value);


protected:
    std::string displayName_;
    bool displayNameIsSet_;
    std::string log_;
    bool logIsSet_;
    std::string level_;
    bool levelIsSet_;
    std::string analysis_;
    bool analysisIsSet_;
    std::string faq_;
    bool faqIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_LogInfo_H_
