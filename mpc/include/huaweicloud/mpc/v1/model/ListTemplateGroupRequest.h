
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_ListTemplateGroupRequest_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_ListTemplateGroupRequest_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  ListTemplateGroupRequest
    : public ModelBase
{
public:
    ListTemplateGroupRequest();
    virtual ~ListTemplateGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListTemplateGroupRequest members

    /// <summary>
    /// 转码模板组ID，最多10个 
    /// </summary>

    std::vector<std::string>& getGroupId();
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::vector<std::string>& value);

    /// <summary>
    /// 转码模板组名，最多10个 
    /// </summary>

    std::vector<std::string>& getGroupName();
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::vector<std::string>& value);

    /// <summary>
    /// 分页编号。查询指定“group_id”时，该参数无效。  默认值：0。 
    /// </summary>

    int32_t getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(int32_t value);

    /// <summary>
    /// 每页记录数。取值范围：[1,100]，指定group_id时该参数无效。 
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);


protected:
    std::vector<std::string> groupId_;
    bool groupIdIsSet_;
    std::vector<std::string> groupName_;
    bool groupNameIsSet_;
    int32_t page_;
    bool pageIsSet_;
    int32_t size_;
    bool sizeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListTemplateGroupRequest& dereference_from_shared_ptr(std::shared_ptr<ListTemplateGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_ListTemplateGroupRequest_H_
