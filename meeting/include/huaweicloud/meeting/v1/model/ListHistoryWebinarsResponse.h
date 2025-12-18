
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ListHistoryWebinarsResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ListHistoryWebinarsResponse_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/OpenPageInfo.h>
#include <huaweicloud/meeting/v1/model/OpenWebinarHistoryInfo.h>
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
class HUAWEICLOUD_MEETING_V1_EXPORT  ListHistoryWebinarsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListHistoryWebinarsResponse();
    virtual ~ListHistoryWebinarsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListHistoryWebinarsResponse members

    /// <summary>
    /// 偏移量。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 每页的记录数。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 总记录数。
    /// </summary>

    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int64_t value);

    /// <summary>
    /// 历史网络研讨会信息列表。
    /// </summary>

    std::vector<OpenWebinarHistoryInfo>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<OpenWebinarHistoryInfo>& value);


protected:
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int64_t count_;
    bool countIsSet_;
    std::vector<OpenWebinarHistoryInfo> data_;
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

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ListHistoryWebinarsResponse_H_
