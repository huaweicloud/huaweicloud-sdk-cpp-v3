
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CommentResult_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CommentResult_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/CommentEntity.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// IPD工作项评论列表查询结果
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CommentResult
    : public ModelBase
{
public:
    CommentResult();
    virtual ~CommentResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommentResult members

    /// <summary>
    /// **参数解释**： 符合过滤条件的工作项评论总数。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// **参数解释**： 工作项评论列表。 **取值范围**： 不涉及。
    /// </summary>

    std::vector<CommentEntity>& getCommentList();
    bool commentListIsSet() const;
    void unsetcommentList();
    void setCommentList(const std::vector<CommentEntity>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<CommentEntity> commentList_;
    bool commentListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CommentResult_H_
