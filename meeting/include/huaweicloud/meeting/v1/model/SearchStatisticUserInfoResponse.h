
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchStatisticUserInfoResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchStatisticUserInfoResponse_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/StatisticUserDataItem.h>
#include <vector>

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
class HUAWEICLOUD_MEETING_V1_EXPORT  SearchStatisticUserInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    SearchStatisticUserInfoResponse();
    virtual ~SearchStatisticUserInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchStatisticUserInfoResponse members

    /// <summary>
    /// 总记录数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 查询条目数量。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 查询偏移量。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 会议用户数据按时间点统计的查询结果数组。
    /// </summary>

    std::vector<StatisticUserDataItem>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<StatisticUserDataItem>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::vector<StatisticUserDataItem> data_;
    bool dataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchStatisticUserInfoResponse_H_
