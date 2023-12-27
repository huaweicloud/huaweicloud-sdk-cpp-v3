
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_LTSFieldsInfo_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_LTSFieldsInfo_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  LTSFieldsInfo
    : public ModelBase
{
public:
    LTSFieldsInfo();
    virtual ~LTSFieldsInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LTSFieldsInfo members

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
    /// 是否大小写敏感
    /// </summary>

    bool isCaseSensitive() const;
    bool caseSensitiveIsSet() const;
    void unsetcaseSensitive();
    void setCaseSensitive(bool value);

    /// <summary>
    /// 是否包含中文
    /// </summary>

    bool isIncludeChinese() const;
    bool includeChineseIsSet() const;
    void unsetincludeChinese();
    void setIncludeChinese(bool value);

    /// <summary>
    /// 分词符
    /// </summary>

    std::string getTokenizer() const;
    bool tokenizerIsSet() const;
    void unsettokenizer();
    void setTokenizer(const std::string& value);

    /// <summary>
    /// 是否快速分析
    /// </summary>

    bool isQuickAnalysis() const;
    bool quickAnalysisIsSet() const;
    void unsetquickAnalysis();
    void setQuickAnalysis(bool value);

    /// <summary>
    /// 特殊分词符
    /// </summary>

    std::vector<std::string>& getAscii();
    bool asciiIsSet() const;
    void unsetascii();
    void setAscii(const std::vector<std::string>& value);


protected:
    std::string fieldType_;
    bool fieldTypeIsSet_;
    std::string fieldName_;
    bool fieldNameIsSet_;
    bool caseSensitive_;
    bool caseSensitiveIsSet_;
    bool includeChinese_;
    bool includeChineseIsSet_;
    std::string tokenizer_;
    bool tokenizerIsSet_;
    bool quickAnalysis_;
    bool quickAnalysisIsSet_;
    std::vector<std::string> ascii_;
    bool asciiIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_LTSFieldsInfo_H_
