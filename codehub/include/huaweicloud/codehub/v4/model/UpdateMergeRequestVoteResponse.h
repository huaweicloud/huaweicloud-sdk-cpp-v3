
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateMergeRequestVoteResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateMergeRequestVoteResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/UserSafeDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  UpdateMergeRequestVoteResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateMergeRequestVoteResponse();
    virtual ~UpdateMergeRequestVoteResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateMergeRequestVoteResponse members

    /// <summary>
    /// **参数解释：** 打分记录的id。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 合并请求id。
    /// </summary>

    int32_t getMergeRequestId() const;
    bool mergeRequestIdIsSet() const;
    void unsetmergeRequestId();
    void setMergeRequestId(int32_t value);

    /// <summary>
    /// **参数解释：** 分数。
    /// </summary>

    int32_t getScore() const;
    bool scoreIsSet() const;
    void unsetscore();
    void setScore(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    UserSafeDto getAuthor() const;
    bool authorIsSet() const;
    void unsetauthor();
    void setAuthor(const UserSafeDto& value);


protected:
    int32_t id_;
    bool idIsSet_;
    int32_t mergeRequestId_;
    bool mergeRequestIdIsSet_;
    int32_t score_;
    bool scoreIsSet_;
    UserSafeDto author_;
    bool authorIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateMergeRequestVoteResponse_H_
