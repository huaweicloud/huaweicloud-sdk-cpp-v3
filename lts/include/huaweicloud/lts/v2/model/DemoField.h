
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_DemoField_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_DemoField_H_


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
/// 示例字段对象
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  DemoField
    : public ModelBase
{
public:
    DemoField();
    virtual ~DemoField();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DemoField members

    /// <summary>
    /// 字段名称
    /// </summary>

    std::string getFieldName() const;
    bool fieldNameIsSet() const;
    void unsetfieldName();
    void setFieldName(const std::string& value);

    /// <summary>
    /// 字段示例内容
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);

    /// <summary>
    /// 字段数据类型。 可选范围：string、long、float
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 是否开启快速分析
    /// </summary>

    bool isIsAnalysis() const;
    bool isAnalysisIsSet() const;
    void unsetisAnalysis();
    void setIsAnalysis(bool value);

    /// <summary>
    /// 手动正则及分隔符方式中字段序号
    /// </summary>

    int32_t getIndex() const;
    bool indexIsSet() const;
    void unsetindex();
    void setIndex(int32_t value);

    /// <summary>
    /// 描叙多层级json中字段间的层级关系
    /// </summary>

    std::string getRelation() const;
    bool relationIsSet() const;
    void unsetrelation();
    void setRelation(const std::string& value);

    /// <summary>
    /// json及nginx方式中字段自定义别名
    /// </summary>

    std::string getUserDefinedName() const;
    bool userDefinedNameIsSet() const;
    void unsetuserDefinedName();
    void setUserDefinedName(const std::string& value);


protected:
    std::string fieldName_;
    bool fieldNameIsSet_;
    std::string content_;
    bool contentIsSet_;
    std::string type_;
    bool typeIsSet_;
    bool isAnalysis_;
    bool isAnalysisIsSet_;
    int32_t index_;
    bool indexIsSet_;
    std::string relation_;
    bool relationIsSet_;
    std::string userDefinedName_;
    bool userDefinedNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_DemoField_H_
