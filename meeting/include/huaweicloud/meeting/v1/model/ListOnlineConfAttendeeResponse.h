
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ListOnlineConfAttendeeResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ListOnlineConfAttendeeResponse_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/OnlineAttendeeRecordInfo.h>
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
class HUAWEICLOUD_MEETING_V1_EXPORT  ListOnlineConfAttendeeResponse
    : public ModelBase, public HttpResponse
{
public:
    ListOnlineConfAttendeeResponse();
    virtual ~ListOnlineConfAttendeeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListOnlineConfAttendeeResponse members

    /// <summary>
    /// 在线与会者信息列表
    /// </summary>

    std::vector<OnlineAttendeeRecordInfo>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<OnlineAttendeeRecordInfo>& value);

    /// <summary>
    /// 记录数偏移,第几条
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 每页的记录数
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 总记录数
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    std::vector<OnlineAttendeeRecordInfo> data_;
    bool dataIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t count_;
    bool countIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ListOnlineConfAttendeeResponse_H_
