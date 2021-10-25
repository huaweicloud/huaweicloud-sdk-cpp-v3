
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListProtectionGroupsRequest_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListProtectionGroupsRequest_H_

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
class HUAWEICLOUD_SDRS_V1_EXPORT  ListProtectionGroupsRequest
    : public ModelBase
{
public:
    ListProtectionGroupsRequest();
    virtual ~ListProtectionGroupsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListProtectionGroupsRequest members

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

    /// <summary>
    /// 保护组状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 保护组的名称。支持模糊查询。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 查询场景类型。 status_abnormal：表示查询异常状态的保护组列表。 stop_protected：表示查询停止保护的保护组列表。 period_no_dr_drill：表示查询一段时间未做容灾演练的保护组，默认为三个月。 general或空时：该参数不生效。
    /// </summary>

    std::string getQueryType() const;
    bool queryTypeIsSet() const;
    void unsetqueryType();
    void setQueryType(const std::string& value);

    /// <summary>
    /// 保护组的当前生产站点可用区。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string queryType_;
    bool queryTypeIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListProtectionGroupsRequest& dereference_from_shared_ptr(std::shared_ptr<ListProtectionGroupsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListProtectionGroupsRequest_H_
