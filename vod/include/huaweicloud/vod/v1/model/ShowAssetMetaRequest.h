
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowAssetMetaRequest_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowAssetMetaRequest_H_

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
class HUAWEICLOUD_VOD_V1_EXPORT  ShowAssetMetaRequest
    : public ModelBase
{
public:
    ShowAssetMetaRequest();
    virtual ~ShowAssetMetaRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowAssetMetaRequest members

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
    /// 媒资id，最多同时查询10个媒资。
    /// </summary>

    std::vector<std::string>& getAssetId();
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::vector<std::string>& value);

    /// <summary>
    /// 媒资状态。  取值如下： - UNCREATED：未创建（媒资ID不存在 ） - DELETED：已删除 - CANCELLED：上传取消 - SERVER_ERROR：上传失败（点播服务端故障） - UPLOAD_FAILED：上传失败（向OBS上传失败） - CREATING：创建中 - PUBLISHED：已发布 - TRANSCODING：待发布（转码中） - TRANSCODE_FAILED：待发布（转码失败） - TRANSCODE_SUCCEED：待发布（转码成功） - CREATED：待发布（未转码）
    /// </summary>

    std::vector<std::string>& getStatus();
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::vector<std::string>& value);

    /// <summary>
    /// 转码状态  取值如下： - TRANSCODING：转码中 - TRANSCODE_FAILED：转码失败 - TRANSCODE_SUCCEED：转码成功 - UN_TRANSCODE：未转码 - WAITING_TRANSCODE：等待转码
    /// </summary>

    std::vector<std::string>& getTranscodeStatus();
    bool transcodeStatusIsSet() const;
    void unsettranscodeStatus();
    void setTranscodeStatus(const std::vector<std::string>& value);

    /// <summary>
    /// 媒资状态。  取值如下： - PUBLISHED：已发布 - CREATED：未发布
    /// </summary>

    std::vector<std::string>& getAssetStatus();
    bool assetStatusIsSet() const;
    void unsetassetStatus();
    void setAssetStatus(const std::vector<std::string>& value);

    /// <summary>
    /// 起始时间，查询指定“**asset_id**”时，该参数无效。  格式为yyyymmddhhmmss。必须是与时区无关的UTC时间。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间，查询指定“**asset_id**”时，该参数无效。  格式为yyyymmddhhmmss。必须是与时区无关的UTC时间。
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
    /// 媒资标签。  单个标签不超过16个字节，最多不超过16个标签。  多个用逗号分隔，UTF8编码。
    /// </summary>

    std::string getTags() const;
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::string& value);

    /// <summary>
    /// 在媒资标题、描述中模糊查询的字符串。
    /// </summary>

    std::string getQueryString() const;
    bool queryStringIsSet() const;
    void unsetqueryString();
    void setQueryString(const std::string& value);

    /// <summary>
    /// 分页编号，查询指定“asset_id”时，该参数无效。  默认值：0。
    /// </summary>

    int32_t getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(int32_t value);

    /// <summary>
    /// 每页记录数，查询指定“**asset_id**”时，该参数无效。  取值范围：[1,100]。  默认值：10。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);


protected:
    std::string authorization_;
    bool authorizationIsSet_;
    std::string xSdkDate_;
    bool xSdkDateIsSet_;
    std::vector<std::string> assetId_;
    bool assetIdIsSet_;
    std::vector<std::string> status_;
    bool statusIsSet_;
    std::vector<std::string> transcodeStatus_;
    bool transcodeStatusIsSet_;
    std::vector<std::string> assetStatus_;
    bool assetStatusIsSet_;
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
    int32_t page_;
    bool pageIsSet_;
    int32_t size_;
    bool sizeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowAssetMetaRequest& dereference_from_shared_ptr(std::shared_ptr<ShowAssetMetaRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowAssetMetaRequest_H_
