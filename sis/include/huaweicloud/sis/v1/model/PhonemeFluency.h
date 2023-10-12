
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_PhonemeFluency_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_PhonemeFluency_H_


#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
///  音素的流利度打分
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  PhonemeFluency
    : public ModelBase
{
public:
    PhonemeFluency();
    virtual ~PhonemeFluency();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PhonemeFluency members

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

    float getRhythm() const;
    bool rhythmIsSet() const;
    void unsetrhythm();
    void setRhythm(float value);


protected:
    float score_;
    bool scoreIsSet_;
    float rhythm_;
    bool rhythmIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_PhonemeFluency_H_
