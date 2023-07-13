
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_Pronunciation_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_Pronunciation_H_

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
/// 整体发音打分
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  Pronunciation
    : public ModelBase
{
public:
    Pronunciation();
    virtual ~Pronunciation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Pronunciation members

    /// <summary>
    /// 发音质量综合得分 0-100
    /// </summary>

    float getScore() const;
    bool scoreIsSet() const;
    void unsetscore();
    void setScore(float value);

    /// <summary>
    /// 发音质量好坏 0-100
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

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_Pronunciation_H_
