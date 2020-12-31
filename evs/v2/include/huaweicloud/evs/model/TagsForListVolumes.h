
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_TagsForListVolumes_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_TagsForListVolumes_H_

#include <huaweicloud/evs/EvsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_EVS_EXPORT  TagsForListVolumes
    : public ModelBase
{
public:
    TagsForListVolumes();
    virtual ~TagsForListVolumes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// TagsForListVolumes members

    /// <summary>
    /// 标签键。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 标签值。  标签列表中最多包含10个value。 标签列表中的标签value值不允许重复。 标签列表如果为空列表，表示匹配任意值。标签列表中多个value之间是“或”的关系，在key已经满足要求的前提下，云硬盘满足请求中的某个value就会匹配出来。
    /// </summary>

    std::vector<std::string>& getValues();
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const std::vector<std::string>& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::vector<std::string> values_;
    bool valuesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_TagsForListVolumes_H_
