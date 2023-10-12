
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListAvailableFlavorInfosResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListAvailableFlavorInfosResponse_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbfornosql/v3/model/OptionalFlavorsInfo.h>
#include <string>
#include <huaweicloud/gaussdbfornosql/v3/model/ComputeFlavor.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ListAvailableFlavorInfosResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAvailableFlavorInfosResponse();
    virtual ~ListAvailableFlavorInfosResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAvailableFlavorInfosResponse members

    /// <summary>
    /// 实例id。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 实例名称。
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ComputeFlavor getCurrentFlavor() const;
    bool currentFlavorIsSet() const;
    void unsetcurrentFlavor();
    void setCurrentFlavor(const ComputeFlavor& value);

    /// <summary>
    /// 
    /// </summary>

    OptionalFlavorsInfo getOptionalFlavors() const;
    bool optionalFlavorsIsSet() const;
    void unsetoptionalFlavors();
    void setOptionalFlavors(const OptionalFlavorsInfo& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    ComputeFlavor currentFlavor_;
    bool currentFlavorIsSet_;
    OptionalFlavorsInfo optionalFlavors_;
    bool optionalFlavorsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListAvailableFlavorInfosResponse_H_
