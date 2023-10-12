
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_FieldModel_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_FieldModel_H_


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
/// 创建结构化模板中的字段模型
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  FieldModel
    : public ModelBase
{
public:
    FieldModel();
    virtual ~FieldModel();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FieldModel members

    /// <summary>
    /// 字段名称
    /// </summary>

    std::string getFieldName() const;
    bool fieldNameIsSet() const;
    void unsetfieldName();
    void setFieldName(const std::string& value);

    /// <summary>
    /// 是否开启快速分析。
    /// </summary>

    bool isIsAnalysis() const;
    bool isAnalysisIsSet() const;
    void unsetisAnalysis();
    void setIsAnalysis(bool value);


protected:
    std::string fieldName_;
    bool fieldNameIsSet_;
    bool isAnalysis_;
    bool isAnalysisIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_FieldModel_H_
