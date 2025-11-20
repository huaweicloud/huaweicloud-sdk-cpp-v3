
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AllocateSpResourceInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AllocateSpResourceInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 分配给租户的资源。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  AllocateSpResourceInfo
    : public ModelBase
{
public:
    AllocateSpResourceInfo();
    virtual ~AllocateSpResourceInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AllocateSpResourceInfo members

    /// <summary>
    /// 资源分配id。
    /// </summary>

    std::string getAssignmentRecordId() const;
    bool assignmentRecordIdIsSet() const;
    void unsetassignmentRecordId();
    void setAssignmentRecordId(const std::string& value);

    /// <summary>
    /// 资源规格编码
    /// </summary>

    std::string getResourceSpecCode() const;
    bool resourceSpecCodeIsSet() const;
    void unsetresourceSpecCode();
    void setResourceSpecCode(const std::string& value);

    /// <summary>
    /// 资源计费类型。
    /// </summary>

    std::string getChargingMode() const;
    bool chargingModeIsSet() const;
    void unsetchargingMode();
    void setChargingMode(const std::string& value);

    /// <summary>
    /// 资源数量。
    /// </summary>

    double getResourceNum() const;
    bool resourceNumIsSet() const;
    void unsetresourceNum();
    void setResourceNum(double value);

    /// <summary>
    /// 资源已使用数量。
    /// </summary>

    double getResourceUsedNum() const;
    bool resourceUsedNumIsSet() const;
    void unsetresourceUsedNum();
    void setResourceUsedNum(double value);

    /// <summary>
    /// 资源分配时间（UTC时间）,unix时间,精确到秒。
    /// </summary>

    int64_t getResourceAllocateTime() const;
    bool resourceAllocateTimeIsSet() const;
    void unsetresourceAllocateTime();
    void setResourceAllocateTime(int64_t value);

    /// <summary>
    /// 资源到期时间(UTC时间),unix时间,精确到秒。
    /// </summary>

    int64_t getResourceExpireTime() const;
    bool resourceExpireTimeIsSet() const;
    void unsetresourceExpireTime();
    void setResourceExpireTime(int64_t value);


protected:
    std::string assignmentRecordId_;
    bool assignmentRecordIdIsSet_;
    std::string resourceSpecCode_;
    bool resourceSpecCodeIsSet_;
    std::string chargingMode_;
    bool chargingModeIsSet_;
    double resourceNum_;
    bool resourceNumIsSet_;
    double resourceUsedNum_;
    bool resourceUsedNumIsSet_;
    int64_t resourceAllocateTime_;
    bool resourceAllocateTimeIsSet_;
    int64_t resourceExpireTime_;
    bool resourceExpireTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AllocateSpResourceInfo_H_
