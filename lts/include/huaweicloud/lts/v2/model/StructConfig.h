
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_StructConfig_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_StructConfig_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/FieldModel.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 结构化配置参数体
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  StructConfig
    : public ModelBase
{
public:
    StructConfig();
    virtual ~StructConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StructConfig members

    /// <summary>
    /// 日志组ID，获取方式请参见：获取账号ID、项目ID、日志组ID、日志流ID（https://support.huaweicloud.com/api-lts/lts_api_0006.html）。
    /// </summary>

    std::string getLogGroupId() const;
    bool logGroupIdIsSet() const;
    void unsetlogGroupId();
    void setLogGroupId(const std::string& value);

    /// <summary>
    /// 日志流ID，获取方式请参见：获取账号ID、项目ID、日志组ID、日志流ID（https://support.huaweicloud.com/api-lts/lts_api_0006.html）。
    /// </summary>

    std::string getLogStreamId() const;
    bool logStreamIdIsSet() const;
    void unsetlogStreamId();
    void setLogStreamId(const std::string& value);

    /// <summary>
    /// 所用模板id。当使用系统模板时，当前属性可以为空
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);

    /// <summary>
    /// 所用模板名称，会对模板名称及id进行校验
    /// </summary>

    std::string getTemplateName() const;
    bool templateNameIsSet() const;
    void unsettemplateName();
    void setTemplateName(const std::string& value);

    /// <summary>
    /// 所用模板类型，分为built_in及custom两种类型，对应系统模板和自定义模板，系统模板分为CTS，VPC和ELB三种。
    /// </summary>

    std::string getTemplateType() const;
    bool templateTypeIsSet() const;
    void unsettemplateType();
    void setTemplateType(const std::string& value);

    /// <summary>
    /// 示例字段数组，只需要填写与模板中is_analysis状态不同的字段
    /// </summary>

    std::vector<FieldModel>& getDemoFields();
    bool demoFieldsIsSet() const;
    void unsetdemoFields();
    void setDemoFields(const std::vector<FieldModel>& value);

    /// <summary>
    /// Tag字段数组，只需要填写与模板中is_analysis状态不同的字段
    /// </summary>

    std::vector<FieldModel>& getTagFields();
    bool tagFieldsIsSet() const;
    void unsettagFields();
    void setTagFields(const std::vector<FieldModel>& value);

    /// <summary>
    /// 是否开启demo_fields和tag_fields快速分析,为true时，所有的demo_fields和tag_fields全部字段均打开快速分析;不填或者为false，以模板中的demo_fields和tag_fields中的is_analysis决定是否开启快速分析。
    /// </summary>

    bool isQuickAnalysis() const;
    bool quickAnalysisIsSet() const;
    void unsetquickAnalysis();
    void setQuickAnalysis(bool value);


protected:
    std::string logGroupId_;
    bool logGroupIdIsSet_;
    std::string logStreamId_;
    bool logStreamIdIsSet_;
    std::string templateId_;
    bool templateIdIsSet_;
    std::string templateName_;
    bool templateNameIsSet_;
    std::string templateType_;
    bool templateTypeIsSet_;
    std::vector<FieldModel> demoFields_;
    bool demoFieldsIsSet_;
    std::vector<FieldModel> tagFields_;
    bool tagFieldsIsSet_;
    bool quickAnalysis_;
    bool quickAnalysisIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_StructConfig_H_
