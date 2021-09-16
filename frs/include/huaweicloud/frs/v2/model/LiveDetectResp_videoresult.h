
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_LiveDetectResp_videoresult_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_LiveDetectResp_videoresult_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/frs/v2/model/ActionsList.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 活体检测结果，VideoDetectResult结构见[VideoDetectResult](https://support.huaweicloud.com/api-face/face_02_0010.html)。 调用失败时无此字段。
/// </summary>
class HUAWEICLOUD_FRS_V2_EXPORT  LiveDetectResp_videoresult
    : public ModelBase
{
public:
    LiveDetectResp_videoresult();
    virtual ~LiveDetectResp_videoresult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// LiveDetectResp_videoresult members

    /// <summary>
    /// 是否是活体。
    /// </summary>

    bool isAlive() const;
    bool aliveIsSet() const;
    void unsetalive();
    void setAlive(bool value);

    /// <summary>
    /// 动作列表。
    /// </summary>

    std::vector<ActionsList>& getActions();
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::vector<ActionsList>& value);

    /// <summary>
    /// 检测出最大人脸的图片base64。
    /// </summary>

    std::string getPicture() const;
    bool pictureIsSet() const;
    void unsetpicture();
    void setPicture(const std::string& value);


protected:
    bool alive_;
    bool aliveIsSet_;
    std::vector<ActionsList> actions_;
    bool actionsIsSet_;
    std::string picture_;
    bool pictureIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_LiveDetectResp_videoresult_H_
