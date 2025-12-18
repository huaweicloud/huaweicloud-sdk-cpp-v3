
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchQosParticipantsRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchQosParticipantsRequest_H_


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
class HUAWEICLOUD_MEETING_V1_EXPORT  SearchQosParticipantsRequest
    : public ModelBase
{
public:
    SearchQosParticipantsRequest();
    virtual ~SearchQosParticipantsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchQosParticipantsRequest members

    /// <summary>
    /// 会议UUID。
    /// </summary>

    std::string getConfUUID() const;
    bool confUUIDIsSet() const;
    void unsetconfUUID();
    void setConfUUID(const std::string& value);

    /// <summary>
    /// 会议类别。 * online：在线会议，正在召开的会议 * history：历史会议，已结束的会议
    /// </summary>

    std::string getConfType() const;
    bool confTypeIsSet() const;
    void unsetconfType();
    void setConfType(const std::string& value);

    /// <summary>
    /// 查询偏移量。 * 取值：大于等于0，默认值为0。 * 大于等于最大条目数量，则返回最后一页的数据。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 查询的条目数量。 * 取值：1-500，默认值为20。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 查询条件。与会者名称可作为搜索内容。长度限制为1-512个字符。
    /// </summary>

    std::string getSearchKey() const;
    bool searchKeyIsSet() const;
    void unsetsearchKey();
    void setSearchKey(const std::string& value);


protected:
    std::string confUUID_;
    bool confUUIDIsSet_;
    std::string confType_;
    bool confTypeIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string searchKey_;
    bool searchKeyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SearchQosParticipantsRequest& dereference_from_shared_ptr(std::shared_ptr<SearchQosParticipantsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchQosParticipantsRequest_H_
