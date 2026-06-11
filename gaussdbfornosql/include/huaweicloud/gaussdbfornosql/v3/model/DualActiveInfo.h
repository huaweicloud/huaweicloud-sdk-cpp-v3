
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_DualActiveInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_DualActiveInfo_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  DualActiveInfo
    : public ModelBase
{
public:
    DualActiveInfo();
    virtual ~DualActiveInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DualActiveInfo members

    /// <summary>
    /// **参数解释：** 双活角色。 **取值范围：** 不涉及。
    /// </summary>

    std::string getRole() const;
    bool roleIsSet() const;
    void unsetrole();
    void setRole(const std::string& value);

    /// <summary>
    /// **参数解释：** 双活状态。 **取值范围：** - normal：表示双活状态正常。 - abnormal：表示双活状态异常。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 双活对端实例id。 **取值范围：** 不涉及。
    /// </summary>

    std::string getDestinationInstanceId() const;
    bool destinationInstanceIdIsSet() const;
    void unsetdestinationInstanceId();
    void setDestinationInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 双活对端region。 **取值范围：** 不涉及。
    /// </summary>

    std::string getDestinationRegion() const;
    bool destinationRegionIsSet() const;
    void unsetdestinationRegion();
    void setDestinationRegion(const std::string& value);

    /// <summary>
    /// **参数解释：** 双活对端实例名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getDestinationInstanceName() const;
    bool destinationInstanceNameIsSet() const;
    void unsetdestinationInstanceName();
    void setDestinationInstanceName(const std::string& value);

    /// <summary>
    /// **参数解释：** 双活对端实例节点数量。 **取值范围：** 不涉及。
    /// </summary>

    std::string getDestinationInstanceNodeNum() const;
    bool destinationInstanceNodeNumIsSet() const;
    void unsetdestinationInstanceNodeNum();
    void setDestinationInstanceNodeNum(const std::string& value);

    /// <summary>
    /// **参数解释：** 双活对端实例规格。 **取值范围：** 不涉及。
    /// </summary>

    std::string getDestinationInstanceSpecCode() const;
    bool destinationInstanceSpecCodeIsSet() const;
    void unsetdestinationInstanceSpecCode();
    void setDestinationInstanceSpecCode(const std::string& value);


protected:
    std::string role_;
    bool roleIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string destinationInstanceId_;
    bool destinationInstanceIdIsSet_;
    std::string destinationRegion_;
    bool destinationRegionIsSet_;
    std::string destinationInstanceName_;
    bool destinationInstanceNameIsSet_;
    std::string destinationInstanceNodeNum_;
    bool destinationInstanceNodeNumIsSet_;
    std::string destinationInstanceSpecCode_;
    bool destinationInstanceSpecCodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_DualActiveInfo_H_
