
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_LineDiscussionDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_LineDiscussionDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codehub/v4/model/MergeRequestBasicDiscussionDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 单文件下单侧检视意见详情。
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  LineDiscussionDto
    : public ModelBase
{
public:
    LineDiscussionDto();
    virtual ~LineDiscussionDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LineDiscussionDto members

    /// <summary>
    /// **参数解释：** 位于某一侧某行的检视意见集合。
    /// </summary>

    std::vector<MergeRequestBasicDiscussionDto>& getDiscussions();
    bool discussionsIsSet() const;
    void unsetdiscussions();
    void setDiscussions(const std::vector<MergeRequestBasicDiscussionDto>& value);

    /// <summary>
    /// **参数解释：** 所在的行号。
    /// </summary>

    int32_t getLine() const;
    bool lineIsSet() const;
    void unsetline();
    void setLine(int32_t value);

    /// <summary>
    /// **参数解释：** 所在的行的类型。 **取值范围：** old: 左侧删除行。 new: 右侧新增行。 unchanged-l: 左侧不变行。 unchanged-r: 右侧不变行。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::vector<MergeRequestBasicDiscussionDto> discussions_;
    bool discussionsIsSet_;
    int32_t line_;
    bool lineIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_LineDiscussionDto_H_
