
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_Thumbnail_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_Thumbnail_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/ObsObjInfo.h>
#include <huaweicloud/mpc/v1/model/ThumbnailPara.h>

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
class HUAWEICLOUD_MPC_V1_EXPORT  Thumbnail
    : public ModelBase
{
public:
    Thumbnail();
    virtual ~Thumbnail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Thumbnail members

    /// <summary>
    /// 是否压缩抽帧图片生成tar包 - 0：表示压缩 - 1：表示不压缩 
    /// </summary>

    int32_t getTar() const;
    bool tarIsSet() const;
    void unsettar();
    void setTar(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    ObsObjInfo getOut() const;
    bool outIsSet() const;
    void unsetout();
    void setOut(const ObsObjInfo& value);

    /// <summary>
    /// 
    /// </summary>

    ThumbnailPara getParams() const;
    bool paramsIsSet() const;
    void unsetparams();
    void setParams(const ThumbnailPara& value);


protected:
    int32_t tar_;
    bool tarIsSet_;
    ObsObjInfo out_;
    bool outIsSet_;
    ThumbnailPara params_;
    bool paramsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_Thumbnail_H_
