
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_LiveDetectFaceResp_result_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_LiveDetectFaceResp_result_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 静默活体检测结果，LivelessDetectResult结构见表[结构格式说明表](https://support.huaweicloud.com/api-face/face_02_0102.html#face_02_0102__table112325301714)。 调用失败时无此字段。
/// </summary>
class HUAWEICLOUD_FRS_V2_EXPORT  LiveDetectFaceResp_result
    : public ModelBase
{
public:
    LiveDetectFaceResp_result();
    virtual ~LiveDetectFaceResp_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// LiveDetectFaceResp_result members

    /// <summary>
    /// 是否是活体。
    /// </summary>

    bool isAlive() const;
    bool aliveIsSet() const;
    void unsetalive();
    void setAlive(bool value);

    /// <summary>
    /// 置信度，取值范围0～1。
    /// </summary>

    double getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(double value);

    /// <summary>
    /// 检测出最大人脸的图片base64字符串。
    /// </summary>

    std::string getPicture() const;
    bool pictureIsSet() const;
    void unsetpicture();
    void setPicture(const std::string& value);


protected:
    bool alive_;
    bool aliveIsSet_;
    double confidence_;
    bool confidenceIsSet_;
    std::string picture_;
    bool pictureIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_LiveDetectFaceResp_result_H_
