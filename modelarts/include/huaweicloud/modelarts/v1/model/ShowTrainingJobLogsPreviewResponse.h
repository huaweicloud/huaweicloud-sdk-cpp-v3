
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingJobLogsPreviewResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingJobLogsPreviewResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowTrainingJobLogsPreviewResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTrainingJobLogsPreviewResponse();
    virtual ~ShowTrainingJobLogsPreviewResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTrainingJobLogsPreviewResponse members

    /// <summary>
    /// 日志内容。如果日志大小没有超过上限（n兆）则返回全部内容，如果日志超过了上限（n兆）则返回最新的n兆的日志。2022/03/01 00:00:00 (GMT+08:00)后，此参数名称由“context”改为“content”。
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);

    /// <summary>
    /// 当前返回的日志大小（单位：字节）。最大为5兆。
    /// </summary>

    int32_t getCurrentSize() const;
    bool currentSizeIsSet() const;
    void unsetcurrentSize();
    void setCurrentSize(int32_t value);

    /// <summary>
    /// 完整的日志大小（单位：字节）。
    /// </summary>

    int32_t getFullSize() const;
    bool fullSizeIsSet() const;
    void unsetfullSize();
    void setFullSize(int32_t value);


protected:
    std::string content_;
    bool contentIsSet_;
    int32_t currentSize_;
    bool currentSizeIsSet_;
    int32_t fullSize_;
    bool fullSizeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingJobLogsPreviewResponse_H_
