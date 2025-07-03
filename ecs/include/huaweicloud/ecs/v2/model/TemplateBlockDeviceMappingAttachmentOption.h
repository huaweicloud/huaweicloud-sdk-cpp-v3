
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateBlockDeviceMappingAttachmentOption_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateBlockDeviceMappingAttachmentOption_H_


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
class HUAWEICLOUD_ECS_V2_EXPORT  TemplateBlockDeviceMappingAttachmentOption
    : public ModelBase
{
public:
    TemplateBlockDeviceMappingAttachmentOption();
    virtual ~TemplateBlockDeviceMappingAttachmentOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TemplateBlockDeviceMappingAttachmentOption members

    /// <summary>
    /// 盘在虚拟机上的挂载顺序，0表示启动盘
    /// </summary>

    int32_t getBootIndex() const;
    bool bootIndexIsSet() const;
    void unsetbootIndex();
    void setBootIndex(int32_t value);

    /// <summary>
    /// 卷是否随实例一同释放 默认系统盘设置为true随实例释放，数据盘设置为false不随实例释放
    /// </summary>

    bool isDeleteOnTermination() const;
    bool deleteOnTerminationIsSet() const;
    void unsetdeleteOnTermination();
    void setDeleteOnTermination(bool value);


protected:
    int32_t bootIndex_;
    bool bootIndexIsSet_;
    bool deleteOnTermination_;
    bool deleteOnTerminationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateBlockDeviceMappingAttachmentOption_H_
