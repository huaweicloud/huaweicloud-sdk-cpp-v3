
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_Fluency_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_Fluency_H_

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
/// 整体流利度打分
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  Fluency
    : public ModelBase
{
public:
    Fluency();
    virtual ~Fluency();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Fluency members

    /// <summary>
    /// 流利度综合得分 0-100
    /// </summary>

    float getScore() const;
    bool scoreIsSet() const;
    void unsetscore();
    void setScore(float value);

    /// <summary>
    /// 韵律得分 0-100 韵律指音素在单词和句子中的发音长度是否得当
    /// </summary>

    float getRhythm() const;
    bool rhythmIsSet() const;
    void unsetrhythm();
    void setRhythm(float value);

    /// <summary>
    /// 连贯性得分 0-100
    /// </summary>

    float getCohesion() const;
    bool cohesionIsSet() const;
    void unsetcohesion();
    void setCohesion(float value);


protected:
    float score_;
    bool scoreIsSet_;
    float rhythm_;
    bool rhythmIsSet_;
    float cohesion_;
    bool cohesionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_Fluency_H_
