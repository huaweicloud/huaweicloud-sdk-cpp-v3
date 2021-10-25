
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListDisasterRecoveryDrillsRequest_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListDisasterRecoveryDrillsRequest_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ListDisasterRecoveryDrillsRequest
    : public ModelBase
{
public:
    ListDisasterRecoveryDrillsRequest();
    virtual ~ListDisasterRecoveryDrillsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListDisasterRecoveryDrillsRequest members

    /// <summary>
    /// 保护组的ID。
    /// </summary>

    std::string getServerGroupId() const;
    bool serverGroupIdIsSet() const;
    void unsetserverGroupId();
    void setServerGroupId(const std::string& value);

    /// <summary>
    /// 容灾演练的名称。支持模糊查询。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 容灾演练的状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 演练虚拟私有云ID。
    /// </summary>

    std::string getDrillVpcId() const;
    bool drillVpcIdIsSet() const;
    void unsetdrillVpcId();
    void setDrillVpcId(const std::string& value);

    /// <summary>
    /// 每次请求返回结果个数限制，取值范围为[0,1000]的正整数，默认值为1000。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 每次请求开始的下标，即偏移量，默认值为0。offset必须为数字，不能为负数。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);


protected:
    std::string serverGroupId_;
    bool serverGroupIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string drillVpcId_;
    bool drillVpcIdIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListDisasterRecoveryDrillsRequest& dereference_from_shared_ptr(std::shared_ptr<ListDisasterRecoveryDrillsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListDisasterRecoveryDrillsRequest_H_
