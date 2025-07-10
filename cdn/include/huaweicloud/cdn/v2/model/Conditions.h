
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_Conditions_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_Conditions_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/Match.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 触发当前规则的条件 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  Conditions
    : public ModelBase
{
public:
    Conditions();
    virtual ~Conditions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Conditions members

    /// <summary>
    /// 
    /// </summary>

    Match getMatch() const;
    bool matchIsSet() const;
    void unsetmatch();
    void setMatch(const Match& value);


protected:
    Match match_;
    bool matchIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_Conditions_H_
