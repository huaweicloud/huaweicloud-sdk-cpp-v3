
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_QuotaResource_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_QuotaResource_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  QuotaResource
    : public ModelBase
{
public:
    QuotaResource();
    virtual ~QuotaResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QuotaResource members

    /// <summary>
    /// 资源类型
    /// </summary>

    std::string getQuotaKey() const;
    bool quotaKeyIsSet() const;
    void unsetquotaKey();
    void setQuotaKey(const std::string& value);

    /// <summary>
    /// 配额值
    /// </summary>

    int32_t getQuotaLimit() const;
    bool quotaLimitIsSet() const;
    void unsetquotaLimit();
    void setQuotaLimit(int32_t value);

    /// <summary>
    /// 已创建的资源个数
    /// </summary>

    int32_t getUsed() const;
    bool usedIsSet() const;
    void unsetused();
    void setUsed(int32_t value);

    /// <summary>
    /// 单位
    /// </summary>

    std::string getUnit() const;
    bool unitIsSet() const;
    void unsetunit();
    void setUnit(const std::string& value);

    /// <summary>
    /// 局点ID。若资源不涉及此参数，则不返回该参数。
    /// </summary>

    std::string getRegionId() const;
    bool regionIdIsSet() const;
    void unsetregionId();
    void setRegionId(const std::string& value);

    /// <summary>
    /// 可用区ID。若资源不涉及此参数，则不返回该参数。
    /// </summary>

    std::string getAvailabilityZoneId() const;
    bool availabilityZoneIdIsSet() const;
    void unsetavailabilityZoneId();
    void setAvailabilityZoneId(const std::string& value);


protected:
    std::string quotaKey_;
    bool quotaKeyIsSet_;
    int32_t quotaLimit_;
    bool quotaLimitIsSet_;
    int32_t used_;
    bool usedIsSet_;
    std::string unit_;
    bool unitIsSet_;
    std::string regionId_;
    bool regionIdIsSet_;
    std::string availabilityZoneId_;
    bool availabilityZoneIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_QuotaResource_H_
