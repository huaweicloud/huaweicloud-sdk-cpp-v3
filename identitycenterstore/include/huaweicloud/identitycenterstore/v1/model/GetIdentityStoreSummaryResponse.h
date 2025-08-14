
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_GetIdentityStoreSummaryResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_GetIdentityStoreSummaryResponse_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  GetIdentityStoreSummaryResponse
    : public ModelBase, public HttpResponse
{
public:
    GetIdentityStoreSummaryResponse();
    virtual ~GetIdentityStoreSummaryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetIdentityStoreSummaryResponse members

    /// <summary>
    /// 已创建的用户数量
    /// </summary>

    int64_t getUsers() const;
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(int64_t value);

    /// <summary>
    /// 用户配额
    /// </summary>

    int64_t getUsersQuota() const;
    bool usersQuotaIsSet() const;
    void unsetusersQuota();
    void setUsersQuota(int64_t value);

    /// <summary>
    /// 已创建的用户组数量
    /// </summary>

    int64_t getGroups() const;
    bool groupsIsSet() const;
    void unsetgroups();
    void setGroups(int64_t value);

    /// <summary>
    /// 用户组配额
    /// </summary>

    int64_t getGroupsQuota() const;
    bool groupsQuotaIsSet() const;
    void unsetgroupsQuota();
    void setGroupsQuota(int64_t value);


protected:
    int64_t users_;
    bool usersIsSet_;
    int64_t usersQuota_;
    bool usersQuotaIsSet_;
    int64_t groups_;
    bool groupsIsSet_;
    int64_t groupsQuota_;
    bool groupsQuotaIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_GetIdentityStoreSummaryResponse_H_
