
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_TransferGroupResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_TransferGroupResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/GroupMyRoleDto.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  TransferGroupResponse
    : public ModelBase, public HttpResponse
{
public:
    TransferGroupResponse();
    virtual ~TransferGroupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TransferGroupResponse members

    /// <summary>
    /// 代码组id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 代码组全名称
    /// </summary>

    std::string getFullName() const;
    bool fullNameIsSet() const;
    void unsetfullName();
    void setFullName(const std::string& value);

    /// <summary>
    /// 代码组全路径
    /// </summary>

    std::string getFullPath() const;
    bool fullPathIsSet() const;
    void unsetfullPath();
    void setFullPath(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    GroupMyRoleDto getMyRole() const;
    bool myRoleIsSet() const;
    void unsetmyRole();
    void setMyRole(const GroupMyRoleDto& value);

    /// <summary>
    /// 代码组名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 代码组父级id
    /// </summary>

    int32_t getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(int32_t value);

    /// <summary>
    /// 代码组所有者id
    /// </summary>

    int32_t getCreatorId() const;
    bool creatorIdIsSet() const;
    void unsetcreatorId();
    void setCreatorId(int32_t value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string fullName_;
    bool fullNameIsSet_;
    std::string fullPath_;
    bool fullPathIsSet_;
    GroupMyRoleDto myRole_;
    bool myRoleIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t parentId_;
    bool parentIdIsSet_;
    int32_t creatorId_;
    bool creatorIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_TransferGroupResponse_H_
