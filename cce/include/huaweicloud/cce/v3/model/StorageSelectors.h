
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_StorageSelectors_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_StorageSelectors_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/StorageSelectors_matchLabels.h>
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
class HUAWEICLOUD_CCE_V3_EXPORT  StorageSelectors
    : public ModelBase
{
public:
    StorageSelectors();
    virtual ~StorageSelectors();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StorageSelectors members

    /// <summary>
    /// selector的名字，作为storageGroup中selectorNames的索引，因此各个selector间的名字不能重复。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 存储类型，当前仅支持evs（云硬盘）或local（本地盘）；local存储类型不支持磁盘选择，所有本地盘将被组成一个VG，因此也仅允许只有一个local类型的storageSelector。 
    /// </summary>

    std::string getStorageType() const;
    bool storageTypeIsSet() const;
    void unsetstorageType();
    void setStorageType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    StorageSelectors_matchLabels getMatchLabels() const;
    bool matchLabelsIsSet() const;
    void unsetmatchLabels();
    void setMatchLabels(const StorageSelectors_matchLabels& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string storageType_;
    bool storageTypeIsSet_;
    StorageSelectors_matchLabels matchLabels_;
    bool matchLabelsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_StorageSelectors_H_
