
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowStructTemplateResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowStructTemplateResponse_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/ShowStructTemplateRule.h>
#include <huaweicloud/lts/v2/model/StructFieldInfoReturn.h>
#include <huaweicloud/lts/v2/model/TagFieldsInfo.h>
#include <string>
#include <huaweicloud/lts/v2/model/ShowStructTemplateclusterInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ShowStructTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowStructTemplateResponse();
    virtual ~ShowStructTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowStructTemplateResponse members

    /// <summary>
    /// 结构化字段
    /// </summary>

    std::vector<StructFieldInfoReturn>& getDemoFields();
    bool demoFieldsIsSet() const;
    void unsetdemoFields();
    void setDemoFields(const std::vector<StructFieldInfoReturn>& value);

    /// <summary>
    /// 关键词详细信息
    /// </summary>

    std::vector<TagFieldsInfo>& getTagFields();
    bool tagFieldsIsSet() const;
    void unsettagFields();
    void setTagFields(const std::vector<TagFieldsInfo>& value);

    /// <summary>
    /// 示例日志
    /// </summary>

    std::string getDemoLog() const;
    bool demoLogIsSet() const;
    void unsetdemoLog();
    void setDemoLog(const std::string& value);

    /// <summary>
    /// 测试
    /// </summary>

    std::string getDemoLabel() const;
    bool demoLabelIsSet() const;
    void unsetdemoLabel();
    void setDemoLabel(const std::string& value);

    /// <summary>
    /// id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 日志组ID
    /// </summary>

    std::string getLogGroupId() const;
    bool logGroupIdIsSet() const;
    void unsetlogGroupId();
    void setLogGroupId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ShowStructTemplateRule getRule() const;
    bool ruleIsSet() const;
    void unsetrule();
    void setRule(const ShowStructTemplateRule& value);

    /// <summary>
    /// 
    /// </summary>

    ShowStructTemplateclusterInfo getClusterInfo() const;
    bool clusterInfoIsSet() const;
    void unsetclusterInfo();
    void setClusterInfo(const ShowStructTemplateclusterInfo& value);

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
    /// 测试
    /// </summary>

    std::string getTemplateName() const;
    bool templateNameIsSet() const;
    void unsettemplateName();
    void setTemplateName(const std::string& value);

    /// <summary>
    /// 为了兼容前台数据格式
    /// </summary>

    std::string getRegex() const;
    bool regexIsSet() const;
    void unsetregex();
    void setRegex(const std::string& value);


protected:
    std::vector<StructFieldInfoReturn> demoFields_;
    bool demoFieldsIsSet_;
    std::vector<TagFieldsInfo> tagFields_;
    bool tagFieldsIsSet_;
    std::string demoLog_;
    bool demoLogIsSet_;
    std::string demoLabel_;
    bool demoLabelIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string logGroupId_;
    bool logGroupIdIsSet_;
    ShowStructTemplateRule rule_;
    bool ruleIsSet_;
    ShowStructTemplateclusterInfo clusterInfo_;
    bool clusterInfoIsSet_;
    std::string logStreamId_;
    bool logStreamIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string templateName_;
    bool templateNameIsSet_;
    std::string regex_;
    bool regexIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowStructTemplateResponse_H_
