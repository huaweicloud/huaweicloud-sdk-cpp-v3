
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ReplyAudioInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ReplyAudioInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 回复音频信息
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ReplyAudioInfo
    : public ModelBase
{
public:
    ReplyAudioInfo();
    virtual ~ReplyAudioInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReplyAudioInfo members

    /// <summary>
    /// 音频URL
    /// </summary>

    std::string getAudioUrl() const;
    bool audioUrlIsSet() const;
    void unsetaudioUrl();
    void setAudioUrl(const std::string& value);

    /// <summary>
    /// 音频名
    /// </summary>

    std::string getAudioName() const;
    bool audioNameIsSet() const;
    void unsetaudioName();
    void setAudioName(const std::string& value);


protected:
    std::string audioUrl_;
    bool audioUrlIsSet_;
    std::string audioName_;
    bool audioNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ReplyAudioInfo_H_
