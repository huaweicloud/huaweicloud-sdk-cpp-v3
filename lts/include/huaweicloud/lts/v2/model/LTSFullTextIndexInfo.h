
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_LTSFullTextIndexInfo_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_LTSFullTextIndexInfo_H_


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
class HUAWEICLOUD_LTS_V2_EXPORT  LTSFullTextIndexInfo
    : public ModelBase
{
public:
    LTSFullTextIndexInfo();
    virtual ~LTSFullTextIndexInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LTSFullTextIndexInfo members

    /// <summary>
    /// 是否开启全文索引
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);

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
    /// 自定义分词符
    /// </summary>

    std::string getTokenizer() const;
    bool tokenizerIsSet() const;
    void unsettokenizer();
    void setTokenizer(const std::string& value);

    /// <summary>
    /// 特殊分词符
    /// </summary>

    std::vector<std::string>& getAscii();
    bool asciiIsSet() const;
    void unsetascii();
    void setAscii(const std::vector<std::string>& value);


protected:
    bool enable_;
    bool enableIsSet_;
    bool caseSensitive_;
    bool caseSensitiveIsSet_;
    bool includeChinese_;
    bool includeChineseIsSet_;
    std::string tokenizer_;
    bool tokenizerIsSet_;
    std::vector<std::string> ascii_;
    bool asciiIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_LTSFullTextIndexInfo_H_
