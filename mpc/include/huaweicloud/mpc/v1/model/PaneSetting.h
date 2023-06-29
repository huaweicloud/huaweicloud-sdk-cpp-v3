
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_PaneSetting_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_PaneSetting_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  PaneSetting
    : public ModelBase
{
public:
    PaneSetting();
    virtual ~PaneSetting();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PaneSetting members

    /// <summary>
    /// 原视频的id。
    /// </summary>

    std::string getPaneId() const;
    bool paneIdIsSet() const;
    void unsetpaneId();
    void setPaneId(const std::string& value);

    /// <summary>
    /// pane_id标记的原视频起点，在合成视频中相对于左下角的水平偏移量。 目前只支持小数类型，表示相对于输出视频宽的水平偏移比率。取值范围(0,1)。
    /// </summary>

    std::string getX() const;
    bool XIsSet() const;
    void unsetx();
    void setX(const std::string& value);

    /// <summary>
    /// pane_id标记的原视频，在合成视频中相对于左下角的垂直偏移量。 目前只支持小数型，表示相对于输出视频高的垂直偏移比率。取值范围:(0,1)。
    /// </summary>

    std::string getY() const;
    bool YIsSet() const;
    void unsety();
    void setY(const std::string& value);

    /// <summary>
    /// pane_id标记的原视频，在合成视频中占的宽。目前只支持小数型，范围(0,1)，表示占据合成视频宽的比率。 
    /// </summary>

    std::string getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(const std::string& value);

    /// <summary>
    /// pane_id标记的原视频，在合成视频中占的高。目前只支持小数型，范围(0,1)，表示占据合成视频高的比率。 
    /// </summary>

    std::string getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(const std::string& value);


protected:
    std::string paneId_;
    bool paneIdIsSet_;
    std::string x_;
    bool xIsSet_;
    std::string y_;
    bool yIsSet_;
    std::string width_;
    bool widthIsSet_;
    std::string height_;
    bool heightIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_PaneSetting_H_
