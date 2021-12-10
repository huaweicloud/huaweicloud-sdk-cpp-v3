
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_Attributes_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_Attributes_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/frs/v2/model/Attributes_expression.h>
#include <string>
#include <huaweicloud/frs/v2/model/Dress.h>
#include <huaweicloud/frs/v2/model/FaceQuality.h>

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
class HUAWEICLOUD_FRS_V2_EXPORT  Attributes
    : public ModelBase
{
public:
    Attributes();
    virtual ~Attributes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Attributes members

    /// <summary>
    /// 
    /// </summary>

    Dress getDress() const;
    bool dressIsSet() const;
    void unsetdress();
    void setDress(const Dress& value);

    /// <summary>
    /// 是否带眼镜： • yes：带眼镜 • dark：带墨镜 • none：未戴眼镜 • unknown：未知
    /// </summary>

    std::string getGlass() const;
    bool glassIsSet() const;
    void unsetglass();
    void setGlass(const std::string& value);

    /// <summary>
    /// 是否戴帽子： • yes：戴帽子 • none：未戴帽子 • unknown：未知
    /// </summary>

    std::string getHat() const;
    bool hatIsSet() const;
    void unsethat();
    void setHat(const std::string& value);

    /// <summary>
    /// 年龄。
    /// </summary>

    int32_t getAge() const;
    bool ageIsSet() const;
    void unsetage();
    void setAge(int32_t value);

    /// <summary>
    /// 是否戴口罩： • yes：戴口罩 • none：未戴口罩 • unknown：未知
    /// </summary>

    std::string getMask() const;
    bool maskIsSet() const;
    void unsetmask();
    void setMask(const std::string& value);

    /// <summary>
    /// 胡须： • yes：有胡须 • none：无胡须 • unknown：未知
    /// </summary>

    std::string getBeard() const;
    bool beardIsSet() const;
    void unsetbeard();
    void setBeard(const std::string& value);

    /// <summary>
    /// 图片类型： • idcard：证件照 • monitor：摄像头监控 • internet photo：网络图片
    /// </summary>

    std::string getPhototype() const;
    bool phototypeIsSet() const;
    void unsetphototype();
    void setPhototype(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    FaceQuality getQuality() const;
    bool qualityIsSet() const;
    void unsetquality();
    void setQuality(const FaceQuality& value);

    /// <summary>
    /// 发型： • long：长发 • short：短发 • unknown：未知
    /// </summary>

    std::string getHair() const;
    bool hairIsSet() const;
    void unsethair();
    void setHair(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Attributes_expression getExpression() const;
    bool expressionIsSet() const;
    void unsetexpression();
    void setExpression(const Attributes_expression& value);

    /// <summary>
    /// 人脸图片旋转角（顺时针偏转角度），支持0°、90°、180°和270°图片旋转。
    /// </summary>

    int32_t getFaceAngle() const;
    bool faceAngleIsSet() const;
    void unsetfaceAngle();
    void setFaceAngle(int32_t value);


protected:
    Dress dress_;
    bool dressIsSet_;
    std::string glass_;
    bool glassIsSet_;
    std::string hat_;
    bool hatIsSet_;
    int32_t age_;
    bool ageIsSet_;
    std::string mask_;
    bool maskIsSet_;
    std::string beard_;
    bool beardIsSet_;
    std::string phototype_;
    bool phototypeIsSet_;
    FaceQuality quality_;
    bool qualityIsSet_;
    std::string hair_;
    bool hairIsSet_;
    Attributes_expression expression_;
    bool expressionIsSet_;
    int32_t faceAngle_;
    bool faceAngleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_Attributes_H_
