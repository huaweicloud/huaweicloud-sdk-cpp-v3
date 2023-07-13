
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_TranscriberResult_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_TranscriberResult_H_

#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/sis/v1/model/AnalysisInfoResult.h>
#include <vector>
#include <huaweicloud/sis/v1/model/WordInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  TranscriberResult
    : public ModelBase
{
public:
    TranscriberResult();
    virtual ~TranscriberResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// TranscriberResult members

    /// <summary>
    /// 识别结果文本。
    /// </summary>

    std::string getText() const;
    bool textIsSet() const;
    void unsettext();
    void setText(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AnalysisInfoResult getAnalysisInfo() const;
    bool analysisInfoIsSet() const;
    void unsetanalysisInfo();
    void setAnalysisInfo(const AnalysisInfoResult& value);

    /// <summary>
    /// 分词输出列表
    /// </summary>

    std::vector<WordInfo>& getWordInfo();
    bool wordInfoIsSet() const;
    void unsetwordInfo();
    void setWordInfo(const std::vector<WordInfo>& value);


protected:
    std::string text_;
    bool textIsSet_;
    AnalysisInfoResult analysisInfo_;
    bool analysisInfoIsSet_;
    std::vector<WordInfo> wordInfo_;
    bool wordInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_TranscriberResult_H_
