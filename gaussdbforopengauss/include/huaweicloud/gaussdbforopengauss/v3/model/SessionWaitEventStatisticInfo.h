
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SessionWaitEventStatisticInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SessionWaitEventStatisticInfo_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  SessionWaitEventStatisticInfo
    : public ModelBase
{
public:
    SessionWaitEventStatisticInfo();
    virtual ~SessionWaitEventStatisticInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SessionWaitEventStatisticInfo members

    /// <summary>
    /// **参数解释**: 组件名称。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getNodeName() const;
    bool nodeNameIsSet() const;
    void unsetnodeName();
    void setNodeName(const std::string& value);

    /// <summary>
    /// **参数解释**: 等待事件名称。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getEventName() const;
    bool eventNameIsSet() const;
    void unseteventName();
    void setEventName(const std::string& value);

    /// <summary>
    /// **参数解释**: 等待事件数量。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(const std::string& value);


protected:
    std::string nodeName_;
    bool nodeNameIsSet_;
    std::string eventName_;
    bool eventNameIsSet_;
    std::string count_;
    bool countIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SessionWaitEventStatisticInfo_H_
