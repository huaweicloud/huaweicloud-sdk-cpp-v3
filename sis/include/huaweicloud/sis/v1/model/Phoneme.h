
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_Phoneme_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_Phoneme_H_

#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sis/v1/model/PhonemeFluency.h>
#include <string>
#include <huaweicloud/sis/v1/model/PhonemePronunciation.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 单个音素的发音评测结果
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  Phoneme
    : public ModelBase
{
public:
    Phoneme();
    virtual ~Phoneme();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Phoneme members

    /// <summary>
    /// 音标（ARPAbet音标系统）
    /// </summary>

    std::string getArpa() const;
    bool arpaIsSet() const;
    void unsetarpa();
    void setArpa(const std::string& value);

    /// <summary>
    /// 音标（国际音标系统）
    /// </summary>

    std::string getIpa() const;
    bool ipaIsSet() const;
    void unsetipa();
    void setIpa(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    float getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(float value);

    /// <summary>
    /// 
    /// </summary>

    float getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(float value);

    /// <summary>
    /// 
    /// </summary>

    PhonemeFluency getFluency() const;
    bool fluencyIsSet() const;
    void unsetfluency();
    void setFluency(const PhonemeFluency& value);

    /// <summary>
    /// 
    /// </summary>

    PhonemePronunciation getPronunciation() const;
    bool pronunciationIsSet() const;
    void unsetpronunciation();
    void setPronunciation(const PhonemePronunciation& value);


protected:
    std::string arpa_;
    bool arpaIsSet_;
    std::string ipa_;
    bool ipaIsSet_;
    float startTime_;
    bool startTimeIsSet_;
    float endTime_;
    bool endTimeIsSet_;
    PhonemeFluency fluency_;
    bool fluencyIsSet_;
    PhonemePronunciation pronunciation_;
    bool pronunciationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_Phoneme_H_
