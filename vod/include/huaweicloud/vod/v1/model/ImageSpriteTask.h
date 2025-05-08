
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ImageSpriteTask_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ImageSpriteTask_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/ImageSpriteTaskOutPut.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ImageSpriteTask
    : public ModelBase
{
public:
    ImageSpriteTask();
    virtual ~ImageSpriteTask();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImageSpriteTask members

    /// <summary>
    /// 任务状态，包含成功，失败
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 错误码
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// 错误信息
    /// </summary>

    std::string getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ImageSpriteTaskOutPut getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ImageSpriteTaskOutPut& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string errorMsg_;
    bool errorMsgIsSet_;
    ImageSpriteTaskOutPut output_;
    bool outputIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ImageSpriteTask_H_
