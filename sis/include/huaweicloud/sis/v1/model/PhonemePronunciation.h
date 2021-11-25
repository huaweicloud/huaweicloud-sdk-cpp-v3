
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_PhonemePronunciation_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_PhonemePronunciation_H_

#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 音素的发音打分
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  PhonemePronunciation
    : public ModelBase
{
public:
    PhonemePronunciation();
    virtual ~PhonemePronunciation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PhonemePronunciation members

    /// <summary>
    /// 
    /// </summary>

    float getScore() const;
    bool scoreIsSet() const;
    void unsetscore();
    void setScore(float value);

    /// <summary>
    /// 
    /// </summary>

    float getGop() const;
    bool gopIsSet() const;
    void unsetgop();
    void setGop(float value);


protected:
    float score_;
    bool scoreIsSet_;
    float gop_;
    bool gopIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_PhonemePronunciation_H_
