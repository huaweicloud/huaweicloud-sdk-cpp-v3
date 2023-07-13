
#ifndef HUAWEICLOUD_SDK_IVS_V2_MODEL_VideoResult_H_
#define HUAWEICLOUD_SDK_IVS_V2_MODEL_VideoResult_H_

#include <huaweicloud/ivs/v2/IvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ivs/v2/model/ActionsList.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IVS_V2_EXPORT  VideoResult
    : public ModelBase
{
public:
    VideoResult();
    virtual ~VideoResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// VideoResult members

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

#endif // HUAWEICLOUD_SDK_IVS_V2_MODEL_VideoResult_H_
