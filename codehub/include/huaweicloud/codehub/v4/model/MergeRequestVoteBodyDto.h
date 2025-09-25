
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_MergeRequestVoteBodyDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_MergeRequestVoteBodyDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新合并请求打分请求体
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  MergeRequestVoteBodyDto
    : public ModelBase
{
public:
    MergeRequestVoteBodyDto();
    virtual ~MergeRequestVoteBodyDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MergeRequestVoteBodyDto members

    /// <summary>
    /// **参数解释：** 分数。
    /// </summary>

    int32_t getScore() const;
    bool scoreIsSet() const;
    void unsetscore();
    void setScore(int32_t value);

    /// <summary>
    /// **参数解释：** 操作类型(同一分数再次调用会删除打分, 传vote则不会删除)。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);


protected:
    int32_t score_;
    bool scoreIsSet_;
    std::string action_;
    bool actionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_MergeRequestVoteBodyDto_H_
