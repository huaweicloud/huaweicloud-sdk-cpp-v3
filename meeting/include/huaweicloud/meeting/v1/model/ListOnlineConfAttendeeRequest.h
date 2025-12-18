
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ListOnlineConfAttendeeRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ListOnlineConfAttendeeRequest_H_


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
class HUAWEICLOUD_MEETING_V1_EXPORT  ListOnlineConfAttendeeRequest
    : public ModelBase
{
public:
    ListOnlineConfAttendeeRequest();
    virtual ~ListOnlineConfAttendeeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListOnlineConfAttendeeRequest members

    /// <summary>
    /// 会议ID
    /// </summary>

    std::string getConfId() const;
    bool confIdIsSet() const;
    void unsetconfId();
    void setConfId(const std::string& value);

    /// <summary>
    /// 记录数偏移
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 返回的与会者记录数，最大500条
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 查询条件,支持third-account查询返回
    /// </summary>

    std::string getSearchKey() const;
    bool searchKeyIsSet() const;
    void unsetsearchKey();
    void setSearchKey(const std::string& value);


protected:
    std::string confId_;
    bool confIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string searchKey_;
    bool searchKeyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListOnlineConfAttendeeRequest& dereference_from_shared_ptr(std::shared_ptr<ListOnlineConfAttendeeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ListOnlineConfAttendeeRequest_H_
