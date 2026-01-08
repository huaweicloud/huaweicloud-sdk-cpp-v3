
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ListAssetTaskInfoRequest_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ListAssetTaskInfoRequest_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
class HUAWEICLOUD_VOD_V1_EXPORT  ListAssetTaskInfoRequest
    : public ModelBase
{
public:
    ListAssetTaskInfoRequest();
    virtual ~ListAssetTaskInfoRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAssetTaskInfoRequest members

    /// <summary>
    /// 使用AK/SK方式认证时必选，请求的发生时间。 
    /// </summary>

    std::string getXSdkDate() const;
    bool xSdkDateIsSet() const;
    void unsetxSdkDate();
    void setXSdkDate(const std::string& value);

    /// <summary>
    /// 任务类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 媒资Id
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 根据任务创建时间匹配该时间之后的，包含该时间点，格式按照RFC3339，UTC时间，如2020-09-01T18:50:20Z
    /// </summary>

    std::string getCreateTimeAfter() const;
    bool createTimeAfterIsSet() const;
    void unsetcreateTimeAfter();
    void setCreateTimeAfter(const std::string& value);

    /// <summary>
    /// 根据任务创建时间匹配该时间之前的，不包含该时间点，格式按照RFC3339，UTC时间，如2020-09-01T18:50:20Z
    /// </summary>

    std::string getCreateTimeBefore() const;
    bool createTimeBeforeIsSet() const;
    void unsetcreateTimeBefore();
    void setCreateTimeBefore(const std::string& value);

    /// <summary>
    /// 根据任务结束时间匹配该时间之后的，包含该时间点，格式按照RFC3339，UTC时间，如2020-09-01T18:50:20Z
    /// </summary>

    std::string getEndTimeAfter() const;
    bool endTimeAfterIsSet() const;
    void unsetendTimeAfter();
    void setEndTimeAfter(const std::string& value);

    /// <summary>
    /// 根据任务结束时间匹配该时间之前的，不包含该时间点，格式按照RFC3339，UTC时间，如2020-09-01T18:50:20Z
    /// </summary>

    std::string getEndTimeBefore() const;
    bool endTimeBeforeIsSet() const;
    void unsetendTimeBefore();
    void setEndTimeBefore(const std::string& value);

    /// <summary>
    /// 任务状态
    /// </summary>

    std::vector<std::string>& getStatus();
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::vector<std::string>& value);

    /// <summary>
    /// 标志位，不传默认表示从第一条开始
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 返回的每页个数，默认10，最大100，最小1
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string xSdkDate_;
    bool xSdkDateIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string assetId_;
    bool assetIdIsSet_;
    std::string createTimeAfter_;
    bool createTimeAfterIsSet_;
    std::string createTimeBefore_;
    bool createTimeBeforeIsSet_;
    std::string endTimeAfter_;
    bool endTimeAfterIsSet_;
    std::string endTimeBefore_;
    bool endTimeBeforeIsSet_;
    std::vector<std::string> status_;
    bool statusIsSet_;
    std::string marker_;
    bool markerIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAssetTaskInfoRequest& dereference_from_shared_ptr(std::shared_ptr<ListAssetTaskInfoRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ListAssetTaskInfoRequest_H_
