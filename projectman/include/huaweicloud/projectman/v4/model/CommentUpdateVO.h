
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CommentUpdateVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CommentUpdateVO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CommentUpdateVO
    : public ModelBase
{
public:
    CommentUpdateVO();
    virtual ~CommentUpdateVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommentUpdateVO members

    /// <summary>
    /// **参数解释**： 评论内容，使用html标记语言。 **默认取值**： 不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 评论时@他人的用户ID，填写此参数后会通知被@的用户，通知形式在需求管理-设置-工作项设置-通知设置中配置。 **默认取值**： 不涉及。
    /// </summary>

    std::string getAt() const;
    bool atIsSet() const;
    void unsetat();
    void setAt(const std::string& value);


protected:
    std::string description_;
    bool descriptionIsSet_;
    std::string at_;
    bool atIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CommentUpdateVO_H_
