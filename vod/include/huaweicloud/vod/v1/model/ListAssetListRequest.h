
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ListAssetListRequest_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ListAssetListRequest_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ListAssetListRequest
    : public ModelBase
{
public:
    ListAssetListRequest();
    virtual ~ListAssetListRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListAssetListRequest members

    /// <summary>
    /// 使用AK/SK方式认证时必选，携带的鉴权信息。 
    /// </summary>

    std::string getAuthorization() const;
    bool authorizationIsSet() const;
    void unsetauthorization();
    void setAuthorization(const std::string& value);

    /// <summary>
    /// 使用AK/SK方式认证时必选，请求的发生时间。 
    /// </summary>

    std::string getXSdkDate() const;
    bool xSdkDateIsSet() const;
    void unsetxSdkDate();
    void setXSdkDate(const std::string& value);

    /// <summary>
    /// 媒资ID，最多同时查询10个。
    /// </summary>

    std::vector<std::string>& getAssetId();
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::vector<std::string>& value);

    /// <summary>
    /// 媒资状态，同时查询多个状态的媒资。  取值如下： - CREATING：上传中 - FAILED：上传失败 - CREATED：上传成功 - PUBLISHED：已发布 - TRANSCODING：转码中 - TRANSCODE_SUCCEED：转码成功 - TRANSCODE_FAILED：转码失败 - THUMBNAILING：截图中 - THUMBNAIL_SUCCEED：截图成功 - THUMBNAIL_FAILED：截图失败 - UN_REVIEW：未审核 - REVIEWING：审核中 - REVIEW_SUSPICIOUS ：审核不过，待人工复审 - REVIEW_PASSED：审核通过 - REVIEW_FAILED：审核任务失败 - REVIEW_BLOCKED：已屏蔽
    /// </summary>

    std::vector<std::string>& getStatus();
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::vector<std::string>& value);

    /// <summary>
    /// 起始时间。  格式为yyyymmddhhm mss。必须是与时区无关的UTC时间。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间。  格式为yyyymmddhhm mss。必须是与时区无关的UTC时间。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 分类ID。
    /// </summary>

    int32_t getCategoryId() const;
    bool categoryIdIsSet() const;
    void unsetcategoryId();
    void setCategoryId(int32_t value);

    /// <summary>
    /// 媒资标签。 单个标签不超过16个字节， 最多不超过16 个标签。 多个用英文逗号分隔，UTF8编码。
    /// </summary>

    std::string getTags() const;
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::string& value);

    /// <summary>
    /// 在媒资标题、 描述、分类名称中模糊查询的字符串。
    /// </summary>

    std::string getQueryString() const;
    bool queryStringIsSet() const;
    void unsetqueryString();
    void setQueryString(const std::string& value);

    /// <summary>
    /// 音视频文件的格式，支持多格式查询，最多不超过20个。  取值如下： - 视频文件格式：MP4、TS、MOV、MXF、MPG、FLV、WMV、AVI、M4V、F4V、MPEG - 音频文件格式：MP3、OGG、WAV、WMA、APE、FLAC、AAC、AC3、MMF、AMR、M4A、M4R、WV、MP2
    /// </summary>

    std::vector<std::string>& getMediaType();
    bool mediaTypeIsSet() const;
    void unsetmediaType();
    void setMediaType(const std::vector<std::string>& value);

    /// <summary>
    /// 分页编号。  默认值：0。
    /// </summary>

    int32_t getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(int32_t value);

    /// <summary>
    /// 每页记录数。  取值范围：[1,100]。  默认值：10。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 查询顺序，按createTime顺序还是倒序
    /// </summary>

    std::string getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(const std::string& value);


protected:
    std::string authorization_;
    bool authorizationIsSet_;
    std::string xSdkDate_;
    bool xSdkDateIsSet_;
    std::vector<std::string> assetId_;
    bool assetIdIsSet_;
    std::vector<std::string> status_;
    bool statusIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    int32_t categoryId_;
    bool categoryIdIsSet_;
    std::string tags_;
    bool tagsIsSet_;
    std::string queryString_;
    bool queryStringIsSet_;
    std::vector<std::string> mediaType_;
    bool mediaTypeIsSet_;
    int32_t page_;
    bool pageIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string order_;
    bool orderIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAssetListRequest& dereference_from_shared_ptr(std::shared_ptr<ListAssetListRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ListAssetListRequest_H_
