
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_StorageGroups_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_StorageGroups_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/VirtualSpace.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_CCE_V3_EXPORT  StorageGroups
    : public ModelBase
{
public:
    StorageGroups();
    virtual ~StorageGroups();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StorageGroups members

    /// <summary>
    /// storageGroups的名字，作为虚拟存储组的名字，因此各个group名字不能重复。 &gt; - 当cceManaged&#x3D;ture时，name必须为：vgpass。 &gt; - 当数据盘作为临时存储卷时：name必须为：vg-everest-localvolume-ephemeral。 &gt; - 当数据盘作为持久存储卷时：name必须为：vg-everest-localvolume-persistent。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// k8s及runtime所属存储空间。有且仅有一个group被设置为true，不填默认false。
    /// </summary>

    bool isCceManaged() const;
    bool cceManagedIsSet() const;
    void unsetcceManaged();
    void setCceManaged(bool value);

    /// <summary>
    /// 对应storageSelectors中的name，一个group可选择多个selector；但一个selector只能被一个group选择。
    /// </summary>

    std::vector<std::string>& getSelectorNames();
    bool selectorNamesIsSet() const;
    void unsetselectorNames();
    void setSelectorNames(const std::vector<std::string>& value);

    /// <summary>
    /// group中空间配置的详细管理。
    /// </summary>

    std::vector<VirtualSpace>& getVirtualSpaces();
    bool virtualSpacesIsSet() const;
    void unsetvirtualSpaces();
    void setVirtualSpaces(const std::vector<VirtualSpace>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    bool cceManaged_;
    bool cceManagedIsSet_;
    std::vector<std::string> selectorNames_;
    bool selectorNamesIsSet_;
    std::vector<VirtualSpace> virtualSpaces_;
    bool virtualSpacesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_StorageGroups_H_
