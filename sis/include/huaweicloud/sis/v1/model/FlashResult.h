
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_FlashResult_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_FlashResult_H_

#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sis/v1/model/Sentences.h>
#include <vector>

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
class HUAWEICLOUD_SIS_V1_EXPORT  FlashResult
    : public ModelBase
{
public:
    FlashResult();
    virtual ~FlashResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// FlashResult members

    /// <summary>
    /// 音频声道id
    /// </summary>

    int32_t getChannelId() const;
    bool channelIdIsSet() const;
    void unsetchannelId();
    void setChannelId(int32_t value);

    /// <summary>
    /// 分句结果
    /// </summary>

    std::vector<Sentences>& getSentences();
    bool sentencesIsSet() const;
    void unsetsentences();
    void setSentences(const std::vector<Sentences>& value);


protected:
    int32_t channelId_;
    bool channelIdIsSet_;
    std::vector<Sentences> sentences_;
    bool sentencesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_FlashResult_H_
