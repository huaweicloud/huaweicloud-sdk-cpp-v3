
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ListBanUrlRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ListBanUrlRequest_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ListBanUrlRequest
    : public ModelBase
{
public:
    ListBanUrlRequest();
    virtual ~ListBanUrlRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListBanUrlRequest members

    /// <summary>
    /// 查询起始时间戳（毫秒），需与结束时间戳同时指定。
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 查询结束时间戳（毫秒），需与开始时间戳同时指定。
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// 封禁的url所显示单页最大数量，取值范围为1-50。page_size和page_number必须同时传值。默认值10.
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 封禁的url当前查询为第几页，取值范围为1-65535。默认值1
    /// </summary>

    int32_t getPageNumber() const;
    bool pageNumberIsSet() const;
    void unsetpageNumber();
    void setPageNumber(int32_t value);

    /// <summary>
    /// 封禁的url地址。
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);


protected:
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    int32_t pageNumber_;
    bool pageNumberIsSet_;
    std::string url_;
    bool urlIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListBanUrlRequest& dereference_from_shared_ptr(std::shared_ptr<ListBanUrlRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ListBanUrlRequest_H_
