
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_PageParticipant_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_PageParticipant_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/ParticipantInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 与会者列表。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  PageParticipant
    : public ModelBase
{
public:
    PageParticipant();
    virtual ~PageParticipant();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PageParticipant members

    /// <summary>
    /// 被邀请的与会者信息。包含预约会议时邀请的与会者和会中主持人邀请的与会者。
    /// </summary>

    std::vector<ParticipantInfo>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<ParticipantInfo>& value);

    /// <summary>
    /// 查询偏移量。
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

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    std::vector<ParticipantInfo> data_;
    bool dataIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t count_;
    bool countIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_PageParticipant_H_
