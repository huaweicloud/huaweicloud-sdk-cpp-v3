
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_LtsStructTemplateInfo_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_LtsStructTemplateInfo_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/lts/v2/model/StructFieldInfo.h>
#include <vector>
#include <huaweicloud/lts/v2/model/Rule.h>
#include <huaweicloud/lts/v2/model/TagField.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  LtsStructTemplateInfo
    : public ModelBase
{
public:
    LtsStructTemplateInfo();
    virtual ~LtsStructTemplateInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LtsStructTemplateInfo members

    /// <summary>
    /// 结构化字段
    /// </summary>

    std::vector<StructFieldInfo>& getDemoFields();
    bool demoFieldsIsSet() const;
    void unsetdemoFields();
    void setDemoFields(const std::vector<StructFieldInfo>& value);

    /// <summary>
    /// tag字段列表（使用tag字段解析时需要，其中系统模板不支持使用tag字段）。
    /// </summary>

    std::vector<TagField>& getTagFields();
    bool tagFieldsIsSet() const;
    void unsettagFields();
    void setTagFields(const std::vector<TagField>& value);

    /// <summary>
    /// 示例日志
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);

    /// <summary>
    /// 日志组ID
    /// </summary>

    std::string getLogGroupId() const;
    bool logGroupIdIsSet() const;
    void unsetlogGroupId();
    void setLogGroupId(const std::string& value);

    /// <summary>
    /// 结构化方式
    /// </summary>

    std::string getParseType() const;
    bool parseTypeIsSet() const;
    void unsetparseType();
    void setParseType(const std::string& value);

    /// <summary>
    /// 日志流ID
    /// </summary>

    std::string getLogStreamId() const;
    bool logStreamIdIsSet() const;
    void unsetlogStreamId();
    void setLogStreamId(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// parse_type为custom_regex类型时必填，regex提取规则
    /// </summary>

    std::string getRegexRules() const;
    bool regexRulesIsSet() const;
    void unsetregexRules();
    void setRegexRules(const std::string& value);

    /// <summary>
    /// parse_type为json类型时必填，解析层数，目前固定是3
    /// </summary>

    int32_t getLayers() const;
    bool layersIsSet() const;
    void unsetlayers();
    void setLayers(int32_t value);

    /// <summary>
    /// parse_type为split类型时必填，分隔符，分词符号
    /// </summary>

    std::string getTokenizer() const;
    bool tokenizerIsSet() const;
    void unsettokenizer();
    void setTokenizer(const std::string& value);

    /// <summary>
    /// parse_type为nginx类型时必填，nginx日志格式模板
    /// </summary>

    std::string getLogFormat() const;
    bool logFormatIsSet() const;
    void unsetlogFormat();
    void setLogFormat(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Rule getRule() const;
    bool ruleIsSet() const;
    void unsetrule();
    void setRule(const Rule& value);


protected:
    std::vector<StructFieldInfo> demoFields_;
    bool demoFieldsIsSet_;
    std::vector<TagField> tagFields_;
    bool tagFieldsIsSet_;
    std::string content_;
    bool contentIsSet_;
    std::string logGroupId_;
    bool logGroupIdIsSet_;
    std::string parseType_;
    bool parseTypeIsSet_;
    std::string logStreamId_;
    bool logStreamIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string regexRules_;
    bool regexRulesIsSet_;
    int32_t layers_;
    bool layersIsSet_;
    std::string tokenizer_;
    bool tokenizerIsSet_;
    std::string logFormat_;
    bool logFormatIsSet_;
    Rule rule_;
    bool ruleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_LtsStructTemplateInfo_H_
