
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ReviewCommentEntity_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ReviewCommentEntity_H_


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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ReviewCommentEntity
    : public ModelBase
{
public:
    ReviewCommentEntity();
    virtual ~ReviewCommentEntity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReviewCommentEntity members

    /// <summary>
    /// 评审意见对象ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 评审用户ID。
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 其他用户Id（转他人）。
    /// </summary>

    std::string getOtherUserId() const;
    bool otherUserIdIsSet() const;
    void unsetotherUserId();
    void setOtherUserId(const std::string& value);

    /// <summary>
    /// 评审结果。
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);

    /// <summary>
    /// 评审意见。
    /// </summary>

    std::string getComment() const;
    bool commentIsSet() const;
    void unsetcomment();
    void setComment(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string otherUserId_;
    bool otherUserIdIsSet_;
    std::string result_;
    bool resultIsSet_;
    std::string comment_;
    bool commentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ReviewCommentEntity_H_
