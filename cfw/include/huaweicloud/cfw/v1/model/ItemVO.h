
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ItemVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ItemVO_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ItemVO
    : public ModelBase
{
public:
    ItemVO();
    virtual ~ItemVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ItemVO members

    /// <summary>
    /// **参数解释**： 聚合项 **取值范围**： 不涉及
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// **参数解释**： 聚合项名称 **取值范围**： 不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 统计值 **取值范围**： 不涉及
    /// </summary>

    int64_t getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(int64_t value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::string name_;
    bool nameIsSet_;
    int64_t value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ItemVO_H_
