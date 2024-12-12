
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListUsersRequest_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListUsersRequest_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  ListUsersRequest
    : public ModelBase
{
public:
    ListUsersRequest();
    virtual ~ListUsersRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListUsersRequest members

    /// <summary>
    /// 组织id，为空时查询所有用户。
    /// </summary>

    std::string getOrgId() const;
    bool orgIdIsSet() const;
    void unsetorgId();
    void setOrgId(const std::string& value);

    /// <summary>
    /// 第几页。最小值：0
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 每页多少条。最小值：10。最大值：100
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 最长64位，用户名，支持模糊查询
    /// </summary>

    std::string getUserInfo() const;
    bool userInfoIsSet() const;
    void unsetuserInfo();
    void setUserInfo(const std::string& value);


protected:
    std::string orgId_;
    bool orgIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string userInfo_;
    bool userInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListUsersRequest& dereference_from_shared_ptr(std::shared_ptr<ListUsersRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListUsersRequest_H_
