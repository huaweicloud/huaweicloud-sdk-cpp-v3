
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerBlockDeviceOption_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerBlockDeviceOption_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_ECS_V2_EXPORT  UpdateServerBlockDeviceOption
    : public ModelBase
{
public:
    UpdateServerBlockDeviceOption();
    virtual ~UpdateServerBlockDeviceOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateServerBlockDeviceOption members

    /// <summary>
    /// 云硬盘随实例释放策略。 -  true：云硬盘随实例释放。  -  false：云硬盘不随实例释放。  &gt; 说明 &gt; &gt; 不支持修改包年/包月计费模式的磁盘。 &gt; 不支持修改共享盘。
    /// </summary>

    bool isDeleteOnTermination() const;
    bool deleteOnTerminationIsSet() const;
    void unsetdeleteOnTermination();
    void setDeleteOnTermination(bool value);


protected:
    bool deleteOnTermination_;
    bool deleteOnTerminationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerBlockDeviceOption_H_
