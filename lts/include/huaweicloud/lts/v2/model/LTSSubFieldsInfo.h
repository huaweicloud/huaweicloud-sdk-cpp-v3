
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_LTSSubFieldsInfo_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_LTSSubFieldsInfo_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// json子字段信息
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  LTSSubFieldsInfo
    : public ModelBase
{
public:
    LTSSubFieldsInfo();
    virtual ~LTSSubFieldsInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LTSSubFieldsInfo members

    /// <summary>
    /// 字段类型
    /// </summary>

    std::string getFieldType() const;
    bool fieldTypeIsSet() const;
    void unsetfieldType();
    void setFieldType(const std::string& value);

    /// <summary>
    /// 字段名称
    /// </summary>

    std::string getFieldName() const;
    bool fieldNameIsSet() const;
    void unsetfieldName();
    void setFieldName(const std::string& value);

    /// <summary>
    /// 是否快速分析
    /// </summary>

    bool isQuickAnalysis() const;
    bool quickAnalysisIsSet() const;
    void unsetquickAnalysis();
    void setQuickAnalysis(bool value);

    /// <summary>
    /// **参数解释：** 别名，设置别名后，只支持使用别名进行SQL搜索分析，不支持使用别名进行关键字搜索。 **约束限制：** 不涉及。 **取值范围：** 长度不能大于256。 **默认取值：** 不涉及。
    /// </summary>

    std::string getFieldAnalysisAlias() const;
    bool fieldAnalysisAliasIsSet() const;
    void unsetfieldAnalysisAlias();
    void setFieldAnalysisAlias(const std::string& value);


protected:
    std::string fieldType_;
    bool fieldTypeIsSet_;
    std::string fieldName_;
    bool fieldNameIsSet_;
    bool quickAnalysis_;
    bool quickAnalysisIsSet_;
    std::string fieldAnalysisAlias_;
    bool fieldAnalysisAliasIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_LTSSubFieldsInfo_H_
