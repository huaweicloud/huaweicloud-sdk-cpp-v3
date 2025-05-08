
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ThumbnailTask_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ThumbnailTask_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/vod/v1/model/ThumbnailTaskOutPut.h>

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
class HUAWEICLOUD_VOD_V1_EXPORT  ThumbnailTask
    : public ModelBase
{
public:
    ThumbnailTask();
    virtual ~ThumbnailTask();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ThumbnailTask members

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

    ThumbnailTaskOutPut getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ThumbnailTaskOutPut& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string errorMsg_;
    bool errorMsgIsSet_;
    ThumbnailTaskOutPut output_;
    bool outputIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ThumbnailTask_H_
