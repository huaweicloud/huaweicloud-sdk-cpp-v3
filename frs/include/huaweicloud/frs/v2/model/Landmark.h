
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_Landmark_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_Landmark_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/frs/v2/model/Point.h>
#include <map>
#include <vector>

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
class HUAWEICLOUD_FRS_V2_EXPORT  Landmark
    : public ModelBase
{
public:
    Landmark();
    virtual ~Landmark();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Landmark members

    /// <summary>
    /// 眼睛轮廓，Point为轮廓坐标值。
    /// </summary>

    std::vector<Point>& getEyesContour();
    bool eyesContourIsSet() const;
    void unseteyesContour();
    void setEyesContour(const std::vector<Point>& value);

    /// <summary>
    /// 嘴巴轮廓，Point为轮廓坐标值。
    /// </summary>

    std::vector<Point>& getMouthContour();
    bool mouthContourIsSet() const;
    void unsetmouthContour();
    void setMouthContour(const std::vector<Point>& value);

    /// <summary>
    /// 人脸轮廓，Point为轮廓坐标值。
    /// </summary>

    std::vector<Point>& getFaceContour();
    bool faceContourIsSet() const;
    void unsetfaceContour();
    void setFaceContour(const std::vector<Point>& value);

    /// <summary>
    /// 眉毛轮廓，Point为轮廓坐标值。
    /// </summary>

    std::vector<std::map<std::string, Point>>& getEyebrowContour();
    bool eyebrowContourIsSet() const;
    void unseteyebrowContour();
    void setEyebrowContour(const std::vector<std::map<std::string, Point>>& value);

    /// <summary>
    /// 鼻子轮廓，Point为轮廓坐标值。
    /// </summary>

    std::vector<Point>& getNoseContour();
    bool noseContourIsSet() const;
    void unsetnoseContour();
    void setNoseContour(const std::vector<Point>& value);


protected:
    std::vector<Point> eyesContour_;
    bool eyesContourIsSet_;
    std::vector<Point> mouthContour_;
    bool mouthContourIsSet_;
    std::vector<Point> faceContour_;
    bool faceContourIsSet_;
    std::vector<std::map<std::string, Point>> eyebrowContour_;
    bool eyebrowContourIsSet_;
    std::vector<Point> noseContour_;
    bool noseContourIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_Landmark_H_
