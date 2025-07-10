
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_Match_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_Match_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/Criteria.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 规则匹配条件 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  Match
    : public ModelBase
{
public:
    Match();
    virtual ~Match();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Match members

    /// <summary>
    /// **参数解释：** 逻辑运算符 **约束限制：** 不涉及 **取值范围：** - and: 与关系 - or: 或关系 **默认取值：** 不涉及
    /// </summary>

    std::string getLogic() const;
    bool logicIsSet() const;
    void unsetlogic();
    void setLogic(const std::string& value);

    /// <summary>
    /// **参数解释：** 匹配条件列表 **约束限制：** 不涉及
    /// </summary>

    std::vector<Criteria>& getCriteria();
    bool criteriaIsSet() const;
    void unsetcriteria();
    void setCriteria(const std::vector<Criteria>& value);


protected:
    std::string logic_;
    bool logicIsSet_;
    std::vector<Criteria> criteria_;
    bool criteriaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_Match_H_
