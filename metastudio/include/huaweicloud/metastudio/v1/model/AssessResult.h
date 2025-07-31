
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AssessResult_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AssessResult_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/AssessProperty.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 音频质量评估结果
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  AssessResult
    : public ModelBase
{
public:
    AssessResult();
    virtual ~AssessResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssessResult members

    /// <summary>
    /// 
    /// </summary>

    AssessProperty getSpeed() const;
    bool speedIsSet() const;
    void unsetspeed();
    void setSpeed(const AssessProperty& value);

    /// <summary>
    /// 
    /// </summary>

    AssessProperty getSound() const;
    bool soundIsSet() const;
    void unsetsound();
    void setSound(const AssessProperty& value);

    /// <summary>
    /// 
    /// </summary>

    AssessProperty getSnr() const;
    bool snrIsSet() const;
    void unsetsnr();
    void setSnr(const AssessProperty& value);

    /// <summary>
    /// 
    /// </summary>

    AssessProperty getReverb() const;
    bool reverbIsSet() const;
    void unsetreverb();
    void setReverb(const AssessProperty& value);

    /// <summary>
    /// 
    /// </summary>

    AssessProperty getDnsmosOvrl() const;
    bool dnsmosOvrlIsSet() const;
    void unsetdnsmosOvrl();
    void setDnsmosOvrl(const AssessProperty& value);

    /// <summary>
    /// 
    /// </summary>

    AssessProperty getDnsmosBak() const;
    bool dnsmosBakIsSet() const;
    void unsetdnsmosBak();
    void setDnsmosBak(const AssessProperty& value);

    /// <summary>
    /// 综合建议
    /// </summary>

    std::string getSuggestion() const;
    bool suggestionIsSet() const;
    void unsetsuggestion();
    void setSuggestion(const std::string& value);


protected:
    AssessProperty speed_;
    bool speedIsSet_;
    AssessProperty sound_;
    bool soundIsSet_;
    AssessProperty snr_;
    bool snrIsSet_;
    AssessProperty reverb_;
    bool reverbIsSet_;
    AssessProperty dnsmosOvrl_;
    bool dnsmosOvrlIsSet_;
    AssessProperty dnsmosBak_;
    bool dnsmosBakIsSet_;
    std::string suggestion_;
    bool suggestionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AssessResult_H_
