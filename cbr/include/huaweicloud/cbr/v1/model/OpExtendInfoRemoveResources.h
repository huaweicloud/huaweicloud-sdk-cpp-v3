
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_OpExtendInfoRemoveResources_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_OpExtendInfoRemoveResources_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/Resource.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  OpExtendInfoRemoveResources
    : public ModelBase
{
public:
    OpExtendInfoRemoveResources();
    virtual ~OpExtendInfoRemoveResources();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OpExtendInfoRemoveResources members

    /// <summary>
    /// 删除失败的资源数量
    /// </summary>

    int32_t getFailCount() const;
    bool failCountIsSet() const;
    void unsetfailCount();
    void setFailCount(int32_t value);

    /// <summary>
    /// 删除的备份数量
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<Resource>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<Resource>& value);


protected:
    int32_t failCount_;
    bool failCountIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<Resource> resources_;
    bool resourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_OpExtendInfoRemoveResources_H_
