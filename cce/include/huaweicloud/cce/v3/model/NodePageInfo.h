
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePageInfo_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePageInfo_H_


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
class HUAWEICLOUD_CCE_V3_EXPORT  NodePageInfo
    : public ModelBase
{
public:
    NodePageInfo();
    virtual ~NodePageInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodePageInfo members

    /// <summary>
    /// **参数解释**： 当前页返回的所有节点数。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    int32_t getCurrentCount() const;
    bool currentCountIsSet() const;
    void unsetcurrentCount();
    void setCurrentCount(int32_t value);

    /// <summary>
    /// **参数解释**： 当前页最后一条记录，为查询下一页的marker取值，最后一页时无nextMarker字段。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getNextMarker() const;
    bool nextMarkerIsSet() const;
    void unsetnextMarker();
    void setNextMarker(const std::string& value);


protected:
    int32_t currentCount_;
    bool currentCountIsSet_;
    std::string nextMarker_;
    bool nextMarkerIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePageInfo_H_
