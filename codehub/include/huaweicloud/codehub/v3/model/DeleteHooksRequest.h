
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_DeleteHooksRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_DeleteHooksRequest_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  DeleteHooksRequest
    : public ModelBase
{
public:
    DeleteHooksRequest();
    virtual ~DeleteHooksRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteHooksRequest members

    /// <summary>
    /// 组名(克隆地址中域名后面仓库名前的一段 示例：git@repo.alpha.devcloud.inhuawei.com:Demo00228/testword.git  组名：Demo00228 )
    /// </summary>

    std::string getGroupName() const;
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::string& value);

    /// <summary>
    /// 通过id删除指定仓库的hook
    /// </summary>

    int32_t getHookId() const;
    bool hookIdIsSet() const;
    void unsethookId();
    void setHookId(int32_t value);

    /// <summary>
    /// 仓库名
    /// </summary>

    std::string getRepositoryName() const;
    bool repositoryNameIsSet() const;
    void unsetrepositoryName();
    void setRepositoryName(const std::string& value);


protected:
    std::string groupName_;
    bool groupNameIsSet_;
    int32_t hookId_;
    bool hookIdIsSet_;
    std::string repositoryName_;
    bool repositoryNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteHooksRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteHooksRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_DeleteHooksRequest_H_
