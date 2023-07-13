
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_FaceQuality_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_FaceQuality_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_FRS_V2_EXPORT  FaceQuality
    : public ModelBase
{
public:
    FaceQuality();
    virtual ~FaceQuality();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// FaceQuality members

    /// <summary>
    /// 人脸质量总分，取值范围[0-1]，分值越大质量越高。
    /// </summary>

    double getTotalScore() const;
    bool totalScoreIsSet() const;
    void unsettotalScore();
    void setTotalScore(double value);

    /// <summary>
    /// 模糊度，取值范围[0-1]，分值越大模糊问题越严重。
    /// </summary>

    double getBlur() const;
    bool blurIsSet() const;
    void unsetblur();
    void setBlur(double value);

    /// <summary>
    /// 姿态，取值范围[0-1]，分值越大姿态问题越严重。
    /// </summary>

    double getPose() const;
    bool poseIsSet() const;
    void unsetpose();
    void setPose(double value);

    /// <summary>
    /// 遮挡，取值范围[0-1]，分值越大遮挡问题越严重。
    /// </summary>

    double getOcclusion() const;
    bool occlusionIsSet() const;
    void unsetocclusion();
    void setOcclusion(double value);

    /// <summary>
    /// 光照，取值范围[0-1]，分值越大光照问题越严重。
    /// </summary>

    double getIllumination() const;
    bool illuminationIsSet() const;
    void unsetillumination();
    void setIllumination(double value);


protected:
    double totalScore_;
    bool totalScoreIsSet_;
    double blur_;
    bool blurIsSet_;
    double pose_;
    bool poseIsSet_;
    double occlusion_;
    bool occlusionIsSet_;
    double illumination_;
    bool illuminationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_FaceQuality_H_
