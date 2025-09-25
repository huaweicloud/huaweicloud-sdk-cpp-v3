
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_RepositoryMemberList_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_RepositoryMemberList_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v3/model/RepositoryMember.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  RepositoryMemberList
    : public ModelBase
{
public:
    RepositoryMemberList();
    virtual ~RepositoryMemberList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepositoryMemberList members

    /// <summary>
    /// 仓库成员总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 仓库成员列表
    /// </summary>

    std::vector<RepositoryMember>& getUsers();
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::vector<RepositoryMember>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<RepositoryMember> users_;
    bool usersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_RepositoryMemberList_H_
