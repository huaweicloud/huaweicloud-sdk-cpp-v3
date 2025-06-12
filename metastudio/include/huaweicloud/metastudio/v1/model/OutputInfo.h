
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_OutputInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_OutputInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 输出信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  OutputInfo
    : public ModelBase
{
public:
    OutputInfo();
    virtual ~OutputInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OutputInfo members

    /// <summary>
    /// 面部表情输入地址。
    /// </summary>

    std::string getFaceAddr() const;
    bool faceAddrIsSet() const;
    void unsetfaceAddr();
    void setFaceAddr(const std::string& value);

    /// <summary>
    /// 身体动作输入地址。
    /// </summary>

    std::string getBodyAddr() const;
    bool bodyAddrIsSet() const;
    void unsetbodyAddr();
    void setBodyAddr(const std::string& value);

    /// <summary>
    /// 音频输入地址。
    /// </summary>

    std::string getAudioAddr() const;
    bool audioAddrIsSet() const;
    void unsetaudioAddr();
    void setAudioAddr(const std::string& value);

    /// <summary>
    /// 会话ID。
    /// </summary>

    int32_t getSessionId() const;
    bool sessionIdIsSet() const;
    void unsetsessionId();
    void setSessionId(int32_t value);

    /// <summary>
    /// 输出数据的格式版本，如请求中无此参数，则输出数据格式为1.0，可选值有： 1.0: 对应的输出为：         动作数据：75个骨骼旋转值         表情数据：52ARkit表情及参数 2.0: 对应的输出为：         动作数据：55个骨骼旋转值+骨骼3D坐标         表情数据：178个控制器的数据
    /// </summary>

    std::string getOutputDataVersion() const;
    bool outputDataVersionIsSet() const;
    void unsetoutputDataVersion();
    void setOutputDataVersion(const std::string& value);


protected:
    std::string faceAddr_;
    bool faceAddrIsSet_;
    std::string bodyAddr_;
    bool bodyAddrIsSet_;
    std::string audioAddr_;
    bool audioAddrIsSet_;
    int32_t sessionId_;
    bool sessionIdIsSet_;
    std::string outputDataVersion_;
    bool outputDataVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_OutputInfo_H_
