
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_StructFieldInfo_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_StructFieldInfo_H_


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
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  StructFieldInfo
    : public ModelBase
{
public:
    StructFieldInfo();
    virtual ~StructFieldInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StructFieldInfo members

    /// <summary>
    /// 结构化方式
    /// </summary>

    bool isIsAnalysis() const;
    bool isAnalysisIsSet() const;
    void unsetisAnalysis();
    void setIsAnalysis(bool value);

    /// <summary>
    /// 字段内容
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);

    /// <summary>
    /// 字段名称
    /// </summary>

    std::string getFieldName() const;
    bool fieldNameIsSet() const;
    void unsetfieldName();
    void setFieldName(const std::string& value);

    /// <summary>
    /// 字段数据类型,例：string，long，float
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 自定义别名(json方式中按需添加)
    /// </summary>

    std::string getUserDefinedName() const;
    bool userDefinedNameIsSet() const;
    void unsetuserDefinedName();
    void setUserDefinedName(const std::string& value);

    /// <summary>
    /// 序号
    /// </summary>

    int32_t getIndex() const;
    bool indexIsSet() const;
    void unsetindex();
    void setIndex(int32_t value);


protected:
    bool isAnalysis_;
    bool isAnalysisIsSet_;
    std::string content_;
    bool contentIsSet_;
    std::string fieldName_;
    bool fieldNameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string userDefinedName_;
    bool userDefinedNameIsSet_;
    int32_t index_;
    bool indexIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_StructFieldInfo_H_
