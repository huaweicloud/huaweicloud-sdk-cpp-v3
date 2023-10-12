
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_StructTemplateModel_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_StructTemplateModel_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/TemplateRule.h>
#include <huaweicloud/lts/v2/model/DemoField.h>
#include <string>
#include <huaweicloud/lts/v2/model/TagFieldNew.h>
#include <huaweicloud/lts/v2/model/StructTemplate.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新或者查询结构化模板对象
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  StructTemplateModel
    : public ModelBase
{
public:
    StructTemplateModel();
    virtual ~StructTemplateModel();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StructTemplateModel members

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 模板名称
    /// </summary>

    std::string getTemplateName() const;
    bool templateNameIsSet() const;
    void unsettemplateName();
    void setTemplateName(const std::string& value);

    /// <summary>
    /// 模板类型，regex,json,split,nginx
    /// </summary>

    std::string getTemplateType() const;
    bool templateTypeIsSet() const;
    void unsettemplateType();
    void setTemplateType(const std::string& value);

    /// <summary>
    /// 示例日志
    /// </summary>

    std::string getDemoLog() const;
    bool demoLogIsSet() const;
    void unsetdemoLog();
    void setDemoLog(const std::string& value);

    /// <summary>
    /// 示例字段数组
    /// </summary>

    std::vector<DemoField>& getDemoFields();
    bool demoFieldsIsSet() const;
    void unsetdemoFields();
    void setDemoFields(const std::vector<DemoField>& value);

    /// <summary>
    /// Tag字段数组
    /// </summary>

    std::vector<TagFieldNew>& getTagFields();
    bool tagFieldsIsSet() const;
    void unsettagFields();
    void setTagFields(const std::vector<TagFieldNew>& value);

    /// <summary>
    /// 
    /// </summary>

    TemplateRule getRule() const;
    bool ruleIsSet() const;
    void unsetrule();
    void setRule(const TemplateRule& value);

    /// <summary>
    /// 示例日志标签
    /// </summary>

    std::string getDemoLabel() const;
    bool demoLabelIsSet() const;
    void unsetdemoLabel();
    void setDemoLabel(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 模板id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string templateName_;
    bool templateNameIsSet_;
    std::string templateType_;
    bool templateTypeIsSet_;
    std::string demoLog_;
    bool demoLogIsSet_;
    std::vector<DemoField> demoFields_;
    bool demoFieldsIsSet_;
    std::vector<TagFieldNew> tagFields_;
    bool tagFieldsIsSet_;
    TemplateRule rule_;
    bool ruleIsSet_;
    std::string demoLabel_;
    bool demoLabelIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_StructTemplateModel_H_
