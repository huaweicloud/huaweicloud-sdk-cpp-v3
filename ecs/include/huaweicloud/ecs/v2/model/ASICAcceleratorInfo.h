
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ASICAcceleratorInfo_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ASICAcceleratorInfo_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ASICAcceleratorInfo
    : public ModelBase
{
public:
    ASICAcceleratorInfo();
    virtual ~ASICAcceleratorInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ASICAcceleratorInfo members

    /// <summary>
    /// ASIC设备名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// ASIC设备数量。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// ASIC设备的内存，单位为MB。
    /// </summary>

    int32_t getMemoryMb() const;
    bool memoryMbIsSet() const;
    void unsetmemoryMb();
    void setMemoryMb(int32_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    int32_t count_;
    bool countIsSet_;
    int32_t memoryMb_;
    bool memoryMbIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ASICAcceleratorInfo_H_
