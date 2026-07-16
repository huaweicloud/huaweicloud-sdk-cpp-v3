
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_AssumedAgency_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_AssumedAgency_H_


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
/// 委托元数据信息
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  AssumedAgency
    : public ModelBase
{
public:
    AssumedAgency();
    virtual ~AssumedAgency();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssumedAgency members

    /// <summary>
    /// **参数解释**： 委托的唯一身份标识信息，形如： sts::{account_id}::assumed-agency:{agency_name}/{agency_session_name} **约束限制**： 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getUrn() const;
    bool urnIsSet() const;
    void unseturn();
    void setUrn(const std::string& value);

    /// <summary>
    /// **参数解释：** 委托的id属性，形如： {agency_id}:{agency_session_name} **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string urn_;
    bool urnIsSet_;
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_AssumedAgency_H_
