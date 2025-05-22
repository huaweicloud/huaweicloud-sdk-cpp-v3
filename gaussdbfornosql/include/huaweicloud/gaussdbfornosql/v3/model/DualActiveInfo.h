
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
    /// 双活角色。
    /// </summary>

    std::string getRole() const;
    bool roleIsSet() const;
    void unsetrole();
    void setRole(const std::string& value);

    /// <summary>
    /// 双活状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 双活对端实例id。
    /// </summary>

    std::string getDestinationInstanceId() const;
    bool destinationInstanceIdIsSet() const;
    void unsetdestinationInstanceId();
    void setDestinationInstanceId(const std::string& value);

    /// <summary>
    /// 双活对端region。
    /// </summary>

    std::string getDestinationRegion() const;
    bool destinationRegionIsSet() const;
    void unsetdestinationRegion();
    void setDestinationRegion(const std::string& value);


protected:
    std::string role_;
    bool roleIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string destinationInstanceId_;
    bool destinationInstanceIdIsSet_;
    std::string destinationRegion_;
    bool destinationRegionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_DualActiveInfo_H_
