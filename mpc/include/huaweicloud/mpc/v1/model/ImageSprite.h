
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_ImageSprite_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_ImageSprite_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/ObsObjInfo.h>
#include <string>
#include <huaweicloud/mpc/v1/model/ImageSpritePara.h>

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
class HUAWEICLOUD_MPC_V1_EXPORT  ImageSprite
    : public ModelBase
{
public:
    ImageSprite();
    virtual ~ImageSprite();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImageSprite members

    /// <summary>
    /// 
    /// </summary>

    ImageSpritePara getParams() const;
    bool paramsIsSet() const;
    void unsetparams();
    void setParams(const ImageSpritePara& value);

    /// <summary>
    /// 
    /// </summary>

    ObsObjInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsObjInfo& value);

    /// <summary>
    /// 截取雪碧图后，雪碧图图片文件的输出文件名，如果不填，则默认为：{inputName}_imageSprite_{雪碧图id}_{number}.{format}.{雪碧图id}和{number}从0开始递增 
    /// </summary>

    std::string getOutputObjectName() const;
    bool outputObjectNameIsSet() const;
    void unsetoutputObjectName();
    void setOutputObjectName(const std::string& value);

    /// <summary>
    /// 截取雪碧图后，Web VTT 文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：{inputName}_imageSprite_{雪碧图_id}.vtt 
    /// </summary>

    std::string getWebvttObjectName() const;
    bool webvttObjectNameIsSet() const;
    void unsetwebvttObjectName();
    void setWebvttObjectName(const std::string& value);


protected:
    ImageSpritePara params_;
    bool paramsIsSet_;
    ObsObjInfo output_;
    bool outputIsSet_;
    std::string outputObjectName_;
    bool outputObjectNameIsSet_;
    std::string webvttObjectName_;
    bool webvttObjectNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_ImageSprite_H_
