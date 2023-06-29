
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateThumbReq_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateThumbReq_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/ObsObjInfo.h>
#include <huaweicloud/mpc/v1/model/ThumbnailPara.h>
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
class HUAWEICLOUD_MPC_V1_EXPORT  CreateThumbReq
    : public ModelBase
{
public:
    CreateThumbReq();
    virtual ~CreateThumbReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateThumbReq members

    /// <summary>
    /// 
    /// </summary>

    ObsObjInfo getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const ObsObjInfo& value);

    /// <summary>
    /// 
    /// </summary>

    ObsObjInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsObjInfo& value);

    /// <summary>
    /// 用户自定义数据。 
    /// </summary>

    std::string getUserData() const;
    bool userDataIsSet() const;
    void unsetuserData();
    void setUserData(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ThumbnailPara getThumbnailPara() const;
    bool thumbnailParaIsSet() const;
    void unsetthumbnailPara();
    void setThumbnailPara(const ThumbnailPara& value);

    /// <summary>
    /// 是否压缩抽帧图片生成tar包。  取值如下： - 0：压缩。 - 1：不压缩 默认值：1 
    /// </summary>

    int32_t getTar() const;
    bool tarIsSet() const;
    void unsettar();
    void setTar(int32_t value);

    /// <summary>
    /// 是否同步处理，同步处理是指不下载全部文件，快速定位到截图位置进行截图。  取值如下： - 0：排队处理。 - 1：同步处理，暂只支持按时间点截单张图。 默认值：0 
    /// </summary>

    int32_t getSync() const;
    bool syncIsSet() const;
    void unsetsync();
    void setSync(int32_t value);

    /// <summary>
    /// 是否使用原始输出目录。  取值如下： - 0：不使用原始输出目录，下发的输出目录后面追加随机目录，防止截图文件outputUri相同被覆盖。 - 1：使用原始输出目录。 默认值：0 
    /// </summary>

    int32_t getOriginalDir() const;
    bool originalDirIsSet() const;
    void unsetoriginalDir();
    void setOriginalDir(int32_t value);


protected:
    ObsObjInfo input_;
    bool inputIsSet_;
    ObsObjInfo output_;
    bool outputIsSet_;
    std::string userData_;
    bool userDataIsSet_;
    ThumbnailPara thumbnailPara_;
    bool thumbnailParaIsSet_;
    int32_t tar_;
    bool tarIsSet_;
    int32_t sync_;
    bool syncIsSet_;
    int32_t originalDir_;
    bool originalDirIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateThumbReq_H_
