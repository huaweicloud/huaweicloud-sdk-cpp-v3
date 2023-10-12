
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListDedicatedResourceResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListDedicatedResourceResult_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdbfornosql/v3/model/DedicatedResourceCapacity.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 专属资源信息列表。
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ListDedicatedResourceResult
    : public ModelBase
{
public:
    ListDedicatedResourceResult();
    virtual ~ListDedicatedResourceResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDedicatedResourceResult members

    /// <summary>
    /// 专属资源ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 专属资源的名称。
    /// </summary>

    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);

    /// <summary>
    /// 引擎名称。
    /// </summary>

    std::string getEngineName() const;
    bool engineNameIsSet() const;
    void unsetengineName();
    void setEngineName(const std::string& value);

    /// <summary>
    /// 可用区信息。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// 专属资源的计算架构。
    /// </summary>

    std::string getArchitecture() const;
    bool architectureIsSet() const;
    void unsetarchitecture();
    void setArchitecture(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DedicatedResourceCapacity getCapacity() const;
    bool capacityIsSet() const;
    void unsetcapacity();
    void setCapacity(const DedicatedResourceCapacity& value);

    /// <summary>
    /// 专属资源的状态信息。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;
    std::string engineName_;
    bool engineNameIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string architecture_;
    bool architectureIsSet_;
    DedicatedResourceCapacity capacity_;
    bool capacityIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListDedicatedResourceResult_H_
