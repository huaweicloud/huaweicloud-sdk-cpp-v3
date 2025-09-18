
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_DefectEvents_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_DefectEvents_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartscheck/v2/model/DefectEvents.h>
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
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  DefectEvents
    : public ModelBase
{
public:
    DefectEvents();
    virtual ~DefectEvents();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DefectEvents members

    /// <summary>
    /// 调用链信息
    /// </summary>

    std::vector<DefectEvents>& getEvents();
    bool eventsIsSet() const;
    void unsetevents();
    void setEvents(const std::vector<DefectEvents>& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// fix suggestions
    /// </summary>

    std::vector<std::string>& getFixSuggestions();
    bool fixSuggestionsIsSet() const;
    void unsetfixSuggestions();
    void setFixSuggestions(const std::vector<std::string>& value);

    /// <summary>
    /// 缺陷所在行
    /// </summary>

    int32_t getLine() const;
    bool lineIsSet() const;
    void unsetline();
    void setLine(int32_t value);

    /// <summary>
    /// 缺陷结束行
    /// </summary>

    int32_t getEndLine() const;
    bool endLineIsSet() const;
    void unsetendLine();
    void setEndLine(int32_t value);

    /// <summary>
    /// 缺陷开始行
    /// </summary>

    int32_t getCodeContextStartLine() const;
    bool codeContextStartLineIsSet() const;
    void unsetcodeContextStartLine();
    void setCodeContextStartLine(int32_t value);

    /// <summary>
    /// 代码片段
    /// </summary>

    bool isMain() const;
    bool mainIsSet() const;
    void unsetmain();
    void setMain(bool value);

    /// <summary>
    /// file path
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// 标签
    /// </summary>

    std::string getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const std::string& value);

    /// <summary>
    /// main buggy code
    /// </summary>

    std::string getMainBuggyCode() const;
    bool mainBuggyCodeIsSet() const;
    void unsetmainBuggyCode();
    void setMainBuggyCode(const std::string& value);

    /// <summary>
    /// code context
    /// </summary>

    std::string getCodeContext() const;
    bool codeContextIsSet() const;
    void unsetcodeContext();
    void setCodeContext(const std::string& value);


protected:
    std::vector<DefectEvents>* events_;
    bool eventsIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<std::string> fixSuggestions_;
    bool fixSuggestionsIsSet_;
    int32_t line_;
    bool lineIsSet_;
    int32_t endLine_;
    bool endLineIsSet_;
    int32_t codeContextStartLine_;
    bool codeContextStartLineIsSet_;
    bool main_;
    bool mainIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string tag_;
    bool tagIsSet_;
    std::string mainBuggyCode_;
    bool mainBuggyCodeIsSet_;
    std::string codeContext_;
    bool codeContextIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_DefectEvents_H_
