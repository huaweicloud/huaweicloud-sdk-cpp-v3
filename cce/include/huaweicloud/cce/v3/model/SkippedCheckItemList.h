
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_SkippedCheckItemList_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_SkippedCheckItemList_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/ResourceSelector.h>
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
class HUAWEICLOUD_CCE_V3_EXPORT  SkippedCheckItemList
    : public ModelBase
{
public:
    SkippedCheckItemList();
    virtual ~SkippedCheckItemList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SkippedCheckItemList members

    /// <summary>
    /// 跳过的检查项名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ResourceSelector getResourceSelector() const;
    bool resourceSelectorIsSet() const;
    void unsetresourceSelector();
    void setResourceSelector(const ResourceSelector& value);


protected:
    std::string name_;
    bool nameIsSet_;
    ResourceSelector resourceSelector_;
    bool resourceSelectorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_SkippedCheckItemList_H_
