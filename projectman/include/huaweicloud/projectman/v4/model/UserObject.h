
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UserObject_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UserObject_H_


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
/// 用户对象, 适用于评审单。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  UserObject
    : public ModelBase
{
public:
    UserObject();
    virtual ~UserObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UserObject members

    /// <summary>
    /// 是否关注。
    /// </summary>

    std::string getWatcher() const;
    bool watcherIsSet() const;
    void unsetwatcher();
    void setWatcher(const std::string& value);

    /// <summary>
    /// 用户ID。
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 用户数字ID。
    /// </summary>

    std::string getUserNumId() const;
    bool userNumIdIsSet() const;
    void unsetuserNumId();
    void setUserNumId(const std::string& value);

    /// <summary>
    /// 用户名称。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 租户ID。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 租户名称。
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 昵称。
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);

    /// <summary>
    /// 角色ID。
    /// </summary>

    std::string getRoleId() const;
    bool roleIdIsSet() const;
    void unsetroleId();
    void setRoleId(const std::string& value);

    /// <summary>
    /// 角色名称。
    /// </summary>

    std::string getRoleName() const;
    bool roleNameIsSet() const;
    void unsetroleName();
    void setRoleName(const std::string& value);

    /// <summary>
    /// 用户头像。
    /// </summary>

    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);

    /// <summary>
    /// 区域。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 意见。
    /// </summary>

    std::string getOpinion() const;
    bool opinionIsSet() const;
    void unsetopinion();
    void setOpinion(const std::string& value);

    /// <summary>
    /// 描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 责任人。
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// 决策人ID。
    /// </summary>

    std::string getCcbId() const;
    bool ccbIdIsSet() const;
    void unsetccbId();
    void setCcbId(const std::string& value);

    /// <summary>
    /// 是否已移出项目。
    /// </summary>

    std::string getHasRemoved() const;
    bool hasRemovedIsSet() const;
    void unsethasRemoved();
    void setHasRemoved(const std::string& value);


protected:
    std::string watcher_;
    bool watcherIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string userNumId_;
    bool userNumIdIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;
    std::string roleId_;
    bool roleIdIsSet_;
    std::string roleName_;
    bool roleNameIsSet_;
    std::string imageId_;
    bool imageIdIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string opinion_;
    bool opinionIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string owner_;
    bool ownerIsSet_;
    std::string ccbId_;
    bool ccbIdIsSet_;
    std::string hasRemoved_;
    bool hasRemovedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UserObject_H_
