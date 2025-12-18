
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_UploadFileResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_UploadFileResponse_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/meeting/v1/model/ImageModerationResult.h>
#include <huaweicloud/meeting/v1/model/OpenUploadFileInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  UploadFileResponse
    : public ModelBase, public HttpResponse
{
public:
    UploadFileResponse();
    virtual ~UploadFileResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UploadFileResponse members

    /// <summary>
    /// 文件Id。
    /// </summary>

    std::string getFileId() const;
    bool fileIdIsSet() const;
    void unsetfileId();
    void setFileId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ImageModerationResult getImageModeration() const;
    bool imageModerationIsSet() const;
    void unsetimageModeration();
    void setImageModeration(const ImageModerationResult& value);


protected:
    std::string fileId_;
    bool fileIdIsSet_;
    ImageModerationResult imageModeration_;
    bool imageModerationIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_UploadFileResponse_H_
