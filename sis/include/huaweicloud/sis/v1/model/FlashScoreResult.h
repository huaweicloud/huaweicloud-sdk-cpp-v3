
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_FlashScoreResult_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_FlashScoreResult_H_


#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
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
class HUAWEICLOUD_SIS_V1_EXPORT  FlashScoreResult
    : public ModelBase
{
public:
    FlashScoreResult();
    virtual ~FlashScoreResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FlashScoreResult members

    /// <summary>
    /// 调用成功表示识别出的内容。
    /// </summary>

    std::string getText() const;
    bool textIsSet() const;
    void unsettext();
    void setText(const std::string& value);

    /// <summary>
    /// 调用成功表示识别出的置信度，取值范围：0~1。
    /// </summary>

    double getScore() const;
    bool scoreIsSet() const;
    void unsetscore();
    void setScore(double value);

    /// <summary>
    /// 分词信息列表
    /// </summary>

    std::vector<WordInfo>& getWordInfo();
    bool wordInfoIsSet() const;
    void unsetwordInfo();
    void setWordInfo(const std::vector<WordInfo>& value);


protected:
    std::string text_;
    bool textIsSet_;
    double score_;
    bool scoreIsSet_;
    std::vector<WordInfo> wordInfo_;
    bool wordInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_FlashScoreResult_H_
