
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_InviteAccountReqBody_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_InviteAccountReqBody_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/organizations/v1/model/TagDto.h>
#include <huaweicloud/organizations/v1/model/TargetDto.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// InviteAccount 操作的请求体。
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  InviteAccountReqBody
    : public ModelBase
{
public:
    InviteAccountReqBody();
    virtual ~InviteAccountReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InviteAccountReqBody members

    /// <summary>
    /// 
    /// </summary>

    TargetDto getTarget() const;
    bool targetIsSet() const;
    void unsettarget();
    void setTarget(const TargetDto& value);

    /// <summary>
    /// 给收件账号所有者的邮件中的附加信息。
    /// </summary>

    std::string getNotes() const;
    bool notesIsSet() const;
    void unsetnotes();
    void setNotes(const std::string& value);

    /// <summary>
    /// 要绑定到新创建的账号的标签列表。
    /// </summary>

    std::vector<TagDto>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagDto>& value);


protected:
    TargetDto target_;
    bool targetIsSet_;
    std::string notes_;
    bool notesIsSet_;
    std::vector<TagDto> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_InviteAccountReqBody_H_
