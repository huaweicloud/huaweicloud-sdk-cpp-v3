
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ReleaseStorageVOV5_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ReleaseStorageVOV5_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  ReleaseStorageVOV5
    : public ModelBase
{
public:
    ReleaseStorageVOV5();
    virtual ~ReleaseStorageVOV5();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReleaseStorageVOV5 members

    /// <summary>
    /// **参数解释**: 已使用存储量 ---带单位。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getUsedCapacity() const;
    bool usedCapacityIsSet() const;
    void unsetusedCapacity();
    void setUsedCapacity(const std::string& value);

    /// <summary>
    /// **参数解释**: 租户存储最大量 ---带单位。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getTotalCapacity() const;
    bool totalCapacityIsSet() const;
    void unsettotalCapacity();
    void setTotalCapacity(const std::string& value);

    /// <summary>
    /// **参数解释**: 已使用存储量 ---字节。 **取值范围**: 不涉及。 
    /// </summary>

    int64_t getUsedCapacitySize() const;
    bool usedCapacitySizeIsSet() const;
    void unsetusedCapacitySize();
    void setUsedCapacitySize(int64_t value);

    /// <summary>
    /// **参数解释**: 租户存储最大量 ---字节。 **取值范围**: 不涉及。 
    /// </summary>

    int64_t getTotalCapacitySize() const;
    bool totalCapacitySizeIsSet() const;
    void unsettotalCapacitySize();
    void setTotalCapacitySize(int64_t value);

    /// <summary>
    /// **参数解释**: 包周期套餐类型(0.no_package 1.basic 2.professional 3.platinum)。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getPackageType() const;
    bool packageTypeIsSet() const;
    void unsetpackageType();
    void setPackageType(const std::string& value);

    /// <summary>
    /// **参数解释**: 项目仓库数量。 **取值范围**: 不涉及。 
    /// </summary>

    int64_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int64_t value);


protected:
    std::string usedCapacity_;
    bool usedCapacityIsSet_;
    std::string totalCapacity_;
    bool totalCapacityIsSet_;
    int64_t usedCapacitySize_;
    bool usedCapacitySizeIsSet_;
    int64_t totalCapacitySize_;
    bool totalCapacitySizeIsSet_;
    std::string packageType_;
    bool packageTypeIsSet_;
    int64_t totalCount_;
    bool totalCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ReleaseStorageVOV5_H_
