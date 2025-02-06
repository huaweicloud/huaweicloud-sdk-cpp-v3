#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_IdentityCenterStoreClient_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_IdentityCenterStoreClient_H_

#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/identitycenterstore/v1/model/CreateGroupReqBody.h>
#include <huaweicloud/identitycenterstore/v1/model/CreateGroupRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/CreateGroupResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/DeleteGroupRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/DeleteGroupResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/DescribeGroupRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/DescribeGroupResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/GetGroupIdReqBody.h>
#include <huaweicloud/identitycenterstore/v1/model/GetGroupIdRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/GetGroupIdResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/ListGroupsRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/ListGroupsResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/UpdateGroupReqBody.h>
#include <huaweicloud/identitycenterstore/v1/model/UpdateGroupRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/UpdateGroupResponse.h>
#include <string>

#include <huaweicloud/identitycenterstore/v1/model/CreateGroupMembershipReqBody.h>
#include <huaweicloud/identitycenterstore/v1/model/CreateGroupMembershipRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/CreateGroupMembershipResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/DeleteGroupMembershipRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/DeleteGroupMembershipResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/DescribeGroupMembershipRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/DescribeGroupMembershipResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/GetGroupMembershipIdReqBody.h>
#include <huaweicloud/identitycenterstore/v1/model/GetGroupMembershipIdRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/GetGroupMembershipIdResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/IsMemberInGroupsReqBody.h>
#include <huaweicloud/identitycenterstore/v1/model/IsMemberInGroupsRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/IsMemberInGroupsResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/ListGroupMembershipsForMemberRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/ListGroupMembershipsForMemberResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/ListGroupMembershipsRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/ListGroupMembershipsResponse.h>
#include <string>

#include <huaweicloud/identitycenterstore/v1/model/CreateUserReqBody.h>
#include <huaweicloud/identitycenterstore/v1/model/CreateUserRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/CreateUserResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/DeleteUserRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/DeleteUserResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/DescribeUserRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/DescribeUserResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/GetUserIdReqBody.h>
#include <huaweicloud/identitycenterstore/v1/model/GetUserIdRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/GetUserIdResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/ListUsersRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/ListUsersResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/UpdateUserReqBody.h>
#include <huaweicloud/identitycenterstore/v1/model/UpdateUserRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/UpdateUserResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Identitycenterstore::V1::Model;

class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  IdentityCenterStoreClient : public Client
{
public:

    IdentityCenterStoreClient();

    virtual ~IdentityCenterStoreClient();

    static ClientBuilder<IdentityCenterStoreClient> newBuilder();

    // 创建用户组
    //
    // 在指定的身份源中创建一个IAM身份中心用户组。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateGroupResponse> createGroup(
        CreateGroupRequest &request
    );
    // 删除用户组
    //
    // 根据用户组ID，删除对应的IAM身份中心用户组。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteGroupResponse> deleteGroup(
        DeleteGroupRequest &request
    );
    // 查询用户组详情
    //
    // 根据用户组ID，查询IAM身份中心用户组的详情信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DescribeGroupResponse> describeGroup(
        DescribeGroupRequest &request
    );
    // 查询用户组ID
    //
    // 根据显示名或外部身份源ID，以精确匹配的方式查询用户组ID。显示名和外部身份源ID两种查询方式二选一，不支持同时传入。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetGroupIdResponse> getGroupId(
        GetGroupIdRequest &request
    );
    // 列出用户组
    //
    // 查询指定身份源下的IAM身份中心用户组列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGroupsResponse> listGroups(
        ListGroupsRequest &request
    );
    // 更新用户组
    //
    // 根据用户组ID，更新对应IAM身份中心用户组的属性。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateGroupResponse> updateGroup(
        UpdateGroupRequest &request
    );

    // 绑定用户和组
    //
    // 将用户添加到用户组中，用户和用户组必须在同一身份源下。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateGroupMembershipResponse> createGroupMembership(
        CreateGroupMembershipRequest &request
    );
    // 解绑用户和组
    //
    // 根据关联关系ID解绑用户和用户组，也就是将用户移出用户组。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteGroupMembershipResponse> deleteGroupMembership(
        DeleteGroupMembershipRequest &request
    );
    // 查询绑定关系详情
    //
    // 根据关联关系ID，查询此关联关系的详情信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DescribeGroupMembershipResponse> describeGroupMembership(
        DescribeGroupMembershipRequest &request
    );
    // 查询绑定关系ID
    //
    // 根据用户ID和用户组ID，查询对应的关联关系ID。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetGroupMembershipIdResponse> getGroupMembershipId(
        GetGroupMembershipIdRequest &request
    );
    // 查询用户是否为用户组成员
    //
    // 根据用户ID和用户组ID列表，查询用户是否为用户组的成员。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<IsMemberInGroupsResponse> isMemberInGroups(
        IsMemberInGroupsRequest &request
    );
    // 列出组中的用户
    //
    // 根据用户组ID，列出用户组中的用户。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGroupMembershipsResponse> listGroupMemberships(
        ListGroupMembershipsRequest &request
    );
    // 列出用户加入的组
    //
    // 根据用户ID，列出用户加入的用户组。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGroupMembershipsForMemberResponse> listGroupMembershipsForMember(
        ListGroupMembershipsForMemberRequest &request
    );

    // 创建用户
    //
    // 在指定的身份源中创建一个IAM身份中心用户。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateUserResponse> createUser(
        CreateUserRequest &request
    );
    // 删除用户
    //
    // 根据用户ID，删除对应的IAM身份中心用户。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteUserResponse> deleteUser(
        DeleteUserRequest &request
    );
    // 查询用户详情
    //
    // 根据用户ID，查询对应IAM身份中心用户的详情信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DescribeUserResponse> describeUser(
        DescribeUserRequest &request
    );
    // 查询用户ID
    //
    // 根据用户名或外部身份源ID，以精确匹配的方式查询用户ID。用户名和外部身份源ID两种查询方式二选一，不支持同时传入。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetUserIdResponse> getUserId(
        GetUserIdRequest &request
    );
    // 列出用户
    //
    // 查询指定身份源下的IAM身份中心用户列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListUsersResponse> listUsers(
        ListUsersRequest &request
    );
    // 更新用户
    //
    // 根据用户ID，更新对应IAM身份中心用户的属性。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateUserResponse> updateUser(
        UpdateUserRequest &request
    );


private:
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
    std::string parameterToString(utility::string_t value);
#endif
    std::string parameterToString(std::string value);
    std::string parameterToString(int32_t value);
    std::string parameterToString(int64_t value);
    std::string parameterToString(float value);
    std::string parameterToString(double value);
    std::string parameterToString(const Object& obj);
    std::string parameterToString(const utility::datetime &value);

    template<class T>
    std::string parameterToString(const std::vector<T> &value)
    {
        std::stringstream ss;
        for( size_t i = 0; i < value.size(); i++)
        {
            if (i > 0) {
                ss << ", ";
            }
            ss << parameterToString(value[i]);
        }

    return ss.str();
    }

    template<class T>
    std::string parameterToString(const std::shared_ptr<T> &value)
    {
        return parameterToString(*value.get());
    }

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};

}
}
}
}

template class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Identitycenterstore::V1::IdentityCenterStoreClient>;

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_IdentityCenterStoreClient_H_

