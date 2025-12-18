
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ListMeetingFileResponseDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ListMeetingFileResponseDTO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/meeting/v1/model/MeetingFileBase.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 会议纪要信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ListMeetingFileResponseDTO
    : public ModelBase
{
public:
    ListMeetingFileResponseDTO();
    virtual ~ListMeetingFileResponseDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListMeetingFileResponseDTO members

    /// <summary>
    /// 会议纪要文件码。
    /// </summary>

    std::string getFileCode() const;
    bool fileCodeIsSet() const;
    void unsetfileCode();
    void setFileCode(const std::string& value);

    /// <summary>
    /// 文件主题。
    /// </summary>

    std::string getTopic() const;
    bool topicIsSet() const;
    void unsettopic();
    void setTopic(const std::string& value);

    /// <summary>
    /// 文件Id。
    /// </summary>

    std::string getFileId() const;
    bool fileIdIsSet() const;
    void unsetfileId();
    void setFileId(const std::string& value);

    /// <summary>
    /// 文件名。
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// 文件大小，单位字节。
    /// </summary>

    int64_t getFileSize() const;
    bool fileSizeIsSet() const;
    void unsetfileSize();
    void setFileSize(int64_t value);

    /// <summary>
    /// 缩略图文件Id。
    /// </summary>

    std::string getThumbnailFileId() const;
    bool thumbnailFileIdIsSet() const;
    void unsetthumbnailFileId();
    void setThumbnailFileId(const std::string& value);

    /// <summary>
    /// 缩略图文件名。
    /// </summary>

    std::string getThumbnailFileName() const;
    bool thumbnailFileNameIsSet() const;
    void unsetthumbnailFileName();
    void setThumbnailFileName(const std::string& value);

    /// <summary>
    /// 缩略图文件大小，单位字节。
    /// </summary>

    int64_t getThumbnailFileSize() const;
    bool thumbnailFileSizeIsSet() const;
    void unsetthumbnailFileSize();
    void setThumbnailFileSize(int64_t value);

    /// <summary>
    /// pdf文件Id。
    /// </summary>

    std::string getPdfFileId() const;
    bool pdfFileIdIsSet() const;
    void unsetpdfFileId();
    void setPdfFileId(const std::string& value);

    /// <summary>
    /// pdf文件名。
    /// </summary>

    std::string getPdfFileName() const;
    bool pdfFileNameIsSet() const;
    void unsetpdfFileName();
    void setPdfFileName(const std::string& value);

    /// <summary>
    /// pdf文件大小，单位字节。
    /// </summary>

    int64_t getPdfFileSize() const;
    bool pdfFileSizeIsSet() const;
    void unsetpdfFileSize();
    void setPdfFileSize(int64_t value);

    /// <summary>
    /// 用户UUID。
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 文件创建时间戳。
    /// </summary>

    int64_t getCreationTimestamp() const;
    bool creationTimestampIsSet() const;
    void unsetcreationTimestamp();
    void setCreationTimestamp(int64_t value);


protected:
    std::string fileCode_;
    bool fileCodeIsSet_;
    std::string topic_;
    bool topicIsSet_;
    std::string fileId_;
    bool fileIdIsSet_;
    std::string fileName_;
    bool fileNameIsSet_;
    int64_t fileSize_;
    bool fileSizeIsSet_;
    std::string thumbnailFileId_;
    bool thumbnailFileIdIsSet_;
    std::string thumbnailFileName_;
    bool thumbnailFileNameIsSet_;
    int64_t thumbnailFileSize_;
    bool thumbnailFileSizeIsSet_;
    std::string pdfFileId_;
    bool pdfFileIdIsSet_;
    std::string pdfFileName_;
    bool pdfFileNameIsSet_;
    int64_t pdfFileSize_;
    bool pdfFileSizeIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    int64_t creationTimestamp_;
    bool creationTimestampIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ListMeetingFileResponseDTO_H_
