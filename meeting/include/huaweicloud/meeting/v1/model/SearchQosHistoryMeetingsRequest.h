
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchQosHistoryMeetingsRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchQosHistoryMeetingsRequest_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  SearchQosHistoryMeetingsRequest
    : public ModelBase
{
public:
    SearchQosHistoryMeetingsRequest();
    virtual ~SearchQosHistoryMeetingsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchQosHistoryMeetingsRequest members

    /// <summary>
    /// 查询的起始日期，Unix时间戳（单位毫秒）。
    /// </summary>

    int64_t getStartDate() const;
    bool startDateIsSet() const;
    void unsetstartDate();
    void setStartDate(int64_t value);

    /// <summary>
    /// 查询的截止日期，Unix时间戳（单位毫秒）。
    /// </summary>

    int64_t getEndDate() const;
    bool endDateIsSet() const;
    void unsetendDate();
    void setEndDate(int64_t value);

    /// <summary>
    /// 查询偏移量。 * 取值：大于等于0，默认值为0 * 大于等于最大条目数量，则返回最后一页的数据
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 查询的条目数量。 * 取值：1-500，默认值为20
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 查询条件。会议主题、会议预约人和会议ID等可作为搜索内容。长度限制为1-512个字符。
    /// </summary>

    std::string getSearchKey() const;
    bool searchKeyIsSet() const;
    void unsetsearchKey();
    void setSearchKey(const std::string& value);


protected:
    int64_t startDate_;
    bool startDateIsSet_;
    int64_t endDate_;
    bool endDateIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string searchKey_;
    bool searchKeyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SearchQosHistoryMeetingsRequest& dereference_from_shared_ptr(std::shared_ptr<SearchQosHistoryMeetingsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchQosHistoryMeetingsRequest_H_
